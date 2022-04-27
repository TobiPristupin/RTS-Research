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

CU_InitDecl(idl_file);
CU_CleanDecl(idl_file);
CU_TestDecl(idl_file, untaint);
CU_TestDecl(idl_file, normalize_empty);
CU_TestDecl(idl_file, normalize_revert);
CU_TestDecl(idl_file, normalize_revert_too_many);
CU_TestDecl(idl_file, relative_bad_params);
CU_TestDecl(idl_file, relative);
CU_TestDecl(idl_scanner, blank);
CU_TestDecl(idl_scanner, blank_cseq);
CU_TestDecl(idl_scanner, blank_wsp_cseq_wsp);
CU_TestDecl(idl_scanner, blank_2x_cseq);
CU_TestDecl(idl_scanner, line_comment);
CU_TestDecl(idl_scanner, line_comment_wrp_cseq);
CU_TestDecl(idl_scanner, line_comment_wrp_cseq_ident);
CU_TestDecl(idl_scanner, comment);
CU_TestDecl(idl_scanner, comment_x);
CU_TestDecl(idl_scanner, comment_wrp_cseq);
CU_TestDecl(idl_scanner, comment_wrp_cseq_ident);
CU_TestDecl(idl_scanner, char_literal);
CU_TestDecl(idl_scanner, char_literal_wrp_cseq);
CU_TestDecl(idl_scanner, string_literal);
CU_TestDecl(idl_scanner, string_literal_wrp_seq);
CU_TestDecl(idl_scanner, integer_literal);
CU_TestDecl(idl_scanner, integer_literal_hex_dot);
CU_TestDecl(idl_scanner, floating_pt_literal);
CU_TestDecl(idl_scanner, floating_pt_literal_dot_fraction);
CU_TestDecl(idl_scanner, floating_pt_literal_int_dot_fraction_exp);
CU_TestDecl(idl_scanner, floating_pt_literal_int_dot_fraction);
CU_TestDecl(idl_scanner, ident);
CU_TestDecl(idl_scanner, ident_tr_cseq);
CU_TestDecl(idl_scanner, ident_wrp_cseq);
CU_TestDecl(idl_scanner, scope);
CU_TestDecl(idl_scanner, scope_wrp_cseq);
CU_TestDecl(idl_scanner, scope_l);
CU_TestDecl(idl_scanner, scope_l_wrp_cseq);
CU_TestDecl(idl_scanner, scope_non_l);
CU_TestDecl(idl_scanner, scope_r);
CU_TestDecl(idl_scanner, scope_r_wrp_cseq);
CU_TestDecl(idl_scanner, scope_non_r);
CU_TestDecl(idl_scanner, scope_lr);
CU_TestDecl(idl_scanner, scope_lr_wrp_cseq);
CU_TestDecl(idl_scanner, scope_non_lr);
CU_TestDecl(idl_scanner, scope_non_lr_l);
CU_TestDecl(idl_scanner, scope_non_lr_r);
CU_TestDecl(idl_scanner, hash_line);
CU_TestDecl(idl_scanner, hash_pragma);
CU_TestDecl(idl_hashid, color);
CU_TestDecl(idl_hashid, shapesize);
CU_TestDecl(idl_annotation, optional);
CU_TestDecl(idl_annotation, idl_default);
CU_TestDecl(idl_annotation, default_literal);
CU_TestDecl(idl_annotation, key);
CU_TestDecl(idl_annotation, nested);
CU_TestDecl(idl_annotation, topic);
CU_TestDecl(idl_annotation, default_nested);
CU_TestDecl(idl_annotation, redefinition);
CU_TestDecl(idl_annotation, id);
CU_TestDecl(idl_annotation, hashid);
CU_TestDecl(idl_annotation, autoid_struct);
CU_TestDecl(idl_annotation, autoid_union);
CU_TestDecl(idl_annotation, autoid_inheritance);
CU_TestDecl(idl_annotation, autoid_module);
CU_TestDecl(idl_annotation, extensibility);
CU_TestDecl(idl_annotation, parameter_scope);
CU_TestDecl(idl_annotation, bit_bound);
CU_TestDecl(idl_annotation, position);
CU_TestDecl(idl_annotation, must_understand);
CU_TestDecl(idl_expression, character);
CU_TestDecl(idl_expression, octet);
CU_TestDecl(idl_inheritance, extensibility);
CU_TestDecl(idl_inheritance, members);
CU_TestDecl(idl_inheritance, empty_structs);
CU_TestDecl(idl_parser, embedded_module);
CU_TestDecl(idl_parser, struct_in_struct_same_module);
CU_TestDecl(idl_parser, struct_in_struct_other_module);
CU_TestDecl(idl_parser, base_types);
CU_TestDecl(idl_parser, extended_base_types);
CU_TestDecl(idl_typedef, bogus_type);
CU_TestDecl(idl_typedef, simple_declarator);
CU_TestDecl(idl_typedef, simple_declarators);
CU_TestDecl(idl_typedef, sequence);
CU_TestDecl(idl_typedef, typedef_of_typedef_sequence);
CU_TestDecl(idl_typedef, forward_declaration);
CU_TestDecl(idl_typedef, backwards_forward_declaration);
CU_TestDecl(idl_typedef, constructed_type);
CU_TestDecl(idl_union, no_case);
CU_TestDecl(idl_union, name_clash);
CU_TestDecl(idl_union, single_case);
CU_TestDecl(idl_union, single_default_case);
CU_TestDecl(idl_union, enumerator_switch_type);
CU_TestDecl(idl_union, typedef_switch_types);
CU_TestDecl(idl_union, default_discriminator_bool);
CU_TestDecl(idl_union, default_discriminator_signed_int);
CU_TestDecl(idl_union, default_discriminator_unsigned_int);
CU_TestDecl(idl_union, default_discriminator_enum);
CU_TestDecl(idl_union, two_unions_one_enum);
CU_TestDecl(idl_union, bad_switch_types);
CU_TestDecl(idl_enum, no_enumerator);
CU_TestDecl(idl_enum, duplicate_enumerators);
CU_TestDecl(idl_enum, enumerator_matches_enum);
CU_TestDecl(idl_enum, single_enumerator);
CU_TestDecl(idl_enum, multiple_enumerators);
CU_TestDecl(idl_pragma, keylist_bad_use);
CU_TestDecl(idl_pragma, keylist);
CU_TestDecl(idl_pragma, keylist_nested_key);
CU_TestDecl(idl_pragma, keylist_conflicting);
CU_TestDecl(idl_pragma, keylist_scoped_name);
CU_TestDecl(idl_pragma, keylist_outer_scope);
CU_TestDecl(idl_pragma, unknown);
CU_TestDecl(idl_module, reopen);
CU_TestDecl(idl_forward, struct_union_maybe_enum);
CU_TestDecl(idl_forward, aliases);
CU_TestDecl(idl_forward, backwards_aliases);

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

