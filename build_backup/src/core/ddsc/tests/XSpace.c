/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: XSpace.c
  Source: XSpace.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#include "XSpace.h"

static const uint32_t XSpace_XType1_ops [] =
{
  /* XType1 */
  DDS_OP_PLC,
  DDS_OP_PLM | 7, 1u,
  DDS_OP_PLM | 8, 2u,
  DDS_OP_PLM | 9, 3u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType1, long_1),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType1, long_2),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_2BY, offsetof (XSpace_XType1, bm_3),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType1_desc =
{
  .m_size = sizeof (XSpace_XType1),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType1",
  .m_keys = NULL,
  .m_nops = 8,
  .m_ops = XSpace_XType1_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType1a_ops [] =
{
  /* XType1a */
  DDS_OP_PLC,
  DDS_OP_PLM | 7, 1u,
  DDS_OP_PLM | 8, 2u,
  DDS_OP_PLM | 9, 3u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType1a, long_1),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType1a, long_2),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_2BY, offsetof (XSpace_XType1a, bm_3),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType1a_desc =
{
  .m_size = sizeof (XSpace_XType1a),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType1a",
  .m_keys = NULL,
  .m_nops = 8,
  .m_ops = XSpace_XType1a_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType2_ops [] =
{
  /* XType2 */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType2, long_1),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType2, long_2),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType2_desc =
{
  .m_size = sizeof (XSpace_XType2),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType2",
  .m_keys = NULL,
  .m_nops = 4,
  .m_ops = XSpace_XType2_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType2a_ops [] =
{
  /* XType2a */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType2a, long_1),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType2a, long_2),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType2a, long_3),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType2a_desc =
{
  .m_size = sizeof (XSpace_XType2a),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType2a",
  .m_keys = NULL,
  .m_nops = 5,
  .m_ops = XSpace_XType2a_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType3_1_ops [] =
{
  /* XType3_1 */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3_1, long_4),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3_1, long_5),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType3_1_desc =
{
  .m_size = sizeof (XSpace_XType3_1),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType3_1",
  .m_keys = NULL,
  .m_nops = 4,
  .m_ops = XSpace_XType3_1_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType3_1a_ops [] =
{
  /* XType3_1a */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3_1a, long_4),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType3_1a_desc =
{
  .m_size = sizeof (XSpace_XType3_1a),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType3_1a",
  .m_keys = NULL,
  .m_nops = 3,
  .m_ops = XSpace_XType3_1a_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType3_ops [] =
{
  /* XType3 */
  DDS_OP_PLC,
  DDS_OP_PLM | 5, 2u,
  DDS_OP_PLM | 6, 3u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3, long_2),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (XSpace_XType3, struct_3), (3u << 16u) + 4u /* XType3_1 */,
  DDS_OP_RTS,

  /* XType3_1 */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3_1, long_4),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3_1, long_5),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType3_desc =
{
  .m_size = sizeof (XSpace_XType3),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType3",
  .m_keys = NULL,
  .m_nops = 10,
  .m_ops = XSpace_XType3_ops,
  .m_meta = ""
};

static const uint32_t XSpace_XType3a_ops [] =
{
  /* XType3a */
  DDS_OP_PLC,
  DDS_OP_PLM | 7, 1u,
  DDS_OP_PLM | 8, 2u,
  DDS_OP_PLM | 9, 3u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3a, long_1),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3a, long_2),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (XSpace_XType3a, struct_3), (3u << 16u) + 4u /* XType3_1a */,
  DDS_OP_RTS,

  /* XType3_1a */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (XSpace_XType3_1a, long_4),
  DDS_OP_RTS
};

const dds_topic_descriptor_t XSpace_XType3a_desc =
{
  .m_size = sizeof (XSpace_XType3a),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "XSpace::XType3a",
  .m_keys = NULL,
  .m_nops = 11,
  .m_ops = XSpace_XType3a_ops,
  .m_meta = ""
};

