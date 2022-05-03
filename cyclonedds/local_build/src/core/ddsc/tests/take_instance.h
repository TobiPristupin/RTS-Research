#define CU_TheoryDataPointsSize_ddsc_take_instance_invalid_params(datapoints) ( datapoints.ent.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_invalid_params(datapoints, index) ( datapoints.ent.p[index], datapoints.buf.p[index], datapoints.si.p[index], datapoints.bufsz.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_invalid_params() { struct { size_t n; dds_entity_t * *p; } ent; struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; size_t *p; } bufsz; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_wl_invalid_params(datapoints) ( datapoints.ent.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_wl_invalid_params(datapoints, index) ( datapoints.ent.p[index], datapoints.buf.p[index], datapoints.si.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_wl_invalid_params() { struct { size_t n; dds_entity_t * *p; } ent; struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_invalid_params(datapoints) ( datapoints.ent.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_invalid_params(datapoints, index) ( datapoints.ent.p[index], datapoints.buf.p[index], datapoints.si.p[index], datapoints.bufsz.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_invalid_params() { struct { size_t n; dds_entity_t * *p; } ent; struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; size_t *p; } bufsz; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_wl_invalid_params(datapoints) ( datapoints.ent.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_wl_invalid_params(datapoints, index) ( datapoints.ent.p[index], datapoints.buf.p[index], datapoints.si.p[index], datapoints.maxs.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_wl_invalid_params() { struct { size_t n; dds_entity_t * *p; } ent; struct { size_t n; void ** *p; } buf; struct { size_t n; dds_sample_info_t * *p; } si; struct { size_t n; uint32_t *p; } maxs; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_invalid_handles(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_invalid_handles(datapoints, index) ( datapoints.rdr.p[index], datapoints.hdl.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_invalid_handles() { struct { size_t n; dds_entity_t * *p; } rdr; struct { size_t n; dds_instance_handle_t *p; } hdl; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_wl_invalid_handles(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_wl_invalid_handles(datapoints, index) ( datapoints.rdr.p[index], datapoints.hdl.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_wl_invalid_handles() { struct { size_t n; dds_entity_t * *p; } rdr; struct { size_t n; dds_instance_handle_t *p; } hdl; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_invalid_handles(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_invalid_handles(datapoints, index) ( datapoints.rdr.p[index], datapoints.hdl.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_invalid_handles() { struct { size_t n; dds_entity_t * *p; } rdr; struct { size_t n; dds_instance_handle_t *p; } hdl; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_wl_invalid_handles(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_wl_invalid_handles(datapoints, index) ( datapoints.rdr.p[index], datapoints.hdl.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_wl_invalid_handles() { struct { size_t n; dds_entity_t * *p; } rdr; struct { size_t n; dds_instance_handle_t *p; } hdl; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_wl_invalid_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_wl_invalid_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_wl_invalid_readers() { struct { size_t n; dds_entity_t *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_wl_non_readers(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_wl_non_readers(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_wl_non_readers() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_wl_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_wl_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_wl_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
#define CU_TheoryDataPointsSize_ddsc_take_instance_mask_wl_already_deleted(datapoints) ( datapoints.rdr.n )
#define CU_TheoryDataPointsSlice_ddsc_take_instance_mask_wl_already_deleted(datapoints, index) ( datapoints.rdr.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_instance_mask_wl_already_deleted() { struct { size_t n; dds_entity_t * *p; } rdr; }
