#define CU_TheoryDataPointsSize_idl_parser_base_types(datapoints) ( datapoints.s.n )
#define CU_TheoryDataPointsSlice_idl_parser_base_types(datapoints, index) ( datapoints.s.p[index], datapoints.t.p[index] )
#define CU_TheoryDataPointsTypedef_idl_parser_base_types() { struct { size_t n; const char * *p; } s; struct { size_t n; uint32_t *p; } t; }
#define CU_TheoryDataPointsSize_idl_parser_extended_base_types(datapoints) ( datapoints.s.n )
#define CU_TheoryDataPointsSlice_idl_parser_extended_base_types(datapoints, index) ( datapoints.s.p[index], datapoints.t.p[index] )
#define CU_TheoryDataPointsTypedef_idl_parser_extended_base_types() { struct { size_t n; const char * *p; } s; struct { size_t n; uint32_t *p; } t; }
