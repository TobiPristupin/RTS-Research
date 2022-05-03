#define CU_TheoryDataPointsSize_ddsc_liveliness_pmd_count(datapoints) ( datapoints.kind.n )
#define CU_TheoryDataPointsSlice_ddsc_liveliness_pmd_count(datapoints, index) ( datapoints.kind.p[index], datapoints.ldur.p[index], datapoints.mult.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_liveliness_pmd_count() { struct { size_t n; dds_liveliness_kind_t *p; } kind; struct { size_t n; uint32_t *p; } ldur; struct { size_t n; double *p; } mult; }
#define CU_TheoryDataPointsSize_ddsc_liveliness_expire_liveliness_kinds(datapoints) ( datapoints.ldur.n )
#define CU_TheoryDataPointsSlice_ddsc_liveliness_expire_liveliness_kinds(datapoints, index) ( datapoints.ldur.p[index], datapoints.mult.p[index], datapoints.wr_cnt_auto.p[index], datapoints.wr_cnt_man_pp.p[index], datapoints.wr_cnt_man_tp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_liveliness_expire_liveliness_kinds() { struct { size_t n; uint32_t *p; } ldur; struct { size_t n; double *p; } mult; struct { size_t n; uint32_t *p; } wr_cnt_auto; struct { size_t n; uint32_t *p; } wr_cnt_man_pp; struct { size_t n; uint32_t *p; } wr_cnt_man_tp; }
#define CU_TheoryDataPointsSize_ddsc_liveliness_assert_liveliness(datapoints) ( datapoints.wr_cnt_auto.n )
#define CU_TheoryDataPointsSlice_ddsc_liveliness_assert_liveliness(datapoints, index) ( datapoints.wr_cnt_auto.p[index], datapoints.wr_cnt_man_pp.p[index], datapoints.wr_cnt_man_tp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_liveliness_assert_liveliness() { struct { size_t n; uint32_t *p; } wr_cnt_auto; struct { size_t n; uint32_t *p; } wr_cnt_man_pp; struct { size_t n; uint32_t *p; } wr_cnt_man_tp; }
