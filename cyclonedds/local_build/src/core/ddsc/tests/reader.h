#define CU_TheoryDataPointsSize_ddsc_reader_create_valid(datapoints) ( datapoints.ent.n )
#define CU_TheoryDataPointsSlice_ddsc_reader_create_valid(datapoints, index) ( datapoints.ent.p[index], datapoints.qos.p[index], datapoints.listener.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_reader_create_valid() { struct { size_t n; dds_entity_t * *p; } ent; struct { size_t n; dds_qos_t ** *p; } qos; struct { size_t n; dds_listener_t ** *p; } listener; }
#define CU_TheoryDataPointsSize_ddsc_reader_create_non_participants_non_topics(datapoints) ( datapoints.par.n )
#define CU_TheoryDataPointsSlice_ddsc_reader_create_non_participants_non_topics(datapoints, index) ( datapoints.par.p[index], datapoints.top.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_reader_create_non_participants_non_topics() { struct { size_t n; dds_entity_t * *p; } par; struct { size_t n; dds_entity_t * *p; } top; }
#define CU_TheoryDataPointsSize_ddsc_read_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_read_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.bufsz.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; size_t *p; } bufsz; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_read_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_wl_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_read_wl_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_wl_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_read_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_mask_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_read_mask_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.bufsz.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_mask_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; size_t *p; } bufsz; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_read_mask_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_mask_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_mask_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_mask_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_mask_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_mask_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_mask_wl_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_read_mask_wl_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_mask_wl_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_read_mask_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_mask_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_mask_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_read_mask_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_read_mask_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_mask_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_take_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.bufsz.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; size_t *p; } bufsz; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_wl_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_take_wl_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_wl_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_mask_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_take_mask_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.bufsz.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_mask_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; size_t *p; } bufsz; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_mask_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_mask_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_mask_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_mask_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_mask_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_mask_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_mask_wl_invalid_buffers(datapoints) ( datapoints.buf.n )
#define CU_TheoryDataPointsSlice_ddsc_take_mask_wl_invalid_buffers(datapoints, index) ( datapoints.buf.p[index], datapoints.si.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_mask_wl_invalid_buffers() { struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_mask_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_mask_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_mask_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_mask_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_mask_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_mask_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
