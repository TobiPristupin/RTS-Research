/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: ddsi_xt_typelookup.h
  Source: ddsi_xt_typelookup.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#ifndef DDSI_XT_TYPELOOKUP_H
#define DDSI_XT_TYPELOOKUP_H

#include "dds/ddsi/ddsi_xt_typeinfo.h"
#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t DDS_GuidPrefix_t[12];

#define DDS_GuidPrefix_t__alloc() \
((DDS_GuidPrefix_t*) dds_alloc (sizeof (DDS_GuidPrefix_t)));

typedef struct DDS_EntityId_t
{
  uint8_t entityKey[3];
  uint8_t entityKind;
} DDS_EntityId_t;

typedef struct DDS_GUID_t
{
  DDS_GuidPrefix_t guidPrefix;
  struct DDS_EntityId_t entityId;
} DDS_GUID_t;

typedef struct DDS_SequenceNumber
{
  int32_t high;
  uint32_t low;
} DDS_SequenceNumber;

typedef struct DDS_SampleIdentity
{
  struct DDS_GUID_t writer_guid;
  struct DDS_SequenceNumber sequence_number;
} DDS_SampleIdentity;

#define DDS_DDS_RETCODE_OK 0
typedef uint8_t DDS_RPC_UnknownOperation;

#define DDS_RPC_UnknownOperation__alloc() \
((DDS_RPC_UnknownOperation*) dds_alloc (sizeof (DDS_RPC_UnknownOperation)));

typedef uint8_t DDS_RPC_UnknownException;

#define DDS_RPC_UnknownException__alloc() \
((DDS_RPC_UnknownException*) dds_alloc (sizeof (DDS_RPC_UnknownException)));

typedef uint8_t DDS_RPC_UnusedMember;

#define DDS_RPC_UnusedMember__alloc() \
((DDS_RPC_UnusedMember*) dds_alloc (sizeof (DDS_RPC_UnusedMember)));

typedef enum DDS_RPC_RemoteExceptionCode
{
  DDS_RPC_REMOTE_EX_OK,
  DDS_RPC_REMOTE_EX_UNSUPPORTED,
  DDS_RPC_REMOTE_EX_INVALID_ARGUMENT,
  DDS_RPC_REMOTE_EX_OUT_OF_RESOURCES,
  DDS_RPC_REMOTE_EX_UNKNOWN_OPERATION,
  DDS_RPC_REMOTE_EX_UNKNOWN_EXCEPTION
} DDS_RPC_RemoteExceptionCode;

#define DDS_RPC_RemoteExceptionCode__alloc() \
((DDS_RPC_RemoteExceptionCode*) dds_alloc (sizeof (DDS_RPC_RemoteExceptionCode)));

typedef char DDS_RPC_InstanceName[256];

#define DDS_RPC_InstanceName__alloc() \
((DDS_RPC_InstanceName*) dds_alloc (sizeof (DDS_RPC_InstanceName)));

typedef struct DDS_RPC_RequestHeader
{
  struct DDS_SampleIdentity requestId;
  DDS_RPC_InstanceName instanceName;
} DDS_RPC_RequestHeader;

typedef struct DDS_RPC_ReplyHeader
{
  struct DDS_SampleIdentity relatedRequestId;
  DDS_RPC_RemoteExceptionCode remoteEx;
} DDS_RPC_ReplyHeader;

#define DDS_Builtin_TypeLookup_getTypes_HashId 25318099
#define DDS_Builtin_TypeLookup_getDependencies_HashId 95091505
#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIER_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIER_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifier
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifier *_buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifier;

#define dds_sequence_DDS_XTypes_TypeIdentifier__alloc() \
((dds_sequence_DDS_XTypes_TypeIdentifier*) dds_alloc (sizeof (dds_sequence_DDS_XTypes_TypeIdentifier)));

