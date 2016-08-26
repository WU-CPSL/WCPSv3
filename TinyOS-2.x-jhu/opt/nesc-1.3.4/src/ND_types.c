/* Automatically generated from nesc-dspec.def, do not edit. */

/* See the copyright notice in nesc-dspec.def */
nd_option new_nd_option(region r, const char * name, nd_arg args, int count)
{
  nd_option obj = ralloc(r, struct ND_nd_option);

  obj->kind = kind_nd_option;
  obj->name = name;
  obj->args = args;
  obj->count = count;

  return obj;
}

nd_arg new_nd_arg(region r)
{
  nd_arg obj = ralloc(r, struct ND_nd_arg);

  obj->kind = kind_nd_arg;

  return obj;
}

nd_int new_nd_int(region r, largest_int val)
{
  nd_int obj = ralloc(r, struct ND_nd_int);

  obj->kind = kind_nd_int;
  obj->val = val;

  return obj;
}

nd_token new_nd_token(region r, const char * str)
{
  nd_token obj = ralloc(r, struct ND_nd_token);

  obj->kind = kind_nd_token;
  obj->str = str;

  return obj;
}

nd_filter new_nd_filter(region r)
{
  nd_filter obj = ralloc(r, struct ND_nd_filter);

  obj->kind = kind_nd_filter;

  return obj;
}

ndf_and new_ndf_and(region r, nd_filter filter1, nd_filter filter2)
{
  ndf_and obj = ralloc(r, struct ND_ndf_and);

  obj->kind = kind_ndf_and;
  obj->filter1 = filter1;
  obj->filter2 = filter2;

  return obj;
}

ndf_or new_ndf_or(region r, nd_filter filter1, nd_filter filter2)
{
  ndf_or obj = ralloc(r, struct ND_ndf_or);

  obj->kind = kind_ndf_or;
  obj->filter1 = filter1;
  obj->filter2 = filter2;

  return obj;
}

ndf_not new_ndf_not(region r, nd_filter filter1)
{
  ndf_not obj = ralloc(r, struct ND_ndf_not);

  obj->kind = kind_ndf_not;
  obj->filter1 = filter1;

  return obj;
}

ndf_op new_ndf_op(region r, const char * name, nd_arg args, int count)
{
  ndf_op obj = ralloc(r, struct ND_ndf_op);

  obj->kind = kind_ndf_op;
  obj->name = name;
  obj->args = args;
  obj->count = count;

  return obj;
}



ND_kind ND_parent_kind[] = {
  0,
  0,
  kind_nd_arg,
  kind_nd_arg,
  kind_nd_arg,
  kind_nd_filter,
  kind_nd_filter,
  kind_nd_filter,
  kind_nd_filter,
};

ND_kind ND_post_kind[] = {
  postkind_nd_option,
  postkind_nd_arg,
  postkind_nd_int,
  postkind_nd_token,
  postkind_nd_filter,
  postkind_ndf_and,
  postkind_ndf_or,
  postkind_ndf_not,
  postkind_ndf_op,
};

size_t ND_sizeof[] = {
  sizeof(struct ND_nd_option),
  sizeof(struct ND_nd_arg),
  sizeof(struct ND_nd_int),
  sizeof(struct ND_nd_token),
  sizeof(struct ND_nd_filter),
  sizeof(struct ND_ndf_and),
  sizeof(struct ND_ndf_or),
  sizeof(struct ND_ndf_not),
  sizeof(struct ND_ndf_op),
};

type_t ND_typeof[] = {
  rctypeof(struct ND_nd_option),
  rctypeof(struct ND_nd_arg),
  rctypeof(struct ND_nd_int),
  rctypeof(struct ND_nd_token),
  rctypeof(struct ND_nd_filter),
  rctypeof(struct ND_ndf_and),
  rctypeof(struct ND_ndf_or),
  rctypeof(struct ND_ndf_not),
  rctypeof(struct ND_ndf_op),
};

