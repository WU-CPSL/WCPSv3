/* Automatically generated from nesc-dspec.def, do not edit. */

/* See the copyright notice in nesc-dspec.def */
/* the dump option NAME(ARGS).
ARGS may be NULL
COUNT is the number of elements in ARGS */
struct ND_nd_option { /* extends nil */
  ND_kind kind;
  const char * name;
  nd_arg sameregion args;
  int count;
};

/* supertype for arguments */
struct ND_nd_arg { /* extends nil */
  ND_kind kind;
  nd_arg next;
};

/* an integer argument VAL */
struct ND_nd_int { /* extends nd_arg */
  ND_kind kind;
  nd_arg next;
  largest_int val;
};

/* some token argument STR */
struct ND_nd_token { /* extends nd_arg */
  ND_kind kind;
  nd_arg next;
  const char * str;
};

/* a filter */
struct ND_nd_filter { /* extends nd_arg */
  ND_kind kind;
  nd_arg next;
};

/* FILTER1 & FILTER2 */
struct ND_ndf_and { /* extends nd_filter */
  ND_kind kind;
  nd_arg next;
  nd_filter sameregion filter1;
  nd_filter sameregion filter2;
};

/* FILTER1 | FILTER2 */
struct ND_ndf_or { /* extends nd_filter */
  ND_kind kind;
  nd_arg next;
  nd_filter sameregion filter1;
  nd_filter sameregion filter2;
};

/* !FILTER1 */
struct ND_ndf_not { /* extends nd_filter */
  ND_kind kind;
  nd_arg next;
  nd_filter sameregion filter1;
};

/* the basic filter NAME(ARGS).
COUNT is the number of elements in ARGS (>= 1)
INFO can be used to save extra information (e.g., compiled regexp info) */
struct ND_ndf_op { /* extends nd_filter */
  ND_kind kind;
  nd_arg next;
  const char * name;
  nd_arg sameregion args;
  int count;
  void * info;
  int filter_index;
};



nd_option new_nd_option(region r, const char * name, nd_arg args, int count);
nd_arg new_nd_arg(region r);
nd_int new_nd_int(region r, largest_int val);
nd_token new_nd_token(region r, const char * str);
nd_filter new_nd_filter(region r);
ndf_and new_ndf_and(region r, nd_filter filter1, nd_filter filter2);
ndf_or new_ndf_or(region r, nd_filter filter1, nd_filter filter2);
ndf_not new_ndf_not(region r, nd_filter filter1);
ndf_op new_ndf_op(region r, const char * name, nd_arg args, int count);
