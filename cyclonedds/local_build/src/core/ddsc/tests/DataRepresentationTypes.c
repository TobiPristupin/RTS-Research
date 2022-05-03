/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: DataRepresentationTypes.c
  Source: DataRepresentationTypes.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#include "DataRepresentationTypes.h"

static const uint32_t DataRepresentationTypes_Type1_ops [] =
{
  /* Type1 */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_EXT, offsetof (DataRepresentationTypes_Type1, t1), (3u << 16u) + 8u /* Subtype1 */,
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (DataRepresentationTypes_Type1, t3),
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_1BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Type1, t2),
  DDS_OP_RTS,

  /* Subtype1 */
  DDS_OP_ADR | DDS_OP_TYPE_1BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Subtype1, s1),
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_8BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Subtype1, s2),
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_1BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Subtype1, s3),
  DDS_OP_RTS,
  
  /* key: t1.s2 */
  DDS_OP_KOF | 2, 0u /* order: 10 */, 2u /* order: 2 */,
  
  /* key: t1.s3 */
  DDS_OP_KOF | 2, 0u /* order: 10 */, 4u /* order: 1 */,
  
  /* key: t2 */
  DDS_OP_KOF | 1, 5u /* order: 5 */
};

static const dds_key_descriptor_t DataRepresentationTypes_Type1_keys[3] =
{
  { "t2", 21, 2 },
  { "t1.s3", 18, 1 },
  { "t1.s2", 15, 0 }
};

const dds_topic_descriptor_t DataRepresentationTypes_Type1_desc =
{
  .m_size = sizeof (DataRepresentationTypes_Type1),
  .m_align = 8u,
  .m_flagset = DDS_TOPIC_NO_OPTIMIZE | DDS_TOPIC_FIXED_KEY | DDS_TOPIC_FIXED_KEY_XCDR2,
  .m_nkeys = 3u,
  .m_typename = "DataRepresentationTypes::Type1",
  .m_keys = DataRepresentationTypes_Type1_keys,
  .m_nops = 8,
  .m_ops = DataRepresentationTypes_Type1_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_Type2_ops [] =
{
  /* Type2 */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_1BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Type2, t1), 64u,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Type2, t2),
  DDS_OP_RTS,
  
  /* key: t1 */
  DDS_OP_KOF | 1, 0u /* order: 0 */
};

static const dds_key_descriptor_t DataRepresentationTypes_Type2_keys[1] =
{
  { "t1", 6, 0 }
};

const dds_topic_descriptor_t DataRepresentationTypes_Type2_desc =
{
  .m_size = sizeof (DataRepresentationTypes_Type2),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 1u,
  .m_typename = "DataRepresentationTypes::Type2",
  .m_keys = DataRepresentationTypes_Type2_keys,
  .m_nops = 3,
  .m_ops = DataRepresentationTypes_Type2_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_Type3_ops [] =
{
  /* Type3 */
  DDS_OP_ADR | DDS_OP_TYPE_1BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Type3, t1),
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_8BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Type3, t2), 10u,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_Type3, t3),
  DDS_OP_RTS,
  
  /* key: t2 */
  DDS_OP_KOF | 1, 2u /* order: 1 */
};

static const dds_key_descriptor_t DataRepresentationTypes_Type3_keys[1] =
{
  { "t2", 8, 0 }
};

