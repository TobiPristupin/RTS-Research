/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: HelloWorldData.c
  Source: HelloWorldData.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#include "HelloWorldData.h"

static const uint32_t HelloWorldData_Msg_ops [] =
{
  /* Msg */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (HelloWorldData_Msg, userID),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (HelloWorldData_Msg, message),
  DDS_OP_RTS,
  
  /* key: userID */
  DDS_OP_KOF | 1, 0u /* order: 0 */
};

static const dds_key_descriptor_t HelloWorldData_Msg_keys[1] =
{
  { "userID", 5, 0 }
};

const dds_topic_descriptor_t HelloWorldData_Msg_desc =
{
  .m_size = sizeof (HelloWorldData_Msg),
  .m_align = sizeof (char *),
  .m_flagset = DDS_TOPIC_NO_OPTIMIZE | DDS_TOPIC_FIXED_KEY | DDS_TOPIC_FIXED_KEY_XCDR2,
  .m_nkeys = 1u,
  .m_typename = "HelloWorldData::Msg",
  .m_keys = HelloWorldData_Msg_keys,
  .m_nops = 3,
  .m_ops = HelloWorldData_Msg_ops,
  .m_meta = ""
};

