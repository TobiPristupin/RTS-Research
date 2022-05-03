/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: SecurityCoreTests.h
  Source: SecurityCoreTests.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#ifndef DDSC_SECURITYCORETESTS_H
#define DDSC_SECURITYCORETESTS_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SecurityCoreTests_Type1
{
  int32_t id;
  int32_t value;
} SecurityCoreTests_Type1;

extern const dds_topic_descriptor_t SecurityCoreTests_Type1_desc;

#define SecurityCoreTests_Type1__alloc() \
((SecurityCoreTests_Type1*) dds_alloc (sizeof (SecurityCoreTests_Type1)));

#define SecurityCoreTests_Type1_free(d,o) \
dds_sample_free ((d), &SecurityCoreTests_Type1_desc, (o))

typedef struct SecurityCoreTests_Type2
{
  int32_t id;
  char * text;
} SecurityCoreTests_Type2;

extern const dds_topic_descriptor_t SecurityCoreTests_Type2_desc;

#define SecurityCoreTests_Type2__alloc() \
((SecurityCoreTests_Type2*) dds_alloc (sizeof (SecurityCoreTests_Type2)));

#define SecurityCoreTests_Type2_free(d,o) \
dds_sample_free ((d), &SecurityCoreTests_Type2_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_SECURITYCORETESTS_H */
