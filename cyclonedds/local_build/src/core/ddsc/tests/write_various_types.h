#define CU_TheoryDataPointsSize_ddsc_writetypes_various(datapoints) ( datapoints.desc.n )
#define CU_TheoryDataPointsSlice_ddsc_writetypes_various(datapoints, index) ( datapoints.desc.p[index], datapoints.cmp.p[index], datapoints.nsamples.p[index], datapoints.samples.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_writetypes_various() { struct { size_t n; const dds_topic_descriptor_t * *p; } desc; struct { size_t n; compare_fn_t *p; } cmp; struct { size_t n; size_t *p; } nsamples; struct { size_t n; const struct sample * *p; } samples; }
