#define CU_TheoryDataPointsSize_ddsc_unregister_instance_invalid_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_invalid_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_invalid_writers() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ts_invalid_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ts_invalid_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ts_invalid_writers() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ts_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ts_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ts_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ih_invalid_handles(datapoints) ( datapoints.handle.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ih_invalid_handles(datapoints, index) ( datapoints.handle.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ih_invalid_handles() { struct { size_t n; dds_instance_handle_t *p; } handle; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ih_invalid_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ih_invalid_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ih_invalid_writers() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ih_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ih_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ih_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ih_ts_invalid_handles(datapoints) ( datapoints.handle.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ih_ts_invalid_handles(datapoints, index) ( datapoints.handle.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ih_ts_invalid_handles() { struct { size_t n; dds_instance_handle_t *p; } handle; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ih_ts_invalid_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ih_ts_invalid_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ih_ts_invalid_writers() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_unregister_instance_ih_ts_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_unregister_instance_ih_ts_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_unregister_instance_ih_ts_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
