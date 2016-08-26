/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
case kind_node: puts("node"); break;
case kind_declaration: puts("declaration"); break;
case kind_statement: puts("statement"); break;
case kind_expression: puts("expression"); break;
case kind_type_element: puts("type_element"); break;
case kind_declarator: puts("declarator"); break;
case kind_label: puts("label"); break;
case kind_asm_decl: {
  asm_decl x = CAST(asm_decl, n);

  puts("asm_decl");
  pindent(indent); puts("asm_stmt:"); AST_print_list(indent + 1, x->asm_stmt);
  break;
}
case kind_data_decl: {
  data_decl x = CAST(data_decl, n);

  puts("data_decl");
  pindent(indent); puts("modifiers:"); AST_print_list(indent + 1, x->modifiers);
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  break;
}
case kind_extension_decl: {
  extension_decl x = CAST(extension_decl, n);

  puts("extension_decl");
  pindent(indent); puts("decl:"); AST_print_list(indent + 1, x->decl);
  break;
}
case kind_ellipsis_decl: puts("ellipsis_decl"); break;
case kind_enumerator: {
  enumerator x = CAST(enumerator, n);

  puts("enumerator");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_oldidentifier_decl: puts("oldidentifier_decl"); break;
case kind_function_decl: {
  function_decl x = CAST(function_decl, n);

  puts("function_decl");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("modifiers:"); AST_print_list(indent + 1, x->modifiers);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_implicit_decl: puts("implicit_decl"); break;
case kind_variable_decl: {
  variable_decl x = CAST(variable_decl, n);

  puts("variable_decl");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("asm_stmt:"); AST_print_list(indent + 1, x->asm_stmt);
  break;
}
case kind_field_decl: {
  field_decl x = CAST(field_decl, n);

  puts("field_decl");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_asttype: {
  asttype x = CAST(asttype, n);

  puts("asttype");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("qualifiers:"); AST_print_list(indent + 1, x->qualifiers);
  break;
}
case kind_typename: puts("typename"); break;
case kind_typeof_expr: {
  typeof_expr x = CAST(typeof_expr, n);

  puts("typeof_expr");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_typeof_type: {
  typeof_type x = CAST(typeof_type, n);

  puts("typeof_type");
  pindent(indent); puts("asttype:"); AST_print_list(indent + 1, x->asttype);
  break;
}
case kind_attribute: {
  attribute x = CAST(attribute, n);

  puts("attribute");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  break;
}
case kind_gcc_attribute: {
  gcc_attribute x = CAST(gcc_attribute, n);

  puts("gcc_attribute");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
case kind_rid: puts("rid"); break;
case kind_qualifier: puts("qualifier"); break;
case kind_tag_ref: {
  tag_ref x = CAST(tag_ref, n);

  puts("tag_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_struct_ref: {
  struct_ref x = CAST(struct_ref, n);

  puts("struct_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_union_ref: {
  union_ref x = CAST(union_ref, n);

  puts("union_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_nested_declarator: {
  nested_declarator x = CAST(nested_declarator, n);

  puts("nested_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  break;
}
case kind_function_declarator: {
  function_declarator x = CAST(function_declarator, n);

  puts("function_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("parms:"); AST_print_list(indent + 1, x->parms);
  pindent(indent); puts("gparms:"); AST_print_list(indent + 1, x->gparms);
  pindent(indent); puts("qualifiers:"); AST_print_list(indent + 1, x->qualifiers);
  pindent(indent); puts("return_type:"); AST_print_list(indent + 1, x->return_type);
  break;
}
case kind_pointer_declarator: {
  pointer_declarator x = CAST(pointer_declarator, n);

  puts("pointer_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  break;
}
case kind_qualified_declarator: {
  qualified_declarator x = CAST(qualified_declarator, n);

  puts("qualified_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("modifiers:"); AST_print_list(indent + 1, x->modifiers);
  break;
}
case kind_array_declarator: {
  array_declarator x = CAST(array_declarator, n);

  puts("array_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_identifier_declarator: puts("identifier_declarator"); break;
case kind_asm_stmt: {
  asm_stmt x = CAST(asm_stmt, n);

  puts("asm_stmt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("asm_operands1:"); AST_print_list(indent + 1, x->asm_operands1);
  pindent(indent); puts("asm_operands2:"); AST_print_list(indent + 1, x->asm_operands2);
  pindent(indent); puts("asm_clobbers:"); AST_print_list(indent + 1, x->asm_clobbers);
  pindent(indent); puts("qualifiers:"); AST_print_list(indent + 1, x->qualifiers);
  break;
}
case kind_compound_stmt: {
  compound_stmt x = CAST(compound_stmt, n);

  puts("compound_stmt");
  pindent(indent); puts("id_labels:"); AST_print_list(indent + 1, x->id_labels);
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  pindent(indent); puts("stmts:"); AST_print_list(indent + 1, x->stmts);
  break;
}
case kind_if_stmt: {
  if_stmt x = CAST(if_stmt, n);

  puts("if_stmt");
  pindent(indent); puts("condition:"); AST_print_list(indent + 1, x->condition);
  pindent(indent); puts("stmt1:"); AST_print_list(indent + 1, x->stmt1);
  pindent(indent); puts("stmt2:"); AST_print_list(indent + 1, x->stmt2);
  break;
}
case kind_labeled_stmt: {
  labeled_stmt x = CAST(labeled_stmt, n);

  puts("labeled_stmt");
  pindent(indent); puts("label:"); AST_print_list(indent + 1, x->label);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_expression_stmt: {
  expression_stmt x = CAST(expression_stmt, n);

  puts("expression_stmt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_conditional_stmt: {
  conditional_stmt x = CAST(conditional_stmt, n);

  puts("conditional_stmt");
  pindent(indent); puts("condition:"); AST_print_list(indent + 1, x->condition);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_switch_stmt: {
  switch_stmt x = CAST(switch_stmt, n);

  puts("switch_stmt");
  pindent(indent); puts("condition:"); AST_print_list(indent + 1, x->condition);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_for_stmt: {
  for_stmt x = CAST(for_stmt, n);

  puts("for_stmt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  pindent(indent); puts("arg3:"); AST_print_list(indent + 1, x->arg3);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_break_stmt: puts("break_stmt"); break;
case kind_continue_stmt: puts("continue_stmt"); break;
case kind_return_stmt: {
  return_stmt x = CAST(return_stmt, n);

  puts("return_stmt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_goto_stmt: {
  goto_stmt x = CAST(goto_stmt, n);

  puts("goto_stmt");
  pindent(indent); puts("id_label:"); AST_print_list(indent + 1, x->id_label);
  break;
}
case kind_computed_goto_stmt: {
  computed_goto_stmt x = CAST(computed_goto_stmt, n);

  puts("computed_goto_stmt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_empty_stmt: puts("empty_stmt"); break;
case kind_unary: {
  unary x = CAST(unary, n);

  puts("unary");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_binary: {
  binary x = CAST(binary, n);

  puts("binary");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_comma: {
  comma x = CAST(comma, n);

  puts("comma");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_sizeof_type: {
  sizeof_type x = CAST(sizeof_type, n);

  puts("sizeof_type");
  pindent(indent); puts("asttype:"); AST_print_list(indent + 1, x->asttype);
  break;
}
case kind_alignof_type: {
  alignof_type x = CAST(alignof_type, n);

  puts("alignof_type");
  pindent(indent); puts("asttype:"); AST_print_list(indent + 1, x->asttype);
  break;
}
case kind_label_address: {
  label_address x = CAST(label_address, n);

  puts("label_address");
  pindent(indent); puts("id_label:"); AST_print_list(indent + 1, x->id_label);
  break;
}
case kind_cast: {
  cast x = CAST(cast, n);

  puts("cast");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("asttype:"); AST_print_list(indent + 1, x->asttype);
  break;
}
case kind_cast_list: {
  cast_list x = CAST(cast_list, n);

  puts("cast_list");
  pindent(indent); puts("asttype:"); AST_print_list(indent + 1, x->asttype);
  pindent(indent); puts("init_expr:"); AST_print_list(indent + 1, x->init_expr);
  break;
}
case kind_conditional: {
  conditional x = CAST(conditional, n);

  puts("conditional");
  pindent(indent); puts("condition:"); AST_print_list(indent + 1, x->condition);
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_identifier: puts("identifier"); break;
case kind_compound_expr: {
  compound_expr x = CAST(compound_expr, n);

  puts("compound_expr");
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_function_call: {
  function_call x = CAST(function_call, n);

  puts("function_call");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
case kind_field_ref: {
  field_ref x = CAST(field_ref, n);

  puts("field_ref");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_increment: {
  increment x = CAST(increment, n);

  puts("increment");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_comparison: {
  comparison x = CAST(comparison, n);

  puts("comparison");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_assignment: {
  assignment x = CAST(assignment, n);

  puts("assignment");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_init_list: {
  init_list x = CAST(init_list, n);

  puts("init_list");
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
case kind_init_specific: {
  init_specific x = CAST(init_specific, n);

  puts("init_specific");
  pindent(indent); puts("designator:"); AST_print_list(indent + 1, x->designator);
  pindent(indent); puts("init_expr:"); AST_print_list(indent + 1, x->init_expr);
  break;
}
case kind_designator: puts("designator"); break;
case kind_designate_field: puts("designate_field"); break;
case kind_designate_index: {
  designate_index x = CAST(designate_index, n);

  puts("designate_index");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_lexical_cst: puts("lexical_cst"); break;
case kind_string_cst: puts("string_cst"); break;
case kind_string: {
  string x = CAST(string, n);

  puts("string");
  pindent(indent); puts("strings:"); AST_print_list(indent + 1, x->strings);
  break;
}
case kind_id_label: puts("id_label"); break;
case kind_case_label: {
  case_label x = CAST(case_label, n);

  puts("case_label");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_default_label: puts("default_label"); break;
case kind_word: puts("word"); break;
case kind_asm_operand: {
  asm_operand x = CAST(asm_operand, n);

  puts("asm_operand");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("string:"); AST_print_list(indent + 1, x->string);
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_nesc_decl: {
  nesc_decl x = CAST(nesc_decl, n);

  puts("nesc_decl");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  break;
}
case kind_interface: {
  interface x = CAST(interface, n);

  puts("interface");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  break;
}
case kind_component: {
  component x = CAST(component, n);

  puts("component");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("parms:"); AST_print_list(indent + 1, x->parms);
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  pindent(indent); puts("implementation:"); AST_print_list(indent + 1, x->implementation);
  break;
}
case kind_implementation: puts("implementation"); break;
case kind_configuration: {
  configuration x = CAST(configuration, n);

  puts("configuration");
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  break;
}
case kind_module: {
  module x = CAST(module, n);

  puts("module");
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  break;
}
case kind_binary_component: puts("binary_component"); break;
case kind_rp_interface: {
  rp_interface x = CAST(rp_interface, n);

  puts("rp_interface");
  pindent(indent); puts("decls:"); AST_print_list(indent + 1, x->decls);
  break;
}
case kind_interface_ref: {
  interface_ref x = CAST(interface_ref, n);

  puts("interface_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  pindent(indent); puts("word2:"); AST_print_list(indent + 1, x->word2);
  pindent(indent); puts("gparms:"); AST_print_list(indent + 1, x->gparms);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  break;
}
case kind_component_ref: {
  component_ref x = CAST(component_ref, n);

  puts("component_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("word2:"); AST_print_list(indent + 1, x->word2);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
case kind_connection: {
  connection x = CAST(connection, n);

  puts("connection");
  pindent(indent); puts("ep1:"); AST_print_list(indent + 1, x->ep1);
  pindent(indent); puts("ep2:"); AST_print_list(indent + 1, x->ep2);
  break;
}
case kind_endpoint: {
  endpoint x = CAST(endpoint, n);

  puts("endpoint");
  pindent(indent); puts("ids:"); AST_print_list(indent + 1, x->ids);
  break;
}
case kind_parameterised_identifier: {
  parameterised_identifier x = CAST(parameterised_identifier, n);

  puts("parameterised_identifier");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
case kind_generic_declarator: {
  generic_declarator x = CAST(generic_declarator, n);

  puts("generic_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("parms:"); AST_print_list(indent + 1, x->parms);
  break;
}
case kind_generic_call: {
  generic_call x = CAST(generic_call, n);

  puts("generic_call");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
case kind_interface_ref_declarator: {
  interface_ref_declarator x = CAST(interface_ref_declarator, n);

  puts("interface_ref_declarator");
  pindent(indent); puts("declarator:"); AST_print_list(indent + 1, x->declarator);
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  break;
}
case kind_interface_deref: {
  interface_deref x = CAST(interface_deref, n);

  puts("interface_deref");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_component_deref: {
  component_deref x = CAST(component_deref, n);

  puts("component_deref");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_component_typeref: puts("component_typeref"); break;
case kind_atomic_stmt: {
  atomic_stmt x = CAST(atomic_stmt, n);

  puts("atomic_stmt");
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_nesc_attribute: {
  nesc_attribute x = CAST(nesc_attribute, n);

  puts("nesc_attribute");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_type_parm_decl: puts("type_parm_decl"); break;
case kind_type_argument: {
  type_argument x = CAST(type_argument, n);

  puts("type_argument");
  pindent(indent); puts("asttype:"); AST_print_list(indent + 1, x->asttype);
  break;
}
case kind_error_decl: puts("error_decl"); break;
case kind_attribute_ref: {
  attribute_ref x = CAST(attribute_ref, n);

  puts("attribute_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_enum_ref: {
  enum_ref x = CAST(enum_ref, n);

  puts("enum_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_error_stmt: puts("error_stmt"); break;
case kind_while_stmt: {
  while_stmt x = CAST(while_stmt, n);

  puts("while_stmt");
  pindent(indent); puts("condition:"); AST_print_list(indent + 1, x->condition);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_dowhile_stmt: {
  dowhile_stmt x = CAST(dowhile_stmt, n);

  puts("dowhile_stmt");
  pindent(indent); puts("condition:"); AST_print_list(indent + 1, x->condition);
  pindent(indent); puts("stmt:"); AST_print_list(indent + 1, x->stmt);
  break;
}
case kind_error_expr: puts("error_expr"); break;
case kind_array_ref: {
  array_ref x = CAST(array_ref, n);

  puts("array_ref");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_dereference: {
  dereference x = CAST(dereference, n);

  puts("dereference");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_extension_expr: {
  extension_expr x = CAST(extension_expr, n);

  puts("extension_expr");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_sizeof_expr: {
  sizeof_expr x = CAST(sizeof_expr, n);

  puts("sizeof_expr");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_alignof_expr: {
  alignof_expr x = CAST(alignof_expr, n);

  puts("alignof_expr");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_realpart: {
  realpart x = CAST(realpart, n);

  puts("realpart");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_imagpart: {
  imagpart x = CAST(imagpart, n);

  puts("imagpart");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_address_of: {
  address_of x = CAST(address_of, n);

  puts("address_of");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_unary_minus: {
  unary_minus x = CAST(unary_minus, n);

  puts("unary_minus");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_unary_plus: {
  unary_plus x = CAST(unary_plus, n);

  puts("unary_plus");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_conjugate: {
  conjugate x = CAST(conjugate, n);

  puts("conjugate");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_bitnot: {
  bitnot x = CAST(bitnot, n);

  puts("bitnot");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_not: {
  not x = CAST(not, n);

  puts("not");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_preincrement: {
  preincrement x = CAST(preincrement, n);

  puts("preincrement");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_predecrement: {
  predecrement x = CAST(predecrement, n);

  puts("predecrement");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_postincrement: {
  postincrement x = CAST(postincrement, n);

  puts("postincrement");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_postdecrement: {
  postdecrement x = CAST(postdecrement, n);

  puts("postdecrement");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  break;
}
case kind_plus: {
  plus x = CAST(plus, n);

  puts("plus");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_minus: {
  minus x = CAST(minus, n);

  puts("minus");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_times: {
  times x = CAST(times, n);

  puts("times");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_divide: {
  divide x = CAST(divide, n);

  puts("divide");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_modulo: {
  modulo x = CAST(modulo, n);

  puts("modulo");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_lshift: {
  lshift x = CAST(lshift, n);

  puts("lshift");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_rshift: {
  rshift x = CAST(rshift, n);

  puts("rshift");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_leq: {
  leq x = CAST(leq, n);

  puts("leq");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_geq: {
  geq x = CAST(geq, n);

  puts("geq");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_lt: {
  lt x = CAST(lt, n);

  puts("lt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_gt: {
  gt x = CAST(gt, n);

  puts("gt");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_eq: {
  eq x = CAST(eq, n);

  puts("eq");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_ne: {
  ne x = CAST(ne, n);

  puts("ne");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_bitand: {
  bitand x = CAST(bitand, n);

  puts("bitand");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_bitor: {
  bitor x = CAST(bitor, n);

  puts("bitor");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_bitxor: {
  bitxor x = CAST(bitxor, n);

  puts("bitxor");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_andand: {
  andand x = CAST(andand, n);

  puts("andand");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_oror: {
  oror x = CAST(oror, n);

  puts("oror");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_assign: {
  assign x = CAST(assign, n);

  puts("assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_plus_assign: {
  plus_assign x = CAST(plus_assign, n);

  puts("plus_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_minus_assign: {
  minus_assign x = CAST(minus_assign, n);

  puts("minus_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_times_assign: {
  times_assign x = CAST(times_assign, n);

  puts("times_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_divide_assign: {
  divide_assign x = CAST(divide_assign, n);

  puts("divide_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_modulo_assign: {
  modulo_assign x = CAST(modulo_assign, n);

  puts("modulo_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_lshift_assign: {
  lshift_assign x = CAST(lshift_assign, n);

  puts("lshift_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_rshift_assign: {
  rshift_assign x = CAST(rshift_assign, n);

  puts("rshift_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_bitand_assign: {
  bitand_assign x = CAST(bitand_assign, n);

  puts("bitand_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_bitor_assign: {
  bitor_assign x = CAST(bitor_assign, n);

  puts("bitor_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_bitxor_assign: {
  bitxor_assign x = CAST(bitxor_assign, n);

  puts("bitxor_assign");
  pindent(indent); puts("arg1:"); AST_print_list(indent + 1, x->arg1);
  pindent(indent); puts("arg2:"); AST_print_list(indent + 1, x->arg2);
  break;
}
case kind_rp_connection: {
  rp_connection x = CAST(rp_connection, n);

  puts("rp_connection");
  pindent(indent); puts("ep1:"); AST_print_list(indent + 1, x->ep1);
  pindent(indent); puts("ep2:"); AST_print_list(indent + 1, x->ep2);
  break;
}
case kind_eq_connection: {
  eq_connection x = CAST(eq_connection, n);

  puts("eq_connection");
  pindent(indent); puts("ep1:"); AST_print_list(indent + 1, x->ep1);
  pindent(indent); puts("ep2:"); AST_print_list(indent + 1, x->ep2);
  break;
}
case kind_nx_struct_ref: {
  nx_struct_ref x = CAST(nx_struct_ref, n);

  puts("nx_struct_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_nx_union_ref: {
  nx_union_ref x = CAST(nx_union_ref, n);

  puts("nx_union_ref");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("attributes:"); AST_print_list(indent + 1, x->attributes);
  pindent(indent); puts("fields:"); AST_print_list(indent + 1, x->fields);
  break;
}
case kind_target_attribute: {
  target_attribute x = CAST(target_attribute, n);

  puts("target_attribute");
  pindent(indent); puts("word1:"); AST_print_list(indent + 1, x->word1);
  pindent(indent); puts("args:"); AST_print_list(indent + 1, x->args);
  break;
}
