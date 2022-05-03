#define CU_TheoryDataPointsSize_ddsi_locator_from_string_ipv4_invalid(datapoints) ( datapoints.tr.n )
#define CU_TheoryDataPointsSlice_ddsi_locator_from_string_ipv4_invalid(datapoints, index) ( datapoints.tr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsi_locator_from_string_ipv4_invalid() { struct { size_t n; enum ddsi_transport_selector *p; } tr; }
#define CU_TheoryDataPointsSize_ddsi_locator_from_string_ipv4(datapoints) ( datapoints.tr.n )
#define CU_TheoryDataPointsSlice_ddsi_locator_from_string_ipv4(datapoints, index) ( datapoints.tr.p[index], datapoints.loc_kind.p[index] )
#define CU_TheoryDataPointsTypedef_ddsi_locator_from_string_ipv4() { struct { size_t n; enum ddsi_transport_selector *p; } tr; struct { size_t n; int32_t *p; } loc_kind; }
#define CU_TheoryDataPointsSize_ddsi_locator_from_string_ipv6_invalid(datapoints) ( datapoints.tr.n )
#define CU_TheoryDataPointsSlice_ddsi_locator_from_string_ipv6_invalid(datapoints, index) ( datapoints.tr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsi_locator_from_string_ipv6_invalid() { struct { size_t n; enum ddsi_transport_selector *p; } tr; }
#define CU_TheoryDataPointsSize_ddsi_locator_from_string_ipv6(datapoints) ( datapoints.tr.n )
#define CU_TheoryDataPointsSlice_ddsi_locator_from_string_ipv6(datapoints, index) ( datapoints.tr.p[index], datapoints.loc_kind.p[index] )
#define CU_TheoryDataPointsTypedef_ddsi_locator_from_string_ipv6() { struct { size_t n; enum ddsi_transport_selector *p; } tr; struct { size_t n; int32_t *p; } loc_kind; }
