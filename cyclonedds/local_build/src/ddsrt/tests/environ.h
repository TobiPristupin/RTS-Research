#define CU_TheoryDataPointsSize_ddsrt_environ_bad_name(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsrt_environ_bad_name(datapoints, index) ( datapoints.name.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_environ_bad_name() { struct { size_t n; const char * *p; } name; }
#define CU_TheoryDataPointsSize_ddsrt_environ_expand(datapoints) ( datapoints.var.n )
#define CU_TheoryDataPointsSlice_ddsrt_environ_expand(datapoints, index) ( datapoints.var.p[index], datapoints.expect.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_environ_expand() { struct { size_t n; const char * *p; } var; struct { size_t n; const char * *p; } expect; }
#define CU_TheoryDataPointsSize_ddsrt_environ_expand_sh(datapoints) ( datapoints.var.n )
#define CU_TheoryDataPointsSlice_ddsrt_environ_expand_sh(datapoints, index) ( datapoints.var.p[index], datapoints.expect.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_environ_expand_sh() { struct { size_t n; const char * *p; } var; struct { size_t n; const char * *p; } expect; }
