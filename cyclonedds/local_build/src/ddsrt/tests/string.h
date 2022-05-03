#define CU_TheoryDataPointsSize_ddsrt_strcasecmp_basic(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strcasecmp_basic(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strcasecmp_basic() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; eq_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsrt_strncasecmp_basic(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strncasecmp_basic(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.n.p[index], datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strncasecmp_basic() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; size_t *p; } n; struct { size_t n; eq_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsrt_strncasecmp_empty(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strncasecmp_empty(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.n.p[index], datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strncasecmp_empty() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; size_t *p; } n; struct { size_t n; eq_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsrt_strncasecmp_length(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strncasecmp_length(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.n.p[index], datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strncasecmp_length() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; size_t *p; } n; struct { size_t n; eq_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsrt_str_replace_basic(datapoints) ( datapoints.str.n )
#define CU_TheoryDataPointsSlice_ddsrt_str_replace_basic(datapoints, index) ( datapoints.str.p[index], datapoints.srch.p[index], datapoints.subst.p[index], datapoints.max.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_str_replace_basic() { struct { size_t n; const char * *p; } str; struct { size_t n; const char * *p; } srch; struct { size_t n; const char * *p; } subst; struct { size_t n; size_t *p; } max; struct { size_t n; const char * *p; } exp; }
#define CU_TheoryDataPointsSize_ddsrt_strndup_exact_length(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strndup_exact_length(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.n.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strndup_exact_length() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; size_t *p; } n; }
#define CU_TheoryDataPointsSize_ddsrt_strndup_too_long(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strndup_too_long(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.n.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strndup_too_long() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; size_t *p; } n; }
#define CU_TheoryDataPointsSize_ddsrt_strndup_too_short(datapoints) ( datapoints.s1.n )
#define CU_TheoryDataPointsSlice_ddsrt_strndup_too_short(datapoints, index) ( datapoints.s1.p[index], datapoints.s2.p[index], datapoints.n.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_strndup_too_short() { struct { size_t n; const char * *p; } s1; struct { size_t n; const char * *p; } s2; struct { size_t n; size_t *p; } n; }
