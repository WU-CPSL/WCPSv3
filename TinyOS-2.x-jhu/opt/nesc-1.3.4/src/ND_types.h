/* Automatically generated from nesc-dspec.def, do not edit. */

/* See the copyright notice in nesc-dspec.def */
typedef struct ND_nd_option *nd_option;
typedef struct ND_nd_arg *nd_arg;
typedef struct ND_nd_int *nd_int;
typedef struct ND_nd_token *nd_token;
typedef struct ND_nd_filter *nd_filter;
typedef struct ND_ndf_and *ndf_and;
typedef struct ND_ndf_or *ndf_or;
typedef struct ND_ndf_not *ndf_not;
typedef struct ND_ndf_op *ndf_op;
typedef enum {
  kind_nd_option = 10000,
  postkind_nd_option = 10000,
  kind_nd_arg = 10001,
  postkind_nd_arg = 10008,
  kind_nd_int = 10002,
  postkind_nd_int = 10002,
  kind_nd_token = 10003,
  postkind_nd_token = 10003,
  kind_nd_filter = 10004,
  postkind_nd_filter = 10008,
  kind_ndf_and = 10005,
  postkind_ndf_and = 10005,
  kind_ndf_or = 10006,
  postkind_ndf_or = 10006,
  kind_ndf_not = 10007,
  postkind_ndf_not = 10007,
  kind_ndf_op = 10008,
  postkind_ndf_op = 10008
} ND_kind;

extern ND_kind ND_parent_kind[]; /* indexed by kind - kind_node */

extern ND_kind ND_post_kind[]; /* indexed by kind - kind_node */

extern size_t ND_sizeof[]; /* indexed by kind - kind_node */

extern type_t ND_typeof[]; /* indexed by kind - kind_node */
#define is_nd_option(x) ((x)->kind >= kind_nd_option && (x)->kind <= postkind_nd_option)
#define is_nd_arg(x) ((x)->kind >= kind_nd_arg && (x)->kind <= postkind_nd_arg)
#define is_nd_int(x) ((x)->kind >= kind_nd_int && (x)->kind <= postkind_nd_int)
#define is_nd_token(x) ((x)->kind >= kind_nd_token && (x)->kind <= postkind_nd_token)
#define is_nd_filter(x) ((x)->kind >= kind_nd_filter && (x)->kind <= postkind_nd_filter)
#define is_ndf_and(x) ((x)->kind >= kind_ndf_and && (x)->kind <= postkind_ndf_and)
#define is_ndf_or(x) ((x)->kind >= kind_ndf_or && (x)->kind <= postkind_ndf_or)
#define is_ndf_not(x) ((x)->kind >= kind_ndf_not && (x)->kind <= postkind_ndf_not)
#define is_ndf_op(x) ((x)->kind >= kind_ndf_op && (x)->kind <= postkind_ndf_op)
typedef struct
{
  AST_kind kind;
} *ND_generic;

#ifdef __GNUC__
#define ND_CAST(type, x) ({ND_generic tEmPcast = (ND_generic)(x); if (tEmPcast) assert(is_ ## type(tEmPcast)); (type)(tEmPcast); })
#define ND_CASTPTR(type, x) ({ND_generic *tEmPcast = (ND_generic *)(x); if (tEmPcast && *tEmPcast) assert(is_ ## type(*tEmPcast)); (type *)(tEmPcast); })
#define ND_CASTSRPTR(type, x) ({ND_generic *tEmPcast = (ND_generic *)(x); if (tEmPcast && *tEmPcast) assert(is_ ## type(*tEmPcast)); (type sameregion *)(tEmPcast); })
#else
/* Could also generate some code to make this safe */
#define ND_CAST(type, x) ((type)(x))
#define ND_CASTPTR(type, x) ((type *)(x))
#define ND_CASTSRPTR(type, x) ((type sameregion *)(x))
#endif
