#define CU_TheoryDataPointsSize_ddsc_querycondition_create_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_querycondition_create_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_querycondition_create_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_querycondition_create_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_querycondition_create_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_querycondition_create_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_querycondition_get_mask_invalid_conditions(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_querycondition_get_mask_invalid_conditions(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_querycondition_get_mask_invalid_conditions() { struct { size_t n; dds_entity_t *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_querycondition_get_mask_non_conditions(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_querycondition_get_mask_non_conditions(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_querycondition_get_mask_non_conditions() { struct { size_t n; dds_entity_t * *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_querycondition_get_mask_various_masks(datapoints) ( datapoints.ss.n )
#define CU_TheoryDataPointsSlice_ddsc_querycondition_get_mask_various_masks(datapoints, index) ( datapoints.ss.p[index], datapoints.vs.p[index], datapoints.is.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_querycondition_get_mask_various_masks() { struct { size_t n; uint32_t *p; } ss; struct { size_t n; uint32_t *p; } vs; struct { size_t n; uint32_t *p; } is; }
