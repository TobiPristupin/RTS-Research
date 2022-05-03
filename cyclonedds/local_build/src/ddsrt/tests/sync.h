#define CU_TheoryDataPointsSize_ddsrt_sync_rwlock_trylock_conc(datapoints) ( datapoints.lock.n )
#define CU_TheoryDataPointsSlice_ddsrt_sync_rwlock_trylock_conc(datapoints, index) ( datapoints.lock.p[index], datapoints.trylock.p[index], datapoints.exp.p[index] )
#define CU_TheoryDataPointsTypedef_ddsrt_sync_rwlock_trylock_conc() { struct { size_t n; uint32_t *p; } lock; struct { size_t n; uint32_t *p; } trylock; struct { size_t n; uint32_t *p; } exp; }