const dds_topic_descriptor_t DataRepresentationTypes_Type3_desc =
{
  .m_size = sizeof (DataRepresentationTypes_Type3),
  .m_align = 8u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 1u,
  .m_typename = "DataRepresentationTypes::Type3",
  .m_keys = DataRepresentationTypes_Type3_keys,
  .m_nops = 4,
  .m_ops = DataRepresentationTypes_Type3_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeFinal_ops [] =
{
  /* TypeFinal */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeFinal, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeFinal_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeFinal),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeFinal",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = DataRepresentationTypes_TypeFinal_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeAppendable_ops [] =
{
  /* TypeAppendable */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeAppendable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeAppendable_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeAppendable),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeAppendable",
  .m_keys = NULL,
  .m_nops = 3,
  .m_ops = DataRepresentationTypes_TypeAppendable_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeMutable_ops [] =
{
  /* TypeMutable */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeMutable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeMutable_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeMutable),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeMutable",
  .m_keys = NULL,
  .m_nops = 4,
  .m_ops = DataRepresentationTypes_TypeMutable_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeNestedAppendable_ops [] =
{
  /* TypeNestedAppendable */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (DataRepresentationTypes_TypeNestedAppendable, a), (3u << 16u) + 4u /* TypeAppendable */,
  DDS_OP_RTS,

  /* TypeAppendable */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeAppendable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeNestedAppendable_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeNestedAppendable),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeNestedAppendable",
  .m_keys = NULL,
  .m_nops = 5,
  .m_ops = DataRepresentationTypes_TypeNestedAppendable_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeNestedMutable_ops [] =
{
  /* TypeNestedMutable */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (DataRepresentationTypes_TypeNestedMutable, a), (3u << 16u) + 4u /* TypeMutable */,
  DDS_OP_RTS,

  /* TypeMutable */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeMutable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeNestedMutable_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeNestedMutable),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeNestedMutable",
  .m_keys = NULL,
  .m_nops = 6,
  .m_ops = DataRepresentationTypes_TypeNestedMutable_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeNestedMutableArr_ops [] =
{
  /* TypeNestedMutableArr */
  DDS_OP_ADR | DDS_OP_TYPE_ARR | DDS_OP_SUBTYPE_STU, offsetof (DataRepresentationTypes_TypeNestedMutableArr, a), 5u, (5u << 16u) + 6u /* TypeMutable */, sizeof (DataRepresentationTypes_TypeMutable),
  DDS_OP_RTS,

  /* TypeMutable */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeMutable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeNestedMutableArr_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeNestedMutableArr),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeNestedMutableArr",
  .m_keys = NULL,
  .m_nops = 6,
  .m_ops = DataRepresentationTypes_TypeNestedMutableArr_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeNestedMutableSeq_ops [] =
{
  /* TypeNestedMutableSeq */
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (DataRepresentationTypes_TypeNestedMutableSeq, a), sizeof (DataRepresentationTypes_TypeMutable), (4u << 16u) + 5u /* TypeMutable */,
  DDS_OP_RTS,

  /* TypeMutable */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeMutable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeNestedMutableSeq_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeNestedMutableSeq),
  .m_align = sizeof (char *),
  .m_flagset = DDS_TOPIC_NO_OPTIMIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeNestedMutableSeq",
  .m_keys = NULL,
  .m_nops = 6,
  .m_ops = DataRepresentationTypes_TypeNestedMutableSeq_ops,
  .m_meta = ""
};

static const uint32_t DataRepresentationTypes_TypeNestedMutableUni_ops [] =
{
  /* TypeNestedMutableUni */
  DDS_OP_ADR | DDS_OP_FLAG_MU | DDS_OP_TYPE_UNI | DDS_OP_SUBTYPE_4BY | DDS_OP_FLAG_SGN | DDS_OP_FLAG_DEF, offsetof (DataRepresentationTypes_TypeNestedMutableUni, _d), 3u, (16u << 16u) + 4u,
  DDS_OP_JEQ4 | DDS_OP_TYPE_1BY | 0, 1, offsetof (DataRepresentationTypes_TypeNestedMutableUni, _u.a), 0u,
  DDS_OP_JEQ4 | DDS_OP_TYPE_STU | 9 /* TypeNestedMutable */, 2, offsetof (DataRepresentationTypes_TypeNestedMutableUni, _u.b), 0u,
  DDS_OP_JEQ4 | DDS_OP_TYPE_4BY | 0, 0, offsetof (DataRepresentationTypes_TypeNestedMutableUni, _u.c), 0u,
  DDS_OP_RTS,

  /* TypeNestedMutable */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (DataRepresentationTypes_TypeNestedMutable, a), (3u << 16u) + 4u /* TypeMutable */,
  DDS_OP_RTS,

  /* TypeMutable */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DataRepresentationTypes_TypeMutable, a),
  DDS_OP_RTS
};

const dds_topic_descriptor_t DataRepresentationTypes_TypeNestedMutableUni_desc =
{
  .m_size = sizeof (DataRepresentationTypes_TypeNestedMutableUni),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_NO_OPTIMIZE | DDS_TOPIC_CONTAINS_UNION | DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "DataRepresentationTypes::TypeNestedMutableUni",
  .m_keys = NULL,
  .m_nops = 10,
  .m_ops = DataRepresentationTypes_TypeNestedMutableUni_ops,
  .m_meta = ""
};

