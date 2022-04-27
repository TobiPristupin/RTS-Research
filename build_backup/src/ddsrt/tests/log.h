#define CU_TheoryDataPointsSize_dds_log_fatal_aborts(datapoints) ( datapoints.local.n )
#define CU_TheoryDataPointsSlice_dds_log_fatal_aborts(datapoints, index) ( datapoints.local.p[index], datapoints.mode.p[index], datapoints.expect_in_trace.p[index] )
#define CU_TheoryDataPointsTypedef_dds_log_fatal_aborts() { struct { size_t n; bool *p; } local; struct { size_t n; int *p; } mode; struct { size_t n; bool *p; } expect_in_trace; }
