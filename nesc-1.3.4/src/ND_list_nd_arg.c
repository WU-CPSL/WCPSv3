/* Automatically generated from nesc-dspec.def, do not edit. */

/* See the copyright notice in nesc-dspec.def */
nd_arg ND_nd_arg_last(nd_arg l){
  if (!l) return NULL;
  while (l->next) l = l->next;
  return l;
}

nd_arg ND_nd_arg_chain(nd_arg l1, nd_arg l2){
  if (!l1) return l2;
  ND_nd_arg_last(l1)->next = l2;
  return l1;
}

int ND_nd_arg_length(nd_arg l){
  int len = 0;

  while (l) 
    {
      l = l->next;
      len++;
    }
  return len;
}

nd_arg ND_nd_arg_reverse(nd_arg l){
  nd_arg last = NULL, next;

  for (;;)
    {
      if (!l)
        return last;
      next = l->next;
      l->next = last;
      last = l;
      l = next;
    }
}

nd_option nd_option_chain(nd_option l1, nd_option l2)
{ return CAST(nd_option, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

nd_arg nd_arg_chain(nd_arg l1, nd_arg l2)
{ return CAST(nd_arg, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

nd_int nd_int_chain(nd_int l1, nd_int l2)
{ return CAST(nd_int, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

nd_token nd_token_chain(nd_token l1, nd_token l2)
{ return CAST(nd_token, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

nd_filter nd_filter_chain(nd_filter l1, nd_filter l2)
{ return CAST(nd_filter, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

ndf_and ndf_and_chain(ndf_and l1, ndf_and l2)
{ return CAST(ndf_and, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

ndf_or ndf_or_chain(ndf_or l1, ndf_or l2)
{ return CAST(ndf_or, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

ndf_not ndf_not_chain(ndf_not l1, ndf_not l2)
{ return CAST(ndf_not, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

ndf_op ndf_op_chain(ndf_op l1, ndf_op l2)
{ return CAST(ndf_op, ND_nd_arg_chain(CAST(nd_arg, l1), CAST(nd_arg, l2))); }

