/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
case kind_asm_decl: {
  asm_decl x = CAST(asm_decl, n);

  AST_walk_list(s, d, (node *)&x->asm_stmt);
  break;
}
case kind_data_decl: {
  data_decl x = CAST(data_decl, n);

  AST_walk_list(s, d, (node *)&x->modifiers);
  AST_walk_list(s, d, (node *)&x->decls);
  break;
}
case kind_extension_decl: {
  extension_decl x = CAST(extension_decl, n);

  AST_walk_list(s, d, (node *)&x->decl);
  break;
}
case kind_enumerator: {
  enumerator x = CAST(enumerator, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_function_decl: {
  function_decl x = CAST(function_decl, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->modifiers);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_variable_decl: {
  variable_decl x = CAST(variable_decl, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->asm_stmt);
  break;
}
case kind_field_decl: {
  field_decl x = CAST(field_decl, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_asttype: {
  asttype x = CAST(asttype, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->qualifiers);
  break;
}
case kind_typeof_expr: {
  typeof_expr x = CAST(typeof_expr, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_typeof_type: {
  typeof_type x = CAST(typeof_type, n);

  AST_walk_list(s, d, (node *)&x->asttype);
  break;
}
case kind_attribute: {
  attribute x = CAST(attribute, n);

  AST_walk_list(s, d, (node *)&x->word1);
  break;
}
case kind_gcc_attribute: {
  gcc_attribute x = CAST(gcc_attribute, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->args);
  break;
}
case kind_tag_ref: {
  tag_ref x = CAST(tag_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_struct_ref: {
  struct_ref x = CAST(struct_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_union_ref: {
  union_ref x = CAST(union_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_nested_declarator: {
  nested_declarator x = CAST(nested_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  break;
}
case kind_function_declarator: {
  function_declarator x = CAST(function_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->parms);
  AST_walk_list(s, d, (node *)&x->gparms);
  AST_walk_list(s, d, (node *)&x->qualifiers);
  AST_walk_list(s, d, (node *)&x->return_type);
  break;
}
case kind_pointer_declarator: {
  pointer_declarator x = CAST(pointer_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  break;
}
case kind_qualified_declarator: {
  qualified_declarator x = CAST(qualified_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->modifiers);
  break;
}
case kind_array_declarator: {
  array_declarator x = CAST(array_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_asm_stmt: {
  asm_stmt x = CAST(asm_stmt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->asm_operands1);
  AST_walk_list(s, d, (node *)&x->asm_operands2);
  AST_walk_list(s, d, (node *)&x->asm_clobbers);
  AST_walk_list(s, d, (node *)&x->qualifiers);
  break;
}
case kind_compound_stmt: {
  compound_stmt x = CAST(compound_stmt, n);

  AST_walk_list(s, d, (node *)&x->id_labels);
  AST_walk_list(s, d, (node *)&x->decls);
  AST_walk_list(s, d, (node *)&x->stmts);
  break;
}
case kind_if_stmt: {
  if_stmt x = CAST(if_stmt, n);

  AST_walk_list(s, d, (node *)&x->condition);
  AST_walk_list(s, d, (node *)&x->stmt1);
  AST_walk_list(s, d, (node *)&x->stmt2);
  break;
}
case kind_labeled_stmt: {
  labeled_stmt x = CAST(labeled_stmt, n);

  AST_walk_list(s, d, (node *)&x->label);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_expression_stmt: {
  expression_stmt x = CAST(expression_stmt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_conditional_stmt: {
  conditional_stmt x = CAST(conditional_stmt, n);

  AST_walk_list(s, d, (node *)&x->condition);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_switch_stmt: {
  switch_stmt x = CAST(switch_stmt, n);

  AST_walk_list(s, d, (node *)&x->condition);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_for_stmt: {
  for_stmt x = CAST(for_stmt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  AST_walk_list(s, d, (node *)&x->arg3);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_return_stmt: {
  return_stmt x = CAST(return_stmt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_goto_stmt: {
  goto_stmt x = CAST(goto_stmt, n);

  AST_walk_list(s, d, (node *)&x->id_label);
  break;
}
case kind_computed_goto_stmt: {
  computed_goto_stmt x = CAST(computed_goto_stmt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_unary: {
  unary x = CAST(unary, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_binary: {
  binary x = CAST(binary, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_comma: {
  comma x = CAST(comma, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_sizeof_type: {
  sizeof_type x = CAST(sizeof_type, n);

  AST_walk_list(s, d, (node *)&x->asttype);
  break;
}
case kind_alignof_type: {
  alignof_type x = CAST(alignof_type, n);

  AST_walk_list(s, d, (node *)&x->asttype);
  break;
}
case kind_label_address: {
  label_address x = CAST(label_address, n);

  AST_walk_list(s, d, (node *)&x->id_label);
  break;
}
case kind_cast: {
  cast x = CAST(cast, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->asttype);
  break;
}
case kind_cast_list: {
  cast_list x = CAST(cast_list, n);

  AST_walk_list(s, d, (node *)&x->asttype);
  AST_walk_list(s, d, (node *)&x->init_expr);
  break;
}
case kind_conditional: {
  conditional x = CAST(conditional, n);

  AST_walk_list(s, d, (node *)&x->condition);
  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_compound_expr: {
  compound_expr x = CAST(compound_expr, n);

  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_function_call: {
  function_call x = CAST(function_call, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->args);
  break;
}
case kind_field_ref: {
  field_ref x = CAST(field_ref, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_increment: {
  increment x = CAST(increment, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_comparison: {
  comparison x = CAST(comparison, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_assignment: {
  assignment x = CAST(assignment, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_init_list: {
  init_list x = CAST(init_list, n);

  AST_walk_list(s, d, (node *)&x->args);
  break;
}
case kind_init_specific: {
  init_specific x = CAST(init_specific, n);

  AST_walk_list(s, d, (node *)&x->designator);
  AST_walk_list(s, d, (node *)&x->init_expr);
  break;
}
case kind_designate_index: {
  designate_index x = CAST(designate_index, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_string: {
  string x = CAST(string, n);

  AST_walk_list(s, d, (node *)&x->strings);
  break;
}
case kind_case_label: {
  case_label x = CAST(case_label, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_asm_operand: {
  asm_operand x = CAST(asm_operand, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->string);
  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_nesc_decl: {
  nesc_decl x = CAST(nesc_decl, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  break;
}
case kind_interface: {
  interface x = CAST(interface, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->decls);
  break;
}
case kind_component: {
  component x = CAST(component, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->parms);
  AST_walk_list(s, d, (node *)&x->decls);
  AST_walk_list(s, d, (node *)&x->implementation);
  break;
}
case kind_configuration: {
  configuration x = CAST(configuration, n);

  AST_walk_list(s, d, (node *)&x->decls);
  break;
}
case kind_module: {
  module x = CAST(module, n);

  AST_walk_list(s, d, (node *)&x->decls);
  break;
}
case kind_rp_interface: {
  rp_interface x = CAST(rp_interface, n);

  AST_walk_list(s, d, (node *)&x->decls);
  break;
}
case kind_interface_ref: {
  interface_ref x = CAST(interface_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->args);
  AST_walk_list(s, d, (node *)&x->word2);
  AST_walk_list(s, d, (node *)&x->gparms);
  AST_walk_list(s, d, (node *)&x->attributes);
  break;
}
case kind_component_ref: {
  component_ref x = CAST(component_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->word2);
  AST_walk_list(s, d, (node *)&x->args);
  break;
}
case kind_connection: {
  connection x = CAST(connection, n);

  AST_walk_list(s, d, (node *)&x->ep1);
  AST_walk_list(s, d, (node *)&x->ep2);
  break;
}
case kind_endpoint: {
  endpoint x = CAST(endpoint, n);

  AST_walk_list(s, d, (node *)&x->ids);
  break;
}
case kind_parameterised_identifier: {
  parameterised_identifier x = CAST(parameterised_identifier, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->args);
  break;
}
case kind_generic_declarator: {
  generic_declarator x = CAST(generic_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->parms);
  break;
}
case kind_generic_call: {
  generic_call x = CAST(generic_call, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->args);
  break;
}
case kind_interface_ref_declarator: {
  interface_ref_declarator x = CAST(interface_ref_declarator, n);

  AST_walk_list(s, d, (node *)&x->declarator);
  AST_walk_list(s, d, (node *)&x->word1);
  break;
}
case kind_interface_deref: {
  interface_deref x = CAST(interface_deref, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_component_deref: {
  component_deref x = CAST(component_deref, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_atomic_stmt: {
  atomic_stmt x = CAST(atomic_stmt, n);

  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_nesc_attribute: {
  nesc_attribute x = CAST(nesc_attribute, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_type_argument: {
  type_argument x = CAST(type_argument, n);

  AST_walk_list(s, d, (node *)&x->asttype);
  break;
}
case kind_attribute_ref: {
  attribute_ref x = CAST(attribute_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_enum_ref: {
  enum_ref x = CAST(enum_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_while_stmt: {
  while_stmt x = CAST(while_stmt, n);

  AST_walk_list(s, d, (node *)&x->condition);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_dowhile_stmt: {
  dowhile_stmt x = CAST(dowhile_stmt, n);

  AST_walk_list(s, d, (node *)&x->condition);
  AST_walk_list(s, d, (node *)&x->stmt);
  break;
}
case kind_array_ref: {
  array_ref x = CAST(array_ref, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_dereference: {
  dereference x = CAST(dereference, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_extension_expr: {
  extension_expr x = CAST(extension_expr, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_sizeof_expr: {
  sizeof_expr x = CAST(sizeof_expr, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_alignof_expr: {
  alignof_expr x = CAST(alignof_expr, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_realpart: {
  realpart x = CAST(realpart, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_imagpart: {
  imagpart x = CAST(imagpart, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_address_of: {
  address_of x = CAST(address_of, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_unary_minus: {
  unary_minus x = CAST(unary_minus, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_unary_plus: {
  unary_plus x = CAST(unary_plus, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_conjugate: {
  conjugate x = CAST(conjugate, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_bitnot: {
  bitnot x = CAST(bitnot, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_not: {
  not x = CAST(not, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_preincrement: {
  preincrement x = CAST(preincrement, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_predecrement: {
  predecrement x = CAST(predecrement, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_postincrement: {
  postincrement x = CAST(postincrement, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_postdecrement: {
  postdecrement x = CAST(postdecrement, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  break;
}
case kind_plus: {
  plus x = CAST(plus, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_minus: {
  minus x = CAST(minus, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_times: {
  times x = CAST(times, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_divide: {
  divide x = CAST(divide, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_modulo: {
  modulo x = CAST(modulo, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_lshift: {
  lshift x = CAST(lshift, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_rshift: {
  rshift x = CAST(rshift, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_leq: {
  leq x = CAST(leq, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_geq: {
  geq x = CAST(geq, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_lt: {
  lt x = CAST(lt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_gt: {
  gt x = CAST(gt, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_eq: {
  eq x = CAST(eq, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_ne: {
  ne x = CAST(ne, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_bitand: {
  bitand x = CAST(bitand, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_bitor: {
  bitor x = CAST(bitor, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_bitxor: {
  bitxor x = CAST(bitxor, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_andand: {
  andand x = CAST(andand, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_oror: {
  oror x = CAST(oror, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_assign: {
  assign x = CAST(assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_plus_assign: {
  plus_assign x = CAST(plus_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_minus_assign: {
  minus_assign x = CAST(minus_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_times_assign: {
  times_assign x = CAST(times_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_divide_assign: {
  divide_assign x = CAST(divide_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_modulo_assign: {
  modulo_assign x = CAST(modulo_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_lshift_assign: {
  lshift_assign x = CAST(lshift_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_rshift_assign: {
  rshift_assign x = CAST(rshift_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_bitand_assign: {
  bitand_assign x = CAST(bitand_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_bitor_assign: {
  bitor_assign x = CAST(bitor_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_bitxor_assign: {
  bitxor_assign x = CAST(bitxor_assign, n);

  AST_walk_list(s, d, (node *)&x->arg1);
  AST_walk_list(s, d, (node *)&x->arg2);
  break;
}
case kind_rp_connection: {
  rp_connection x = CAST(rp_connection, n);

  AST_walk_list(s, d, (node *)&x->ep1);
  AST_walk_list(s, d, (node *)&x->ep2);
  break;
}
case kind_eq_connection: {
  eq_connection x = CAST(eq_connection, n);

  AST_walk_list(s, d, (node *)&x->ep1);
  AST_walk_list(s, d, (node *)&x->ep2);
  break;
}
case kind_nx_struct_ref: {
  nx_struct_ref x = CAST(nx_struct_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_nx_union_ref: {
  nx_union_ref x = CAST(nx_union_ref, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->attributes);
  AST_walk_list(s, d, (node *)&x->fields);
  break;
}
case kind_target_attribute: {
  target_attribute x = CAST(target_attribute, n);

  AST_walk_list(s, d, (node *)&x->word1);
  AST_walk_list(s, d, (node *)&x->args);
  break;
}
