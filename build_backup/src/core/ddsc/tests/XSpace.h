/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: XSpace.h
  Source: XSpace.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#ifndef DDSC_XSPACE_H
#define DDSC_XSPACE_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef uint16_t XSpace_my_bitmask;
#define XSpace_flag0 (1 << 0)
#define XSpace_flag1 (1 << 1)
typedef struct XSpace_XType1
{
  int32_t long_1;
  int32_t long_2;
  XSpace_my_bitmask bm_3;
} XSpace_XType1;

extern const dds_topic_descriptor_t XSpace_XType1_desc;

#define XSpace_XType1__alloc() \
((XSpace_XType1*) dds_alloc (sizeof (XSpace_XType1)));

#define XSpace_XType1_free(d,o) \
dds_sample_free ((d), &XSpace_XType1_desc, (o))

typedef struct XSpace_XType1a
{
  int32_t long_1;
  int32_t long_2;
  uint16_t bm_3;
} XSpace_XType1a;

extern const dds_topic_descriptor_t XSpace_XType1a_desc;

#define XSpace_XType1a__alloc() \
((XSpace_XType1a*) dds_alloc (sizeof (XSpace_XType1a)));

#define XSpace_XType1a_free(d,o) \
dds_sample_free ((d), &XSpace_XType1a_desc, (o))

typedef struct XSpace_XType2
{
  int32_t long_1;
  int32_t long_2;
} XSpace_XType2;

extern const dds_topic_descriptor_t XSpace_XType2_desc;

#define XSpace_XType2__alloc() \
((XSpace_XType2*) dds_alloc (sizeof (XSpace_XType2)));

#define XSpace_XType2_free(d,o) \
dds_sample_free ((d), &XSpace_XType2_desc, (o))

typedef struct XSpace_XType2a
{
  int32_t long_1;
  int32_t long_2;
  int32_t long_3;
} XSpace_XType2a;

extern const dds_topic_descriptor_t XSpace_XType2a_desc;

#define XSpace_XType2a__alloc() \
((XSpace_XType2a*) dds_alloc (sizeof (XSpace_XType2a)));

#define XSpace_XType2a_free(d,o) \
dds_sample_free ((d), &XSpace_XType2a_desc, (o))

typedef struct XSpace_XType3_1
{
  int32_t long_4;
  int32_t long_5;
} XSpace_XType3_1;

extern const dds_topic_descriptor_t XSpace_XType3_1_desc;

#define XSpace_XType3_1__alloc() \
((XSpace_XType3_1*) dds_alloc (sizeof (XSpace_XType3_1)));

#define XSpace_XType3_1_free(d,o) \
dds_sample_free ((d), &XSpace_XType3_1_desc, (o))

typedef struct XSpace_XType3_1a
{
  int32_t long_4;
} XSpace_XType3_1a;

extern const dds_topic_descriptor_t XSpace_XType3_1a_desc;

#define XSpace_XType3_1a__alloc() \
((XSpace_XType3_1a*) dds_alloc (sizeof (XSpace_XType3_1a)));

#define XSpace_XType3_1a_free(d,o) \
dds_sample_free ((d), &XSpace_XType3_1a_desc, (o))

typedef struct XSpace_XType3
{
  int32_t long_2;
  struct XSpace_XType3_1 struct_3;
} XSpace_XType3;

extern const dds_topic_descriptor_t XSpace_XType3_desc;

#define XSpace_XType3__alloc() \
((XSpace_XType3*) dds_alloc (sizeof (XSpace_XType3)));

#define XSpace_XType3_free(d,o) \
dds_sample_free ((d), &XSpace_XType3_desc, (o))

typedef struct XSpace_XType3a
{
  int32_t long_1;
  int32_t long_2;
  struct XSpace_XType3_1a struct_3;
} XSpace_XType3a;

extern const dds_topic_descriptor_t XSpace_XType3a_desc;

#define XSpace_XType3a__alloc() \
((XSpace_XType3a*) dds_alloc (sizeof (XSpace_XType3a)));

#define XSpace_XType3a_free(d,o) \
dds_sample_free ((d), &XSpace_XType3a_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_XSPACE_H */
