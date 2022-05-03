/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: ddsperf_types.h
  Source: ddsperf_types.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#ifndef DDSC_DDSPERF_TYPES_H
#define DDSC_DDSPERF_TYPES_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OneULong
{
  uint32_t seq;
} OneULong;

extern const dds_topic_descriptor_t OneULong_desc;

#define OneULong__alloc() \
((OneULong*) dds_alloc (sizeof (OneULong)));

#define OneULong_free(d,o) \
dds_sample_free ((d), &OneULong_desc, (o))

typedef struct Unkeyed16
{
  uint32_t seq;
  uint8_t baggage[12];
} Unkeyed16;

extern const dds_topic_descriptor_t Unkeyed16_desc;

#define Unkeyed16__alloc() \
((Unkeyed16*) dds_alloc (sizeof (Unkeyed16)));

#define Unkeyed16_free(d,o) \
dds_sample_free ((d), &Unkeyed16_desc, (o))

typedef struct Unkeyed1024
{
  uint32_t seq;
  uint8_t baggage[1020];
} Unkeyed1024;

extern const dds_topic_descriptor_t Unkeyed1024_desc;

#define Unkeyed1024__alloc() \
((Unkeyed1024*) dds_alloc (sizeof (Unkeyed1024)));

#define Unkeyed1024_free(d,o) \
dds_sample_free ((d), &Unkeyed1024_desc, (o))

typedef struct Keyed32
{
  uint32_t seq;
  uint32_t keyval;
  uint8_t baggage[24];
} Keyed32;

extern const dds_topic_descriptor_t Keyed32_desc;

#define Keyed32__alloc() \
((Keyed32*) dds_alloc (sizeof (Keyed32)));

#define Keyed32_free(d,o) \
dds_sample_free ((d), &Keyed32_desc, (o))

typedef struct Keyed256
{
  uint32_t seq;
  uint32_t keyval;
  uint8_t baggage[248];
} Keyed256;

extern const dds_topic_descriptor_t Keyed256_desc;

#define Keyed256__alloc() \
((Keyed256*) dds_alloc (sizeof (Keyed256)));

#define Keyed256_free(d,o) \
dds_sample_free ((d), &Keyed256_desc, (o))

#ifndef DDS_SEQUENCE_OCTET_DEFINED
#define DDS_SEQUENCE_OCTET_DEFINED
typedef struct dds_sequence_octet
{
  uint32_t _maximum;
  uint32_t _length;
  uint8_t *_buffer;
  bool _release;
} dds_sequence_octet;

#define dds_sequence_octet__alloc() \
((dds_sequence_octet*) dds_alloc (sizeof (dds_sequence_octet)));

#define dds_sequence_octet_allocbuf(l) \
((uint8_t *) dds_alloc ((l) * sizeof (uint8_t)))
#endif /* DDS_SEQUENCE_OCTET_DEFINED */

typedef struct KeyedSeq
{
  uint32_t seq;
  uint32_t keyval;
  dds_sequence_octet baggage;
} KeyedSeq;

extern const dds_topic_descriptor_t KeyedSeq_desc;

#define KeyedSeq__alloc() \
((KeyedSeq*) dds_alloc (sizeof (KeyedSeq)));

#define KeyedSeq_free(d,o) \
dds_sample_free ((d), &KeyedSeq_desc, (o))

typedef struct CPUStatThread
{
  char * name;
  int32_t u_pct;
  int32_t s_pct;
} CPUStatThread;

#ifndef DDS_SEQUENCE_CPUSTATTHREAD_DEFINED
#define DDS_SEQUENCE_CPUSTATTHREAD_DEFINED
typedef struct dds_sequence_CPUStatThread
{
  uint32_t _maximum;
  uint32_t _length;
  struct CPUStatThread *_buffer;
  bool _release;
} dds_sequence_CPUStatThread;

#define dds_sequence_CPUStatThread__alloc() \
((dds_sequence_CPUStatThread*) dds_alloc (sizeof (dds_sequence_CPUStatThread)));

#define dds_sequence_CPUStatThread_allocbuf(l) \
((struct CPUStatThread *) dds_alloc ((l) * sizeof (struct CPUStatThread)))
#endif /* DDS_SEQUENCE_CPUSTATTHREAD_DEFINED */

typedef struct CPUStats
{
  char * hostname;
  uint32_t pid;
  double maxrss;
  uint32_t vcsw;
  uint32_t ivcsw;
  bool some_above;
  dds_sequence_CPUStatThread cpu;
} CPUStats;

extern const dds_topic_descriptor_t CPUStats_desc;

#define CPUStats__alloc() \
((CPUStats*) dds_alloc (sizeof (CPUStats)));

#define CPUStats_free(d,o) \
dds_sample_free ((d), &CPUStats_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_DDSPERF_TYPES_H */
