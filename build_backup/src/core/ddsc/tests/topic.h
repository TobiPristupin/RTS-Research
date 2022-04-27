#define CU_TheoryDataPointsSize_ddsc_topic_create_valid(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsc_topic_create_valid(datapoints, index) ( datapoints.name.p[index], datapoints.qos.p[index], datapoints.listener.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_topic_create_valid() { struct { size_t n; char * *p; } name; struct { size_t n; dds_qos_t ** *p; } qos; struct { size_t n; dds_listener_t ** *p; } listener; }
#define CU_TheoryDataPointsSize_ddsc_topic_create_invalid_names(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsc_topic_create_invalid_names(datapoints, index) ( datapoints.name.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_topic_create_invalid_names() { struct { size_t n; char * *p; } name; }
#define CU_TheoryDataPointsSize_ddsc_topic_get_name_invalid_params(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsc_topic_get_name_invalid_params(datapoints, index) ( datapoints.name.p[index], datapoints.size.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_topic_get_name_invalid_params() { struct { size_t n; char * *p; } name; struct { size_t n; size_t *p; } size; }
#define CU_TheoryDataPointsSize_ddsc_topic_get_type_name_invalid_params(datapoints) ( datapoints.name.n )
#define CU_TheoryDataPointsSlice_ddsc_topic_get_type_name_invalid_params(datapoints, index) ( datapoints.name.p[index], datapoints.size.p[index] )
#define CU_TheoryDataPointsTypedef_ddsc_topic_get_type_name_invalid_params() { struct { size_t n; char * *p; } name; struct { size_t n; size_t *p; } size; }
