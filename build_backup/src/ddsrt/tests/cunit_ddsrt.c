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

CU_TestDecl(ddsrt_atomics, load_store);
CU_TestDecl(ddsrt_atomics, compare_and_swap);
CU_TestDecl(ddsrt_atomics, increment);
CU_TestDecl(ddsrt_atomics, decrement);
CU_TestDecl(ddsrt_atomics, add);
CU_TestDecl(ddsrt_atomics, subtract);
CU_TestDecl(ddsrt_atomics, and);
CU_TestDecl(ddsrt_atomics, or);
CU_TestDecl(ddsrt_environ, setenv);
CU_TestDecl(ddsrt_environ, getenv);
CU_TestDecl(ddsrt_environ, bad_name);
CU_TestDecl(ddsrt_environ, expand);
CU_TestDecl(ddsrt_environ, expand_sh);
CU_InitDecl(ddsrt_heap);
CU_CleanDecl(ddsrt_heap);
CU_TestDecl(ddsrt_heap, malloc);
CU_TestDecl(ddsrt_heap, calloc);
CU_TestDecl(ddsrt_heap, realloc);
CU_TestDecl(ddsrt_heap, malloc_s);
CU_TestDecl(ddsrt_heap, calloc_s);
CU_TestDecl(ddsrt_heap, ddsrt_realloc_s);
CU_InitDecl(ddsrt_getifaddrs);
CU_CleanDecl(ddsrt_getifaddrs);
CU_TestDecl(ddsrt_getifaddrs, ipv4);
CU_TestDecl(ddsrt_getifaddrs, null_filter);
CU_TestDecl(ddsrt_getifaddrs, empty_filter);
CU_TestDecl(ddsrt_getifaddrs, ipv6);
CU_TestDecl(ddsrt_getifaddrs, ipv4_n_ipv6);
CU_InitDecl(ddsrt_sync);
CU_CleanDecl(ddsrt_sync);
CU_TestDecl(ddsrt_sync, mutex_lock_conc);
CU_TestDecl(ddsrt_sync, mutex_trylock);
CU_TestDecl(ddsrt_sync, mutex_trylock_conc);
CU_TestDecl(ddsrt_sync, once_conc);
CU_TestDecl(ddsrt_sync, cond_waitfor);
CU_TestDecl(ddsrt_sync, cond_waituntil);
CU_TestDecl(ddsrt_sync, rwlock_trylock_conc);
CU_InitDecl(ddsrt_strtoll);
CU_TestDecl(ddsrt_strtoll, strtoll);
CU_TestDecl(ddsrt_strtoll, strtoull);
CU_TestDecl(ddsrt_strtoll, atoll);
CU_TestDecl(ddsrt_strtoll, atoull);
CU_TestDecl(ddsrt_strtoll, lltostr);
CU_TestDecl(ddsrt_strtoll, ulltostr);
CU_InitDecl(ddsrt_thread);
CU_CleanDecl(ddsrt_thread);
CU_TestDecl(ddsrt_thread, thread_id);
CU_TestDecl(ddsrt_thread, stacked_join);
CU_TestDecl(ddsrt_thread, attribute);
CU_TestDecl(ddsrt_thread, create_and_join);
CU_InitDecl(ddsrt_thread_cleanup);
CU_CleanDecl(ddsrt_thread_cleanup);
CU_TestDecl(ddsrt_thread_cleanup, push_one);
CU_TestDecl(ddsrt_thread_cleanup, push_two);
CU_TestDecl(ddsrt_thread_cleanup, push_two_pop_one_no_exec);
CU_TestDecl(ddsrt_thread_cleanup, push_two_pop_one_exec);
CU_TestDecl(ddsrt_thread_cleanup, push_two_pop_two_no_exec);
CU_TestDecl(ddsrt_thread_cleanup, push_two_pop_two_exec_one);
CU_TestDecl(ddsrt_thread_cleanup, push_two_pop_two_exec_both);
CU_TestDecl(ddsrt_thread_cleanup, no_interference);
CU_TestDecl(ddsrt_strcasecmp, basic);
CU_TestDecl(ddsrt_strncasecmp, basic);
CU_TestDecl(ddsrt_strncasecmp, empty);
CU_TestDecl(ddsrt_strncasecmp, length);
CU_TestDecl(ddsrt_str_replace, basic);
CU_TestDecl(ddsrt_strndup, exact_length);
CU_TestDecl(ddsrt_strndup, too_long);
CU_TestDecl(ddsrt_strndup, too_short);
CU_TestDecl(dds_log, only_log_file);
CU_TestDecl(dds_log, same_file);
CU_TestDecl(dds_log, same_sink_function);
CU_TestDecl(dds_log, exact_same_sink);
CU_TestDecl(dds_log, no_sink);
CU_TestDecl(dds_log, newline_terminates);
CU_TestDecl(dds_log, disabled_categories_discarded);
CU_TestDecl(dds_log, synchronous_sink_changes);
CU_TestDecl(dds_log, fatal_aborts);
CU_TestDecl(ddsrt_hopscotch, concurrent);
CU_TestDecl(ddsrt_hopscotch, random);
CU_TestDecl(ddsrt_random, mt19937);
CU_TestDecl(ddsrt_random, makeseed);
CU_TestDecl(ddsrt_random, default_random);
CU_TestDecl(ddsrt_retcode, unknown);
CU_TestDecl(ddsrt_retcode, spotchecks);
CU_TestDecl(ddsrt_strlcpy, dest_size);
CU_TestDecl(ddsrt_strlcat, dest_size);
CU_TestDecl(ddsrt_sockaddrfromstr, bad_family);
CU_TestDecl(ddsrt_sockaddrtostr, bad_sockaddr);
CU_TestDecl(ddsrt_sockaddrtostr, no_space);
CU_TestDecl(ddsrt_sockaddrtostr, ipv4);
CU_TestDecl(ddsrt_sockaddrtostr, ipv6);
CU_TestDecl(ddsrt_sockets, gethostname);
CU_TestDecl(ddsrt_sockaddrfromstr, ipv4);
CU_TestDecl(ddsrt_sockaddrfromstr, ipv6);
CU_TestDecl(ddsrt_gethostbyname, ipv4);
CU_TestDecl(ddsrt_gethostbyname, ipv6);
CU_InitDecl(ddsrt_select);
CU_CleanDecl(ddsrt_select);
CU_TestDecl(ddsrt_select, duration_to_timeval);
CU_TestDecl(ddsrt_select, timeout);
CU_TestDecl(ddsrt_select, send_recv);
CU_TestDecl(ddsrt_select, sendmsg_recvmsg);

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

