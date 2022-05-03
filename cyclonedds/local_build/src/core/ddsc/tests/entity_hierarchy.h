#define CU_TheoryDataPointsSize_ddsc_entity_get_participant_valid_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_participant_valid_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_participant_valid_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_participant_deleted_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_participant_deleted_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_participant_deleted_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_participant_invalid_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_participant_invalid_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_participant_invalid_entities() { struct { size_t n; dds_entity_t *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_parent_conditions(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_parent_conditions(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_parent_conditions() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_parent_pubsubtop(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_parent_pubsubtop(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_parent_pubsubtop() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_parent_deleted_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_parent_deleted_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_parent_deleted_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_parent_invalid_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_parent_invalid_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_parent_invalid_entities() { struct { size_t n; dds_entity_t *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_children_conditions(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_children_conditions(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_children_conditions() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_children_deleted_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_children_deleted_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_children_deleted_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_children_invalid_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_children_invalid_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_children_invalid_entities() { struct { size_t n; dds_entity_t *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_topic_data_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_topic_data_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_topic_data_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_topic_deleted_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_topic_deleted_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_topic_deleted_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_topic_invalid_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_topic_invalid_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_topic_invalid_entities() { struct { size_t n; dds_entity_t *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_topic_non_data_entities(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_topic_non_data_entities(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_topic_non_data_entities() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_publisher_invalid_writers(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_publisher_invalid_writers(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_publisher_invalid_writers() { struct { size_t n; dds_entity_t *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_publisher_non_writers(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_publisher_non_writers(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_publisher_non_writers() { struct { size_t n; dds_entity_t * *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_subscriber_readers(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_subscriber_readers(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_subscriber_readers() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_subscriber_deleted_readers(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_subscriber_deleted_readers(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_subscriber_deleted_readers() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_subscriber_invalid_readers(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_subscriber_invalid_readers(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_subscriber_invalid_readers() { struct { size_t n; dds_entity_t *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_subscriber_non_readers(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_subscriber_non_readers(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_subscriber_non_readers() { struct { size_t n; dds_entity_t * *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_datareader_conditions(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_datareader_conditions(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_datareader_conditions() { struct { size_t n; dds_entity_t * *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_datareader_deleted_conds(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_datareader_deleted_conds(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_datareader_deleted_conds() { struct { size_t n; dds_entity_t * *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_datareader_invalid_conds(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_datareader_invalid_conds(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_datareader_invalid_conds() { struct { size_t n; dds_entity_t *p; } cond; }
#define CU_TheoryDataPointsSize_ddsc_entity_get_datareader_non_conds(datapoints) ( datapoints.cond.n )
#define CU_TheoryDataPointsSlice_ddsc_entity_get_datareader_non_conds(datapoints, index) ( datapoints.cond.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_entity_get_datareader_non_conds() { struct { size_t n; dds_entity_t * *p; } cond; }
