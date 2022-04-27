/*
 * Copyright(c) 2006 to 2018 ADLINK Technology Limited and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EX_USAGE (64)
#define EX_SOFTWARE (70)

#include <CUnit/Basic.h>
#include <CUnit/Automated.h>
#include "CUnit/Test.h"

static struct {
    bool print_help;
    bool automated;
    bool junit;
    const char *results;
    CU_BasicRunMode mode;
    CU_ErrorAction error_action;
    const char *suite;
    const char *test;
} opts = {
    false,
    false,
    false,
    NULL,
    CU_BRM_NORMAL,
    CUEA_IGNORE,
    "*",
    "*"
};

static int patmatch(const char *pat, const char *str)
{
    while (*pat) {
        if (*pat == '?') {
            /* any character will do */
            if (*str++ == 0) {
                return 0;
            }
            pat++;
        } else if (*pat == '*') {
            /* collapse a sequence of wildcards, requiring as many
               characters in str as there are ?s in the sequence */
            while (*pat == '*' || *pat == '?') {
                if (*pat == '?' && *str++ == 0) {
                    return 0;
                }
                pat++;
            }
            /* try matching on all positions where str matches pat */
            while (*str) {
                if (*str == *pat && patmatch(pat+1, str+1)) {
                    return 1;
                }
                str++;
            }
            return *pat == 0;
        } else {
            /* only an exact match */
            if (*str++ != *pat++) {
                return 0;
            }
        }
    }

    return *str == 0;
}

static void usage(const char *name)
{
    fprintf(stderr, "Usage: %s OPTIONS\n", name);
    fprintf(stderr, "Try '%s -h' for more information\n", name);
}

static void help(const char *name)
{
    printf("Usage: %s [OPTIONS]\n", name);
    printf("\n");
    printf("Possible options:\n");
    printf("  -a           run in automated mode\n");
    printf("  -f           fail fast\n");
    printf("  -h           display this help and exit\n");
    printf("  -j           junit format results \n");
    printf("  -r FILENAME  results file for automated run\n");
    printf("  -s PATTERN   run only tests in suites matching pattern\n");
    printf("  -t PATTERN   run only test matching pattern\n");
    printf("\n");
    printf("Exit codes:\n");
    printf("  %-2d  Successful termination\n", EXIT_SUCCESS);
    printf("  %-2d  One or more failing test cases\n", EXIT_FAILURE);
    printf("  %-2d  Command line usage error\n", EX_USAGE);
    printf("  %-2d  Internal software error\n", EX_SOFTWARE);
}

static int parse_options(int argc, char *argv[])
{
    int err = 0;

    for (int i = 1; err == 0 && i < argc; i++) {
        switch ((argv[i][0] == '-') ? argv[i][1] : 0) {
            case 'a':
                opts.automated = true;
                break;
            case 'f':
                opts.error_action = CUEA_FAIL;
                break;
            case 'h':
                opts.print_help = true;
                break;
            case 'j':
                opts.junit = true;
                break;
            case 'r':
                if((i+1) < argc){
                    opts.results = argv[++i];
                    break;
                }
                /* FALLS THROUGH */
            case 's':
                if ((i+1) < argc) {
                    opts.suite = argv[++i];
                    break;
                }
                /* FALLS THROUGH */
            case 't':
                if ((i+1) < argc) {
                    opts.test = argv[++i];
                    break;
                }
                /* FALLS THROUGH */
            default:
                err = 1;
                break;
        }
    }

    return err;
}

static void
add_suite(
    const char *suite,
    CU_InitializeFunc pInitFunc,
    CU_CleanupFunc pCleanFunc)
{
    CU_pSuite pSuite;

    pSuite = CU_get_suite(suite);
    if (pSuite == NULL) {
        pSuite = CU_add_suite(suite, pInitFunc, pCleanFunc);
        CU_set_suite_active(pSuite, patmatch(opts.suite, suite));
    }
}

#define ADD_SUITE(suite, init, clean) \
  add_suite(#suite, init, clean)

static void
add_test(
    const char *suite,
    const char *test,
    CU_TestFunc pTestFunc,
    bool enable)
{
    CU_pSuite pSuite;
    CU_pTest pTest;

    pSuite = CU_get_suite(suite);
    pTest = CU_add_test(pSuite, test, pTestFunc);
    CU_set_test_active(pTest, enable && patmatch(opts.test, test));
}

#define ADD_TEST(suite, test, enable) \
  add_test(#suite, #test, CU_TestProxyName(suite, test), enable)

/* CMake will expand the macro below to declare generated functions. */

CU_TestDecl(idlc_descriptor, keys_nested);
CU_TestDecl(idlc_descriptor, default_extensibility);
CU_TestDecl(idlc_descriptor, key_size);
CU_TestDecl(idlc_descriptor, key_valid_types);
CU_TestDecl(idlc_descriptor, keys_inheritance);
CU_TestDecl(idlc_descriptor, no_optimize);

int main(int argc, char *argv[])
{
    int ret = EXIT_SUCCESS;

    if (parse_options(argc, argv) != 0) {
        usage(argv[0]);
        return EX_USAGE;
    } else if (opts.print_help) {
        help(argv[0]);
        return ret;
    } else if (CU_initialize_registry() != CUE_SUCCESS) {
        fprintf(stderr, "CU_initialize_registry: %s\n", CU_get_error_msg());
        return EX_SOFTWARE;
    }

/* CMake will expand the macro below to register all suites and tests. */

ADD_SUITE(idlc_descriptor, NULL, NULL);
ADD_TEST(idlc_descriptor, keys_nested, true);
ADD_TEST(idlc_descriptor, default_extensibility, true);
ADD_TEST(idlc_descriptor, key_size, true);
ADD_TEST(idlc_descriptor, key_valid_types, true);
ADD_TEST(idlc_descriptor, keys_inheritance, true);
ADD_TEST(idlc_descriptor, no_optimize, true);

    CU_set_error_action(opts.error_action);

    if (opts.automated) {
        if (opts.results != NULL) {
            CU_set_output_filename(opts.results);
        }

#if defined(HAVE_ENABLE_JUNIT_XML)
        if (opts.junit) {
            CU_automated_enable_junit_xml(CU_TRUE);
        } else
#endif
        {
            CU_list_tests_to_file();
        }
        CU_automated_run_tests();
    } else {
        CU_set_fail_on_inactive(0);
        CU_basic_set_mode(opts.mode);
        CU_basic_run_tests();
    }

    if (CU_get_error() != CUE_SUCCESS) {
        ret = EX_SOFTWARE;
    } else if (CU_get_number_of_failures() != 0) {
        ret = EXIT_FAILURE;
    }

    CU_cleanup_registry();

    return ret;
}