ADD_SUITE(ddsrt_atomics, NULL, NULL);
ADD_TEST(ddsrt_atomics, load_store, true);
ADD_TEST(ddsrt_atomics, compare_and_swap, true);
ADD_TEST(ddsrt_atomics, increment, true);
ADD_TEST(ddsrt_atomics, decrement, true);
ADD_TEST(ddsrt_atomics, add, true);
ADD_TEST(ddsrt_atomics, subtract, true);
ADD_TEST(ddsrt_atomics, and, true);
ADD_TEST(ddsrt_atomics, or, true);
ADD_SUITE(ddsrt_environ, NULL, NULL);
ADD_TEST(ddsrt_environ, setenv, true);
ADD_TEST(ddsrt_environ, getenv, true);
ADD_TEST(ddsrt_environ, bad_name, true);
ADD_TEST(ddsrt_environ, expand, true);
ADD_TEST(ddsrt_environ, expand_sh, true);
ADD_SUITE(ddsrt_heap, CU_InitName(ddsrt_heap), CU_CleanName(ddsrt_heap));
ADD_TEST(ddsrt_heap, malloc, true);
ADD_TEST(ddsrt_heap, calloc, true);
ADD_TEST(ddsrt_heap, realloc, true);
ADD_TEST(ddsrt_heap, malloc_s, true);
ADD_TEST(ddsrt_heap, calloc_s, true);
ADD_TEST(ddsrt_heap, ddsrt_realloc_s, true);
ADD_SUITE(ddsrt_getifaddrs, CU_InitName(ddsrt_getifaddrs), CU_CleanName(ddsrt_getifaddrs));
ADD_TEST(ddsrt_getifaddrs, ipv4, true);
ADD_TEST(ddsrt_getifaddrs, null_filter, true);
ADD_TEST(ddsrt_getifaddrs, empty_filter, true);
ADD_TEST(ddsrt_getifaddrs, ipv6, true);
ADD_TEST(ddsrt_getifaddrs, ipv4_n_ipv6, true);
ADD_SUITE(ddsrt_sync, CU_InitName(ddsrt_sync), CU_CleanName(ddsrt_sync));
ADD_TEST(ddsrt_sync, mutex_lock_conc, true);
ADD_TEST(ddsrt_sync, mutex_trylock, true);
ADD_TEST(ddsrt_sync, mutex_trylock_conc, true);
ADD_TEST(ddsrt_sync, once_conc, true);
ADD_TEST(ddsrt_sync, cond_waitfor, true);
ADD_TEST(ddsrt_sync, cond_waituntil, true);
ADD_TEST(ddsrt_sync, rwlock_trylock_conc, true);
ADD_SUITE(ddsrt_strtoll, CU_InitName(ddsrt_strtoll), NULL);
ADD_TEST(ddsrt_strtoll, strtoll, true);
ADD_TEST(ddsrt_strtoll, strtoull, true);
ADD_TEST(ddsrt_strtoll, atoll, true);
ADD_TEST(ddsrt_strtoll, atoull, true);
ADD_TEST(ddsrt_strtoll, lltostr, true);
ADD_TEST(ddsrt_strtoll, ulltostr, true);
ADD_SUITE(ddsrt_thread, CU_InitName(ddsrt_thread), CU_CleanName(ddsrt_thread));
ADD_TEST(ddsrt_thread, thread_id, true);
ADD_TEST(ddsrt_thread, stacked_join, true);
ADD_TEST(ddsrt_thread, attribute, true);
ADD_TEST(ddsrt_thread, create_and_join, true);
ADD_SUITE(ddsrt_thread_cleanup, CU_InitName(ddsrt_thread_cleanup), CU_CleanName(ddsrt_thread_cleanup));
ADD_TEST(ddsrt_thread_cleanup, push_one, true);
ADD_TEST(ddsrt_thread_cleanup, push_two, true);
ADD_TEST(ddsrt_thread_cleanup, push_two_pop_one_no_exec, true);
ADD_TEST(ddsrt_thread_cleanup, push_two_pop_one_exec, true);
ADD_TEST(ddsrt_thread_cleanup, push_two_pop_two_no_exec, true);
ADD_TEST(ddsrt_thread_cleanup, push_two_pop_two_exec_one, true);
ADD_TEST(ddsrt_thread_cleanup, push_two_pop_two_exec_both, true);
ADD_TEST(ddsrt_thread_cleanup, no_interference, true);
ADD_SUITE(ddsrt_str_replace, NULL, NULL);
ADD_SUITE(ddsrt_strcasecmp, NULL, NULL);
ADD_SUITE(ddsrt_strncasecmp, NULL, NULL);
ADD_SUITE(ddsrt_strndup, NULL, NULL);
ADD_TEST(ddsrt_strcasecmp, basic, true);
ADD_TEST(ddsrt_strncasecmp, basic, true);
ADD_TEST(ddsrt_strncasecmp, empty, true);
ADD_TEST(ddsrt_strncasecmp, length, true);
ADD_TEST(ddsrt_str_replace, basic, true);
ADD_TEST(ddsrt_strndup, exact_length, true);
ADD_TEST(ddsrt_strndup, too_long, true);
ADD_TEST(ddsrt_strndup, too_short, true);
ADD_SUITE(dds_log, NULL, NULL);
ADD_TEST(dds_log, only_log_file, true);
ADD_TEST(dds_log, same_file, true);
ADD_TEST(dds_log, same_sink_function, true);
ADD_TEST(dds_log, exact_same_sink, true);
ADD_TEST(dds_log, no_sink, true);
ADD_TEST(dds_log, newline_terminates, true);
ADD_TEST(dds_log, disabled_categories_discarded, true);
ADD_TEST(dds_log, synchronous_sink_changes, true);
ADD_TEST(dds_log, fatal_aborts, true);
ADD_SUITE(ddsrt_hopscotch, NULL, NULL);
ADD_TEST(ddsrt_hopscotch, concurrent, true);
ADD_TEST(ddsrt_hopscotch, random, true);
ADD_SUITE(ddsrt_random, NULL, NULL);
ADD_TEST(ddsrt_random, mt19937, true);
ADD_TEST(ddsrt_random, makeseed, true);
ADD_TEST(ddsrt_random, default_random, true);
ADD_SUITE(ddsrt_retcode, NULL, NULL);
ADD_TEST(ddsrt_retcode, unknown, true);
ADD_TEST(ddsrt_retcode, spotchecks, true);
ADD_SUITE(ddsrt_strlcat, NULL, NULL);
ADD_SUITE(ddsrt_strlcpy, NULL, NULL);
ADD_TEST(ddsrt_strlcpy, dest_size, true);
ADD_TEST(ddsrt_strlcat, dest_size, true);
ADD_SUITE(ddsrt_gethostbyname, NULL, NULL);
ADD_SUITE(ddsrt_sockaddrfromstr, NULL, NULL);
ADD_SUITE(ddsrt_sockaddrtostr, NULL, NULL);
ADD_SUITE(ddsrt_sockets, NULL, NULL);
ADD_TEST(ddsrt_sockaddrfromstr, bad_family, true);
ADD_TEST(ddsrt_sockaddrtostr, bad_sockaddr, true);
ADD_TEST(ddsrt_sockaddrtostr, no_space, true);
ADD_TEST(ddsrt_sockaddrtostr, ipv4, true);
ADD_TEST(ddsrt_sockaddrtostr, ipv6, true);
ADD_TEST(ddsrt_sockets, gethostname, true);
ADD_TEST(ddsrt_sockaddrfromstr, ipv4, true);
ADD_TEST(ddsrt_sockaddrfromstr, ipv6, true);
ADD_TEST(ddsrt_gethostbyname, ipv4, true);
ADD_TEST(ddsrt_gethostbyname, ipv6, true);
ADD_SUITE(ddsrt_select, CU_InitName(ddsrt_select), CU_CleanName(ddsrt_select));
ADD_TEST(ddsrt_select, duration_to_timeval, true);
ADD_TEST(ddsrt_select, timeout, true);
ADD_TEST(ddsrt_select, send_recv, true);
ADD_TEST(ddsrt_select, sendmsg_recvmsg, true);

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

