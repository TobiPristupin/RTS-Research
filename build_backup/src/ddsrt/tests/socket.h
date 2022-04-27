#define CU_TheoryDataPointsSize_ddsrt_sockaddrfromstr_ipv4(datapoints) ( datapoints.str.n )
#define CU_TheoryDataPointsSlice_ddsrt_sockaddrfromstr_ipv4(datapoints, index) ( datapoints.str.p[index], datapoints.af.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_sockaddrfromstr_ipv4() { struct { size_t n; char * *p; } str; struct { size_t n; int *p; } af; struct { size_t n; dds_return_t *p; } exp; }
#define CU_TheoryDataPointsSize_ddsrt_sockaddrfromstr_ipv6(datapoints) ( datapoints.str.n )
#define CU_TheoryDataPointsSlice_ddsrt_sockaddrfromstr_ipv6(datapoints, index) ( datapoints.str.p[index], datapoints.af.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_sockaddrfromstr_ipv6() { struct { size_t n; char * *p; } str; struct { size_t n; int *p; } af; struct { size_t n; dds_return_t *p; } exp; }
#define CU_TheoryDataPointsSize_ddsrt_gethostbyname_ipv4(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsrt_gethostbyname_ipv4(datapoints, index) ( datapoints.name.p[index], datapoints.af.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_gethostbyname_ipv4() { struct { size_t n; char * *p; } name; struct { size_t n; int *p; } af; struct { size_t n; dds_return_t *p; } exp; }
#define CU_TheoryDataPointsSize_ddsrt_gethostbyname_ipv6(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsrt_gethostbyname_ipv6(datapoints, index) ( datapoints.name.p[index], datapoints.af.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_gethostbyname_ipv6() { struct { size_t n; char * *p; } name; struct { size_t n; int *p; } af; struct { size_t n; dds_return_t *p; } exp; }
