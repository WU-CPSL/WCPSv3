/* Automatically generated from nesc-dspec.def, do not edit. */

/* See the copyright notice in nesc-dspec.def */
nd_arg ND_nd_arg_last(nd_arg l);
nd_arg ND_nd_arg_chain(nd_arg l1, nd_arg l2);
int ND_nd_arg_length(nd_arg l);
nd_arg ND_nd_arg_reverse(nd_arg l);
#define nd_option_reverse(x) CAST(nd_option, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define nd_option_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_nd_option(x) CAST(nd_option, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_nd_option(var, list) for (var = (list); var; var = CAST(nd_option, var->next))
#define nd_arg_reverse(x) CAST(nd_arg, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define nd_arg_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_nd_arg(x) CAST(nd_arg, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_nd_arg(var, list) for (var = (list); var; var = CAST(nd_arg, var->next))
#define nd_int_reverse(x) CAST(nd_int, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define nd_int_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_nd_int(x) CAST(nd_int, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_nd_int(var, list) for (var = (list); var; var = CAST(nd_int, var->next))
#define nd_token_reverse(x) CAST(nd_token, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define nd_token_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_nd_token(x) CAST(nd_token, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_nd_token(var, list) for (var = (list); var; var = CAST(nd_token, var->next))
#define nd_filter_reverse(x) CAST(nd_filter, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define nd_filter_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_nd_filter(x) CAST(nd_filter, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_nd_filter(var, list) for (var = (list); var; var = CAST(nd_filter, var->next))
#define ndf_and_reverse(x) CAST(ndf_and, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define ndf_and_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_ndf_and(x) CAST(ndf_and, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_ndf_and(var, list) for (var = (list); var; var = CAST(ndf_and, var->next))
#define ndf_or_reverse(x) CAST(ndf_or, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define ndf_or_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_ndf_or(x) CAST(ndf_or, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_ndf_or(var, list) for (var = (list); var; var = CAST(ndf_or, var->next))
#define ndf_not_reverse(x) CAST(ndf_not, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define ndf_not_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_ndf_not(x) CAST(ndf_not, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_ndf_not(var, list) for (var = (list); var; var = CAST(ndf_not, var->next))
#define ndf_op_reverse(x) CAST(ndf_op, ND_nd_arg_reverse(CAST(nd_arg, (x))))
#define ndf_op_length(x) ND_nd_arg_length(CAST(nd_arg, (x)))
#define last_ndf_op(x) CAST(ndf_op, ND_nd_arg_last(CAST(nd_arg, (x))))
#define scan_ndf_op(var, list) for (var = (list); var; var = CAST(ndf_op, var->next))
nd_option nd_option_chain(nd_option l1, nd_option l2);
nd_arg nd_arg_chain(nd_arg l1, nd_arg l2);
nd_int nd_int_chain(nd_int l1, nd_int l2);
nd_token nd_token_chain(nd_token l1, nd_token l2);
nd_filter nd_filter_chain(nd_filter l1, nd_filter l2);
ndf_and ndf_and_chain(ndf_and l1, ndf_and l2);
ndf_or ndf_or_chain(ndf_or l1, ndf_or l2);
ndf_not ndf_not_chain(ndf_not l1, ndf_not l2);
ndf_op ndf_op_chain(ndf_op l1, ndf_op l2);
