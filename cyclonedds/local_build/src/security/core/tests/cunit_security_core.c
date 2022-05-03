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

CU_TestDecl(ddssec_fsm, create);
CU_TestDecl(ddssec_fsm, multiple);
CU_TestDecl(ddssec_fsm, timeout);
CU_TestDecl(ddssec_fsm, double_timeout);
CU_TestDecl(ddssec_fsm, parallel_timeout);
CU_TestDecl(ddssec_fsm, delete_with_timeout);
CU_TestDecl(ddssec_timed_cb, simple_test);
CU_TestDecl(ddssec_timed_cb, simple_order);
CU_TestDecl(ddssec_timed_cb, test_enabled_and_disabled);
CU_TestDecl(ddssec_timed_cb, simple_test_with_future);
CU_TestDecl(ddssec_timed_cb, test_multiple_dispatchers);
CU_TestDecl(ddssec_timed_cb, test_create_dispatcher);
CU_TestDecl(ddssec_timed_cb, test_remove_timer);
CU_TestDecl(ddssec_security_utils, parse_xml_date);
CU_TestDecl(ddssec_authentication, unauthenticated_pp);
CU_TestDecl(ddssec_authentication, id_ca_certs);
CU_TestDecl(ddssec_authentication, trusted_ca_dir);
CU_TestDecl(ddssec_authentication, expired_cert);
CU_TestDecl(ddssec_authentication, crl);
CU_TestDecl(ddssec_access_control, permissions_expiry_multiple);
CU_TestDecl(ddssec_access_control, encoding_mismatch_rtps);
CU_TestDecl(ddssec_access_control, encoding_mismatch_discovery);
CU_TestDecl(ddssec_access_control, encoding_mismatch_liveliness);
CU_TestDecl(ddssec_access_control, encoding_mismatch_metadata);
CU_TestDecl(ddssec_access_control, encoding_mismatch_payload);
CU_TestDecl(ddssec_access_control, readwrite_protection);
CU_TestDecl(ddssec_access_control, denied_topic);
CU_TestDecl(ddssec_access_control, partition);
CU_TestDecl(ddssec_access_control, config_parameters_file);
CU_TestDecl(ddssec_access_control, permissions_expiry);
CU_TestDecl(ddssec_access_control, hooks);
CU_TestDecl(ddssec_access_control, join_access_control);
CU_TestDecl(ddssec_access_control, discovery_liveliness_protection);
CU_TestDecl(ddssec_builtintopic, participant_iid);
CU_TestDecl(ddssec_config, empty);
CU_TestDecl(ddssec_config, non);
CU_TestDecl(ddssec_config, missing);
CU_TestDecl(ddssec_config, all);
CU_TestDecl(ddssec_config, security);
CU_TestDecl(ddssec_config, deprecated);
CU_TestDecl(ddssec_config, qos);
CU_TestDecl(ddssec_config, qos_props);
CU_TestDecl(ddssec_config, config_qos);
CU_TestDecl(ddssec_config, other_prop);
CU_TestDecl(ddssec_config, qos_invalid);
CU_TestDecl(ddssec_config, qos_invalid_proprietary);
CU_TestDecl(ddssec_config, config_qos_missing_crl);
CU_TestDecl(ddssec_config, config_qos_override_crl);
CU_TestDecl(ddssec_crypto, inject_plain_data);
CU_TestDecl(ddssec_handshake, happy_day);
CU_TestDecl(ddssec_handshake, check_tokens);
CU_TestDecl(ddssec_security_plugin_loading, all_ok);
CU_TestDecl(ddssec_security_plugin_loading, missing_finalize);
CU_TestDecl(ddssec_security_plugin_loading, authentication_missing_function);
CU_TestDecl(ddssec_security_plugin_loading, access_control_missing_function);
CU_TestDecl(ddssec_security_plugin_loading, cryptography_missing_function);
CU_TestDecl(ddssec_security_plugin_loading, no_library_in_path);
CU_TestDecl(ddssec_security_plugin_loading, init_error);
CU_TestDecl(ddssec_security_plugin_loading, all_ok_with_props);
CU_TestDecl(ddssec_security_plugin_loading, missing_plugin_property_with_props);
CU_TestDecl(ddssec_security_plugin_loading, empty_plugin_property_with_props);
CU_TestDecl(ddssec_security_plugin_loading, missing_security_property_with_props);
CU_TestDecl(ddssec_security_plugin_loading, multiple_domains_different_config);
CU_TestDecl(ddssec_secure_communication, protection_kinds);
CU_TestDecl(ddssec_secure_communication, discovery_liveliness_protection);
CU_TestDecl(ddssec_secure_communication, check_encrypted_secret);
CU_TestDecl(ddssec_secure_communication, multiple_readers);
CU_TestDecl(ddssec_secure_communication, multiple_readers_writers);

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

