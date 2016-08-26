/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
node AST_node_last(node l){
  if (!l) return NULL;
  while (l->next) l = l->next;
  return l;
}

node AST_node_chain(node l1, node l2){
  if (!l1) return l2;
  AST_node_last(l1)->next = l2;
  return l1;
}

int AST_node_length(node l){
  int len = 0;

  while (l) 
    {
      l = l->next;
      len++;
    }
  return len;
}

node AST_node_reverse(node l){
  node last = NULL, next;

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

node node_chain(node l1, node l2)
{ return CAST(node, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

declaration declaration_chain(declaration l1, declaration l2)
{ return CAST(declaration, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

statement statement_chain(statement l1, statement l2)
{ return CAST(statement, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

expression expression_chain(expression l1, expression l2)
{ return CAST(expression, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

type_element type_element_chain(type_element l1, type_element l2)
{ return CAST(type_element, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

declarator declarator_chain(declarator l1, declarator l2)
{ return CAST(declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

label label_chain(label l1, label l2)
{ return CAST(label, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

asm_decl asm_decl_chain(asm_decl l1, asm_decl l2)
{ return CAST(asm_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

data_decl data_decl_chain(data_decl l1, data_decl l2)
{ return CAST(data_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

extension_decl extension_decl_chain(extension_decl l1, extension_decl l2)
{ return CAST(extension_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

ellipsis_decl ellipsis_decl_chain(ellipsis_decl l1, ellipsis_decl l2)
{ return CAST(ellipsis_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

enumerator enumerator_chain(enumerator l1, enumerator l2)
{ return CAST(enumerator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

oldidentifier_decl oldidentifier_decl_chain(oldidentifier_decl l1, oldidentifier_decl l2)
{ return CAST(oldidentifier_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

function_decl function_decl_chain(function_decl l1, function_decl l2)
{ return CAST(function_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

implicit_decl implicit_decl_chain(implicit_decl l1, implicit_decl l2)
{ return CAST(implicit_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

variable_decl variable_decl_chain(variable_decl l1, variable_decl l2)
{ return CAST(variable_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

field_decl field_decl_chain(field_decl l1, field_decl l2)
{ return CAST(field_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

asttype asttype_chain(asttype l1, asttype l2)
{ return CAST(asttype, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

typename typename_chain(typename l1, typename l2)
{ return CAST(typename, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

typeof_expr typeof_expr_chain(typeof_expr l1, typeof_expr l2)
{ return CAST(typeof_expr, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

typeof_type typeof_type_chain(typeof_type l1, typeof_type l2)
{ return CAST(typeof_type, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

attribute attribute_chain(attribute l1, attribute l2)
{ return CAST(attribute, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

gcc_attribute gcc_attribute_chain(gcc_attribute l1, gcc_attribute l2)
{ return CAST(gcc_attribute, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

rid rid_chain(rid l1, rid l2)
{ return CAST(rid, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

qualifier qualifier_chain(qualifier l1, qualifier l2)
{ return CAST(qualifier, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

tag_ref tag_ref_chain(tag_ref l1, tag_ref l2)
{ return CAST(tag_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

struct_ref struct_ref_chain(struct_ref l1, struct_ref l2)
{ return CAST(struct_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

union_ref union_ref_chain(union_ref l1, union_ref l2)
{ return CAST(union_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

nested_declarator nested_declarator_chain(nested_declarator l1, nested_declarator l2)
{ return CAST(nested_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

function_declarator function_declarator_chain(function_declarator l1, function_declarator l2)
{ return CAST(function_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

pointer_declarator pointer_declarator_chain(pointer_declarator l1, pointer_declarator l2)
{ return CAST(pointer_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

qualified_declarator qualified_declarator_chain(qualified_declarator l1, qualified_declarator l2)
{ return CAST(qualified_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

array_declarator array_declarator_chain(array_declarator l1, array_declarator l2)
{ return CAST(array_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

identifier_declarator identifier_declarator_chain(identifier_declarator l1, identifier_declarator l2)
{ return CAST(identifier_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

asm_stmt asm_stmt_chain(asm_stmt l1, asm_stmt l2)
{ return CAST(asm_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

compound_stmt compound_stmt_chain(compound_stmt l1, compound_stmt l2)
{ return CAST(compound_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

if_stmt if_stmt_chain(if_stmt l1, if_stmt l2)
{ return CAST(if_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

labeled_stmt labeled_stmt_chain(labeled_stmt l1, labeled_stmt l2)
{ return CAST(labeled_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

expression_stmt expression_stmt_chain(expression_stmt l1, expression_stmt l2)
{ return CAST(expression_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

conditional_stmt conditional_stmt_chain(conditional_stmt l1, conditional_stmt l2)
{ return CAST(conditional_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

switch_stmt switch_stmt_chain(switch_stmt l1, switch_stmt l2)
{ return CAST(switch_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

for_stmt for_stmt_chain(for_stmt l1, for_stmt l2)
{ return CAST(for_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

break_stmt break_stmt_chain(break_stmt l1, break_stmt l2)
{ return CAST(break_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

continue_stmt continue_stmt_chain(continue_stmt l1, continue_stmt l2)
{ return CAST(continue_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

return_stmt return_stmt_chain(return_stmt l1, return_stmt l2)
{ return CAST(return_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

goto_stmt goto_stmt_chain(goto_stmt l1, goto_stmt l2)
{ return CAST(goto_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

computed_goto_stmt computed_goto_stmt_chain(computed_goto_stmt l1, computed_goto_stmt l2)
{ return CAST(computed_goto_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

empty_stmt empty_stmt_chain(empty_stmt l1, empty_stmt l2)
{ return CAST(empty_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

unary unary_chain(unary l1, unary l2)
{ return CAST(unary, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

binary binary_chain(binary l1, binary l2)
{ return CAST(binary, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

comma comma_chain(comma l1, comma l2)
{ return CAST(comma, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

sizeof_type sizeof_type_chain(sizeof_type l1, sizeof_type l2)
{ return CAST(sizeof_type, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

alignof_type alignof_type_chain(alignof_type l1, alignof_type l2)
{ return CAST(alignof_type, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

label_address label_address_chain(label_address l1, label_address l2)
{ return CAST(label_address, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

cast cast_chain(cast l1, cast l2)
{ return CAST(cast, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

cast_list cast_list_chain(cast_list l1, cast_list l2)
{ return CAST(cast_list, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

conditional conditional_chain(conditional l1, conditional l2)
{ return CAST(conditional, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

identifier identifier_chain(identifier l1, identifier l2)
{ return CAST(identifier, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

compound_expr compound_expr_chain(compound_expr l1, compound_expr l2)
{ return CAST(compound_expr, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

function_call function_call_chain(function_call l1, function_call l2)
{ return CAST(function_call, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

field_ref field_ref_chain(field_ref l1, field_ref l2)
{ return CAST(field_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

increment increment_chain(increment l1, increment l2)
{ return CAST(increment, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

comparison comparison_chain(comparison l1, comparison l2)
{ return CAST(comparison, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

assignment assignment_chain(assignment l1, assignment l2)
{ return CAST(assignment, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

init_list init_list_chain(init_list l1, init_list l2)
{ return CAST(init_list, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

init_specific init_specific_chain(init_specific l1, init_specific l2)
{ return CAST(init_specific, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

designator designator_chain(designator l1, designator l2)
{ return CAST(designator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

designate_field designate_field_chain(designate_field l1, designate_field l2)
{ return CAST(designate_field, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

designate_index designate_index_chain(designate_index l1, designate_index l2)
{ return CAST(designate_index, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

lexical_cst lexical_cst_chain(lexical_cst l1, lexical_cst l2)
{ return CAST(lexical_cst, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

string_cst string_cst_chain(string_cst l1, string_cst l2)
{ return CAST(string_cst, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

string string_chain(string l1, string l2)
{ return CAST(string, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

id_label id_label_chain(id_label l1, id_label l2)
{ return CAST(id_label, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

case_label case_label_chain(case_label l1, case_label l2)
{ return CAST(case_label, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

default_label default_label_chain(default_label l1, default_label l2)
{ return CAST(default_label, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

word word_chain(word l1, word l2)
{ return CAST(word, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

asm_operand asm_operand_chain(asm_operand l1, asm_operand l2)
{ return CAST(asm_operand, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

nesc_decl nesc_decl_chain(nesc_decl l1, nesc_decl l2)
{ return CAST(nesc_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

interface interface_chain(interface l1, interface l2)
{ return CAST(interface, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

component component_chain(component l1, component l2)
{ return CAST(component, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

implementation implementation_chain(implementation l1, implementation l2)
{ return CAST(implementation, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

configuration configuration_chain(configuration l1, configuration l2)
{ return CAST(configuration, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

module module_chain(module l1, module l2)
{ return CAST(module, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

binary_component binary_component_chain(binary_component l1, binary_component l2)
{ return CAST(binary_component, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

rp_interface rp_interface_chain(rp_interface l1, rp_interface l2)
{ return CAST(rp_interface, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

interface_ref interface_ref_chain(interface_ref l1, interface_ref l2)
{ return CAST(interface_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

component_ref component_ref_chain(component_ref l1, component_ref l2)
{ return CAST(component_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

connection connection_chain(connection l1, connection l2)
{ return CAST(connection, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

endpoint endpoint_chain(endpoint l1, endpoint l2)
{ return CAST(endpoint, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

parameterised_identifier parameterised_identifier_chain(parameterised_identifier l1, parameterised_identifier l2)
{ return CAST(parameterised_identifier, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

generic_declarator generic_declarator_chain(generic_declarator l1, generic_declarator l2)
{ return CAST(generic_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

generic_call generic_call_chain(generic_call l1, generic_call l2)
{ return CAST(generic_call, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

interface_ref_declarator interface_ref_declarator_chain(interface_ref_declarator l1, interface_ref_declarator l2)
{ return CAST(interface_ref_declarator, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

interface_deref interface_deref_chain(interface_deref l1, interface_deref l2)
{ return CAST(interface_deref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

component_deref component_deref_chain(component_deref l1, component_deref l2)
{ return CAST(component_deref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

component_typeref component_typeref_chain(component_typeref l1, component_typeref l2)
{ return CAST(component_typeref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

atomic_stmt atomic_stmt_chain(atomic_stmt l1, atomic_stmt l2)
{ return CAST(atomic_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

nesc_attribute nesc_attribute_chain(nesc_attribute l1, nesc_attribute l2)
{ return CAST(nesc_attribute, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

type_parm_decl type_parm_decl_chain(type_parm_decl l1, type_parm_decl l2)
{ return CAST(type_parm_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

type_argument type_argument_chain(type_argument l1, type_argument l2)
{ return CAST(type_argument, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

error_decl error_decl_chain(error_decl l1, error_decl l2)
{ return CAST(error_decl, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

attribute_ref attribute_ref_chain(attribute_ref l1, attribute_ref l2)
{ return CAST(attribute_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

enum_ref enum_ref_chain(enum_ref l1, enum_ref l2)
{ return CAST(enum_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

error_stmt error_stmt_chain(error_stmt l1, error_stmt l2)
{ return CAST(error_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

while_stmt while_stmt_chain(while_stmt l1, while_stmt l2)
{ return CAST(while_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

dowhile_stmt dowhile_stmt_chain(dowhile_stmt l1, dowhile_stmt l2)
{ return CAST(dowhile_stmt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

error_expr error_expr_chain(error_expr l1, error_expr l2)
{ return CAST(error_expr, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

array_ref array_ref_chain(array_ref l1, array_ref l2)
{ return CAST(array_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

dereference dereference_chain(dereference l1, dereference l2)
{ return CAST(dereference, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

extension_expr extension_expr_chain(extension_expr l1, extension_expr l2)
{ return CAST(extension_expr, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

sizeof_expr sizeof_expr_chain(sizeof_expr l1, sizeof_expr l2)
{ return CAST(sizeof_expr, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

alignof_expr alignof_expr_chain(alignof_expr l1, alignof_expr l2)
{ return CAST(alignof_expr, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

realpart realpart_chain(realpart l1, realpart l2)
{ return CAST(realpart, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

imagpart imagpart_chain(imagpart l1, imagpart l2)
{ return CAST(imagpart, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

address_of address_of_chain(address_of l1, address_of l2)
{ return CAST(address_of, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

unary_minus unary_minus_chain(unary_minus l1, unary_minus l2)
{ return CAST(unary_minus, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

unary_plus unary_plus_chain(unary_plus l1, unary_plus l2)
{ return CAST(unary_plus, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

conjugate conjugate_chain(conjugate l1, conjugate l2)
{ return CAST(conjugate, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitnot bitnot_chain(bitnot l1, bitnot l2)
{ return CAST(bitnot, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

not not_chain(not l1, not l2)
{ return CAST(not, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

preincrement preincrement_chain(preincrement l1, preincrement l2)
{ return CAST(preincrement, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

predecrement predecrement_chain(predecrement l1, predecrement l2)
{ return CAST(predecrement, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

postincrement postincrement_chain(postincrement l1, postincrement l2)
{ return CAST(postincrement, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

postdecrement postdecrement_chain(postdecrement l1, postdecrement l2)
{ return CAST(postdecrement, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

plus plus_chain(plus l1, plus l2)
{ return CAST(plus, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

minus minus_chain(minus l1, minus l2)
{ return CAST(minus, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

times times_chain(times l1, times l2)
{ return CAST(times, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

divide divide_chain(divide l1, divide l2)
{ return CAST(divide, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

modulo modulo_chain(modulo l1, modulo l2)
{ return CAST(modulo, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

lshift lshift_chain(lshift l1, lshift l2)
{ return CAST(lshift, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

rshift rshift_chain(rshift l1, rshift l2)
{ return CAST(rshift, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

leq leq_chain(leq l1, leq l2)
{ return CAST(leq, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

geq geq_chain(geq l1, geq l2)
{ return CAST(geq, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

lt lt_chain(lt l1, lt l2)
{ return CAST(lt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

gt gt_chain(gt l1, gt l2)
{ return CAST(gt, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

eq eq_chain(eq l1, eq l2)
{ return CAST(eq, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

ne ne_chain(ne l1, ne l2)
{ return CAST(ne, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitand bitand_chain(bitand l1, bitand l2)
{ return CAST(bitand, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitor bitor_chain(bitor l1, bitor l2)
{ return CAST(bitor, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitxor bitxor_chain(bitxor l1, bitxor l2)
{ return CAST(bitxor, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

andand andand_chain(andand l1, andand l2)
{ return CAST(andand, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

oror oror_chain(oror l1, oror l2)
{ return CAST(oror, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

assign assign_chain(assign l1, assign l2)
{ return CAST(assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

plus_assign plus_assign_chain(plus_assign l1, plus_assign l2)
{ return CAST(plus_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

minus_assign minus_assign_chain(minus_assign l1, minus_assign l2)
{ return CAST(minus_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

times_assign times_assign_chain(times_assign l1, times_assign l2)
{ return CAST(times_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

divide_assign divide_assign_chain(divide_assign l1, divide_assign l2)
{ return CAST(divide_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

modulo_assign modulo_assign_chain(modulo_assign l1, modulo_assign l2)
{ return CAST(modulo_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

lshift_assign lshift_assign_chain(lshift_assign l1, lshift_assign l2)
{ return CAST(lshift_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

rshift_assign rshift_assign_chain(rshift_assign l1, rshift_assign l2)
{ return CAST(rshift_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitand_assign bitand_assign_chain(bitand_assign l1, bitand_assign l2)
{ return CAST(bitand_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitor_assign bitor_assign_chain(bitor_assign l1, bitor_assign l2)
{ return CAST(bitor_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

bitxor_assign bitxor_assign_chain(bitxor_assign l1, bitxor_assign l2)
{ return CAST(bitxor_assign, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

rp_connection rp_connection_chain(rp_connection l1, rp_connection l2)
{ return CAST(rp_connection, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

eq_connection eq_connection_chain(eq_connection l1, eq_connection l2)
{ return CAST(eq_connection, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

nx_struct_ref nx_struct_ref_chain(nx_struct_ref l1, nx_struct_ref l2)
{ return CAST(nx_struct_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

nx_union_ref nx_union_ref_chain(nx_union_ref l1, nx_union_ref l2)
{ return CAST(nx_union_ref, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

target_attribute target_attribute_chain(target_attribute l1, target_attribute l2)
{ return CAST(target_attribute, AST_node_chain(CAST(node, l1), CAST(node, l2))); }

