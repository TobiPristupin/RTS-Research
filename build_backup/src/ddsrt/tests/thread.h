#define CU_TheoryDataPointsSize_ddsrt_thread_create_and_join(datapoints) ( datapoints.sched.n )
#define CU_TheoryDataPointsSlice_ddsrt_thread_create_and_join(datapoints, index) ( datapoints.sched.p[index], datapoints.prio.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_thread_create_and_join() { struct { size_t n; ddsrt_sched_t *p; } sched; struct { size_t n; int32_t * *p; } prio; struct { size_t n; uint32_t *p; } exp; }
