#define CU_TheoryDataPointsSize_ddsc_deadline_writer_types(datapoints) ( datapoints.dur_kind.n )
#define CU_TheoryDataPointsSlice_ddsc_deadline_writer_types(datapoints, index) ( datapoints.dur_kind.p[index], datapoints.rel_kind.p[index], datapoints.hist_kind.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_deadline_writer_types() { struct { size_t n; dds_durability_kind_t *p; } dur_kind; struct { size_t n; dds_reliability_kind_t *p; } rel_kind; struct { size_t n; dds_history_kind_t *p; } hist_kind; }
#define CU_TheoryDataPointsSize_ddsc_deadline_instances(datapoints) ( datapoints.n_inst.n )
#define CU_TheoryDataPointsSlice_ddsc_deadline_instances(datapoints, index) ( datapoints.n_inst.p[index], datapoints.unreg_nth.p[index], datapoints.dispose_nth.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_deadline_instances() { struct { size_t n; int32_t *p; } n_inst; struct { size_t n; uint8_t *p; } unreg_nth; struct { size_t n; uint8_t *p; } dispose_nth; }
