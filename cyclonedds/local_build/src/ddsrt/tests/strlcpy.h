#define CU_TheoryDataPointsSize_ddsrt_strlcpy_dest_size(datapoints) ( datapoints.src.n )
#define CU_TheoryDataPointsSlice_ddsrt_strlcpy_dest_size(datapoints, index) ( datapoints.src.p[index], datapoints.size.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strlcpy_dest_size() { struct { size_t n; char * *p; } src; struct { size_t n; size_t *p; } size; }
#define CU_TheoryDataPointsSize_ddsrt_strlcat_dest_size(datapoints) ( datapoints.seed.n )
#define CU_TheoryDataPointsSlice_ddsrt_strlcat_dest_size(datapoints, index) ( datapoints.seed.p[index], datapoints.src.p[index], datapoints.size.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strlcat_dest_size() { struct { size_t n; char * *p; } seed; struct { size_t n; char * *p; } src; struct { size_t n; size_t *p; } size; }