#define dds_sequence_DDS_XTypes_TypeIdentifier_allocbuf(l) \
((struct DDS_XTypes_TypeIdentifier *) dds_alloc ((l) * sizeof (struct DDS_XTypes_TypeIdentifier)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIER_DEFINED */

typedef struct DDS_Builtin_TypeLookup_getTypes_In
{
  dds_sequence_DDS_XTypes_TypeIdentifier type_ids;
} DDS_Builtin_TypeLookup_getTypes_In;

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifierTypeObjectPair *_buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair;

#define dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair__alloc() \
((dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair*) dds_alloc (sizeof (dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair)));

#define dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair_allocbuf(l) \
((struct DDS_XTypes_TypeIdentifierTypeObjectPair *) dds_alloc ((l) * sizeof (struct DDS_XTypes_TypeIdentifierTypeObjectPair)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERTYPEOBJECTPAIR_DEFINED */

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERPAIR_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERPAIR_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifierPair
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifierPair *_buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifierPair;

#define dds_sequence_DDS_XTypes_TypeIdentifierPair__alloc() \
((dds_sequence_DDS_XTypes_TypeIdentifierPair*) dds_alloc (sizeof (dds_sequence_DDS_XTypes_TypeIdentifierPair)));

#define dds_sequence_DDS_XTypes_TypeIdentifierPair_allocbuf(l) \
((struct DDS_XTypes_TypeIdentifierPair *) dds_alloc ((l) * sizeof (struct DDS_XTypes_TypeIdentifierPair)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERPAIR_DEFINED */

typedef struct DDS_Builtin_TypeLookup_getTypes_Out
{
  dds_sequence_DDS_XTypes_TypeIdentifierTypeObjectPair types;
  dds_sequence_DDS_XTypes_TypeIdentifierPair complete_to_minimal;
} DDS_Builtin_TypeLookup_getTypes_Out;

typedef struct DDS_Builtin_TypeLookup_getTypes_Result
{
  int32_t _d;
  union
  {
    struct DDS_Builtin_TypeLookup_getTypes_Out result;
  } _u;
} DDS_Builtin_TypeLookup_getTypes_Result;

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIER_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIER_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifier
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifier *_buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifier;

#define dds_sequence_DDS_XTypes_TypeIdentifier__alloc() \
((dds_sequence_DDS_XTypes_TypeIdentifier*) dds_alloc (sizeof (dds_sequence_DDS_XTypes_TypeIdentifier)));

#define dds_sequence_DDS_XTypes_TypeIdentifier_allocbuf(l) \
((struct DDS_XTypes_TypeIdentifier *) dds_alloc ((l) * sizeof (struct DDS_XTypes_TypeIdentifier)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIER_DEFINED */

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

typedef struct DDS_Builtin_TypeLookup_getTypeDependencies_In
{
  dds_sequence_DDS_XTypes_TypeIdentifier type_ids;
  dds_sequence_octet continuation_point;
} DDS_Builtin_TypeLookup_getTypeDependencies_In;

#ifndef DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERWITHSIZE_DEFINED
#define DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERWITHSIZE_DEFINED
typedef struct dds_sequence_DDS_XTypes_TypeIdentifierWithSize
{
  uint32_t _maximum;
  uint32_t _length;
  struct DDS_XTypes_TypeIdentifierWithSize *_buffer;
  bool _release;
} dds_sequence_DDS_XTypes_TypeIdentifierWithSize;

#define dds_sequence_DDS_XTypes_TypeIdentifierWithSize__alloc() \
((dds_sequence_DDS_XTypes_TypeIdentifierWithSize*) dds_alloc (sizeof (dds_sequence_DDS_XTypes_TypeIdentifierWithSize)));

#define dds_sequence_DDS_XTypes_TypeIdentifierWithSize_allocbuf(l) \
((struct DDS_XTypes_TypeIdentifierWithSize *) dds_alloc ((l) * sizeof (struct DDS_XTypes_TypeIdentifierWithSize)))
#endif /* DDS_SEQUENCE_DDS_XTYPES_TYPEIDENTIFIERWITHSIZE_DEFINED */

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

typedef struct DDS_Builtin_TypeLookup_getTypeDependencies_Out
{
  dds_sequence_DDS_XTypes_TypeIdentifierWithSize dependent_typeids;
  dds_sequence_octet continuation_point;
} DDS_Builtin_TypeLookup_getTypeDependencies_Out;

typedef struct DDS_Builtin_TypeLookup_getTypeDependencies_Result
{
  int32_t _d;
  union
  {
    struct DDS_Builtin_TypeLookup_getTypeDependencies_Out result;
  } _u;
} DDS_Builtin_TypeLookup_getTypeDependencies_Result;

typedef struct DDS_Builtin_TypeLookup_Call
{
  int32_t _d;
  union
  {
    struct DDS_Builtin_TypeLookup_getTypes_In getTypes;
    struct DDS_Builtin_TypeLookup_getTypeDependencies_In getTypeDependencies;
  } _u;
} DDS_Builtin_TypeLookup_Call;

typedef struct DDS_Builtin_TypeLookup_Request
{
  struct DDS_RPC_RequestHeader header;
  struct DDS_Builtin_TypeLookup_Call data;
} DDS_Builtin_TypeLookup_Request;

DDS_EXPORT extern const dds_topic_descriptor_t DDS_Builtin_TypeLookup_Request_desc;

#define DDS_Builtin_TypeLookup_Request__alloc() \
((DDS_Builtin_TypeLookup_Request*) dds_alloc (sizeof (DDS_Builtin_TypeLookup_Request)));

#define DDS_Builtin_TypeLookup_Request_free(d,o) \
dds_sample_free ((d), &DDS_Builtin_TypeLookup_Request_desc, (o))

typedef struct DDS_Builtin_TypeLookup_Return
{
  int32_t _d;
  union
  {
    struct DDS_Builtin_TypeLookup_getTypes_Result getType;
    struct DDS_Builtin_TypeLookup_getTypeDependencies_Result getTypeDependencies;
  } _u;
} DDS_Builtin_TypeLookup_Return;

typedef struct DDS_Builtin_TypeLookup_Reply
{
  struct DDS_RPC_RequestHeader header;
  struct DDS_Builtin_TypeLookup_Return return_data;
} DDS_Builtin_TypeLookup_Reply;

DDS_EXPORT extern const dds_topic_descriptor_t DDS_Builtin_TypeLookup_Reply_desc;

#define DDS_Builtin_TypeLookup_Reply__alloc() \
((DDS_Builtin_TypeLookup_Reply*) dds_alloc (sizeof (DDS_Builtin_TypeLookup_Reply)));

#define DDS_Builtin_TypeLookup_Reply_free(d,o) \
dds_sample_free ((d), &DDS_Builtin_TypeLookup_Reply_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSI_XT_TYPELOOKUP_H */