/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: CreateWriter.c
  Source: CreateWriter.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#include "CreateWriter.h"

static const uint32_t DiscStress_CreateWriter_Msg_ops [] =
{
  /* Msg */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DiscStress_CreateWriter_Msg, round),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (DiscStress_CreateWriter_Msg, wrseq),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (DiscStress_CreateWriter_Msg, wridx),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (DiscStress_CreateWriter_Msg, histidx),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (DiscStress_CreateWriter_Msg, seq),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DiscStress_CreateWriter_Msg_desc =
{
  .m_size = sizeof (DiscStress_CreateWriter_Msg),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DiscStress::CreateWriter::Msg",
  .m_keys = NULL,
  .m_nops = 6,
  .m_ops = DiscStress_CreateWriter_Msg_ops,
  .m_meta = ""
};
