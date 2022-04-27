#define CU_TheoryDataPointsSize_ddsc_waitset_create_invalid_params(datapoints) ( datapoints.par.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_create_invalid_params(datapoints, index) ( datapoints.par.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_create_invalid_params() { struct { size_t n; dds_entity_t *p; } par; }
#define CU_TheoryDataPointsSize_ddsc_waitset_create_non_participants(datapoints) ( datapoints.par.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_create_non_participants(datapoints, index) ( datapoints.par.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_create_non_participants() { struct { size_t n; dds_entity_t * *p; } par; }
#define CU_TheoryDataPointsSize_ddsc_waitset_attach_invalid_params(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_attach_invalid_params(datapoints, index) ( datapoints.e.p[index], datapoints.a.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_attach_invalid_params() { struct { size_t n; dds_entity_t *p; } e; struct { size_t n; dds_attach_t *p; } a; }
#define CU_TheoryDataPointsSize_ddsc_waitset_attach_invalid_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_attach_invalid_waitsets(datapoints, index) ( datapoints.ws.p[index], datapoints.a.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_attach_invalid_waitsets() { struct { size_t n; dds_entity_t *p; } ws; struct { size_t n; dds_attach_t *p; } a; }
#define CU_TheoryDataPointsSize_ddsc_waitset_attach_non_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_attach_non_waitsets(datapoints, index) ( datapoints.ws.p[index], datapoints.e.p[index], datapoints.a.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_attach_non_waitsets() { struct { size_t n; dds_entity_t * *p; } ws; struct { size_t n; dds_entity_t * *p; } e; struct { size_t n; dds_attach_t *p; } a; }
#define CU_TheoryDataPointsSize_ddsc_waitset_attach_scoping(datapoints) ( datapoints.owner.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_attach_scoping(datapoints, index) ( datapoints.owner.p[index], datapoints.ok1.p[index], datapoints.ok2.p[index], datapoints.fail.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_attach_scoping() { struct { size_t n; int *p; } owner; struct { size_t n; int *p; } ok1; struct { size_t n; int *p; } ok2; struct { size_t n; int *p; } fail; }
#define CU_TheoryDataPointsSize_ddsc_waitset_attach_detach_valid_entities(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_attach_detach_valid_entities(datapoints, index) ( datapoints.ws.p[index], datapoints.e.p[index], datapoints.a.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_attach_detach_valid_entities() { struct { size_t n; dds_entity_t * *p; } ws; struct { size_t n; dds_entity_t * *p; } e; struct { size_t n; dds_attach_t *p; } a; }
#define CU_TheoryDataPointsSize_ddsc_waitset_detach_invalid_params(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_detach_invalid_params(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_detach_invalid_params() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_waitset_detach_invalid_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_detach_invalid_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_detach_invalid_waitsets() { struct { size_t n; dds_entity_t *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_detach_valid_entities(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_detach_valid_entities(datapoints, index) ( datapoints.ws.p[index], datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_detach_valid_entities() { struct { size_t n; dds_entity_t * *p; } ws; struct { size_t n; dds_entity_t * *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_waitset_set_trigger_invalid_params(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_set_trigger_invalid_params(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_set_trigger_invalid_params() { struct { size_t n; dds_entity_t *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_set_trigger_non_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_set_trigger_non_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_set_trigger_non_waitsets() { struct { size_t n; dds_entity_t * *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_wait_invalid_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_wait_invalid_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_wait_invalid_waitsets() { struct { size_t n; dds_entity_t *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_wait_non_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_wait_non_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_wait_non_waitsets() { struct { size_t n; dds_entity_t * *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_wait_invalid_params(datapoints) ( datapoints.a.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_wait_invalid_params(datapoints, index) ( datapoints.a.p[index], datapoints.size.p[index], datapoints.msec.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_wait_invalid_params() { struct { size_t n; dds_attach_t * *p; } a; struct { size_t n; size_t *p; } size; struct { size_t n; int *p; } msec; }
#define CU_TheoryDataPointsSize_ddsc_waitset_wait_until_invalid_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_wait_until_invalid_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_wait_until_invalid_waitsets() { struct { size_t n; dds_entity_t *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_wait_until_non_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_wait_until_non_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_wait_until_non_waitsets() { struct { size_t n; dds_entity_t * *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_wait_until_invalid_params(datapoints) ( datapoints.a.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_wait_until_invalid_params(datapoints, index) ( datapoints.a.p[index], datapoints.size.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_wait_until_invalid_params() { struct { size_t n; dds_attach_t * *p; } a; struct { size_t n; size_t *p; } size; }
#define CU_TheoryDataPointsSize_ddsc_waitset_get_entities_array_sizes(datapoints) ( datapoints.size.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_get_entities_array_sizes(datapoints, index) ( datapoints.size.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_get_entities_array_sizes() { struct { size_t n; size_t *p; } size; }
#define CU_TheoryDataPointsSize_ddsc_waitset_get_entities_invalid_params(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_get_entities_invalid_params(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_get_entities_invalid_params() { struct { size_t n; dds_entity_t *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_get_entities_non_waitsets(datapoints) ( datapoints.ws.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_get_entities_non_waitsets(datapoints, index) ( datapoints.ws.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_get_entities_non_waitsets() { struct { size_t n; dds_entity_t * *p; } ws; }
#define CU_TheoryDataPointsSize_ddsc_waitset_triggering_after_listener(datapoints) ( datapoints.use_nop_listener.n )
#define CU_TheoryDataPointsSlice_ddsc_waitset_triggering_after_listener(datapoints, index) ( datapoints.use_nop_listener.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_waitset_triggering_after_listener() { struct { size_t n; bool *p; } use_nop_listener; }
