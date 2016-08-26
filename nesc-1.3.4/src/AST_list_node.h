/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
node AST_node_last(node l);
node AST_node_chain(node l1, node l2);
int AST_node_length(node l);
node AST_node_reverse(node l);
#define node_reverse(x) CAST(node, AST_node_reverse(CAST(node, (x))))
#define node_length(x) AST_node_length(CAST(node, (x)))
#define last_node(x) CAST(node, AST_node_last(CAST(node, (x))))
#define scan_node(var, list) for (var = (list); var; var = CAST(node, var->next))
#define declaration_reverse(x) CAST(declaration, AST_node_reverse(CAST(node, (x))))
#define declaration_length(x) AST_node_length(CAST(node, (x)))
#define last_declaration(x) CAST(declaration, AST_node_last(CAST(node, (x))))
#define scan_declaration(var, list) for (var = (list); var; var = CAST(declaration, var->next))
#define statement_reverse(x) CAST(statement, AST_node_reverse(CAST(node, (x))))
#define statement_length(x) AST_node_length(CAST(node, (x)))
#define last_statement(x) CAST(statement, AST_node_last(CAST(node, (x))))
#define scan_statement(var, list) for (var = (list); var; var = CAST(statement, var->next))
#define expression_reverse(x) CAST(expression, AST_node_reverse(CAST(node, (x))))
#define expression_length(x) AST_node_length(CAST(node, (x)))
#define last_expression(x) CAST(expression, AST_node_last(CAST(node, (x))))
#define scan_expression(var, list) for (var = (list); var; var = CAST(expression, var->next))
#define type_element_reverse(x) CAST(type_element, AST_node_reverse(CAST(node, (x))))
#define type_element_length(x) AST_node_length(CAST(node, (x)))
#define last_type_element(x) CAST(type_element, AST_node_last(CAST(node, (x))))
#define scan_type_element(var, list) for (var = (list); var; var = CAST(type_element, var->next))
#define declarator_reverse(x) CAST(declarator, AST_node_reverse(CAST(node, (x))))
#define declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_declarator(x) CAST(declarator, AST_node_last(CAST(node, (x))))
#define scan_declarator(var, list) for (var = (list); var; var = CAST(declarator, var->next))
#define label_reverse(x) CAST(label, AST_node_reverse(CAST(node, (x))))
#define label_length(x) AST_node_length(CAST(node, (x)))
#define last_label(x) CAST(label, AST_node_last(CAST(node, (x))))
#define scan_label(var, list) for (var = (list); var; var = CAST(label, var->next))
#define asm_decl_reverse(x) CAST(asm_decl, AST_node_reverse(CAST(node, (x))))
#define asm_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_asm_decl(x) CAST(asm_decl, AST_node_last(CAST(node, (x))))
#define scan_asm_decl(var, list) for (var = (list); var; var = CAST(asm_decl, var->next))
#define data_decl_reverse(x) CAST(data_decl, AST_node_reverse(CAST(node, (x))))
#define data_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_data_decl(x) CAST(data_decl, AST_node_last(CAST(node, (x))))
#define scan_data_decl(var, list) for (var = (list); var; var = CAST(data_decl, var->next))
#define extension_decl_reverse(x) CAST(extension_decl, AST_node_reverse(CAST(node, (x))))
#define extension_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_extension_decl(x) CAST(extension_decl, AST_node_last(CAST(node, (x))))
#define scan_extension_decl(var, list) for (var = (list); var; var = CAST(extension_decl, var->next))
#define ellipsis_decl_reverse(x) CAST(ellipsis_decl, AST_node_reverse(CAST(node, (x))))
#define ellipsis_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_ellipsis_decl(x) CAST(ellipsis_decl, AST_node_last(CAST(node, (x))))
#define scan_ellipsis_decl(var, list) for (var = (list); var; var = CAST(ellipsis_decl, var->next))
#define enumerator_reverse(x) CAST(enumerator, AST_node_reverse(CAST(node, (x))))
#define enumerator_length(x) AST_node_length(CAST(node, (x)))
#define last_enumerator(x) CAST(enumerator, AST_node_last(CAST(node, (x))))
#define scan_enumerator(var, list) for (var = (list); var; var = CAST(enumerator, var->next))
#define oldidentifier_decl_reverse(x) CAST(oldidentifier_decl, AST_node_reverse(CAST(node, (x))))
#define oldidentifier_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_oldidentifier_decl(x) CAST(oldidentifier_decl, AST_node_last(CAST(node, (x))))
#define scan_oldidentifier_decl(var, list) for (var = (list); var; var = CAST(oldidentifier_decl, var->next))
#define function_decl_reverse(x) CAST(function_decl, AST_node_reverse(CAST(node, (x))))
#define function_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_function_decl(x) CAST(function_decl, AST_node_last(CAST(node, (x))))
#define scan_function_decl(var, list) for (var = (list); var; var = CAST(function_decl, var->next))
#define implicit_decl_reverse(x) CAST(implicit_decl, AST_node_reverse(CAST(node, (x))))
#define implicit_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_implicit_decl(x) CAST(implicit_decl, AST_node_last(CAST(node, (x))))
#define scan_implicit_decl(var, list) for (var = (list); var; var = CAST(implicit_decl, var->next))
#define variable_decl_reverse(x) CAST(variable_decl, AST_node_reverse(CAST(node, (x))))
#define variable_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_variable_decl(x) CAST(variable_decl, AST_node_last(CAST(node, (x))))
#define scan_variable_decl(var, list) for (var = (list); var; var = CAST(variable_decl, var->next))
#define field_decl_reverse(x) CAST(field_decl, AST_node_reverse(CAST(node, (x))))
#define field_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_field_decl(x) CAST(field_decl, AST_node_last(CAST(node, (x))))
#define scan_field_decl(var, list) for (var = (list); var; var = CAST(field_decl, var->next))
#define asttype_reverse(x) CAST(asttype, AST_node_reverse(CAST(node, (x))))
#define asttype_length(x) AST_node_length(CAST(node, (x)))
#define last_asttype(x) CAST(asttype, AST_node_last(CAST(node, (x))))
#define scan_asttype(var, list) for (var = (list); var; var = CAST(asttype, var->next))
#define typename_reverse(x) CAST(typename, AST_node_reverse(CAST(node, (x))))
#define typename_length(x) AST_node_length(CAST(node, (x)))
#define last_typename(x) CAST(typename, AST_node_last(CAST(node, (x))))
#define scan_typename(var, list) for (var = (list); var; var = CAST(typename, var->next))
#define typeof_expr_reverse(x) CAST(typeof_expr, AST_node_reverse(CAST(node, (x))))
#define typeof_expr_length(x) AST_node_length(CAST(node, (x)))
#define last_typeof_expr(x) CAST(typeof_expr, AST_node_last(CAST(node, (x))))
#define scan_typeof_expr(var, list) for (var = (list); var; var = CAST(typeof_expr, var->next))
#define typeof_type_reverse(x) CAST(typeof_type, AST_node_reverse(CAST(node, (x))))
#define typeof_type_length(x) AST_node_length(CAST(node, (x)))
#define last_typeof_type(x) CAST(typeof_type, AST_node_last(CAST(node, (x))))
#define scan_typeof_type(var, list) for (var = (list); var; var = CAST(typeof_type, var->next))
#define attribute_reverse(x) CAST(attribute, AST_node_reverse(CAST(node, (x))))
#define attribute_length(x) AST_node_length(CAST(node, (x)))
#define last_attribute(x) CAST(attribute, AST_node_last(CAST(node, (x))))
#define scan_attribute(var, list) for (var = (list); var; var = CAST(attribute, var->next))
#define gcc_attribute_reverse(x) CAST(gcc_attribute, AST_node_reverse(CAST(node, (x))))
#define gcc_attribute_length(x) AST_node_length(CAST(node, (x)))
#define last_gcc_attribute(x) CAST(gcc_attribute, AST_node_last(CAST(node, (x))))
#define scan_gcc_attribute(var, list) for (var = (list); var; var = CAST(gcc_attribute, var->next))
#define rid_reverse(x) CAST(rid, AST_node_reverse(CAST(node, (x))))
#define rid_length(x) AST_node_length(CAST(node, (x)))
#define last_rid(x) CAST(rid, AST_node_last(CAST(node, (x))))
#define scan_rid(var, list) for (var = (list); var; var = CAST(rid, var->next))
#define qualifier_reverse(x) CAST(qualifier, AST_node_reverse(CAST(node, (x))))
#define qualifier_length(x) AST_node_length(CAST(node, (x)))
#define last_qualifier(x) CAST(qualifier, AST_node_last(CAST(node, (x))))
#define scan_qualifier(var, list) for (var = (list); var; var = CAST(qualifier, var->next))
#define tag_ref_reverse(x) CAST(tag_ref, AST_node_reverse(CAST(node, (x))))
#define tag_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_tag_ref(x) CAST(tag_ref, AST_node_last(CAST(node, (x))))
#define scan_tag_ref(var, list) for (var = (list); var; var = CAST(tag_ref, var->next))
#define struct_ref_reverse(x) CAST(struct_ref, AST_node_reverse(CAST(node, (x))))
#define struct_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_struct_ref(x) CAST(struct_ref, AST_node_last(CAST(node, (x))))
#define scan_struct_ref(var, list) for (var = (list); var; var = CAST(struct_ref, var->next))
#define union_ref_reverse(x) CAST(union_ref, AST_node_reverse(CAST(node, (x))))
#define union_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_union_ref(x) CAST(union_ref, AST_node_last(CAST(node, (x))))
#define scan_union_ref(var, list) for (var = (list); var; var = CAST(union_ref, var->next))
#define nested_declarator_reverse(x) CAST(nested_declarator, AST_node_reverse(CAST(node, (x))))
#define nested_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_nested_declarator(x) CAST(nested_declarator, AST_node_last(CAST(node, (x))))
#define scan_nested_declarator(var, list) for (var = (list); var; var = CAST(nested_declarator, var->next))
#define function_declarator_reverse(x) CAST(function_declarator, AST_node_reverse(CAST(node, (x))))
#define function_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_function_declarator(x) CAST(function_declarator, AST_node_last(CAST(node, (x))))
#define scan_function_declarator(var, list) for (var = (list); var; var = CAST(function_declarator, var->next))
#define pointer_declarator_reverse(x) CAST(pointer_declarator, AST_node_reverse(CAST(node, (x))))
#define pointer_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_pointer_declarator(x) CAST(pointer_declarator, AST_node_last(CAST(node, (x))))
#define scan_pointer_declarator(var, list) for (var = (list); var; var = CAST(pointer_declarator, var->next))
#define qualified_declarator_reverse(x) CAST(qualified_declarator, AST_node_reverse(CAST(node, (x))))
#define qualified_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_qualified_declarator(x) CAST(qualified_declarator, AST_node_last(CAST(node, (x))))
#define scan_qualified_declarator(var, list) for (var = (list); var; var = CAST(qualified_declarator, var->next))
#define array_declarator_reverse(x) CAST(array_declarator, AST_node_reverse(CAST(node, (x))))
#define array_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_array_declarator(x) CAST(array_declarator, AST_node_last(CAST(node, (x))))
#define scan_array_declarator(var, list) for (var = (list); var; var = CAST(array_declarator, var->next))
#define identifier_declarator_reverse(x) CAST(identifier_declarator, AST_node_reverse(CAST(node, (x))))
#define identifier_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_identifier_declarator(x) CAST(identifier_declarator, AST_node_last(CAST(node, (x))))
#define scan_identifier_declarator(var, list) for (var = (list); var; var = CAST(identifier_declarator, var->next))
#define asm_stmt_reverse(x) CAST(asm_stmt, AST_node_reverse(CAST(node, (x))))
#define asm_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_asm_stmt(x) CAST(asm_stmt, AST_node_last(CAST(node, (x))))
#define scan_asm_stmt(var, list) for (var = (list); var; var = CAST(asm_stmt, var->next))
#define compound_stmt_reverse(x) CAST(compound_stmt, AST_node_reverse(CAST(node, (x))))
#define compound_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_compound_stmt(x) CAST(compound_stmt, AST_node_last(CAST(node, (x))))
#define scan_compound_stmt(var, list) for (var = (list); var; var = CAST(compound_stmt, var->next))
#define if_stmt_reverse(x) CAST(if_stmt, AST_node_reverse(CAST(node, (x))))
#define if_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_if_stmt(x) CAST(if_stmt, AST_node_last(CAST(node, (x))))
#define scan_if_stmt(var, list) for (var = (list); var; var = CAST(if_stmt, var->next))
#define labeled_stmt_reverse(x) CAST(labeled_stmt, AST_node_reverse(CAST(node, (x))))
#define labeled_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_labeled_stmt(x) CAST(labeled_stmt, AST_node_last(CAST(node, (x))))
#define scan_labeled_stmt(var, list) for (var = (list); var; var = CAST(labeled_stmt, var->next))
#define expression_stmt_reverse(x) CAST(expression_stmt, AST_node_reverse(CAST(node, (x))))
#define expression_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_expression_stmt(x) CAST(expression_stmt, AST_node_last(CAST(node, (x))))
#define scan_expression_stmt(var, list) for (var = (list); var; var = CAST(expression_stmt, var->next))
#define conditional_stmt_reverse(x) CAST(conditional_stmt, AST_node_reverse(CAST(node, (x))))
#define conditional_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_conditional_stmt(x) CAST(conditional_stmt, AST_node_last(CAST(node, (x))))
#define scan_conditional_stmt(var, list) for (var = (list); var; var = CAST(conditional_stmt, var->next))
#define switch_stmt_reverse(x) CAST(switch_stmt, AST_node_reverse(CAST(node, (x))))
#define switch_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_switch_stmt(x) CAST(switch_stmt, AST_node_last(CAST(node, (x))))
#define scan_switch_stmt(var, list) for (var = (list); var; var = CAST(switch_stmt, var->next))
#define for_stmt_reverse(x) CAST(for_stmt, AST_node_reverse(CAST(node, (x))))
#define for_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_for_stmt(x) CAST(for_stmt, AST_node_last(CAST(node, (x))))
#define scan_for_stmt(var, list) for (var = (list); var; var = CAST(for_stmt, var->next))
#define break_stmt_reverse(x) CAST(break_stmt, AST_node_reverse(CAST(node, (x))))
#define break_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_break_stmt(x) CAST(break_stmt, AST_node_last(CAST(node, (x))))
#define scan_break_stmt(var, list) for (var = (list); var; var = CAST(break_stmt, var->next))
#define continue_stmt_reverse(x) CAST(continue_stmt, AST_node_reverse(CAST(node, (x))))
#define continue_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_continue_stmt(x) CAST(continue_stmt, AST_node_last(CAST(node, (x))))
#define scan_continue_stmt(var, list) for (var = (list); var; var = CAST(continue_stmt, var->next))
#define return_stmt_reverse(x) CAST(return_stmt, AST_node_reverse(CAST(node, (x))))
#define return_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_return_stmt(x) CAST(return_stmt, AST_node_last(CAST(node, (x))))
#define scan_return_stmt(var, list) for (var = (list); var; var = CAST(return_stmt, var->next))
#define goto_stmt_reverse(x) CAST(goto_stmt, AST_node_reverse(CAST(node, (x))))
#define goto_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_goto_stmt(x) CAST(goto_stmt, AST_node_last(CAST(node, (x))))
#define scan_goto_stmt(var, list) for (var = (list); var; var = CAST(goto_stmt, var->next))
#define computed_goto_stmt_reverse(x) CAST(computed_goto_stmt, AST_node_reverse(CAST(node, (x))))
#define computed_goto_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_computed_goto_stmt(x) CAST(computed_goto_stmt, AST_node_last(CAST(node, (x))))
#define scan_computed_goto_stmt(var, list) for (var = (list); var; var = CAST(computed_goto_stmt, var->next))
#define empty_stmt_reverse(x) CAST(empty_stmt, AST_node_reverse(CAST(node, (x))))
#define empty_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_empty_stmt(x) CAST(empty_stmt, AST_node_last(CAST(node, (x))))
#define scan_empty_stmt(var, list) for (var = (list); var; var = CAST(empty_stmt, var->next))
#define unary_reverse(x) CAST(unary, AST_node_reverse(CAST(node, (x))))
#define unary_length(x) AST_node_length(CAST(node, (x)))
#define last_unary(x) CAST(unary, AST_node_last(CAST(node, (x))))
#define scan_unary(var, list) for (var = (list); var; var = CAST(unary, var->next))
#define binary_reverse(x) CAST(binary, AST_node_reverse(CAST(node, (x))))
#define binary_length(x) AST_node_length(CAST(node, (x)))
#define last_binary(x) CAST(binary, AST_node_last(CAST(node, (x))))
#define scan_binary(var, list) for (var = (list); var; var = CAST(binary, var->next))
#define comma_reverse(x) CAST(comma, AST_node_reverse(CAST(node, (x))))
#define comma_length(x) AST_node_length(CAST(node, (x)))
#define last_comma(x) CAST(comma, AST_node_last(CAST(node, (x))))
#define scan_comma(var, list) for (var = (list); var; var = CAST(comma, var->next))
#define sizeof_type_reverse(x) CAST(sizeof_type, AST_node_reverse(CAST(node, (x))))
#define sizeof_type_length(x) AST_node_length(CAST(node, (x)))
#define last_sizeof_type(x) CAST(sizeof_type, AST_node_last(CAST(node, (x))))
#define scan_sizeof_type(var, list) for (var = (list); var; var = CAST(sizeof_type, var->next))
#define alignof_type_reverse(x) CAST(alignof_type, AST_node_reverse(CAST(node, (x))))
#define alignof_type_length(x) AST_node_length(CAST(node, (x)))
#define last_alignof_type(x) CAST(alignof_type, AST_node_last(CAST(node, (x))))
#define scan_alignof_type(var, list) for (var = (list); var; var = CAST(alignof_type, var->next))
#define label_address_reverse(x) CAST(label_address, AST_node_reverse(CAST(node, (x))))
#define label_address_length(x) AST_node_length(CAST(node, (x)))
#define last_label_address(x) CAST(label_address, AST_node_last(CAST(node, (x))))
#define scan_label_address(var, list) for (var = (list); var; var = CAST(label_address, var->next))
#define cast_reverse(x) CAST(cast, AST_node_reverse(CAST(node, (x))))
#define cast_length(x) AST_node_length(CAST(node, (x)))
#define last_cast(x) CAST(cast, AST_node_last(CAST(node, (x))))
#define scan_cast(var, list) for (var = (list); var; var = CAST(cast, var->next))
#define cast_list_reverse(x) CAST(cast_list, AST_node_reverse(CAST(node, (x))))
#define cast_list_length(x) AST_node_length(CAST(node, (x)))
#define last_cast_list(x) CAST(cast_list, AST_node_last(CAST(node, (x))))
#define scan_cast_list(var, list) for (var = (list); var; var = CAST(cast_list, var->next))
#define conditional_reverse(x) CAST(conditional, AST_node_reverse(CAST(node, (x))))
#define conditional_length(x) AST_node_length(CAST(node, (x)))
#define last_conditional(x) CAST(conditional, AST_node_last(CAST(node, (x))))
#define scan_conditional(var, list) for (var = (list); var; var = CAST(conditional, var->next))
#define identifier_reverse(x) CAST(identifier, AST_node_reverse(CAST(node, (x))))
#define identifier_length(x) AST_node_length(CAST(node, (x)))
#define last_identifier(x) CAST(identifier, AST_node_last(CAST(node, (x))))
#define scan_identifier(var, list) for (var = (list); var; var = CAST(identifier, var->next))
#define compound_expr_reverse(x) CAST(compound_expr, AST_node_reverse(CAST(node, (x))))
#define compound_expr_length(x) AST_node_length(CAST(node, (x)))
#define last_compound_expr(x) CAST(compound_expr, AST_node_last(CAST(node, (x))))
#define scan_compound_expr(var, list) for (var = (list); var; var = CAST(compound_expr, var->next))
#define function_call_reverse(x) CAST(function_call, AST_node_reverse(CAST(node, (x))))
#define function_call_length(x) AST_node_length(CAST(node, (x)))
#define last_function_call(x) CAST(function_call, AST_node_last(CAST(node, (x))))
#define scan_function_call(var, list) for (var = (list); var; var = CAST(function_call, var->next))
#define field_ref_reverse(x) CAST(field_ref, AST_node_reverse(CAST(node, (x))))
#define field_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_field_ref(x) CAST(field_ref, AST_node_last(CAST(node, (x))))
#define scan_field_ref(var, list) for (var = (list); var; var = CAST(field_ref, var->next))
#define increment_reverse(x) CAST(increment, AST_node_reverse(CAST(node, (x))))
#define increment_length(x) AST_node_length(CAST(node, (x)))
#define last_increment(x) CAST(increment, AST_node_last(CAST(node, (x))))
#define scan_increment(var, list) for (var = (list); var; var = CAST(increment, var->next))
#define comparison_reverse(x) CAST(comparison, AST_node_reverse(CAST(node, (x))))
#define comparison_length(x) AST_node_length(CAST(node, (x)))
#define last_comparison(x) CAST(comparison, AST_node_last(CAST(node, (x))))
#define scan_comparison(var, list) for (var = (list); var; var = CAST(comparison, var->next))
#define assignment_reverse(x) CAST(assignment, AST_node_reverse(CAST(node, (x))))
#define assignment_length(x) AST_node_length(CAST(node, (x)))
#define last_assignment(x) CAST(assignment, AST_node_last(CAST(node, (x))))
#define scan_assignment(var, list) for (var = (list); var; var = CAST(assignment, var->next))
#define init_list_reverse(x) CAST(init_list, AST_node_reverse(CAST(node, (x))))
#define init_list_length(x) AST_node_length(CAST(node, (x)))
#define last_init_list(x) CAST(init_list, AST_node_last(CAST(node, (x))))
#define scan_init_list(var, list) for (var = (list); var; var = CAST(init_list, var->next))
#define init_specific_reverse(x) CAST(init_specific, AST_node_reverse(CAST(node, (x))))
#define init_specific_length(x) AST_node_length(CAST(node, (x)))
#define last_init_specific(x) CAST(init_specific, AST_node_last(CAST(node, (x))))
#define scan_init_specific(var, list) for (var = (list); var; var = CAST(init_specific, var->next))
#define designator_reverse(x) CAST(designator, AST_node_reverse(CAST(node, (x))))
#define designator_length(x) AST_node_length(CAST(node, (x)))
#define last_designator(x) CAST(designator, AST_node_last(CAST(node, (x))))
#define scan_designator(var, list) for (var = (list); var; var = CAST(designator, var->next))
#define designate_field_reverse(x) CAST(designate_field, AST_node_reverse(CAST(node, (x))))
#define designate_field_length(x) AST_node_length(CAST(node, (x)))
#define last_designate_field(x) CAST(designate_field, AST_node_last(CAST(node, (x))))
#define scan_designate_field(var, list) for (var = (list); var; var = CAST(designate_field, var->next))
#define designate_index_reverse(x) CAST(designate_index, AST_node_reverse(CAST(node, (x))))
#define designate_index_length(x) AST_node_length(CAST(node, (x)))
#define last_designate_index(x) CAST(designate_index, AST_node_last(CAST(node, (x))))
#define scan_designate_index(var, list) for (var = (list); var; var = CAST(designate_index, var->next))
#define lexical_cst_reverse(x) CAST(lexical_cst, AST_node_reverse(CAST(node, (x))))
#define lexical_cst_length(x) AST_node_length(CAST(node, (x)))
#define last_lexical_cst(x) CAST(lexical_cst, AST_node_last(CAST(node, (x))))
#define scan_lexical_cst(var, list) for (var = (list); var; var = CAST(lexical_cst, var->next))
#define string_cst_reverse(x) CAST(string_cst, AST_node_reverse(CAST(node, (x))))
#define string_cst_length(x) AST_node_length(CAST(node, (x)))
#define last_string_cst(x) CAST(string_cst, AST_node_last(CAST(node, (x))))
#define scan_string_cst(var, list) for (var = (list); var; var = CAST(string_cst, var->next))
#define string_reverse(x) CAST(string, AST_node_reverse(CAST(node, (x))))
#define string_length(x) AST_node_length(CAST(node, (x)))
#define last_string(x) CAST(string, AST_node_last(CAST(node, (x))))
#define scan_string(var, list) for (var = (list); var; var = CAST(string, var->next))
#define id_label_reverse(x) CAST(id_label, AST_node_reverse(CAST(node, (x))))
#define id_label_length(x) AST_node_length(CAST(node, (x)))
#define last_id_label(x) CAST(id_label, AST_node_last(CAST(node, (x))))
#define scan_id_label(var, list) for (var = (list); var; var = CAST(id_label, var->next))
#define case_label_reverse(x) CAST(case_label, AST_node_reverse(CAST(node, (x))))
#define case_label_length(x) AST_node_length(CAST(node, (x)))
#define last_case_label(x) CAST(case_label, AST_node_last(CAST(node, (x))))
#define scan_case_label(var, list) for (var = (list); var; var = CAST(case_label, var->next))
#define default_label_reverse(x) CAST(default_label, AST_node_reverse(CAST(node, (x))))
#define default_label_length(x) AST_node_length(CAST(node, (x)))
#define last_default_label(x) CAST(default_label, AST_node_last(CAST(node, (x))))
#define scan_default_label(var, list) for (var = (list); var; var = CAST(default_label, var->next))
#define word_reverse(x) CAST(word, AST_node_reverse(CAST(node, (x))))
#define word_length(x) AST_node_length(CAST(node, (x)))
#define last_word(x) CAST(word, AST_node_last(CAST(node, (x))))
#define scan_word(var, list) for (var = (list); var; var = CAST(word, var->next))
#define asm_operand_reverse(x) CAST(asm_operand, AST_node_reverse(CAST(node, (x))))
#define asm_operand_length(x) AST_node_length(CAST(node, (x)))
#define last_asm_operand(x) CAST(asm_operand, AST_node_last(CAST(node, (x))))
#define scan_asm_operand(var, list) for (var = (list); var; var = CAST(asm_operand, var->next))
#define nesc_decl_reverse(x) CAST(nesc_decl, AST_node_reverse(CAST(node, (x))))
#define nesc_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_nesc_decl(x) CAST(nesc_decl, AST_node_last(CAST(node, (x))))
#define scan_nesc_decl(var, list) for (var = (list); var; var = CAST(nesc_decl, var->next))
#define interface_reverse(x) CAST(interface, AST_node_reverse(CAST(node, (x))))
#define interface_length(x) AST_node_length(CAST(node, (x)))
#define last_interface(x) CAST(interface, AST_node_last(CAST(node, (x))))
#define scan_interface(var, list) for (var = (list); var; var = CAST(interface, var->next))
#define component_reverse(x) CAST(component, AST_node_reverse(CAST(node, (x))))
#define component_length(x) AST_node_length(CAST(node, (x)))
#define last_component(x) CAST(component, AST_node_last(CAST(node, (x))))
#define scan_component(var, list) for (var = (list); var; var = CAST(component, var->next))
#define implementation_reverse(x) CAST(implementation, AST_node_reverse(CAST(node, (x))))
#define implementation_length(x) AST_node_length(CAST(node, (x)))
#define last_implementation(x) CAST(implementation, AST_node_last(CAST(node, (x))))
#define scan_implementation(var, list) for (var = (list); var; var = CAST(implementation, var->next))
#define configuration_reverse(x) CAST(configuration, AST_node_reverse(CAST(node, (x))))
#define configuration_length(x) AST_node_length(CAST(node, (x)))
#define last_configuration(x) CAST(configuration, AST_node_last(CAST(node, (x))))
#define scan_configuration(var, list) for (var = (list); var; var = CAST(configuration, var->next))
#define module_reverse(x) CAST(module, AST_node_reverse(CAST(node, (x))))
#define module_length(x) AST_node_length(CAST(node, (x)))
#define last_module(x) CAST(module, AST_node_last(CAST(node, (x))))
#define scan_module(var, list) for (var = (list); var; var = CAST(module, var->next))
#define binary_component_reverse(x) CAST(binary_component, AST_node_reverse(CAST(node, (x))))
#define binary_component_length(x) AST_node_length(CAST(node, (x)))
#define last_binary_component(x) CAST(binary_component, AST_node_last(CAST(node, (x))))
#define scan_binary_component(var, list) for (var = (list); var; var = CAST(binary_component, var->next))
#define rp_interface_reverse(x) CAST(rp_interface, AST_node_reverse(CAST(node, (x))))
#define rp_interface_length(x) AST_node_length(CAST(node, (x)))
#define last_rp_interface(x) CAST(rp_interface, AST_node_last(CAST(node, (x))))
#define scan_rp_interface(var, list) for (var = (list); var; var = CAST(rp_interface, var->next))
#define interface_ref_reverse(x) CAST(interface_ref, AST_node_reverse(CAST(node, (x))))
#define interface_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_interface_ref(x) CAST(interface_ref, AST_node_last(CAST(node, (x))))
#define scan_interface_ref(var, list) for (var = (list); var; var = CAST(interface_ref, var->next))
#define component_ref_reverse(x) CAST(component_ref, AST_node_reverse(CAST(node, (x))))
#define component_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_component_ref(x) CAST(component_ref, AST_node_last(CAST(node, (x))))
#define scan_component_ref(var, list) for (var = (list); var; var = CAST(component_ref, var->next))
#define connection_reverse(x) CAST(connection, AST_node_reverse(CAST(node, (x))))
#define connection_length(x) AST_node_length(CAST(node, (x)))
#define last_connection(x) CAST(connection, AST_node_last(CAST(node, (x))))
#define scan_connection(var, list) for (var = (list); var; var = CAST(connection, var->next))
#define endpoint_reverse(x) CAST(endpoint, AST_node_reverse(CAST(node, (x))))
#define endpoint_length(x) AST_node_length(CAST(node, (x)))
#define last_endpoint(x) CAST(endpoint, AST_node_last(CAST(node, (x))))
#define scan_endpoint(var, list) for (var = (list); var; var = CAST(endpoint, var->next))
#define parameterised_identifier_reverse(x) CAST(parameterised_identifier, AST_node_reverse(CAST(node, (x))))
#define parameterised_identifier_length(x) AST_node_length(CAST(node, (x)))
#define last_parameterised_identifier(x) CAST(parameterised_identifier, AST_node_last(CAST(node, (x))))
#define scan_parameterised_identifier(var, list) for (var = (list); var; var = CAST(parameterised_identifier, var->next))
#define generic_declarator_reverse(x) CAST(generic_declarator, AST_node_reverse(CAST(node, (x))))
#define generic_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_generic_declarator(x) CAST(generic_declarator, AST_node_last(CAST(node, (x))))
#define scan_generic_declarator(var, list) for (var = (list); var; var = CAST(generic_declarator, var->next))
#define generic_call_reverse(x) CAST(generic_call, AST_node_reverse(CAST(node, (x))))
#define generic_call_length(x) AST_node_length(CAST(node, (x)))
#define last_generic_call(x) CAST(generic_call, AST_node_last(CAST(node, (x))))
#define scan_generic_call(var, list) for (var = (list); var; var = CAST(generic_call, var->next))
#define interface_ref_declarator_reverse(x) CAST(interface_ref_declarator, AST_node_reverse(CAST(node, (x))))
#define interface_ref_declarator_length(x) AST_node_length(CAST(node, (x)))
#define last_interface_ref_declarator(x) CAST(interface_ref_declarator, AST_node_last(CAST(node, (x))))
#define scan_interface_ref_declarator(var, list) for (var = (list); var; var = CAST(interface_ref_declarator, var->next))
#define interface_deref_reverse(x) CAST(interface_deref, AST_node_reverse(CAST(node, (x))))
#define interface_deref_length(x) AST_node_length(CAST(node, (x)))
#define last_interface_deref(x) CAST(interface_deref, AST_node_last(CAST(node, (x))))
#define scan_interface_deref(var, list) for (var = (list); var; var = CAST(interface_deref, var->next))
#define component_deref_reverse(x) CAST(component_deref, AST_node_reverse(CAST(node, (x))))
#define component_deref_length(x) AST_node_length(CAST(node, (x)))
#define last_component_deref(x) CAST(component_deref, AST_node_last(CAST(node, (x))))
#define scan_component_deref(var, list) for (var = (list); var; var = CAST(component_deref, var->next))
#define component_typeref_reverse(x) CAST(component_typeref, AST_node_reverse(CAST(node, (x))))
#define component_typeref_length(x) AST_node_length(CAST(node, (x)))
#define last_component_typeref(x) CAST(component_typeref, AST_node_last(CAST(node, (x))))
#define scan_component_typeref(var, list) for (var = (list); var; var = CAST(component_typeref, var->next))
#define atomic_stmt_reverse(x) CAST(atomic_stmt, AST_node_reverse(CAST(node, (x))))
#define atomic_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_atomic_stmt(x) CAST(atomic_stmt, AST_node_last(CAST(node, (x))))
#define scan_atomic_stmt(var, list) for (var = (list); var; var = CAST(atomic_stmt, var->next))
#define nesc_attribute_reverse(x) CAST(nesc_attribute, AST_node_reverse(CAST(node, (x))))
#define nesc_attribute_length(x) AST_node_length(CAST(node, (x)))
#define last_nesc_attribute(x) CAST(nesc_attribute, AST_node_last(CAST(node, (x))))
#define scan_nesc_attribute(var, list) for (var = (list); var; var = CAST(nesc_attribute, var->next))
#define type_parm_decl_reverse(x) CAST(type_parm_decl, AST_node_reverse(CAST(node, (x))))
#define type_parm_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_type_parm_decl(x) CAST(type_parm_decl, AST_node_last(CAST(node, (x))))
#define scan_type_parm_decl(var, list) for (var = (list); var; var = CAST(type_parm_decl, var->next))
#define type_argument_reverse(x) CAST(type_argument, AST_node_reverse(CAST(node, (x))))
#define type_argument_length(x) AST_node_length(CAST(node, (x)))
#define last_type_argument(x) CAST(type_argument, AST_node_last(CAST(node, (x))))
#define scan_type_argument(var, list) for (var = (list); var; var = CAST(type_argument, var->next))
#define error_decl_reverse(x) CAST(error_decl, AST_node_reverse(CAST(node, (x))))
#define error_decl_length(x) AST_node_length(CAST(node, (x)))
#define last_error_decl(x) CAST(error_decl, AST_node_last(CAST(node, (x))))
#define scan_error_decl(var, list) for (var = (list); var; var = CAST(error_decl, var->next))
#define attribute_ref_reverse(x) CAST(attribute_ref, AST_node_reverse(CAST(node, (x))))
#define attribute_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_attribute_ref(x) CAST(attribute_ref, AST_node_last(CAST(node, (x))))
#define scan_attribute_ref(var, list) for (var = (list); var; var = CAST(attribute_ref, var->next))
#define enum_ref_reverse(x) CAST(enum_ref, AST_node_reverse(CAST(node, (x))))
#define enum_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_enum_ref(x) CAST(enum_ref, AST_node_last(CAST(node, (x))))
#define scan_enum_ref(var, list) for (var = (list); var; var = CAST(enum_ref, var->next))
#define error_stmt_reverse(x) CAST(error_stmt, AST_node_reverse(CAST(node, (x))))
#define error_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_error_stmt(x) CAST(error_stmt, AST_node_last(CAST(node, (x))))
#define scan_error_stmt(var, list) for (var = (list); var; var = CAST(error_stmt, var->next))
#define while_stmt_reverse(x) CAST(while_stmt, AST_node_reverse(CAST(node, (x))))
#define while_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_while_stmt(x) CAST(while_stmt, AST_node_last(CAST(node, (x))))
#define scan_while_stmt(var, list) for (var = (list); var; var = CAST(while_stmt, var->next))
#define dowhile_stmt_reverse(x) CAST(dowhile_stmt, AST_node_reverse(CAST(node, (x))))
#define dowhile_stmt_length(x) AST_node_length(CAST(node, (x)))
#define last_dowhile_stmt(x) CAST(dowhile_stmt, AST_node_last(CAST(node, (x))))
#define scan_dowhile_stmt(var, list) for (var = (list); var; var = CAST(dowhile_stmt, var->next))
#define error_expr_reverse(x) CAST(error_expr, AST_node_reverse(CAST(node, (x))))
#define error_expr_length(x) AST_node_length(CAST(node, (x)))
#define last_error_expr(x) CAST(error_expr, AST_node_last(CAST(node, (x))))
#define scan_error_expr(var, list) for (var = (list); var; var = CAST(error_expr, var->next))
#define array_ref_reverse(x) CAST(array_ref, AST_node_reverse(CAST(node, (x))))
#define array_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_array_ref(x) CAST(array_ref, AST_node_last(CAST(node, (x))))
#define scan_array_ref(var, list) for (var = (list); var; var = CAST(array_ref, var->next))
#define dereference_reverse(x) CAST(dereference, AST_node_reverse(CAST(node, (x))))
#define dereference_length(x) AST_node_length(CAST(node, (x)))
#define last_dereference(x) CAST(dereference, AST_node_last(CAST(node, (x))))
#define scan_dereference(var, list) for (var = (list); var; var = CAST(dereference, var->next))
#define extension_expr_reverse(x) CAST(extension_expr, AST_node_reverse(CAST(node, (x))))
#define extension_expr_length(x) AST_node_length(CAST(node, (x)))
#define last_extension_expr(x) CAST(extension_expr, AST_node_last(CAST(node, (x))))
#define scan_extension_expr(var, list) for (var = (list); var; var = CAST(extension_expr, var->next))
#define sizeof_expr_reverse(x) CAST(sizeof_expr, AST_node_reverse(CAST(node, (x))))
#define sizeof_expr_length(x) AST_node_length(CAST(node, (x)))
#define last_sizeof_expr(x) CAST(sizeof_expr, AST_node_last(CAST(node, (x))))
#define scan_sizeof_expr(var, list) for (var = (list); var; var = CAST(sizeof_expr, var->next))
#define alignof_expr_reverse(x) CAST(alignof_expr, AST_node_reverse(CAST(node, (x))))
#define alignof_expr_length(x) AST_node_length(CAST(node, (x)))
#define last_alignof_expr(x) CAST(alignof_expr, AST_node_last(CAST(node, (x))))
#define scan_alignof_expr(var, list) for (var = (list); var; var = CAST(alignof_expr, var->next))
#define realpart_reverse(x) CAST(realpart, AST_node_reverse(CAST(node, (x))))
#define realpart_length(x) AST_node_length(CAST(node, (x)))
#define last_realpart(x) CAST(realpart, AST_node_last(CAST(node, (x))))
#define scan_realpart(var, list) for (var = (list); var; var = CAST(realpart, var->next))
#define imagpart_reverse(x) CAST(imagpart, AST_node_reverse(CAST(node, (x))))
#define imagpart_length(x) AST_node_length(CAST(node, (x)))
#define last_imagpart(x) CAST(imagpart, AST_node_last(CAST(node, (x))))
#define scan_imagpart(var, list) for (var = (list); var; var = CAST(imagpart, var->next))
#define address_of_reverse(x) CAST(address_of, AST_node_reverse(CAST(node, (x))))
#define address_of_length(x) AST_node_length(CAST(node, (x)))
#define last_address_of(x) CAST(address_of, AST_node_last(CAST(node, (x))))
#define scan_address_of(var, list) for (var = (list); var; var = CAST(address_of, var->next))
#define unary_minus_reverse(x) CAST(unary_minus, AST_node_reverse(CAST(node, (x))))
#define unary_minus_length(x) AST_node_length(CAST(node, (x)))
#define last_unary_minus(x) CAST(unary_minus, AST_node_last(CAST(node, (x))))
#define scan_unary_minus(var, list) for (var = (list); var; var = CAST(unary_minus, var->next))
#define unary_plus_reverse(x) CAST(unary_plus, AST_node_reverse(CAST(node, (x))))
#define unary_plus_length(x) AST_node_length(CAST(node, (x)))
#define last_unary_plus(x) CAST(unary_plus, AST_node_last(CAST(node, (x))))
#define scan_unary_plus(var, list) for (var = (list); var; var = CAST(unary_plus, var->next))
#define conjugate_reverse(x) CAST(conjugate, AST_node_reverse(CAST(node, (x))))
#define conjugate_length(x) AST_node_length(CAST(node, (x)))
#define last_conjugate(x) CAST(conjugate, AST_node_last(CAST(node, (x))))
#define scan_conjugate(var, list) for (var = (list); var; var = CAST(conjugate, var->next))
#define bitnot_reverse(x) CAST(bitnot, AST_node_reverse(CAST(node, (x))))
#define bitnot_length(x) AST_node_length(CAST(node, (x)))
#define last_bitnot(x) CAST(bitnot, AST_node_last(CAST(node, (x))))
#define scan_bitnot(var, list) for (var = (list); var; var = CAST(bitnot, var->next))
#define not_reverse(x) CAST(not, AST_node_reverse(CAST(node, (x))))
#define not_length(x) AST_node_length(CAST(node, (x)))
#define last_not(x) CAST(not, AST_node_last(CAST(node, (x))))
#define scan_not(var, list) for (var = (list); var; var = CAST(not, var->next))
#define preincrement_reverse(x) CAST(preincrement, AST_node_reverse(CAST(node, (x))))
#define preincrement_length(x) AST_node_length(CAST(node, (x)))
#define last_preincrement(x) CAST(preincrement, AST_node_last(CAST(node, (x))))
#define scan_preincrement(var, list) for (var = (list); var; var = CAST(preincrement, var->next))
#define predecrement_reverse(x) CAST(predecrement, AST_node_reverse(CAST(node, (x))))
#define predecrement_length(x) AST_node_length(CAST(node, (x)))
#define last_predecrement(x) CAST(predecrement, AST_node_last(CAST(node, (x))))
#define scan_predecrement(var, list) for (var = (list); var; var = CAST(predecrement, var->next))
#define postincrement_reverse(x) CAST(postincrement, AST_node_reverse(CAST(node, (x))))
#define postincrement_length(x) AST_node_length(CAST(node, (x)))
#define last_postincrement(x) CAST(postincrement, AST_node_last(CAST(node, (x))))
#define scan_postincrement(var, list) for (var = (list); var; var = CAST(postincrement, var->next))
#define postdecrement_reverse(x) CAST(postdecrement, AST_node_reverse(CAST(node, (x))))
#define postdecrement_length(x) AST_node_length(CAST(node, (x)))
#define last_postdecrement(x) CAST(postdecrement, AST_node_last(CAST(node, (x))))
#define scan_postdecrement(var, list) for (var = (list); var; var = CAST(postdecrement, var->next))
#define plus_reverse(x) CAST(plus, AST_node_reverse(CAST(node, (x))))
#define plus_length(x) AST_node_length(CAST(node, (x)))
#define last_plus(x) CAST(plus, AST_node_last(CAST(node, (x))))
#define scan_plus(var, list) for (var = (list); var; var = CAST(plus, var->next))
#define minus_reverse(x) CAST(minus, AST_node_reverse(CAST(node, (x))))
#define minus_length(x) AST_node_length(CAST(node, (x)))
#define last_minus(x) CAST(minus, AST_node_last(CAST(node, (x))))
#define scan_minus(var, list) for (var = (list); var; var = CAST(minus, var->next))
#define times_reverse(x) CAST(times, AST_node_reverse(CAST(node, (x))))
#define times_length(x) AST_node_length(CAST(node, (x)))
#define last_times(x) CAST(times, AST_node_last(CAST(node, (x))))
#define scan_times(var, list) for (var = (list); var; var = CAST(times, var->next))
#define divide_reverse(x) CAST(divide, AST_node_reverse(CAST(node, (x))))
#define divide_length(x) AST_node_length(CAST(node, (x)))
#define last_divide(x) CAST(divide, AST_node_last(CAST(node, (x))))
#define scan_divide(var, list) for (var = (list); var; var = CAST(divide, var->next))
#define modulo_reverse(x) CAST(modulo, AST_node_reverse(CAST(node, (x))))
#define modulo_length(x) AST_node_length(CAST(node, (x)))
#define last_modulo(x) CAST(modulo, AST_node_last(CAST(node, (x))))
#define scan_modulo(var, list) for (var = (list); var; var = CAST(modulo, var->next))
#define lshift_reverse(x) CAST(lshift, AST_node_reverse(CAST(node, (x))))
#define lshift_length(x) AST_node_length(CAST(node, (x)))
#define last_lshift(x) CAST(lshift, AST_node_last(CAST(node, (x))))
#define scan_lshift(var, list) for (var = (list); var; var = CAST(lshift, var->next))
#define rshift_reverse(x) CAST(rshift, AST_node_reverse(CAST(node, (x))))
#define rshift_length(x) AST_node_length(CAST(node, (x)))
#define last_rshift(x) CAST(rshift, AST_node_last(CAST(node, (x))))
#define scan_rshift(var, list) for (var = (list); var; var = CAST(rshift, var->next))
#define leq_reverse(x) CAST(leq, AST_node_reverse(CAST(node, (x))))
#define leq_length(x) AST_node_length(CAST(node, (x)))
#define last_leq(x) CAST(leq, AST_node_last(CAST(node, (x))))
#define scan_leq(var, list) for (var = (list); var; var = CAST(leq, var->next))
#define geq_reverse(x) CAST(geq, AST_node_reverse(CAST(node, (x))))
#define geq_length(x) AST_node_length(CAST(node, (x)))
#define last_geq(x) CAST(geq, AST_node_last(CAST(node, (x))))
#define scan_geq(var, list) for (var = (list); var; var = CAST(geq, var->next))
#define lt_reverse(x) CAST(lt, AST_node_reverse(CAST(node, (x))))
#define lt_length(x) AST_node_length(CAST(node, (x)))
#define last_lt(x) CAST(lt, AST_node_last(CAST(node, (x))))
#define scan_lt(var, list) for (var = (list); var; var = CAST(lt, var->next))
#define gt_reverse(x) CAST(gt, AST_node_reverse(CAST(node, (x))))
#define gt_length(x) AST_node_length(CAST(node, (x)))
#define last_gt(x) CAST(gt, AST_node_last(CAST(node, (x))))
#define scan_gt(var, list) for (var = (list); var; var = CAST(gt, var->next))
#define eq_reverse(x) CAST(eq, AST_node_reverse(CAST(node, (x))))
#define eq_length(x) AST_node_length(CAST(node, (x)))
#define last_eq(x) CAST(eq, AST_node_last(CAST(node, (x))))
#define scan_eq(var, list) for (var = (list); var; var = CAST(eq, var->next))
#define ne_reverse(x) CAST(ne, AST_node_reverse(CAST(node, (x))))
#define ne_length(x) AST_node_length(CAST(node, (x)))
#define last_ne(x) CAST(ne, AST_node_last(CAST(node, (x))))
#define scan_ne(var, list) for (var = (list); var; var = CAST(ne, var->next))
#define bitand_reverse(x) CAST(bitand, AST_node_reverse(CAST(node, (x))))
#define bitand_length(x) AST_node_length(CAST(node, (x)))
#define last_bitand(x) CAST(bitand, AST_node_last(CAST(node, (x))))
#define scan_bitand(var, list) for (var = (list); var; var = CAST(bitand, var->next))
#define bitor_reverse(x) CAST(bitor, AST_node_reverse(CAST(node, (x))))
#define bitor_length(x) AST_node_length(CAST(node, (x)))
#define last_bitor(x) CAST(bitor, AST_node_last(CAST(node, (x))))
#define scan_bitor(var, list) for (var = (list); var; var = CAST(bitor, var->next))
#define bitxor_reverse(x) CAST(bitxor, AST_node_reverse(CAST(node, (x))))
#define bitxor_length(x) AST_node_length(CAST(node, (x)))
#define last_bitxor(x) CAST(bitxor, AST_node_last(CAST(node, (x))))
#define scan_bitxor(var, list) for (var = (list); var; var = CAST(bitxor, var->next))
#define andand_reverse(x) CAST(andand, AST_node_reverse(CAST(node, (x))))
#define andand_length(x) AST_node_length(CAST(node, (x)))
#define last_andand(x) CAST(andand, AST_node_last(CAST(node, (x))))
#define scan_andand(var, list) for (var = (list); var; var = CAST(andand, var->next))
#define oror_reverse(x) CAST(oror, AST_node_reverse(CAST(node, (x))))
#define oror_length(x) AST_node_length(CAST(node, (x)))
#define last_oror(x) CAST(oror, AST_node_last(CAST(node, (x))))
#define scan_oror(var, list) for (var = (list); var; var = CAST(oror, var->next))
#define assign_reverse(x) CAST(assign, AST_node_reverse(CAST(node, (x))))
#define assign_length(x) AST_node_length(CAST(node, (x)))
#define last_assign(x) CAST(assign, AST_node_last(CAST(node, (x))))
#define scan_assign(var, list) for (var = (list); var; var = CAST(assign, var->next))
#define plus_assign_reverse(x) CAST(plus_assign, AST_node_reverse(CAST(node, (x))))
#define plus_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_plus_assign(x) CAST(plus_assign, AST_node_last(CAST(node, (x))))
#define scan_plus_assign(var, list) for (var = (list); var; var = CAST(plus_assign, var->next))
#define minus_assign_reverse(x) CAST(minus_assign, AST_node_reverse(CAST(node, (x))))
#define minus_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_minus_assign(x) CAST(minus_assign, AST_node_last(CAST(node, (x))))
#define scan_minus_assign(var, list) for (var = (list); var; var = CAST(minus_assign, var->next))
#define times_assign_reverse(x) CAST(times_assign, AST_node_reverse(CAST(node, (x))))
#define times_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_times_assign(x) CAST(times_assign, AST_node_last(CAST(node, (x))))
#define scan_times_assign(var, list) for (var = (list); var; var = CAST(times_assign, var->next))
#define divide_assign_reverse(x) CAST(divide_assign, AST_node_reverse(CAST(node, (x))))
#define divide_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_divide_assign(x) CAST(divide_assign, AST_node_last(CAST(node, (x))))
#define scan_divide_assign(var, list) for (var = (list); var; var = CAST(divide_assign, var->next))
#define modulo_assign_reverse(x) CAST(modulo_assign, AST_node_reverse(CAST(node, (x))))
#define modulo_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_modulo_assign(x) CAST(modulo_assign, AST_node_last(CAST(node, (x))))
#define scan_modulo_assign(var, list) for (var = (list); var; var = CAST(modulo_assign, var->next))
#define lshift_assign_reverse(x) CAST(lshift_assign, AST_node_reverse(CAST(node, (x))))
#define lshift_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_lshift_assign(x) CAST(lshift_assign, AST_node_last(CAST(node, (x))))
#define scan_lshift_assign(var, list) for (var = (list); var; var = CAST(lshift_assign, var->next))
#define rshift_assign_reverse(x) CAST(rshift_assign, AST_node_reverse(CAST(node, (x))))
#define rshift_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_rshift_assign(x) CAST(rshift_assign, AST_node_last(CAST(node, (x))))
#define scan_rshift_assign(var, list) for (var = (list); var; var = CAST(rshift_assign, var->next))
#define bitand_assign_reverse(x) CAST(bitand_assign, AST_node_reverse(CAST(node, (x))))
#define bitand_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_bitand_assign(x) CAST(bitand_assign, AST_node_last(CAST(node, (x))))
#define scan_bitand_assign(var, list) for (var = (list); var; var = CAST(bitand_assign, var->next))
#define bitor_assign_reverse(x) CAST(bitor_assign, AST_node_reverse(CAST(node, (x))))
#define bitor_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_bitor_assign(x) CAST(bitor_assign, AST_node_last(CAST(node, (x))))
#define scan_bitor_assign(var, list) for (var = (list); var; var = CAST(bitor_assign, var->next))
#define bitxor_assign_reverse(x) CAST(bitxor_assign, AST_node_reverse(CAST(node, (x))))
#define bitxor_assign_length(x) AST_node_length(CAST(node, (x)))
#define last_bitxor_assign(x) CAST(bitxor_assign, AST_node_last(CAST(node, (x))))
#define scan_bitxor_assign(var, list) for (var = (list); var; var = CAST(bitxor_assign, var->next))
#define rp_connection_reverse(x) CAST(rp_connection, AST_node_reverse(CAST(node, (x))))
#define rp_connection_length(x) AST_node_length(CAST(node, (x)))
#define last_rp_connection(x) CAST(rp_connection, AST_node_last(CAST(node, (x))))
#define scan_rp_connection(var, list) for (var = (list); var; var = CAST(rp_connection, var->next))
#define eq_connection_reverse(x) CAST(eq_connection, AST_node_reverse(CAST(node, (x))))
#define eq_connection_length(x) AST_node_length(CAST(node, (x)))
#define last_eq_connection(x) CAST(eq_connection, AST_node_last(CAST(node, (x))))
#define scan_eq_connection(var, list) for (var = (list); var; var = CAST(eq_connection, var->next))
#define nx_struct_ref_reverse(x) CAST(nx_struct_ref, AST_node_reverse(CAST(node, (x))))
#define nx_struct_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_nx_struct_ref(x) CAST(nx_struct_ref, AST_node_last(CAST(node, (x))))
#define scan_nx_struct_ref(var, list) for (var = (list); var; var = CAST(nx_struct_ref, var->next))
#define nx_union_ref_reverse(x) CAST(nx_union_ref, AST_node_reverse(CAST(node, (x))))
#define nx_union_ref_length(x) AST_node_length(CAST(node, (x)))
#define last_nx_union_ref(x) CAST(nx_union_ref, AST_node_last(CAST(node, (x))))
#define scan_nx_union_ref(var, list) for (var = (list); var; var = CAST(nx_union_ref, var->next))
#define target_attribute_reverse(x) CAST(target_attribute, AST_node_reverse(CAST(node, (x))))
#define target_attribute_length(x) AST_node_length(CAST(node, (x)))
#define last_target_attribute(x) CAST(target_attribute, AST_node_last(CAST(node, (x))))
#define scan_target_attribute(var, list) for (var = (list); var; var = CAST(target_attribute, var->next))
node node_chain(node l1, node l2);
declaration declaration_chain(declaration l1, declaration l2);
statement statement_chain(statement l1, statement l2);
expression expression_chain(expression l1, expression l2);
type_element type_element_chain(type_element l1, type_element l2);
declarator declarator_chain(declarator l1, declarator l2);
label label_chain(label l1, label l2);
asm_decl asm_decl_chain(asm_decl l1, asm_decl l2);
data_decl data_decl_chain(data_decl l1, data_decl l2);
extension_decl extension_decl_chain(extension_decl l1, extension_decl l2);
ellipsis_decl ellipsis_decl_chain(ellipsis_decl l1, ellipsis_decl l2);
enumerator enumerator_chain(enumerator l1, enumerator l2);
oldidentifier_decl oldidentifier_decl_chain(oldidentifier_decl l1, oldidentifier_decl l2);
function_decl function_decl_chain(function_decl l1, function_decl l2);
implicit_decl implicit_decl_chain(implicit_decl l1, implicit_decl l2);
variable_decl variable_decl_chain(variable_decl l1, variable_decl l2);
field_decl field_decl_chain(field_decl l1, field_decl l2);
asttype asttype_chain(asttype l1, asttype l2);
typename typename_chain(typename l1, typename l2);
typeof_expr typeof_expr_chain(typeof_expr l1, typeof_expr l2);
typeof_type typeof_type_chain(typeof_type l1, typeof_type l2);
attribute attribute_chain(attribute l1, attribute l2);
gcc_attribute gcc_attribute_chain(gcc_attribute l1, gcc_attribute l2);
rid rid_chain(rid l1, rid l2);
qualifier qualifier_chain(qualifier l1, qualifier l2);
tag_ref tag_ref_chain(tag_ref l1, tag_ref l2);
struct_ref struct_ref_chain(struct_ref l1, struct_ref l2);
union_ref union_ref_chain(union_ref l1, union_ref l2);
nested_declarator nested_declarator_chain(nested_declarator l1, nested_declarator l2);
function_declarator function_declarator_chain(function_declarator l1, function_declarator l2);
pointer_declarator pointer_declarator_chain(pointer_declarator l1, pointer_declarator l2);
qualified_declarator qualified_declarator_chain(qualified_declarator l1, qualified_declarator l2);
array_declarator array_declarator_chain(array_declarator l1, array_declarator l2);
identifier_declarator identifier_declarator_chain(identifier_declarator l1, identifier_declarator l2);
asm_stmt asm_stmt_chain(asm_stmt l1, asm_stmt l2);
compound_stmt compound_stmt_chain(compound_stmt l1, compound_stmt l2);
if_stmt if_stmt_chain(if_stmt l1, if_stmt l2);
labeled_stmt labeled_stmt_chain(labeled_stmt l1, labeled_stmt l2);
expression_stmt expression_stmt_chain(expression_stmt l1, expression_stmt l2);
conditional_stmt conditional_stmt_chain(conditional_stmt l1, conditional_stmt l2);
switch_stmt switch_stmt_chain(switch_stmt l1, switch_stmt l2);
for_stmt for_stmt_chain(for_stmt l1, for_stmt l2);
break_stmt break_stmt_chain(break_stmt l1, break_stmt l2);
continue_stmt continue_stmt_chain(continue_stmt l1, continue_stmt l2);
return_stmt return_stmt_chain(return_stmt l1, return_stmt l2);
goto_stmt goto_stmt_chain(goto_stmt l1, goto_stmt l2);
computed_goto_stmt computed_goto_stmt_chain(computed_goto_stmt l1, computed_goto_stmt l2);
empty_stmt empty_stmt_chain(empty_stmt l1, empty_stmt l2);
unary unary_chain(unary l1, unary l2);
binary binary_chain(binary l1, binary l2);
comma comma_chain(comma l1, comma l2);
sizeof_type sizeof_type_chain(sizeof_type l1, sizeof_type l2);
alignof_type alignof_type_chain(alignof_type l1, alignof_type l2);
label_address label_address_chain(label_address l1, label_address l2);
cast cast_chain(cast l1, cast l2);
cast_list cast_list_chain(cast_list l1, cast_list l2);
conditional conditional_chain(conditional l1, conditional l2);
identifier identifier_chain(identifier l1, identifier l2);
compound_expr compound_expr_chain(compound_expr l1, compound_expr l2);
function_call function_call_chain(function_call l1, function_call l2);
field_ref field_ref_chain(field_ref l1, field_ref l2);
increment increment_chain(increment l1, increment l2);
comparison comparison_chain(comparison l1, comparison l2);
assignment assignment_chain(assignment l1, assignment l2);
init_list init_list_chain(init_list l1, init_list l2);
init_specific init_specific_chain(init_specific l1, init_specific l2);
designator designator_chain(designator l1, designator l2);
designate_field designate_field_chain(designate_field l1, designate_field l2);
designate_index designate_index_chain(designate_index l1, designate_index l2);
lexical_cst lexical_cst_chain(lexical_cst l1, lexical_cst l2);
string_cst string_cst_chain(string_cst l1, string_cst l2);
string string_chain(string l1, string l2);
id_label id_label_chain(id_label l1, id_label l2);
case_label case_label_chain(case_label l1, case_label l2);
default_label default_label_chain(default_label l1, default_label l2);
word word_chain(word l1, word l2);
asm_operand asm_operand_chain(asm_operand l1, asm_operand l2);
nesc_decl nesc_decl_chain(nesc_decl l1, nesc_decl l2);
interface interface_chain(interface l1, interface l2);
component component_chain(component l1, component l2);
implementation implementation_chain(implementation l1, implementation l2);
configuration configuration_chain(configuration l1, configuration l2);
module module_chain(module l1, module l2);
binary_component binary_component_chain(binary_component l1, binary_component l2);
rp_interface rp_interface_chain(rp_interface l1, rp_interface l2);
interface_ref interface_ref_chain(interface_ref l1, interface_ref l2);
component_ref component_ref_chain(component_ref l1, component_ref l2);
connection connection_chain(connection l1, connection l2);
endpoint endpoint_chain(endpoint l1, endpoint l2);
parameterised_identifier parameterised_identifier_chain(parameterised_identifier l1, parameterised_identifier l2);
generic_declarator generic_declarator_chain(generic_declarator l1, generic_declarator l2);
generic_call generic_call_chain(generic_call l1, generic_call l2);
interface_ref_declarator interface_ref_declarator_chain(interface_ref_declarator l1, interface_ref_declarator l2);
interface_deref interface_deref_chain(interface_deref l1, interface_deref l2);
component_deref component_deref_chain(component_deref l1, component_deref l2);
component_typeref component_typeref_chain(component_typeref l1, component_typeref l2);
atomic_stmt atomic_stmt_chain(atomic_stmt l1, atomic_stmt l2);
nesc_attribute nesc_attribute_chain(nesc_attribute l1, nesc_attribute l2);
type_parm_decl type_parm_decl_chain(type_parm_decl l1, type_parm_decl l2);
type_argument type_argument_chain(type_argument l1, type_argument l2);
error_decl error_decl_chain(error_decl l1, error_decl l2);
attribute_ref attribute_ref_chain(attribute_ref l1, attribute_ref l2);
enum_ref enum_ref_chain(enum_ref l1, enum_ref l2);
error_stmt error_stmt_chain(error_stmt l1, error_stmt l2);
while_stmt while_stmt_chain(while_stmt l1, while_stmt l2);
dowhile_stmt dowhile_stmt_chain(dowhile_stmt l1, dowhile_stmt l2);
error_expr error_expr_chain(error_expr l1, error_expr l2);
array_ref array_ref_chain(array_ref l1, array_ref l2);
dereference dereference_chain(dereference l1, dereference l2);
extension_expr extension_expr_chain(extension_expr l1, extension_expr l2);
sizeof_expr sizeof_expr_chain(sizeof_expr l1, sizeof_expr l2);
alignof_expr alignof_expr_chain(alignof_expr l1, alignof_expr l2);
realpart realpart_chain(realpart l1, realpart l2);
imagpart imagpart_chain(imagpart l1, imagpart l2);
address_of address_of_chain(address_of l1, address_of l2);
unary_minus unary_minus_chain(unary_minus l1, unary_minus l2);
unary_plus unary_plus_chain(unary_plus l1, unary_plus l2);
conjugate conjugate_chain(conjugate l1, conjugate l2);
bitnot bitnot_chain(bitnot l1, bitnot l2);
not not_chain(not l1, not l2);
preincrement preincrement_chain(preincrement l1, preincrement l2);
predecrement predecrement_chain(predecrement l1, predecrement l2);
postincrement postincrement_chain(postincrement l1, postincrement l2);
postdecrement postdecrement_chain(postdecrement l1, postdecrement l2);
plus plus_chain(plus l1, plus l2);
minus minus_chain(minus l1, minus l2);
times times_chain(times l1, times l2);
divide divide_chain(divide l1, divide l2);
modulo modulo_chain(modulo l1, modulo l2);
lshift lshift_chain(lshift l1, lshift l2);
rshift rshift_chain(rshift l1, rshift l2);
leq leq_chain(leq l1, leq l2);
geq geq_chain(geq l1, geq l2);
lt lt_chain(lt l1, lt l2);
gt gt_chain(gt l1, gt l2);
eq eq_chain(eq l1, eq l2);
ne ne_chain(ne l1, ne l2);
bitand bitand_chain(bitand l1, bitand l2);
bitor bitor_chain(bitor l1, bitor l2);
bitxor bitxor_chain(bitxor l1, bitxor l2);
andand andand_chain(andand l1, andand l2);
oror oror_chain(oror l1, oror l2);
assign assign_chain(assign l1, assign l2);
plus_assign plus_assign_chain(plus_assign l1, plus_assign l2);
minus_assign minus_assign_chain(minus_assign l1, minus_assign l2);
times_assign times_assign_chain(times_assign l1, times_assign l2);
divide_assign divide_assign_chain(divide_assign l1, divide_assign l2);
modulo_assign modulo_assign_chain(modulo_assign l1, modulo_assign l2);
lshift_assign lshift_assign_chain(lshift_assign l1, lshift_assign l2);
rshift_assign rshift_assign_chain(rshift_assign l1, rshift_assign l2);
bitand_assign bitand_assign_chain(bitand_assign l1, bitand_assign l2);
bitor_assign bitor_assign_chain(bitor_assign l1, bitor_assign l2);
bitxor_assign bitxor_assign_chain(bitxor_assign l1, bitxor_assign l2);
rp_connection rp_connection_chain(rp_connection l1, rp_connection l2);
eq_connection eq_connection_chain(eq_connection l1, eq_connection l2);
nx_struct_ref nx_struct_ref_chain(nx_struct_ref l1, nx_struct_ref l2);
nx_union_ref nx_union_ref_chain(nx_union_ref l1, nx_union_ref l2);
target_attribute target_attribute_chain(target_attribute l1, target_attribute l2);
