#define CU_TheoryDataPointsSize_ddsrt_hopscotch_random(datapoints) ( datapoints.ops.n )
#define CU_TheoryDataPointsSlice_ddsrt_hopscotch_random(datapoints, index) ( datapoints.ops.p[index], datapoints.random.p[index], datapoints.adj.p[index], datapoints.adjname.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_hopscotch_random() { struct { size_t n; const struct ops * *p; } ops; struct { size_t n; bool *p; } random; struct { size_t n; adj_fun_t *p; } adj; struct { size_t n; const char * *p; } adjname; }
