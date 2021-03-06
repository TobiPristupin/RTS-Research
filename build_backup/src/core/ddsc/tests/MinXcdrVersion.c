/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: MinXcdrVersion.c
  Source: MinXcdrVersion.idl
  Cyclone DDS: V0.9.0

*****************************************************************/
#include "MinXcdrVersion.h"

static const uint32_t MinXcdrVersion_t_ops [] =
{
  /* t */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_desc =
{
  .m_size = sizeof (MinXcdrVersion_t),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = MinXcdrVersion_t_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_nested_ops [] =
{
  /* t_nested */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (MinXcdrVersion_t_nested, f1), (3u << 16u) + 4u /* t */,
  DDS_OP_RTS,

  /* t */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_nested_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_nested),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_nested",
  .m_keys = NULL,
  .m_nops = 4,
  .m_ops = MinXcdrVersion_t_nested_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_inherit_ops [] =
{
  /* t_inherit */
  DDS_OP_ADR | DDS_OP_FLAG_BASE | DDS_OP_TYPE_EXT, offsetof (MinXcdrVersion_t_inherit, parent), (3u << 16u) + 6u /* t */,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_inherit, f2),
  DDS_OP_RTS,

  /* t */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_inherit_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_inherit),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_inherit",
  .m_keys = NULL,
  .m_nops = 5,
  .m_ops = MinXcdrVersion_t_inherit_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_opt_ops [] =
{
  /* t_opt */
  DDS_OP_ADR | DDS_OP_FLAG_OPT | DDS_OP_FLAG_EXT | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_opt, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_opt_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_opt),
  .m_align = sizeof (char *),
  .m_flagset = DDS_TOPIC_NO_OPTIMIZE | DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_opt",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = MinXcdrVersion_t_opt_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_ext_ops [] =
{
  /* t_ext */
  DDS_OP_ADR | DDS_OP_FLAG_EXT | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_ext, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_ext_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_ext),
  .m_align = sizeof (char *),
  .m_flagset = DDS_TOPIC_NO_OPTIMIZE | DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_ext",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = MinXcdrVersion_t_ext_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_append_ops [] =
{
  /* t_append */
  DDS_OP_DLC,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_append, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_append_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_append),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_append",
  .m_keys = NULL,
  .m_nops = 3,
  .m_ops = MinXcdrVersion_t_append_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_mut_ops [] =
{
  /* t_mut */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_mut, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_mut_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_mut),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_mut",
  .m_keys = NULL,
  .m_nops = 4,
  .m_ops = MinXcdrVersion_t_mut_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_nested_mut_ops [] =
{
  /* t_nested_mut */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (MinXcdrVersion_t_nested_mut, f1), (3u << 16u) + 4u /* t_mut */,
  DDS_OP_RTS,

  /* t_mut */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_mut, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_nested_mut_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_nested_mut),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_nested_mut",
  .m_keys = NULL,
  .m_nops = 6,
  .m_ops = MinXcdrVersion_t_nested_mut_ops,
  .m_meta = ""
};

static const uint32_t MinXcdrVersion_t_nested_opt_ops [] =
{
  /* t_nested_opt */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (MinXcdrVersion_t_nested_opt, f1), (3u << 16u) + 4u /* t_mut */,
  DDS_OP_RTS,

  /* t_mut */
  DDS_OP_PLC,
  DDS_OP_PLM | 3, 0u,
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MinXcdrVersion_t_mut, f1),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MinXcdrVersion_t_nested_opt_desc =
{
  .m_size = sizeof (MinXcdrVersion_t_nested_opt),
  .m_align = 4u,
  .m_flagset = DDS_TOPIC_FIXED_SIZE,
  .m_nkeys = 0u,
  .m_typename = "MinXcdrVersion::t_nested_opt",
  .m_keys = NULL,
  .m_nops = 6,
  .m_ops = MinXcdrVersion_t_nested_opt_ops,
  .m_meta = ""
};

