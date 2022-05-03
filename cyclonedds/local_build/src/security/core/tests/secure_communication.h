#define CU_TheoryDataPointsSize_ddssec_secure_communication_multiple_readers(datapoints) ( datapoints.n_dom.n )
#define CU_TheoryDataPointsSlice_ddssec_secure_communication_multiple_readers(datapoints, index) ( datapoints.n_dom.p[index], datapoints.n_pp.p[index], datapoints.n_rd.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_secure_communication_multiple_readers() { struct { size_t n; size_t *p; } n_dom; struct { size_t n; size_t *p; } n_pp; struct { size_t n; size_t *p; } n_rd; }
#define CU_TheoryDataPointsSize_ddssec_secure_communication_multiple_readers_writers(datapoints) ( datapoints.n_rd_dom.n )
#define CU_TheoryDataPointsSlice_ddssec_secure_communication_multiple_readers_writers(datapoints, index) ( datapoints.n_rd_dom.p[index], datapoints.n_rd.p[index], datapoints.n_wr_dom.p[index], datapoints.n_wr.p[index] )
#define CU_TheoryDataPointsTypedef_ddssec_secure_communication_multiple_readers_writers() { struct { size_t n; size_t *p; } n_rd_dom; struct { size_t n; size_t *p; } n_rd; struct { size_t n; size_t *p; } n_wr_dom; struct { size_t n; size_t *p; } n_wr; }
