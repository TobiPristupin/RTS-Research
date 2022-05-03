#define CU_TheoryDataPointsSize_ddsrt_retcode_unknown(datapoints) ( datapoints.ret.n )
#define CU_TheoryDataPointsSlice_ddsrt_retcode_unknown(datapoints, index) ( datapoints.ret.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_retcode_unknown() { struct { size_t n; dds_return_t *p; } ret; }
#define CU_TheoryDataPointsSize_ddsrt_retcode_spotchecks(datapoints) ( datapoints.ret.n )
#define CU_TheoryDataPointsSlice_ddsrt_retcode_spotchecks(datapoints, index) ( datapoints.ret.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_retcode_spotchecks() { struct { size_t n; dds_return_t *p; } ret; struct { size_t n; const char * *p; } exp; }
