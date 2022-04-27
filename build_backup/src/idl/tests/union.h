#define CU_TheoryDataPointsSize_idl_union_bad_switch_types(datapoints) ( datapoints.str.n )
#define CU_TheoryDataPointsSlice_idl_union_bad_switch_types(datapoints, index) ( datapoints.str.p[index], datapoints.expret.p[index] )
#define CU_TheoryDataPointsTypedef_idl_union_bad_switch_types() { struct { size_t n; const char * *p; } str; struct { size_t n; idl_retcode_t *p; } expret; }