ADD_SUITE(idl_file, CU_InitName(idl_file), CU_CleanName(idl_file));
ADD_TEST(idl_file, untaint, true);
ADD_TEST(idl_file, normalize_empty, true);
ADD_TEST(idl_file, normalize_revert, true);
ADD_TEST(idl_file, normalize_revert_too_many, true);
ADD_TEST(idl_file, relative_bad_params, true);
ADD_TEST(idl_file, relative, true);
ADD_SUITE(idl_scanner, NULL, NULL);
ADD_TEST(idl_scanner, blank, true);
ADD_TEST(idl_scanner, blank_cseq, true);
ADD_TEST(idl_scanner, blank_wsp_cseq_wsp, true);
ADD_TEST(idl_scanner, blank_2x_cseq, true);
ADD_TEST(idl_scanner, line_comment, true);
ADD_TEST(idl_scanner, line_comment_wrp_cseq, true);
ADD_TEST(idl_scanner, line_comment_wrp_cseq_ident, true);
ADD_TEST(idl_scanner, comment, true);
ADD_TEST(idl_scanner, comment_x, true);
ADD_TEST(idl_scanner, comment_wrp_cseq, true);
ADD_TEST(idl_scanner, comment_wrp_cseq_ident, true);
ADD_TEST(idl_scanner, char_literal, true);
ADD_TEST(idl_scanner, char_literal_wrp_cseq, true);
ADD_TEST(idl_scanner, string_literal, true);
ADD_TEST(idl_scanner, string_literal_wrp_seq, true);
ADD_TEST(idl_scanner, integer_literal, true);
ADD_TEST(idl_scanner, integer_literal_hex_dot, true);
ADD_TEST(idl_scanner, floating_pt_literal, true);
ADD_TEST(idl_scanner, floating_pt_literal_dot_fraction, true);
ADD_TEST(idl_scanner, floating_pt_literal_int_dot_fraction_exp, true);
ADD_TEST(idl_scanner, floating_pt_literal_int_dot_fraction, true);
ADD_TEST(idl_scanner, ident, true);
ADD_TEST(idl_scanner, ident_tr_cseq, true);
ADD_TEST(idl_scanner, ident_wrp_cseq, true);
ADD_TEST(idl_scanner, scope, true);
ADD_TEST(idl_scanner, scope_wrp_cseq, true);
ADD_TEST(idl_scanner, scope_l, true);
ADD_TEST(idl_scanner, scope_l_wrp_cseq, true);
ADD_TEST(idl_scanner, scope_non_l, true);
ADD_TEST(idl_scanner, scope_r, true);
ADD_TEST(idl_scanner, scope_r_wrp_cseq, true);
ADD_TEST(idl_scanner, scope_non_r, true);
ADD_TEST(idl_scanner, scope_lr, true);
ADD_TEST(idl_scanner, scope_lr_wrp_cseq, true);
ADD_TEST(idl_scanner, scope_non_lr, true);
ADD_TEST(idl_scanner, scope_non_lr_l, true);
ADD_TEST(idl_scanner, scope_non_lr_r, true);
ADD_TEST(idl_scanner, hash_line, true);
ADD_TEST(idl_scanner, hash_pragma, true);
ADD_SUITE(idl_annotation, NULL, NULL);
ADD_SUITE(idl_hashid, NULL, NULL);
ADD_TEST(idl_hashid, color, true);
ADD_TEST(idl_hashid, shapesize, true);
ADD_TEST(idl_annotation, optional, true);
ADD_TEST(idl_annotation, idl_default, true);
ADD_TEST(idl_annotation, default_literal, true);
ADD_TEST(idl_annotation, key, true);
ADD_TEST(idl_annotation, nested, true);
ADD_TEST(idl_annotation, topic, true);
ADD_TEST(idl_annotation, default_nested, true);
ADD_TEST(idl_annotation, redefinition, true);
ADD_TEST(idl_annotation, id, true);
ADD_TEST(idl_annotation, hashid, true);
ADD_TEST(idl_annotation, autoid_struct, true);
ADD_TEST(idl_annotation, autoid_union, true);
ADD_TEST(idl_annotation, autoid_inheritance, true);
ADD_TEST(idl_annotation, autoid_module, true);
ADD_TEST(idl_annotation, extensibility, true);
ADD_TEST(idl_annotation, parameter_scope, true);
ADD_TEST(idl_annotation, bit_bound, true);
ADD_TEST(idl_annotation, position, true);
ADD_TEST(idl_annotation, must_understand, true);
ADD_SUITE(idl_expression, NULL, NULL);
ADD_TEST(idl_expression, character, true);
ADD_TEST(idl_expression, octet, true);
ADD_SUITE(idl_inheritance, NULL, NULL);
ADD_TEST(idl_inheritance, extensibility, true);
ADD_TEST(idl_inheritance, members, true);
ADD_TEST(idl_inheritance, empty_structs, true);
ADD_SUITE(idl_parser, NULL, NULL);
ADD_TEST(idl_parser, embedded_module, true);
ADD_TEST(idl_parser, struct_in_struct_same_module, true);
ADD_TEST(idl_parser, struct_in_struct_other_module, true);
ADD_TEST(idl_parser, base_types, true);
ADD_TEST(idl_parser, extended_base_types, true);
ADD_SUITE(idl_typedef, NULL, NULL);
ADD_TEST(idl_typedef, bogus_type, true);
ADD_TEST(idl_typedef, simple_declarator, true);
ADD_TEST(idl_typedef, simple_declarators, true);
ADD_TEST(idl_typedef, sequence, true);
ADD_TEST(idl_typedef, typedef_of_typedef_sequence, true);
ADD_TEST(idl_typedef, forward_declaration, true);
ADD_TEST(idl_typedef, backwards_forward_declaration, true);
ADD_TEST(idl_typedef, constructed_type, true);
ADD_SUITE(idl_union, NULL, NULL);
ADD_TEST(idl_union, no_case, true);
ADD_TEST(idl_union, name_clash, true);
ADD_TEST(idl_union, single_case, true);
ADD_TEST(idl_union, single_default_case, true);
ADD_TEST(idl_union, enumerator_switch_type, true);
ADD_TEST(idl_union, typedef_switch_types, true);
ADD_TEST(idl_union, default_discriminator_bool, true);
ADD_TEST(idl_union, default_discriminator_signed_int, true);
ADD_TEST(idl_union, default_discriminator_unsigned_int, true);
ADD_TEST(idl_union, default_discriminator_enum, true);
ADD_TEST(idl_union, two_unions_one_enum, true);
ADD_TEST(idl_union, bad_switch_types, true);
ADD_SUITE(idl_enum, NULL, NULL);
ADD_TEST(idl_enum, no_enumerator, true);
ADD_TEST(idl_enum, duplicate_enumerators, true);
ADD_TEST(idl_enum, enumerator_matches_enum, true);
ADD_TEST(idl_enum, single_enumerator, true);
ADD_TEST(idl_enum, multiple_enumerators, true);
ADD_SUITE(idl_pragma, NULL, NULL);
ADD_TEST(idl_pragma, keylist_bad_use, true);
ADD_TEST(idl_pragma, keylist, true);
ADD_TEST(idl_pragma, keylist_nested_key, true);
ADD_TEST(idl_pragma, keylist_conflicting, true);
ADD_TEST(idl_pragma, keylist_scoped_name, true);
ADD_TEST(idl_pragma, keylist_outer_scope, true);
ADD_TEST(idl_pragma, unknown, true);
ADD_SUITE(idl_module, NULL, NULL);
ADD_TEST(idl_module, reopen, true);
ADD_SUITE(idl_forward, NULL, NULL);
ADD_TEST(idl_forward, struct_union_maybe_enum, true);
ADD_TEST(idl_forward, aliases, true);
ADD_TEST(idl_forward, backwards_aliases, true);

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

