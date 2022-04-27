#define CU_TheoryDataPointsSize_ddsc_register_instance_invalid_params(datapoints) ( datapoints.hndl2.n )
#define CU_TheoryDataPointsSlice_ddsc_register_instance_invalid_params(datapoints, index) ( datapoints.hndl2.p[index], datapoints.datap.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_register_instance_invalid_params() { struct { size_t n; dds_instance_handle_t * *p; } hndl2; struct { size_t n; void * *p; } datap; }
#define CU_TheoryDataPointsSize_ddsc_register_instance_invalid_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_register_instance_invalid_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_register_instance_invalid_writers() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_register_instance_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_register_instance_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_register_instance_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
