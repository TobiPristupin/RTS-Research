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

CU_InitDecl(ddssec_builtin_get_authenticated_peer_credential);
CU_CleanDecl(ddssec_builtin_get_authenticated_peer_credential);
CU_TestDecl(ddssec_builtin_get_authenticated_peer_credential, token_after_request);
CU_TestDecl(ddssec_builtin_get_authenticated_peer_credential, token_after_reply);
CU_TestDecl(ddssec_builtin_get_authenticated_peer_credential, token_invalid_arguments);
CU_InitDecl(ddssec_builtin_process_handshake);
CU_CleanDecl(ddssec_builtin_process_handshake);
CU_TestDecl(ddssec_builtin_process_handshake, happy_day_after_request);
CU_TestDecl(ddssec_builtin_process_handshake, happy_day_after_reply);
CU_TestDecl(ddssec_builtin_process_handshake, invalid_arguments);
CU_TestDecl(ddssec_builtin_process_handshake, invalid_certificate);
CU_TestDecl(ddssec_builtin_process_handshake, invalid_dsign_algo);
CU_TestDecl(ddssec_builtin_process_handshake, invalid_kagree_algo);
CU_TestDecl(ddssec_builtin_process_handshake, invalid_diffie_hellman);
CU_TestDecl(ddssec_builtin_process_handshake, return_handle);
CU_TestDecl(ddssec_builtin_process_handshake, extended_certificate_check);
CU_TestDecl(ddssec_builtin_process_handshake, crl);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, happy_day);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, future_challenge);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_arguments);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_certificate);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_participant_data);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_dsign_algo);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_kagree_algo);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_diffie_hellman);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, invalid_challenge);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_reply, return_handle);
CU_TestDecl(validate_begin_handshake_reply, extended_certificate_check);
CU_TestDecl(validate_begin_handshake_reply, crl);
CU_InitDecl(ddssec_builtin_validate_begin_handshake_request);
CU_CleanDecl(ddssec_builtin_validate_begin_handshake_request);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_request, happy_day_challenge);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_request, happy_day_future_challenge);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_request, invalid_arguments);
CU_TestDecl(ddssec_builtin_validate_begin_handshake_request, return_handle);
CU_InitDecl(ddssec_builtin_validate_local_identity);
CU_CleanDecl(ddssec_builtin_validate_local_identity);
CU_TestDecl(ddssec_builtin_validate_local_identity, happy_day);
CU_TestDecl(ddssec_builtin_validate_local_identity, invalid_certificate);
CU_TestDecl(ddssec_builtin_validate_local_identity, invalid_root);
CU_TestDecl(ddssec_builtin_validate_local_identity, invalid_chain);
CU_TestDecl(ddssec_builtin_validate_local_identity, certificate_key_too_small);
CU_TestDecl(ddssec_builtin_validate_local_identity, invalid_private_key);
CU_TestDecl(ddssec_builtin_validate_local_identity, private_key_too_small);
CU_TestDecl(ddssec_builtin_validate_local_identity, missing_certificate_property);
CU_TestDecl(ddssec_builtin_validate_local_identity, missing_ca_property);
CU_TestDecl(ddssec_builtin_validate_local_identity, missing_private_key_property);
CU_TestDecl(ddssec_builtin_validate_local_identity, unsupported_certification_format);
CU_TestDecl(ddssec_builtin_validate_local_identity, encrypted_key);
CU_TestDecl(ddssec_builtin_validate_local_identity, encrypted_key_no_password);
CU_TestDecl(ddssec_builtin_validate_local_identity, encrypted_key_invalid_password);
CU_TestDecl(ddssec_builtin_validate_local_identity, happy_day_elliptic);
CU_TestDecl(ddssec_builtin_validate_local_identity, encrypted_ec_key);
CU_TestDecl(ddssec_builtin_validate_local_identity, elliptic_unsupported_certificate);
CU_TestDecl(ddssec_builtin_validate_local_identity, elliptic_unsupported_private_key);
CU_TestDecl(ddssec_builtin_validate_local_identity, return_freed_handle);
CU_TestDecl(ddssec_builtin_validate_local_identity, no_file);
CU_TestDecl(ddssec_builtin_validate_local_identity, with_extended_certificate_check);
CU_TestDecl(ddssec_builtin_validate_local_identity, crl);
CU_TestDecl(ddssec_builtin_validate_local_identity, trusted_ca_dir_and_crl);
CU_InitDecl(ddssec_builtin_validate_remote_identity);
CU_CleanDecl(ddssec_builtin_validate_remote_identity);
CU_TestDecl(ddssec_builtin_validate_remote_identity, happy_day_nil_auth_req);
CU_TestDecl(ddssec_builtin_validate_remote_identity, happy_day_with_auth_req);
CU_TestDecl(ddssec_builtin_validate_remote_identity, invalid_parameters);
CU_TestDecl(ddssec_builtin_validate_remote_identity, unknown_local_identity);
CU_TestDecl(ddssec_builtin_validate_remote_identity, invalid_remote_identity_token);
CU_TestDecl(ddssec_builtin_validate_remote_identity, invalid_auth_req_token);
CU_TestDecl(ddssec_builtin_validate_remote_identity, already_validated_same_token);
CU_TestDecl(ddssec_builtin_validate_remote_identity, already_validated_different_token);
CU_InitDecl(ddssec_builtin_listeners_auth);
CU_CleanDecl(ddssec_builtin_listeners_auth);
CU_TestDecl(ddssec_builtin_listeners_auth, local_remote_set_before_validation);
CU_InitDecl(ddssec_builtin_listeners_access_control);
CU_CleanDecl(ddssec_builtin_listeners_access_control);
CU_TestDecl(ddssec_builtin_listeners_access_control, local_2secs);
CU_TestDecl(ddssec_builtin_access_control_fnmatch, basic);
CU_TestDecl(ddssec_builtin_get_permissions_credential_token, happy_day);
CU_TestDecl(ddssec_builtin_get_permissions_credential_token, invalid_args);
CU_TestDecl(ddssec_builtin_get_permissions_token, happy_day);
CU_TestDecl(ddssec_builtin_get_permissions_token, invalid_args);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, participant_happy_day);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, datawriter_happy_day);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, datawriter_non_existing_topic);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, datareader_happy_day);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, datareader_non_existing_topic);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, participant_invalid_param);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, datareader_invalid_param);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, datawriter_invalid_param);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, topic_happy_day);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, topic_non_existing_topic);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, topic_invalid_param);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, participant_2nd_rule);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_clear);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_encrypted);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_signed);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_encrypted_and_authenticated);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_signed_and_authenticated);
CU_TestDecl(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_different);
CU_TestDecl(ddssec_builtin_validate_local_permissions, valid_file);
CU_TestDecl(ddssec_builtin_validate_local_permissions, valid_data);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_directories);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_empty_files);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_text_files);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_absent_files);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_no_files);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_empty_data);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_invalid_types);
CU_TestDecl(ddssec_builtin_validate_local_permissions, uri_null);
CU_TestDecl(ddssec_builtin_validate_local_permissions, corrupted_signatures);
CU_TestDecl(ddssec_builtin_validate_local_permissions, unknown_ca);
CU_TestDecl(ddssec_builtin_validate_local_permissions, not_signed);
CU_TestDecl(ddssec_builtin_validate_local_permissions, validity);
CU_TestDecl(ddssec_builtin_validate_local_permissions, subject_name);
CU_TestDecl(ddssec_builtin_validate_local_permissions, xml_invalid);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, valid_permissions);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, permissions_unknown_ca);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, permissions_not_signed);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, invalid_credential_token);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, invalid_xml);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, permissions_expired);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, permissions_not_yet);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, permissions_unknown_subject_name);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, permissions_different_subject);
CU_TestDecl(ddssec_builtin_validate_remote_permissions, corrupted_signature);
CU_TestDecl(ddssec_builtin_create_local_datareader_crypto_tokens, happy_day);
CU_TestDecl(ddssec_builtin_create_local_datareader_crypto_tokens, invalid_args);
CU_TestDecl(ddssec_builtin_create_local_datawriter_crypto_tokens, happy_day);
CU_TestDecl(ddssec_builtin_create_local_datawriter_crypto_tokens, invalid_args);
CU_TestDecl(ddssec_builtin_create_local_participant_crypto_tokens, happy_day);
CU_TestDecl(ddssec_builtin_create_local_participant_crypto_tokens, invalid_args);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, encoded_256);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, encoded_128);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, not_encoded_256);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, not_encoded_128);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, signed_256);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, signed_128);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, only_signed_256);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, only_signed_128);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, invalid_args);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, invalid_data);
CU_TestDecl(ddssec_builtin_decode_datareader_submessage, volatile_sec);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, encoded_256);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, encoded_128);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, not_encoded_256);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, not_encoded_128);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, signed_256);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, signed_128);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, only_signed_256);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, only_signed_128);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, invalid_args);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, invalid_data);
CU_TestDecl(ddssec_builtin_decode_datawriter_submessage, volatile_sec);
CU_TestDecl(ddssec_builtin_decode_rtps_message, encoded_256);
CU_TestDecl(ddssec_builtin_decode_rtps_message, encoded_128);
CU_TestDecl(ddssec_builtin_decode_rtps_message, not_encrypted_256);
CU_TestDecl(ddssec_builtin_decode_rtps_message, not_encrypted_128);
CU_TestDecl(ddssec_builtin_decode_rtps_message, authenticated_256);
CU_TestDecl(ddssec_builtin_decode_rtps_message, authenticated_128);
CU_TestDecl(ddssec_builtin_decode_rtps_message, only_authenticated_256);
CU_TestDecl(ddssec_builtin_decode_rtps_message, only_authenticated_128);
CU_TestDecl(ddssec_builtin_decode_rtps_message, invalid_args);
CU_TestDecl(ddssec_builtin_decode_rtps_message, invalid_data);
CU_TestDecl(ddssec_builtin_decode_serialized_payload, decrypt_128);
CU_TestDecl(ddssec_builtin_decode_serialized_payload, decrypt_256);
CU_TestDecl(ddssec_builtin_decode_serialized_payload, signcheck_128);
CU_TestDecl(ddssec_builtin_decode_serialized_payload, signcheck_256);
CU_TestDecl(ddssec_builtin_decode_serialized_payload, invalid_args);
CU_TestDecl(ddssec_builtin_decode_serialized_payload, invalid_data);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, encode_256);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, encode_128);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, no_encode_256);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, no_encode_128);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, encode_sign_256);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, encode_sign_128);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, no_encode_sign_256);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, no_encode_sign_128);
CU_TestDecl(ddssec_builtin_encode_datareader_submessage, invalid_args);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, encode_256);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, encode_128);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, no_encode_256);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, no_encode_128);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, encode_sign_256);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, encode_sign_128);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, no_encode_sign_256);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, no_encode_sign_128);
CU_TestDecl(ddssec_builtin_encode_datawriter_submessage, invalid_args);
CU_TestDecl(ddssec_builtin_encode_rtps_message, encrypt_256);
CU_TestDecl(ddssec_builtin_encode_rtps_message, encrypt_128);
CU_TestDecl(ddssec_builtin_encode_rtps_message, no_encrypt_256);
CU_TestDecl(ddssec_builtin_encode_rtps_message, no_encrypt_128);
CU_TestDecl(ddssec_builtin_encode_rtps_message, encrypt_sign_256);
CU_TestDecl(ddssec_builtin_encode_rtps_message, encrypt_sign_128);
CU_TestDecl(ddssec_builtin_encode_rtps_message, no_encrypt_sign_256);
CU_TestDecl(ddssec_builtin_encode_rtps_message, no_encrypt_sign_128);
CU_TestDecl(ddssec_builtin_encode_rtps_message, invalid_args);
CU_TestDecl(ddssec_builtin_encode_serialized_payload, encrypt_128);
CU_TestDecl(ddssec_builtin_encode_serialized_payload, encrypt_256);
CU_TestDecl(ddssec_builtin_encode_serialized_payload, sign_128);
CU_TestDecl(ddssec_builtin_encode_serialized_payload, sign_256);
CU_TestDecl(ddssec_builtin_encode_serialized_payload, invalid_args);
CU_TestDecl(ddssec_builtin_preprocess_secure_submsg, writer_happy_day);
CU_TestDecl(ddssec_builtin_preprocess_secure_submsg, reader_happy_day);
CU_TestDecl(ddssec_builtin_preprocess_secure_submsg, invalid_args);
CU_TestDecl(ddssec_builtin_preprocess_secure_submsg, invalid_message);
CU_TestDecl(ddssec_builtin_preprocess_secure_submsg, volatile_secure);
CU_TestDecl(ddssec_builtin_register_local_datareader, happy_day);
CU_TestDecl(ddssec_builtin_register_local_datareader, builtin_endpoint);
CU_TestDecl(ddssec_builtin_register_local_datareader, special_endpoint_name);
CU_TestDecl(ddssec_builtin_register_local_datareader, invalid_participant);
CU_TestDecl(ddssec_builtin_register_local_datawriter, happy_day);
CU_TestDecl(ddssec_builtin_register_local_datawriter, builtin_endpoint);
CU_TestDecl(ddssec_builtin_register_local_datawriter, special_endpoint_name);
CU_TestDecl(ddssec_builtin_register_local_datawriter, invalid_participant);
CU_TestDecl(ddssec_builtin_register_local_participant, happy_day);
CU_TestDecl(ddssec_builtin_register_local_participant, empty_identity);
CU_TestDecl(ddssec_builtin_register_remote_datareader, happy_day);
CU_TestDecl(ddssec_builtin_register_remote_datareader, volatile_secure);
CU_TestDecl(ddssec_builtin_register_remote_datareader, with_origin_authentication);
CU_TestDecl(ddssec_builtin_register_remote_datareader, invalid_participant);
CU_TestDecl(ddssec_builtin_register_remote_datareader, invalid_writer_properties);
CU_TestDecl(ddssec_builtin_register_remote_datawriter, happy_day);
CU_TestDecl(ddssec_builtin_register_remote_datawriter, volatile_secure);
CU_TestDecl(ddssec_builtin_register_remote_datawriter, with_origin_authentication);
CU_TestDecl(ddssec_builtin_register_remote_datawriter, invalid_participant);
CU_TestDecl(ddssec_builtin_register_remote_datawriter, invalid_writer_properties);
CU_TestDecl(ddssec_builtin_register_remote_participant, happy_day);
CU_TestDecl(ddssec_builtin_register_remote_participant, empty_identity);
CU_TestDecl(ddssec_builtin_set_remote_datareader_crypto_tokens, happy_day);
CU_TestDecl(ddssec_builtin_set_remote_datareader_crypto_tokens, single_token);
CU_TestDecl(ddssec_builtin_set_remote_datareader_crypto_tokens, invalid_args);
CU_TestDecl(ddssec_builtin_set_remote_datareader_crypto_tokens, invalid_tokens);
CU_TestDecl(ddssec_builtin_set_remote_datareader_crypto_tokens, invalid_key_material);
CU_TestDecl(ddssec_builtin_set_remote_datawriter_crypto_tokens, happy_day);
CU_TestDecl(ddssec_builtin_set_remote_datawriter_crypto_tokens, single_token);
CU_TestDecl(ddssec_builtin_set_remote_datawriter_crypto_tokens, invalid_args);
CU_TestDecl(ddssec_builtin_set_remote_datawriter_crypto_tokens, invalid_tokens);
CU_TestDecl(ddssec_builtin_set_remote_datawriter_crypto_tokens, invalid_key_material);
CU_TestDecl(ddssec_builtin_set_remote_participant_crypto_tokens, happy_day);
CU_TestDecl(ddssec_builtin_set_remote_participant_crypto_tokens, invalid_args);
CU_TestDecl(ddssec_builtin_set_remote_participant_crypto_tokens, invalid_tokens);

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