ADD_SUITE(ddssec_fsm, NULL, NULL);
ADD_TEST(ddssec_fsm, create, true);
ADD_TEST(ddssec_fsm, multiple, true);
ADD_TEST(ddssec_fsm, timeout, true);
ADD_TEST(ddssec_fsm, double_timeout, true);
ADD_TEST(ddssec_fsm, parallel_timeout, true);
ADD_TEST(ddssec_fsm, delete_with_timeout, true);
ADD_SUITE(ddssec_timed_cb, NULL, NULL);
ADD_TEST(ddssec_timed_cb, simple_test, true);
ADD_TEST(ddssec_timed_cb, simple_order, true);
ADD_TEST(ddssec_timed_cb, test_enabled_and_disabled, true);
ADD_TEST(ddssec_timed_cb, simple_test_with_future, true);
ADD_TEST(ddssec_timed_cb, test_multiple_dispatchers, true);
ADD_TEST(ddssec_timed_cb, test_create_dispatcher, true);
ADD_TEST(ddssec_timed_cb, test_remove_timer, true);
ADD_SUITE(ddssec_security_utils, NULL, NULL);
ADD_TEST(ddssec_security_utils, parse_xml_date, true);
ADD_SUITE(ddssec_authentication, NULL, NULL);
ADD_TEST(ddssec_authentication, unauthenticated_pp, true);
ADD_TEST(ddssec_authentication, id_ca_certs, true);
ADD_TEST(ddssec_authentication, trusted_ca_dir, true);
ADD_TEST(ddssec_authentication, expired_cert, true);
ADD_TEST(ddssec_authentication, crl, true);
ADD_SUITE(ddssec_access_control, NULL, NULL);
ADD_TEST(ddssec_access_control, permissions_expiry_multiple, true);
ADD_TEST(ddssec_access_control, encoding_mismatch_rtps, true);
ADD_TEST(ddssec_access_control, encoding_mismatch_discovery, true);
ADD_TEST(ddssec_access_control, encoding_mismatch_liveliness, true);
ADD_TEST(ddssec_access_control, encoding_mismatch_metadata, true);
ADD_TEST(ddssec_access_control, encoding_mismatch_payload, true);
ADD_TEST(ddssec_access_control, readwrite_protection, true);
ADD_TEST(ddssec_access_control, denied_topic, true);
ADD_TEST(ddssec_access_control, partition, true);
ADD_TEST(ddssec_access_control, config_parameters_file, true);
ADD_TEST(ddssec_access_control, permissions_expiry, true);
ADD_TEST(ddssec_access_control, hooks, true);
ADD_TEST(ddssec_access_control, join_access_control, true);
ADD_TEST(ddssec_access_control, discovery_liveliness_protection, true);
ADD_SUITE(ddssec_builtintopic, NULL, NULL);
ADD_TEST(ddssec_builtintopic, participant_iid, true);
ADD_SUITE(ddssec_config, NULL, NULL);
ADD_TEST(ddssec_config, empty, true);
ADD_TEST(ddssec_config, non, true);
ADD_TEST(ddssec_config, missing, true);
ADD_TEST(ddssec_config, all, true);
ADD_TEST(ddssec_config, security, true);
ADD_TEST(ddssec_config, deprecated, true);
ADD_TEST(ddssec_config, qos, true);
ADD_TEST(ddssec_config, qos_props, true);
ADD_TEST(ddssec_config, config_qos, true);
ADD_TEST(ddssec_config, other_prop, true);
ADD_TEST(ddssec_config, qos_invalid, true);
ADD_TEST(ddssec_config, qos_invalid_proprietary, true);
ADD_TEST(ddssec_config, config_qos_missing_crl, true);
ADD_TEST(ddssec_config, config_qos_override_crl, true);
ADD_SUITE(ddssec_crypto, NULL, NULL);
ADD_TEST(ddssec_crypto, inject_plain_data, true);
ADD_SUITE(ddssec_handshake, NULL, NULL);
ADD_TEST(ddssec_handshake, happy_day, true);
ADD_TEST(ddssec_handshake, check_tokens, true);
ADD_SUITE(ddssec_security_plugin_loading, NULL, NULL);
ADD_TEST(ddssec_security_plugin_loading, all_ok, true);
ADD_TEST(ddssec_security_plugin_loading, missing_finalize, true);
ADD_TEST(ddssec_security_plugin_loading, authentication_missing_function, true);
ADD_TEST(ddssec_security_plugin_loading, access_control_missing_function, true);
ADD_TEST(ddssec_security_plugin_loading, cryptography_missing_function, true);
ADD_TEST(ddssec_security_plugin_loading, no_library_in_path, true);
ADD_TEST(ddssec_security_plugin_loading, init_error, true);
ADD_TEST(ddssec_security_plugin_loading, all_ok_with_props, true);
ADD_TEST(ddssec_security_plugin_loading, missing_plugin_property_with_props, true);
ADD_TEST(ddssec_security_plugin_loading, empty_plugin_property_with_props, true);
ADD_TEST(ddssec_security_plugin_loading, missing_security_property_with_props, true);
ADD_TEST(ddssec_security_plugin_loading, multiple_domains_different_config, true);
ADD_SUITE(ddssec_secure_communication, NULL, NULL);
ADD_TEST(ddssec_secure_communication, protection_kinds, true);
ADD_TEST(ddssec_secure_communication, discovery_liveliness_protection, true);
ADD_TEST(ddssec_secure_communication, check_encrypted_secret, true);
ADD_TEST(ddssec_secure_communication, multiple_readers, true);
ADD_TEST(ddssec_secure_communication, multiple_readers_writers, true);

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

