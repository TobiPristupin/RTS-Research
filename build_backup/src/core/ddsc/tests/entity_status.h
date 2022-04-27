#define CU_TheoryDataPointsSize_ddsc_get_enabled_status_bad_param(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_get_enabled_status_bad_param(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_enabled_status_bad_param() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_get_enabled_status_status_ok(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_get_enabled_status_status_ok(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_enabled_status_status_ok() { struct { size_t n; dds_entity_t * *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_set_enabled_status_bad_param(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_set_enabled_status_bad_param(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_set_enabled_status_bad_param() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_set_enabled_status_status_ok(datapoints) ( datapoints.entity.n )
#define CU_TheoryDataPointsSlice_ddsc_set_enabled_status_status_ok(datapoints, index) ( datapoints.entity.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_set_enabled_status_status_ok() { struct { size_t n; dds_entity_t * *p; } entity; }
#define CU_TheoryDataPointsSize_ddsc_read_status_bad_param(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_read_status_bad_param(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_status_bad_param() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_read_status_status_ok(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_read_status_status_ok(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_read_status_status_ok() { struct { size_t n; dds_entity_t * *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_take_status_bad_param(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_take_status_bad_param(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_status_bad_param() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_take_status_status_ok(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_take_status_status_ok(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_take_status_status_ok() { struct { size_t n; dds_entity_t * *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_get_status_changes_bad_param(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_get_status_changes_bad_param(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_status_changes_bad_param() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_get_status_changes_status_ok(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_get_status_changes_status_ok(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_status_changes_status_ok() { struct { size_t n; dds_entity_t * *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_triggered_bad_param(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_triggered_bad_param(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_triggered_bad_param() { struct { size_t n; dds_entity_t *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_triggered_status_ok(datapoints) ( datapoints.e.n )
#define CU_TheoryDataPointsSlice_ddsc_triggered_status_ok(datapoints, index) ( datapoints.e.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_triggered_status_ok() { struct { size_t n; dds_entity_t * *p; } e; }
#define CU_TheoryDataPointsSize_ddsc_get_inconsistent_topic_status_bad_params(datapoints) ( datapoints.topic.n )
#define CU_TheoryDataPointsSlice_ddsc_get_inconsistent_topic_status_bad_params(datapoints, index) ( datapoints.topic.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_inconsistent_topic_status_bad_params() { struct { size_t n; dds_entity_t *p; } topic; }
#define CU_TheoryDataPointsSize_ddsc_get_inconsistent_topic_status_non_topics(datapoints) ( datapoints.topic.n )
#define CU_TheoryDataPointsSlice_ddsc_get_inconsistent_topic_status_non_topics(datapoints, index) ( datapoints.topic.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_inconsistent_topic_status_non_topics() { struct { size_t n; dds_entity_t * *p; } topic; }
#define CU_TheoryDataPointsSize_ddsc_get_publication_matched_status_bad_params(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_publication_matched_status_bad_params(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_publication_matched_status_bad_params() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_publication_matched_status_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_publication_matched_status_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_publication_matched_status_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_liveliness_lost_status_bad_params(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_liveliness_lost_status_bad_params(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_liveliness_lost_status_bad_params() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_liveliness_lost_status_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_liveliness_lost_status_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_liveliness_lost_status_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_offered_deadline_missed_status_bad_params(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_offered_deadline_missed_status_bad_params(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_offered_deadline_missed_status_bad_params() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_offered_deadline_missed_status_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_offered_deadline_missed_status_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_offered_deadline_missed_status_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_offered_incompatible_qos_status_bad_params(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_offered_incompatible_qos_status_bad_params(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_offered_incompatible_qos_status_bad_params() { struct { size_t n; dds_entity_t *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_offered_incompatible_qos_status_non_writers(datapoints) ( datapoints.writer.n )
#define CU_TheoryDataPointsSlice_ddsc_get_offered_incompatible_qos_status_non_writers(datapoints, index) ( datapoints.writer.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_offered_incompatible_qos_status_non_writers() { struct { size_t n; dds_entity_t * *p; } writer; }
#define CU_TheoryDataPointsSize_ddsc_get_subscription_matched_status_bad_params(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_subscription_matched_status_bad_params(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_subscription_matched_status_bad_params() { struct { size_t n; dds_entity_t *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_subscription_matched_status_non_readers(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_subscription_matched_status_non_readers(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_subscription_matched_status_non_readers() { struct { size_t n; dds_entity_t * *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_liveliness_changed_status_bad_params(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_liveliness_changed_status_bad_params(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_liveliness_changed_status_bad_params() { struct { size_t n; dds_entity_t *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_liveliness_changed_status_non_readers(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_liveliness_changed_status_non_readers(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_liveliness_changed_status_non_readers() { struct { size_t n; dds_entity_t * *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_sample_rejected_status_bad_params(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_sample_rejected_status_bad_params(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_sample_rejected_status_bad_params() { struct { size_t n; dds_entity_t *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_sample_rejected_status_non_readers(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_sample_rejected_status_non_readers(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_sample_rejected_status_non_readers() { struct { size_t n; dds_entity_t * *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_sample_lost_status_bad_params(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_sample_lost_status_bad_params(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_sample_lost_status_bad_params() { struct { size_t n; dds_entity_t *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_sample_lost_status_non_readers(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_sample_lost_status_non_readers(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_sample_lost_status_non_readers() { struct { size_t n; dds_entity_t * *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_requested_deadline_missed_status_bad_params(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_requested_deadline_missed_status_bad_params(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_requested_deadline_missed_status_bad_params() { struct { size_t n; dds_entity_t *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_requested_deadline_missed_status_non_readers(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_requested_deadline_missed_status_non_readers(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_requested_deadline_missed_status_non_readers() { struct { size_t n; dds_entity_t * *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_requested_incompatible_qos_status_bad_params(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_requested_incompatible_qos_status_bad_params(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_requested_incompatible_qos_status_bad_params() { struct { size_t n; dds_entity_t *p; } reader; }
#define CU_TheoryDataPointsSize_ddsc_get_requested_incompatible_qos_status_non_readers(datapoints) ( datapoints.reader.n )
#define CU_TheoryDataPointsSlice_ddsc_get_requested_incompatible_qos_status_non_readers(datapoints, index) ( datapoints.reader.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_get_requested_incompatible_qos_status_non_readers() { struct { size_t n; dds_entity_t * *p; } reader; }
