#define CU_TheoryDataPointsSize_ddsc_read_next_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_next_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_next_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_next_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; }
#define CU_TheoryDataPointsSize_ddsc_read_next_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_next_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_next_wl_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_wl_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_wl_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_next_wl_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_read_next_wl_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_next_wl_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; }
#define CU_TheoryDataPointsSize_ddsc_take_next_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_next_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_next_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_next_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; }
#define CU_TheoryDataPointsSize_ddsc_take_next_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_next_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_next_wl_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_wl_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_wl_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_next_wl_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_take_next_wl_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_next_wl_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; }