ADD_SUITE(ddssec_builtin_get_authenticated_peer_credential, CU_InitName(ddssec_builtin_get_authenticated_peer_credential), CU_CleanName(ddssec_builtin_get_authenticated_peer_credential));
ADD_TEST(ddssec_builtin_get_authenticated_peer_credential, token_after_request, true);
ADD_TEST(ddssec_builtin_get_authenticated_peer_credential, token_after_reply, true);
ADD_TEST(ddssec_builtin_get_authenticated_peer_credential, token_invalid_arguments, true);
ADD_SUITE(ddssec_builtin_process_handshake, CU_InitName(ddssec_builtin_process_handshake), CU_CleanName(ddssec_builtin_process_handshake));
ADD_TEST(ddssec_builtin_process_handshake, happy_day_after_request, true);
ADD_TEST(ddssec_builtin_process_handshake, happy_day_after_reply, true);
ADD_TEST(ddssec_builtin_process_handshake, invalid_arguments, true);
ADD_TEST(ddssec_builtin_process_handshake, invalid_certificate, true);
ADD_TEST(ddssec_builtin_process_handshake, invalid_dsign_algo, true);
ADD_TEST(ddssec_builtin_process_handshake, invalid_kagree_algo, true);
ADD_TEST(ddssec_builtin_process_handshake, invalid_diffie_hellman, true);
ADD_TEST(ddssec_builtin_process_handshake, return_handle, true);
ADD_TEST(ddssec_builtin_process_handshake, extended_certificate_check, true);
ADD_TEST(ddssec_builtin_process_handshake, crl, true);
ADD_SUITE(ddssec_builtin_validate_begin_handshake_reply, NULL, NULL);
ADD_SUITE(validate_begin_handshake_reply, NULL, NULL);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, happy_day, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, future_challenge, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_arguments, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_certificate, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_participant_data, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_dsign_algo, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_kagree_algo, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_diffie_hellman, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, invalid_challenge, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_reply, return_handle, true);
ADD_TEST(validate_begin_handshake_reply, extended_certificate_check, true);
ADD_TEST(validate_begin_handshake_reply, crl, true);
ADD_SUITE(ddssec_builtin_validate_begin_handshake_request, CU_InitName(ddssec_builtin_validate_begin_handshake_request), CU_CleanName(ddssec_builtin_validate_begin_handshake_request));
ADD_TEST(ddssec_builtin_validate_begin_handshake_request, happy_day_challenge, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_request, happy_day_future_challenge, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_request, invalid_arguments, true);
ADD_TEST(ddssec_builtin_validate_begin_handshake_request, return_handle, true);
ADD_SUITE(ddssec_builtin_validate_local_identity, CU_InitName(ddssec_builtin_validate_local_identity), CU_CleanName(ddssec_builtin_validate_local_identity));
ADD_TEST(ddssec_builtin_validate_local_identity, happy_day, true);
ADD_TEST(ddssec_builtin_validate_local_identity, invalid_certificate, true);
ADD_TEST(ddssec_builtin_validate_local_identity, invalid_root, true);
ADD_TEST(ddssec_builtin_validate_local_identity, invalid_chain, true);
ADD_TEST(ddssec_builtin_validate_local_identity, certificate_key_too_small, true);
ADD_TEST(ddssec_builtin_validate_local_identity, invalid_private_key, true);
ADD_TEST(ddssec_builtin_validate_local_identity, private_key_too_small, true);
ADD_TEST(ddssec_builtin_validate_local_identity, missing_certificate_property, true);
ADD_TEST(ddssec_builtin_validate_local_identity, missing_ca_property, true);
ADD_TEST(ddssec_builtin_validate_local_identity, missing_private_key_property, true);
ADD_TEST(ddssec_builtin_validate_local_identity, unsupported_certification_format, true);
ADD_TEST(ddssec_builtin_validate_local_identity, encrypted_key, true);
ADD_TEST(ddssec_builtin_validate_local_identity, encrypted_key_no_password, true);
ADD_TEST(ddssec_builtin_validate_local_identity, encrypted_key_invalid_password, true);
ADD_TEST(ddssec_builtin_validate_local_identity, happy_day_elliptic, true);
ADD_TEST(ddssec_builtin_validate_local_identity, encrypted_ec_key, true);
ADD_TEST(ddssec_builtin_validate_local_identity, elliptic_unsupported_certificate, true);
ADD_TEST(ddssec_builtin_validate_local_identity, elliptic_unsupported_private_key, true);
ADD_TEST(ddssec_builtin_validate_local_identity, return_freed_handle, true);
ADD_TEST(ddssec_builtin_validate_local_identity, no_file, true);
ADD_TEST(ddssec_builtin_validate_local_identity, with_extended_certificate_check, true);
ADD_TEST(ddssec_builtin_validate_local_identity, crl, true);
ADD_TEST(ddssec_builtin_validate_local_identity, trusted_ca_dir_and_crl, true);
ADD_SUITE(ddssec_builtin_validate_remote_identity, CU_InitName(ddssec_builtin_validate_remote_identity), CU_CleanName(ddssec_builtin_validate_remote_identity));
ADD_TEST(ddssec_builtin_validate_remote_identity, happy_day_nil_auth_req, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, happy_day_with_auth_req, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, invalid_parameters, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, unknown_local_identity, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, invalid_remote_identity_token, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, invalid_auth_req_token, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, already_validated_same_token, true);
ADD_TEST(ddssec_builtin_validate_remote_identity, already_validated_different_token, true);
ADD_SUITE(ddssec_builtin_listeners_auth, CU_InitName(ddssec_builtin_listeners_auth), CU_CleanName(ddssec_builtin_listeners_auth));
ADD_TEST(ddssec_builtin_listeners_auth, local_remote_set_before_validation, true);
ADD_SUITE(ddssec_builtin_listeners_access_control, CU_InitName(ddssec_builtin_listeners_access_control), CU_CleanName(ddssec_builtin_listeners_access_control));
ADD_TEST(ddssec_builtin_listeners_access_control, local_2secs, true);
ADD_SUITE(ddssec_builtin_access_control_fnmatch, NULL, NULL);
ADD_TEST(ddssec_builtin_access_control_fnmatch, basic, true);
ADD_SUITE(ddssec_builtin_get_permissions_credential_token, NULL, NULL);
ADD_TEST(ddssec_builtin_get_permissions_credential_token, happy_day, true);
ADD_TEST(ddssec_builtin_get_permissions_credential_token, invalid_args, true);
ADD_SUITE(ddssec_builtin_get_permissions_token, NULL, NULL);
ADD_TEST(ddssec_builtin_get_permissions_token, happy_day, true);
ADD_TEST(ddssec_builtin_get_permissions_token, invalid_args, true);
ADD_SUITE(ddssec_builtin_get_xxx_sec_attributes, NULL, NULL);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, participant_happy_day, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, datawriter_happy_day, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, datawriter_non_existing_topic, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, datareader_happy_day, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, datareader_non_existing_topic, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, participant_invalid_param, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, datareader_invalid_param, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, datawriter_invalid_param, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, topic_happy_day, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, topic_non_existing_topic, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, topic_invalid_param, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, participant_2nd_rule, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_clear, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_encrypted, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_signed, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_encrypted_and_authenticated, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_signed_and_authenticated, true);
ADD_TEST(ddssec_builtin_get_xxx_sec_attributes, liveliness_discovery_different, true);
ADD_SUITE(ddssec_builtin_validate_local_permissions, NULL, NULL);
ADD_TEST(ddssec_builtin_validate_local_permissions, valid_file, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, valid_data, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_directories, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_empty_files, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_text_files, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_absent_files, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_no_files, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_empty_data, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_invalid_types, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, uri_null, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, corrupted_signatures, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, unknown_ca, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, not_signed, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, validity, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, subject_name, true);
ADD_TEST(ddssec_builtin_validate_local_permissions, xml_invalid, true);
ADD_SUITE(ddssec_builtin_validate_remote_permissions, NULL, NULL);
ADD_TEST(ddssec_builtin_validate_remote_permissions, valid_permissions, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, permissions_unknown_ca, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, permissions_not_signed, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, invalid_credential_token, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, invalid_xml, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, permissions_expired, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, permissions_not_yet, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, permissions_unknown_subject_name, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, permissions_different_subject, true);
ADD_TEST(ddssec_builtin_validate_remote_permissions, corrupted_signature, true);
ADD_SUITE(ddssec_builtin_create_local_datareader_crypto_tokens, NULL, NULL);
ADD_TEST(ddssec_builtin_create_local_datareader_crypto_tokens, happy_day, true);
ADD_TEST(ddssec_builtin_create_local_datareader_crypto_tokens, invalid_args, true);
ADD_SUITE(ddssec_builtin_create_local_datawriter_crypto_tokens, NULL, NULL);
ADD_TEST(ddssec_builtin_create_local_datawriter_crypto_tokens, happy_day, true);
ADD_TEST(ddssec_builtin_create_local_datawriter_crypto_tokens, invalid_args, true);
ADD_SUITE(ddssec_builtin_create_local_participant_crypto_tokens, NULL, NULL);
ADD_TEST(ddssec_builtin_create_local_participant_crypto_tokens, happy_day, true);
ADD_TEST(ddssec_builtin_create_local_participant_crypto_tokens, invalid_args, true);
ADD_SUITE(ddssec_builtin_decode_datareader_submessage, NULL, NULL);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, encoded_256, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, encoded_128, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, not_encoded_256, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, not_encoded_128, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, signed_256, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, signed_128, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, only_signed_256, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, only_signed_128, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, invalid_args, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, invalid_data, true);
ADD_TEST(ddssec_builtin_decode_datareader_submessage, volatile_sec, true);
ADD_SUITE(ddssec_builtin_decode_datawriter_submessage, NULL, NULL);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, encoded_256, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, encoded_128, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, not_encoded_256, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, not_encoded_128, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, signed_256, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, signed_128, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, only_signed_256, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, only_signed_128, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, invalid_args, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, invalid_data, true);
ADD_TEST(ddssec_builtin_decode_datawriter_submessage, volatile_sec, true);
ADD_SUITE(ddssec_builtin_decode_rtps_message, NULL, NULL);
ADD_TEST(ddssec_builtin_decode_rtps_message, encoded_256, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, encoded_128, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, not_encrypted_256, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, not_encrypted_128, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, authenticated_256, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, authenticated_128, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, only_authenticated_256, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, only_authenticated_128, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, invalid_args, true);
ADD_TEST(ddssec_builtin_decode_rtps_message, invalid_data, true);
ADD_SUITE(ddssec_builtin_decode_serialized_payload, NULL, NULL);
ADD_TEST(ddssec_builtin_decode_serialized_payload, decrypt_128, true);
ADD_TEST(ddssec_builtin_decode_serialized_payload, decrypt_256, true);
ADD_TEST(ddssec_builtin_decode_serialized_payload, signcheck_128, true);
ADD_TEST(ddssec_builtin_decode_serialized_payload, signcheck_256, true);
ADD_TEST(ddssec_builtin_decode_serialized_payload, invalid_args, true);
ADD_TEST(ddssec_builtin_decode_serialized_payload, invalid_data, true);
ADD_SUITE(ddssec_builtin_encode_datareader_submessage, NULL, NULL);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, encode_256, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, encode_128, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, no_encode_256, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, no_encode_128, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, encode_sign_256, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, encode_sign_128, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, no_encode_sign_256, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, no_encode_sign_128, true);
ADD_TEST(ddssec_builtin_encode_datareader_submessage, invalid_args, true);
ADD_SUITE(ddssec_builtin_encode_datawriter_submessage, NULL, NULL);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, encode_256, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, encode_128, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, no_encode_256, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, no_encode_128, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, encode_sign_256, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, encode_sign_128, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, no_encode_sign_256, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, no_encode_sign_128, true);
ADD_TEST(ddssec_builtin_encode_datawriter_submessage, invalid_args, true);
ADD_SUITE(ddssec_builtin_encode_rtps_message, NULL, NULL);
ADD_TEST(ddssec_builtin_encode_rtps_message, encrypt_256, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, encrypt_128, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, no_encrypt_256, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, no_encrypt_128, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, encrypt_sign_256, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, encrypt_sign_128, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, no_encrypt_sign_256, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, no_encrypt_sign_128, true);
ADD_TEST(ddssec_builtin_encode_rtps_message, invalid_args, true);
ADD_SUITE(ddssec_builtin_encode_serialized_payload, NULL, NULL);
ADD_TEST(ddssec_builtin_encode_serialized_payload, encrypt_128, true);
ADD_TEST(ddssec_builtin_encode_serialized_payload, encrypt_256, true);
ADD_TEST(ddssec_builtin_encode_serialized_payload, sign_128, true);
ADD_TEST(ddssec_builtin_encode_serialized_payload, sign_256, true);
ADD_TEST(ddssec_builtin_encode_serialized_payload, invalid_args, true);
ADD_SUITE(ddssec_builtin_preprocess_secure_submsg, NULL, NULL);
ADD_TEST(ddssec_builtin_preprocess_secure_submsg, writer_happy_day, true);
ADD_TEST(ddssec_builtin_preprocess_secure_submsg, reader_happy_day, true);
ADD_TEST(ddssec_builtin_preprocess_secure_submsg, invalid_args, true);
ADD_TEST(ddssec_builtin_preprocess_secure_submsg, invalid_message, true);
ADD_TEST(ddssec_builtin_preprocess_secure_submsg, volatile_secure, true);
ADD_SUITE(ddssec_builtin_register_local_datareader, NULL, NULL);
ADD_TEST(ddssec_builtin_register_local_datareader, happy_day, true);
ADD_TEST(ddssec_builtin_register_local_datareader, builtin_endpoint, true);
ADD_TEST(ddssec_builtin_register_local_datareader, special_endpoint_name, true);
ADD_TEST(ddssec_builtin_register_local_datareader, invalid_participant, true);
ADD_SUITE(ddssec_builtin_register_local_datawriter, NULL, NULL);
ADD_TEST(ddssec_builtin_register_local_datawriter, happy_day, true);
ADD_TEST(ddssec_builtin_register_local_datawriter, builtin_endpoint, true);
ADD_TEST(ddssec_builtin_register_local_datawriter, special_endpoint_name, true);
ADD_TEST(ddssec_builtin_register_local_datawriter, invalid_participant, true);
ADD_SUITE(ddssec_builtin_register_local_participant, NULL, NULL);
ADD_TEST(ddssec_builtin_register_local_participant, happy_day, true);
ADD_TEST(ddssec_builtin_register_local_participant, empty_identity, true);
ADD_SUITE(ddssec_builtin_register_remote_datareader, NULL, NULL);
ADD_TEST(ddssec_builtin_register_remote_datareader, happy_day, true);
ADD_TEST(ddssec_builtin_register_remote_datareader, volatile_secure, true);
ADD_TEST(ddssec_builtin_register_remote_datareader, with_origin_authentication, true);
ADD_TEST(ddssec_builtin_register_remote_datareader, invalid_participant, true);
ADD_TEST(ddssec_builtin_register_remote_datareader, invalid_writer_properties, true);
ADD_SUITE(ddssec_builtin_register_remote_datawriter, NULL, NULL);
ADD_TEST(ddssec_builtin_register_remote_datawriter, happy_day, true);
ADD_TEST(ddssec_builtin_register_remote_datawriter, volatile_secure, true);
ADD_TEST(ddssec_builtin_register_remote_datawriter, with_origin_authentication, true);
ADD_TEST(ddssec_builtin_register_remote_datawriter, invalid_participant, true);
ADD_TEST(ddssec_builtin_register_remote_datawriter, invalid_writer_properties, true);
ADD_SUITE(ddssec_builtin_register_remote_participant, NULL, NULL);
ADD_TEST(ddssec_builtin_register_remote_participant, happy_day, true);
ADD_TEST(ddssec_builtin_register_remote_participant, empty_identity, true);
ADD_SUITE(ddssec_builtin_set_remote_datareader_crypto_tokens, NULL, NULL);
ADD_TEST(ddssec_builtin_set_remote_datareader_crypto_tokens, happy_day, true);
ADD_TEST(ddssec_builtin_set_remote_datareader_crypto_tokens, single_token, true);
ADD_TEST(ddssec_builtin_set_remote_datareader_crypto_tokens, invalid_args, true);
ADD_TEST(ddssec_builtin_set_remote_datareader_crypto_tokens, invalid_tokens, true);
ADD_TEST(ddssec_builtin_set_remote_datareader_crypto_tokens, invalid_key_material, true);
ADD_SUITE(ddssec_builtin_set_remote_datawriter_crypto_tokens, NULL, NULL);
ADD_TEST(ddssec_builtin_set_remote_datawriter_crypto_tokens, happy_day, true);
ADD_TEST(ddssec_builtin_set_remote_datawriter_crypto_tokens, single_token, true);
ADD_TEST(ddssec_builtin_set_remote_datawriter_crypto_tokens, invalid_args, true);
ADD_TEST(ddssec_builtin_set_remote_datawriter_crypto_tokens, invalid_tokens, true);
ADD_TEST(ddssec_builtin_set_remote_datawriter_crypto_tokens, invalid_key_material, true);
ADD_SUITE(ddssec_builtin_set_remote_participant_crypto_tokens, NULL, NULL);
ADD_TEST(ddssec_builtin_set_remote_participant_crypto_tokens, happy_day, true);
ADD_TEST(ddssec_builtin_set_remote_participant_crypto_tokens, invalid_args, true);
ADD_TEST(ddssec_builtin_set_remote_participant_crypto_tokens, invalid_tokens, true);

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

