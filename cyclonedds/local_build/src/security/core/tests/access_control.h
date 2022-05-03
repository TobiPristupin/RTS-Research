#define CU_TheoryDataPointsSize_ddssec_access_control_config_parameters_file(datapoints) ( datapoints.test_descr.n )
#define CU_TheoryDataPointsSlice_ddssec_access_control_config_parameters_file(datapoints, index) ( datapoints.test_descr.p[index], datapoints.gov.p[index], datapoints.perm.p[index], datapoints.ca.p[index], datapoints.incl_empty_els.p[index], datapoints.exp_fail.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_access_control_config_parameters_file() { struct { size_t n; const char * *p; } test_descr; struct { size_t n; const char * *p; } gov; struct { size_t n; const char * *p; } perm; struct { size_t n; const char * *p; } ca; struct { size_t n; bool *p; } incl_empty_els; struct { size_t n; bool *p; } exp_fail; }
#define CU_TheoryDataPointsSize_ddssec_access_control_permissions_expiry(datapoints) ( datapoints.test_descr.n )
#define CU_TheoryDataPointsSlice_ddssec_access_control_permissions_expiry(datapoints, index) ( datapoints.test_descr.p[index], datapoints.perm1_not_before.p[index], datapoints.perm1_not_after.p[index], datapoints.perm2_not_before.p[index], datapoints.perm2_not_after.p[index], datapoints.delay_perm.p[index], datapoints.exp_pp1_fail.p[index], datapoints.exp_pp2_fail.p[index], datapoints.write_read_dur.p[index], datapoints.exp_read_fail.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_access_control_permissions_expiry() { struct { size_t n; const char * *p; } test_descr; struct { size_t n; int32_t *p; } perm1_not_before; struct { size_t n; int32_t *p; } perm1_not_after; struct { size_t n; int32_t *p; } perm2_not_before; struct { size_t n; int32_t *p; } perm2_not_after; struct { size_t n; uint32_t *p; } delay_perm; struct { size_t n; bool *p; } exp_pp1_fail; struct { size_t n; bool *p; } exp_pp2_fail; struct { size_t n; uint32_t *p; } write_read_dur; struct { size_t n; bool *p; } exp_read_fail; }
#define CU_TheoryDataPointsSize_ddssec_access_control_hooks(datapoints) ( datapoints.init_fn.n )
#define CU_TheoryDataPointsSlice_ddssec_access_control_hooks(datapoints, index) ( datapoints.init_fn.p[index], datapoints.exp_pp_fail.p[index], datapoints.exp_local_topic_fail.p[index], datapoints.exp_remote_topic_fail.p[index], datapoints.exp_wr_fail.p[index], datapoints.exp_rd_fail.p[index], datapoints.exp_wr_rd_sync_fail.p[index], datapoints.exp_rd_wr_sync_fail.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_access_control_hooks() { struct { size_t n; const char * *p; } init_fn; struct { size_t n; bool *p; } exp_pp_fail; struct { size_t n; bool *p; } exp_local_topic_fail; struct { size_t n; bool *p; } exp_remote_topic_fail; struct { size_t n; bool *p; } exp_wr_fail; struct { size_t n; bool *p; } exp_rd_fail; struct { size_t n; bool *p; } exp_wr_rd_sync_fail; struct { size_t n; bool *p; } exp_rd_wr_sync_fail; }
#define CU_TheoryDataPointsSize_ddssec_access_control_join_access_control(datapoints) ( datapoints.test_descr.n )
#define CU_TheoryDataPointsSlice_ddssec_access_control_join_access_control(datapoints, index) ( datapoints.test_descr.p[index], datapoints.join_ac_pp1.p[index], datapoints.join_ac_pp2.p[index], datapoints.perm_inv_pp1.p[index], datapoints.perm_inv_pp2.p[index], datapoints.exp_pp1_fail.p[index], datapoints.exp_pp2_fail.p[index], datapoints.exp_hs_fail.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_access_control_join_access_control() { struct { size_t n; const char * *p; } test_descr; struct { size_t n; bool *p; } join_ac_pp1; struct { size_t n; bool *p; } join_ac_pp2; struct { size_t n; bool *p; } perm_inv_pp1; struct { size_t n; bool *p; } perm_inv_pp2; struct { size_t n; bool *p; } exp_pp1_fail; struct { size_t n; bool *p; } exp_pp2_fail; struct { size_t n; bool *p; } exp_hs_fail; }
#define CU_TheoryDataPointsSize_ddssec_access_control_discovery_liveliness_protection(datapoints) ( datapoints.test_descr.n )
#define CU_TheoryDataPointsSlice_ddssec_access_control_discovery_liveliness_protection(datapoints, index) ( datapoints.test_descr.p[index], datapoints.enable_discovery_protection_pp1.p[index], datapoints.enable_discovery_protection_pp2.p[index], datapoints.discovery_protection_kind_pp1.p[index], datapoints.discovery_protection_kind_pp2.p[index], datapoints.exp_rd_wr_match_fail.p[index], datapoints.exp_secure_pub_wr_handle.p[index], datapoints.exp_secure_pub_wr_encode_decode.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_access_control_discovery_liveliness_protection() { struct { size_t n; const char * *p; } test_descr; struct { size_t n; bool *p; } enable_discovery_protection_pp1; struct { size_t n; bool *p; } enable_discovery_protection_pp2; struct { size_t n; DDS_Security_ProtectionKind *p; } discovery_protection_kind_pp1; struct { size_t n; DDS_Security_ProtectionKind *p; } discovery_protection_kind_pp2; struct { size_t n; bool *p; } exp_rd_wr_match_fail; struct { size_t n; bool *p; } exp_secure_pub_wr_handle; struct { size_t n; bool *p; } exp_secure_pub_wr_encode_decode; }
