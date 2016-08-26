/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
node new_node(region r, location location)
{
  node obj = ralloc(r, struct AST_node);

  obj->kind = kind_node;
  obj->location = location;

  return obj;
}

declaration new_declaration(region r, location location)
{
  declaration obj = ralloc(r, struct AST_declaration);

  obj->kind = kind_declaration;
  obj->location = location;

  return obj;
}

statement new_statement(region r, location location)
{
  statement obj = ralloc(r, struct AST_statement);

  obj->kind = kind_statement;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

expression new_expression(region r, location location)
{
  expression obj = ralloc(r, struct AST_expression);

  obj->kind = kind_expression;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

type_element new_type_element(region r, location location)
{
  type_element obj = ralloc(r, struct AST_type_element);

  obj->kind = kind_type_element;
  obj->location = location;

  return obj;
}

declarator new_declarator(region r, location location)
{
  declarator obj = ralloc(r, struct AST_declarator);

  obj->kind = kind_declarator;
  obj->location = location;

  return obj;
}

label new_label(region r, location location)
{
  label obj = ralloc(r, struct AST_label);

  obj->kind = kind_label;
  obj->location = location;

  return obj;
}

asm_decl new_asm_decl(region r, location location, asm_stmt asm_stmt)
{
  asm_decl obj = ralloc(r, struct AST_asm_decl);

  obj->kind = kind_asm_decl;
  obj->location = location;
  obj->asm_stmt = asm_stmt;

  return obj;
}

data_decl new_data_decl(region r, location location, type_element modifiers, declaration decls)
{
  data_decl obj = ralloc(r, struct AST_data_decl);

  obj->kind = kind_data_decl;
  obj->location = location;
  obj->modifiers = modifiers;
  obj->decls = decls;

  return obj;
}

extension_decl new_extension_decl(region r, location location, declaration decl)
{
  extension_decl obj = ralloc(r, struct AST_extension_decl);

  obj->kind = kind_extension_decl;
  obj->location = location;
  obj->decl = decl;

  return obj;
}

ellipsis_decl new_ellipsis_decl(region r, location location)
{
  ellipsis_decl obj = ralloc(r, struct AST_ellipsis_decl);

  obj->kind = kind_ellipsis_decl;
  obj->location = location;

  return obj;
}

enumerator new_enumerator(region r, location location, cstring cstring, expression arg1, data_declaration ddecl)
{
  enumerator obj = ralloc(r, struct AST_enumerator);

  obj->kind = kind_enumerator;
  obj->location = location;
  obj->cstring = cstring;
  obj->arg1 = arg1;
  obj->ddecl = ddecl;

  return obj;
}

oldidentifier_decl new_oldidentifier_decl(region r, location location, cstring cstring, data_declaration ddecl)
{
  oldidentifier_decl obj = ralloc(r, struct AST_oldidentifier_decl);

  obj->kind = kind_oldidentifier_decl;
  obj->location = location;
  obj->cstring = cstring;
  obj->ddecl = ddecl;

  return obj;
}

function_decl new_function_decl(region r, location location, declarator declarator, type_element modifiers, attribute attributes, declaration old_parms, statement stmt, function_decl parent_function, data_declaration ddecl)
{
  function_decl obj = ralloc(r, struct AST_function_decl);

  obj->kind = kind_function_decl;
  obj->location = location;
  obj->declarator = declarator;
  obj->modifiers = modifiers;
  obj->attributes = attributes;
  obj->old_parms = old_parms;
  obj->stmt = stmt;
  obj->parent_function = parent_function;
  obj->ddecl = ddecl;

  return obj;
}

implicit_decl new_implicit_decl(region r, location location, identifier ident)
{
  implicit_decl obj = ralloc(r, struct AST_implicit_decl);

  obj->kind = kind_implicit_decl;
  obj->location = location;
  obj->ident = ident;

  return obj;
}

variable_decl new_variable_decl(region r, location location, declarator declarator, attribute attributes, expression arg1, asm_stmt asm_stmt, data_declaration ddecl)
{
  variable_decl obj = ralloc(r, struct AST_variable_decl);

  obj->kind = kind_variable_decl;
  obj->location = location;
  obj->declarator = declarator;
  obj->attributes = attributes;
  obj->arg1 = arg1;
  obj->asm_stmt = asm_stmt;
  obj->ddecl = ddecl;

  return obj;
}

field_decl new_field_decl(region r, location location, declarator declarator, attribute attributes, expression arg1)
{
  field_decl obj = ralloc(r, struct AST_field_decl);

  obj->kind = kind_field_decl;
  obj->location = location;
  obj->declarator = declarator;
  obj->attributes = attributes;
  obj->arg1 = arg1;

  return obj;
}

asttype new_asttype(region r, location location, declarator declarator, type_element qualifiers)
{
  asttype obj = ralloc(r, struct AST_asttype);

  obj->kind = kind_asttype;
  obj->location = location;
  obj->declarator = declarator;
  obj->qualifiers = qualifiers;

  return obj;
}

typename new_typename(region r, location location, data_declaration ddecl)
{
  typename obj = ralloc(r, struct AST_typename);

  obj->kind = kind_typename;
  obj->location = location;
  obj->ddecl = ddecl;

  return obj;
}

typeof_expr new_typeof_expr(region r, location location, expression arg1)
{
  typeof_expr obj = ralloc(r, struct AST_typeof_expr);

  obj->kind = kind_typeof_expr;
  obj->location = location;
  obj->arg1 = arg1;

  return obj;
}

typeof_type new_typeof_type(region r, location location, asttype asttype)
{
  typeof_type obj = ralloc(r, struct AST_typeof_type);

  obj->kind = kind_typeof_type;
  obj->location = location;
  obj->asttype = asttype;

  return obj;
}

attribute new_attribute(region r, location location, word word1)
{
  attribute obj = ralloc(r, struct AST_attribute);

  obj->kind = kind_attribute;
  obj->location = location;
  obj->word1 = word1;

  return obj;
}

gcc_attribute new_gcc_attribute(region r, location location, word word1, expression args)
{
  gcc_attribute obj = ralloc(r, struct AST_gcc_attribute);

  obj->kind = kind_gcc_attribute;
  obj->location = location;
  obj->word1 = word1;
  obj->args = args;

  return obj;
}

rid new_rid(region r, location location, enum rid id)
{
  rid obj = ralloc(r, struct AST_rid);

  obj->kind = kind_rid;
  obj->location = location;
  obj->id = id;

  return obj;
}

qualifier new_qualifier(region r, location location, enum rid id)
{
  qualifier obj = ralloc(r, struct AST_qualifier);

  obj->kind = kind_qualifier;
  obj->location = location;
  obj->id = id;

  return obj;
}

tag_ref new_tag_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  tag_ref obj = ralloc(r, struct AST_tag_ref);

  obj->kind = kind_tag_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

struct_ref new_struct_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  struct_ref obj = ralloc(r, struct AST_struct_ref);

  obj->kind = kind_struct_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

union_ref new_union_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  union_ref obj = ralloc(r, struct AST_union_ref);

  obj->kind = kind_union_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

nested_declarator new_nested_declarator(region r, location location, declarator declarator)
{
  nested_declarator obj = ralloc(r, struct AST_nested_declarator);

  obj->kind = kind_nested_declarator;
  obj->location = location;
  obj->declarator = declarator;

  return obj;
}

function_declarator new_function_declarator(region r, location location, declarator declarator, declaration parms, declaration gparms, type_element qualifiers, environment env)
{
  function_declarator obj = ralloc(r, struct AST_function_declarator);

  obj->kind = kind_function_declarator;
  obj->location = location;
  obj->declarator = declarator;
  obj->parms = parms;
  obj->gparms = gparms;
  obj->qualifiers = qualifiers;
  obj->env = env;

  return obj;
}

pointer_declarator new_pointer_declarator(region r, location location, declarator declarator)
{
  pointer_declarator obj = ralloc(r, struct AST_pointer_declarator);

  obj->kind = kind_pointer_declarator;
  obj->location = location;
  obj->declarator = declarator;

  return obj;
}

qualified_declarator new_qualified_declarator(region r, location location, declarator declarator, type_element modifiers)
{
  qualified_declarator obj = ralloc(r, struct AST_qualified_declarator);

  obj->kind = kind_qualified_declarator;
  obj->location = location;
  obj->declarator = declarator;
  obj->modifiers = modifiers;

  return obj;
}

array_declarator new_array_declarator(region r, location location, declarator declarator, expression arg1)
{
  array_declarator obj = ralloc(r, struct AST_array_declarator);

  obj->kind = kind_array_declarator;
  obj->location = location;
  obj->declarator = declarator;
  obj->arg1 = arg1;

  return obj;
}

identifier_declarator new_identifier_declarator(region r, location location, cstring cstring)
{
  identifier_declarator obj = ralloc(r, struct AST_identifier_declarator);

  obj->kind = kind_identifier_declarator;
  obj->location = location;
  obj->cstring = cstring;

  return obj;
}

asm_stmt new_asm_stmt(region r, location location, expression arg1, asm_operand asm_operands1, asm_operand asm_operands2, string asm_clobbers, type_element qualifiers)
{
  asm_stmt obj = ralloc(r, struct AST_asm_stmt);

  obj->kind = kind_asm_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->asm_operands1 = asm_operands1;
  obj->asm_operands2 = asm_operands2;
  obj->asm_clobbers = asm_clobbers;
  obj->qualifiers = qualifiers;

  return obj;
}

compound_stmt new_compound_stmt(region r, location location, id_label id_labels, declaration decls, statement stmts, environment env)
{
  compound_stmt obj = ralloc(r, struct AST_compound_stmt);

  obj->kind = kind_compound_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->id_labels = id_labels;
  obj->decls = decls;
  obj->stmts = stmts;
  obj->env = env;

  return obj;
}

if_stmt new_if_stmt(region r, location location, expression condition, statement stmt1, statement stmt2)
{
  if_stmt obj = ralloc(r, struct AST_if_stmt);

  obj->kind = kind_if_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->condition = condition;
  obj->stmt1 = stmt1;
  obj->stmt2 = stmt2;

  return obj;
}

labeled_stmt new_labeled_stmt(region r, location location, label label, statement stmt)
{
  labeled_stmt obj = ralloc(r, struct AST_labeled_stmt);

  obj->kind = kind_labeled_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->label = label;
  obj->stmt = stmt;

  return obj;
}

expression_stmt new_expression_stmt(region r, location location, expression arg1)
{
  expression_stmt obj = ralloc(r, struct AST_expression_stmt);

  obj->kind = kind_expression_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

conditional_stmt new_conditional_stmt(region r, location location, expression condition, statement stmt)
{
  conditional_stmt obj = ralloc(r, struct AST_conditional_stmt);

  obj->kind = kind_conditional_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->condition = condition;
  obj->stmt = stmt;

  return obj;
}

switch_stmt new_switch_stmt(region r, location location, expression condition, statement stmt)
{
  switch_stmt obj = ralloc(r, struct AST_switch_stmt);

  obj->kind = kind_switch_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->condition = condition;
  obj->stmt = stmt;

  return obj;
}

for_stmt new_for_stmt(region r, location location, expression arg1, expression arg2, expression arg3, statement stmt)
{
  for_stmt obj = ralloc(r, struct AST_for_stmt);

  obj->kind = kind_for_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;
  obj->arg3 = arg3;
  obj->stmt = stmt;

  return obj;
}

break_stmt new_break_stmt(region r, location location)
{
  break_stmt obj = ralloc(r, struct AST_break_stmt);

  obj->kind = kind_break_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

continue_stmt new_continue_stmt(region r, location location)
{
  continue_stmt obj = ralloc(r, struct AST_continue_stmt);

  obj->kind = kind_continue_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

return_stmt new_return_stmt(region r, location location, expression arg1)
{
  return_stmt obj = ralloc(r, struct AST_return_stmt);

  obj->kind = kind_return_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

goto_stmt new_goto_stmt(region r, location location, id_label id_label)
{
  goto_stmt obj = ralloc(r, struct AST_goto_stmt);

  obj->kind = kind_goto_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->id_label = id_label;

  return obj;
}

computed_goto_stmt new_computed_goto_stmt(region r, location location, expression arg1)
{
  computed_goto_stmt obj = ralloc(r, struct AST_computed_goto_stmt);

  obj->kind = kind_computed_goto_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

empty_stmt new_empty_stmt(region r, location location)
{
  empty_stmt obj = ralloc(r, struct AST_empty_stmt);

  obj->kind = kind_empty_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

unary new_unary(region r, location location, expression arg1)
{
  unary obj = ralloc(r, struct AST_unary);

  obj->kind = kind_unary;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

binary new_binary(region r, location location, expression arg1, expression arg2)
{
  binary obj = ralloc(r, struct AST_binary);

  obj->kind = kind_binary;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

comma new_comma(region r, location location, expression arg1)
{
  comma obj = ralloc(r, struct AST_comma);

  obj->kind = kind_comma;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

sizeof_type new_sizeof_type(region r, location location, asttype asttype)
{
  sizeof_type obj = ralloc(r, struct AST_sizeof_type);

  obj->kind = kind_sizeof_type;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->asttype = asttype;

  return obj;
}

alignof_type new_alignof_type(region r, location location, asttype asttype)
{
  alignof_type obj = ralloc(r, struct AST_alignof_type);

  obj->kind = kind_alignof_type;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->asttype = asttype;

  return obj;
}

label_address new_label_address(region r, location location, id_label id_label)
{
  label_address obj = ralloc(r, struct AST_label_address);

  obj->kind = kind_label_address;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->id_label = id_label;

  return obj;
}

cast new_cast(region r, location location, expression arg1, asttype asttype)
{
  cast obj = ralloc(r, struct AST_cast);

  obj->kind = kind_cast;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->asttype = asttype;

  return obj;
}

cast_list new_cast_list(region r, location location, asttype asttype, expression init_expr)
{
  cast_list obj = ralloc(r, struct AST_cast_list);

  obj->kind = kind_cast_list;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->asttype = asttype;
  obj->init_expr = init_expr;

  return obj;
}

conditional new_conditional(region r, location location, expression condition, expression arg1, expression arg2)
{
  conditional obj = ralloc(r, struct AST_conditional);

  obj->kind = kind_conditional;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->condition = condition;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

identifier new_identifier(region r, location location, cstring cstring, data_declaration ddecl)
{
  identifier obj = ralloc(r, struct AST_identifier);

  obj->kind = kind_identifier;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->cstring = cstring;
  obj->ddecl = ddecl;

  return obj;
}

compound_expr new_compound_expr(region r, location location, statement stmt)
{
  compound_expr obj = ralloc(r, struct AST_compound_expr);

  obj->kind = kind_compound_expr;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->stmt = stmt;

  return obj;
}

function_call new_function_call(region r, location location, expression arg1, expression args, asttype va_arg_call, nesc_call_kind call_kind)
{
  function_call obj = ralloc(r, struct AST_function_call);

  obj->kind = kind_function_call;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->args = args;
  obj->va_arg_call = va_arg_call;
  obj->call_kind = call_kind;

  return obj;
}

field_ref new_field_ref(region r, location location, expression arg1, cstring cstring)
{
  field_ref obj = ralloc(r, struct AST_field_ref);

  obj->kind = kind_field_ref;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->cstring = cstring;

  return obj;
}

increment new_increment(region r, location location, expression arg1)
{
  increment obj = ralloc(r, struct AST_increment);

  obj->kind = kind_increment;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

comparison new_comparison(region r, location location, expression arg1, expression arg2)
{
  comparison obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_comparison;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

assignment new_assignment(region r, location location, expression arg1, expression arg2)
{
  assignment obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_assignment;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

init_list new_init_list(region r, location location, expression args)
{
  init_list obj = ralloc(r, struct AST_init_list);

  obj->kind = kind_init_list;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->args = args;

  return obj;
}

init_specific new_init_specific(region r, location location, designator designator, expression init_expr)
{
  init_specific obj = ralloc(r, struct AST_init_specific);

  obj->kind = kind_init_specific;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->designator = designator;
  obj->init_expr = init_expr;

  return obj;
}

designator new_designator(region r, location location)
{
  designator obj = ralloc(r, struct AST_designator);

  obj->kind = kind_designator;
  obj->location = location;

  return obj;
}

designate_field new_designate_field(region r, location location, cstring cstring)
{
  designate_field obj = ralloc(r, struct AST_designate_field);

  obj->kind = kind_designate_field;
  obj->location = location;
  obj->cstring = cstring;

  return obj;
}

designate_index new_designate_index(region r, location location, expression arg1, expression arg2)
{
  designate_index obj = ralloc(r, struct AST_designate_index);

  obj->kind = kind_designate_index;
  obj->location = location;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

lexical_cst new_lexical_cst(region r, location location, cstring cstring)
{
  lexical_cst obj = ralloc(r, struct AST_lexical_cst);

  obj->kind = kind_lexical_cst;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->cstring = cstring;

  return obj;
}

string_cst new_string_cst(region r, location location, cstring cstring)
{
  string_cst obj = ralloc(r, struct AST_string_cst);

  obj->kind = kind_string_cst;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->cstring = cstring;

  return obj;
}

string new_string(region r, location location, string_cst strings, data_declaration ddecl)
{
  string obj = ralloc(r, struct AST_string);

  obj->kind = kind_string;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->strings = strings;
  obj->ddecl = ddecl;

  return obj;
}

id_label new_id_label(region r, location location, cstring cstring)
{
  id_label obj = ralloc(r, struct AST_id_label);

  obj->kind = kind_id_label;
  obj->location = location;
  obj->cstring = cstring;

  return obj;
}

case_label new_case_label(region r, location location, expression arg1, expression arg2)
{
  case_label obj = ralloc(r, struct AST_case_label);

  obj->kind = kind_case_label;
  obj->location = location;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

default_label new_default_label(region r, location location)
{
  default_label obj = ralloc(r, struct AST_default_label);

  obj->kind = kind_default_label;
  obj->location = location;

  return obj;
}

word new_word(region r, location location, cstring cstring)
{
  word obj = ralloc(r, struct AST_word);

  obj->kind = kind_word;
  obj->location = location;
  obj->cstring = cstring;

  return obj;
}

asm_operand new_asm_operand(region r, location location, word word1, string string, expression arg1)
{
  asm_operand obj = ralloc(r, struct AST_asm_operand);

  obj->kind = kind_asm_operand;
  obj->location = location;
  obj->word1 = word1;
  obj->string = string;
  obj->arg1 = arg1;

  return obj;
}

nesc_decl new_nesc_decl(region r, location location, word word1, attribute attributes)
{
  nesc_decl obj = ralloc(r, struct AST_nesc_decl);

  obj->kind = kind_nesc_decl;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;

  return obj;
}

interface new_interface(region r, location location, word word1, attribute attributes, declaration decls)
{
  interface obj = ralloc(r, struct AST_interface);

  obj->kind = kind_interface;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->decls = decls;

  return obj;
}

component new_component(region r, location location, word word1, attribute attributes, bool abstract, declaration parms, declaration decls, implementation implementation)
{
  component obj = ralloc(r, struct AST_component);

  obj->kind = kind_component;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->abstract = abstract;
  obj->parms = parms;
  obj->decls = decls;
  obj->implementation = implementation;

  return obj;
}

implementation new_implementation(region r, location location, environment ienv)
{
  implementation obj = ralloc(r, struct AST_implementation);

  obj->kind = kind_implementation;
  obj->location = location;
  obj->ienv = ienv;

  return obj;
}

configuration new_configuration(region r, location location, environment ienv, declaration decls)
{
  configuration obj = ralloc(r, struct AST_configuration);

  obj->kind = kind_configuration;
  obj->location = location;
  obj->ienv = ienv;
  obj->decls = decls;

  return obj;
}

module new_module(region r, location location, environment ienv, declaration decls)
{
  module obj = ralloc(r, struct AST_module);

  obj->kind = kind_module;
  obj->location = location;
  obj->ienv = ienv;
  obj->decls = decls;

  return obj;
}

binary_component new_binary_component(region r, location location, environment ienv)
{
  binary_component obj = ralloc(r, struct AST_binary_component);

  obj->kind = kind_binary_component;
  obj->location = location;
  obj->ienv = ienv;

  return obj;
}

rp_interface new_rp_interface(region r, location location, bool required, declaration decls)
{
  rp_interface obj = ralloc(r, struct AST_rp_interface);

  obj->kind = kind_rp_interface;
  obj->location = location;
  obj->required = required;
  obj->decls = decls;

  return obj;
}

interface_ref new_interface_ref(region r, location location, word word1, expression args, word word2, declaration gparms, attribute attributes, data_declaration ddecl)
{
  interface_ref obj = ralloc(r, struct AST_interface_ref);

  obj->kind = kind_interface_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->args = args;
  obj->word2 = word2;
  obj->gparms = gparms;
  obj->attributes = attributes;
  obj->ddecl = ddecl;

  return obj;
}

component_ref new_component_ref(region r, location location, word word1, word word2, bool abstract, expression args)
{
  component_ref obj = ralloc(r, struct AST_component_ref);

  obj->kind = kind_component_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->word2 = word2;
  obj->abstract = abstract;
  obj->args = args;

  return obj;
}

connection new_connection(region r, location location, endpoint ep1, endpoint ep2)
{
  connection obj = ralloc(r, struct AST_connection);

  obj->kind = kind_connection;
  obj->location = location;
  obj->ep1 = ep1;
  obj->ep2 = ep2;

  return obj;
}

endpoint new_endpoint(region r, location location, parameterised_identifier ids)
{
  endpoint obj = ralloc(r, struct AST_endpoint);

  obj->kind = kind_endpoint;
  obj->location = location;
  obj->ids = ids;

  return obj;
}

parameterised_identifier new_parameterised_identifier(region r, location location, word word1, expression args)
{
  parameterised_identifier obj = ralloc(r, struct AST_parameterised_identifier);

  obj->kind = kind_parameterised_identifier;
  obj->location = location;
  obj->word1 = word1;
  obj->args = args;

  return obj;
}

generic_declarator new_generic_declarator(region r, location location, declarator declarator, declaration parms)
{
  generic_declarator obj = ralloc(r, struct AST_generic_declarator);

  obj->kind = kind_generic_declarator;
  obj->location = location;
  obj->declarator = declarator;
  obj->parms = parms;

  return obj;
}

generic_call new_generic_call(region r, location location, expression arg1, expression args)
{
  generic_call obj = ralloc(r, struct AST_generic_call);

  obj->kind = kind_generic_call;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->args = args;

  return obj;
}

interface_ref_declarator new_interface_ref_declarator(region r, location location, declarator declarator, word word1)
{
  interface_ref_declarator obj = ralloc(r, struct AST_interface_ref_declarator);

  obj->kind = kind_interface_ref_declarator;
  obj->location = location;
  obj->declarator = declarator;
  obj->word1 = word1;

  return obj;
}

interface_deref new_interface_deref(region r, location location, expression arg1, cstring cstring, data_declaration ddecl)
{
  interface_deref obj = ralloc(r, struct AST_interface_deref);

  obj->kind = kind_interface_deref;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->cstring = cstring;
  obj->ddecl = ddecl;

  return obj;
}

component_deref new_component_deref(region r, location location, expression arg1, cstring cstring, data_declaration ddecl)
{
  component_deref obj = ralloc(r, struct AST_component_deref);

  obj->kind = kind_component_deref;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->cstring = cstring;
  obj->ddecl = ddecl;

  return obj;
}

component_typeref new_component_typeref(region r, location location, data_declaration ddecl, cstring cstring)
{
  component_typeref obj = ralloc(r, struct AST_component_typeref);

  obj->kind = kind_component_typeref;
  obj->location = location;
  obj->ddecl = ddecl;
  obj->cstring = cstring;

  return obj;
}

atomic_stmt new_atomic_stmt(region r, location location, statement stmt)
{
  atomic_stmt obj = ralloc(r, struct AST_atomic_stmt);

  obj->kind = kind_atomic_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->stmt = stmt;

  return obj;
}

nesc_attribute new_nesc_attribute(region r, location location, word word1, expression arg1)
{
  nesc_attribute obj = ralloc(r, struct AST_nesc_attribute);

  obj->kind = kind_nesc_attribute;
  obj->location = location;
  obj->word1 = word1;
  obj->arg1 = arg1;

  return obj;
}

type_parm_decl new_type_parm_decl(region r, location location, cstring cstring, data_declaration ddecl)
{
  type_parm_decl obj = ralloc(r, struct AST_type_parm_decl);

  obj->kind = kind_type_parm_decl;
  obj->location = location;
  obj->cstring = cstring;
  obj->ddecl = ddecl;

  return obj;
}

type_argument new_type_argument(region r, location location, asttype asttype)
{
  type_argument obj = ralloc(r, struct AST_type_argument);

  obj->kind = kind_type_argument;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->asttype = asttype;

  return obj;
}

error_decl new_error_decl(region r, location location)
{
  error_decl obj = ralloc(r, struct AST_declaration);

  obj->kind = kind_error_decl;
  obj->location = location;

  return obj;
}

attribute_ref new_attribute_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  attribute_ref obj = ralloc(r, struct AST_tag_ref);

  obj->kind = kind_attribute_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

enum_ref new_enum_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  enum_ref obj = ralloc(r, struct AST_tag_ref);

  obj->kind = kind_enum_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

error_stmt new_error_stmt(region r, location location)
{
  error_stmt obj = ralloc(r, struct AST_statement);

  obj->kind = kind_error_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

while_stmt new_while_stmt(region r, location location, expression condition, statement stmt)
{
  while_stmt obj = ralloc(r, struct AST_conditional_stmt);

  obj->kind = kind_while_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->condition = condition;
  obj->stmt = stmt;

  return obj;
}

dowhile_stmt new_dowhile_stmt(region r, location location, expression condition, statement stmt)
{
  dowhile_stmt obj = ralloc(r, struct AST_conditional_stmt);

  obj->kind = kind_dowhile_stmt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->condition = condition;
  obj->stmt = stmt;

  return obj;
}

error_expr new_error_expr(region r, location location)
{
  error_expr obj = ralloc(r, struct AST_expression);

  obj->kind = kind_error_expr;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;

  return obj;
}

array_ref new_array_ref(region r, location location, expression arg1, expression arg2)
{
  array_ref obj = ralloc(r, struct AST_binary);

  obj->kind = kind_array_ref;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

dereference new_dereference(region r, location location, expression arg1)
{
  dereference obj = ralloc(r, struct AST_unary);

  obj->kind = kind_dereference;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

extension_expr new_extension_expr(region r, location location, expression arg1)
{
  extension_expr obj = ralloc(r, struct AST_unary);

  obj->kind = kind_extension_expr;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

sizeof_expr new_sizeof_expr(region r, location location, expression arg1)
{
  sizeof_expr obj = ralloc(r, struct AST_unary);

  obj->kind = kind_sizeof_expr;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

alignof_expr new_alignof_expr(region r, location location, expression arg1)
{
  alignof_expr obj = ralloc(r, struct AST_unary);

  obj->kind = kind_alignof_expr;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

realpart new_realpart(region r, location location, expression arg1)
{
  realpart obj = ralloc(r, struct AST_unary);

  obj->kind = kind_realpart;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

imagpart new_imagpart(region r, location location, expression arg1)
{
  imagpart obj = ralloc(r, struct AST_unary);

  obj->kind = kind_imagpart;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

address_of new_address_of(region r, location location, expression arg1)
{
  address_of obj = ralloc(r, struct AST_unary);

  obj->kind = kind_address_of;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

unary_minus new_unary_minus(region r, location location, expression arg1)
{
  unary_minus obj = ralloc(r, struct AST_unary);

  obj->kind = kind_unary_minus;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

unary_plus new_unary_plus(region r, location location, expression arg1)
{
  unary_plus obj = ralloc(r, struct AST_unary);

  obj->kind = kind_unary_plus;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

conjugate new_conjugate(region r, location location, expression arg1)
{
  conjugate obj = ralloc(r, struct AST_unary);

  obj->kind = kind_conjugate;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

bitnot new_bitnot(region r, location location, expression arg1)
{
  bitnot obj = ralloc(r, struct AST_unary);

  obj->kind = kind_bitnot;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

not new_not(region r, location location, expression arg1)
{
  not obj = ralloc(r, struct AST_unary);

  obj->kind = kind_not;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

preincrement new_preincrement(region r, location location, expression arg1)
{
  preincrement obj = ralloc(r, struct AST_increment);

  obj->kind = kind_preincrement;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

predecrement new_predecrement(region r, location location, expression arg1)
{
  predecrement obj = ralloc(r, struct AST_increment);

  obj->kind = kind_predecrement;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

postincrement new_postincrement(region r, location location, expression arg1)
{
  postincrement obj = ralloc(r, struct AST_increment);

  obj->kind = kind_postincrement;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

postdecrement new_postdecrement(region r, location location, expression arg1)
{
  postdecrement obj = ralloc(r, struct AST_increment);

  obj->kind = kind_postdecrement;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;

  return obj;
}

plus new_plus(region r, location location, expression arg1, expression arg2)
{
  plus obj = ralloc(r, struct AST_binary);

  obj->kind = kind_plus;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

minus new_minus(region r, location location, expression arg1, expression arg2)
{
  minus obj = ralloc(r, struct AST_binary);

  obj->kind = kind_minus;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

times new_times(region r, location location, expression arg1, expression arg2)
{
  times obj = ralloc(r, struct AST_binary);

  obj->kind = kind_times;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

divide new_divide(region r, location location, expression arg1, expression arg2)
{
  divide obj = ralloc(r, struct AST_binary);

  obj->kind = kind_divide;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

modulo new_modulo(region r, location location, expression arg1, expression arg2)
{
  modulo obj = ralloc(r, struct AST_binary);

  obj->kind = kind_modulo;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

lshift new_lshift(region r, location location, expression arg1, expression arg2)
{
  lshift obj = ralloc(r, struct AST_binary);

  obj->kind = kind_lshift;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

rshift new_rshift(region r, location location, expression arg1, expression arg2)
{
  rshift obj = ralloc(r, struct AST_binary);

  obj->kind = kind_rshift;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

leq new_leq(region r, location location, expression arg1, expression arg2)
{
  leq obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_leq;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

geq new_geq(region r, location location, expression arg1, expression arg2)
{
  geq obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_geq;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

lt new_lt(region r, location location, expression arg1, expression arg2)
{
  lt obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_lt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

gt new_gt(region r, location location, expression arg1, expression arg2)
{
  gt obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_gt;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

eq new_eq(region r, location location, expression arg1, expression arg2)
{
  eq obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_eq;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

ne new_ne(region r, location location, expression arg1, expression arg2)
{
  ne obj = ralloc(r, struct AST_comparison);

  obj->kind = kind_ne;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

bitand new_bitand(region r, location location, expression arg1, expression arg2)
{
  bitand obj = ralloc(r, struct AST_binary);

  obj->kind = kind_bitand;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

bitor new_bitor(region r, location location, expression arg1, expression arg2)
{
  bitor obj = ralloc(r, struct AST_binary);

  obj->kind = kind_bitor;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

bitxor new_bitxor(region r, location location, expression arg1, expression arg2)
{
  bitxor obj = ralloc(r, struct AST_binary);

  obj->kind = kind_bitxor;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

andand new_andand(region r, location location, expression arg1, expression arg2)
{
  andand obj = ralloc(r, struct AST_binary);

  obj->kind = kind_andand;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

oror new_oror(region r, location location, expression arg1, expression arg2)
{
  oror obj = ralloc(r, struct AST_binary);

  obj->kind = kind_oror;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

assign new_assign(region r, location location, expression arg1, expression arg2)
{
  assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

plus_assign new_plus_assign(region r, location location, expression arg1, expression arg2)
{
  plus_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_plus_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

minus_assign new_minus_assign(region r, location location, expression arg1, expression arg2)
{
  minus_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_minus_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

times_assign new_times_assign(region r, location location, expression arg1, expression arg2)
{
  times_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_times_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

divide_assign new_divide_assign(region r, location location, expression arg1, expression arg2)
{
  divide_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_divide_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

modulo_assign new_modulo_assign(region r, location location, expression arg1, expression arg2)
{
  modulo_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_modulo_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

lshift_assign new_lshift_assign(region r, location location, expression arg1, expression arg2)
{
  lshift_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_lshift_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

rshift_assign new_rshift_assign(region r, location location, expression arg1, expression arg2)
{
  rshift_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_rshift_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

bitand_assign new_bitand_assign(region r, location location, expression arg1, expression arg2)
{
  bitand_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_bitand_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

bitor_assign new_bitor_assign(region r, location location, expression arg1, expression arg2)
{
  bitor_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_bitor_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

bitxor_assign new_bitxor_assign(region r, location location, expression arg1, expression arg2)
{
  bitxor_assign obj = ralloc(r, struct AST_assignment);

  obj->kind = kind_bitxor_assign;
  obj->location = location;
  obj->isatomic = NOT_ATOMIC;
  obj->arg1 = arg1;
  obj->arg2 = arg2;

  return obj;
}

rp_connection new_rp_connection(region r, location location, endpoint ep1, endpoint ep2)
{
  rp_connection obj = ralloc(r, struct AST_connection);

  obj->kind = kind_rp_connection;
  obj->location = location;
  obj->ep1 = ep1;
  obj->ep2 = ep2;

  return obj;
}

eq_connection new_eq_connection(region r, location location, endpoint ep1, endpoint ep2)
{
  eq_connection obj = ralloc(r, struct AST_connection);

  obj->kind = kind_eq_connection;
  obj->location = location;
  obj->ep1 = ep1;
  obj->ep2 = ep2;

  return obj;
}

nx_struct_ref new_nx_struct_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  nx_struct_ref obj = ralloc(r, struct AST_struct_ref);

  obj->kind = kind_nx_struct_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

nx_union_ref new_nx_union_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined)
{
  nx_union_ref obj = ralloc(r, struct AST_union_ref);

  obj->kind = kind_nx_union_ref;
  obj->location = location;
  obj->word1 = word1;
  obj->attributes = attributes;
  obj->fields = fields;
  obj->defined = defined;

  return obj;
}

target_attribute new_target_attribute(region r, location location, word word1, expression args)
{
  target_attribute obj = ralloc(r, struct AST_gcc_attribute);

  obj->kind = kind_target_attribute;
  obj->location = location;
  obj->word1 = word1;
  obj->args = args;

  return obj;
}



AST_kind AST_parent_kind[] = {
  0,
  kind_node,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_nesc_decl,
  kind_nesc_decl,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_declaration,
  kind_connection,
  kind_connection,
  kind_declaration,
  kind_declaration,
  kind_node,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_conditional_stmt,
  kind_conditional_stmt,
  kind_conditional_stmt,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_statement,
  kind_node,
  kind_expression,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_increment,
  kind_increment,
  kind_increment,
  kind_increment,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_unary,
  kind_expression,
  kind_binary,
  kind_comparison,
  kind_comparison,
  kind_comparison,
  kind_comparison,
  kind_comparison,
  kind_comparison,
  kind_binary,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_assignment,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_binary,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_lexical_cst,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_expression,
  kind_node,
  kind_type_element,
  kind_typename,
  kind_type_element,
  kind_type_element,
  kind_type_element,
  kind_attribute,
  kind_gcc_attribute,
  kind_attribute,
  kind_type_element,
  kind_type_element,
  kind_type_element,
  kind_tag_ref,
  kind_struct_ref,
  kind_tag_ref,
  kind_union_ref,
  kind_tag_ref,
  kind_tag_ref,
  kind_node,
  kind_declarator,
  kind_nested_declarator,
  kind_nested_declarator,
  kind_nested_declarator,
  kind_nested_declarator,
  kind_nested_declarator,
  kind_declarator,
  kind_declarator,
  kind_node,
  kind_label,
  kind_label,
  kind_label,
  kind_node,
  kind_node,
  kind_designator,
  kind_designator,
  kind_node,
  kind_node,
  kind_node,
  kind_implementation,
  kind_implementation,
  kind_implementation,
  kind_node,
  kind_node,
};

AST_kind AST_post_kind[] = {
  postkind_node,
  postkind_declaration,
  postkind_asm_decl,
  postkind_data_decl,
  postkind_extension_decl,
  postkind_ellipsis_decl,
  postkind_enumerator,
  postkind_oldidentifier_decl,
  postkind_function_decl,
  postkind_implicit_decl,
  postkind_variable_decl,
  postkind_field_decl,
  postkind_nesc_decl,
  postkind_interface,
  postkind_component,
  postkind_rp_interface,
  postkind_interface_ref,
  postkind_component_ref,
  postkind_connection,
  postkind_rp_connection,
  postkind_eq_connection,
  postkind_type_parm_decl,
  postkind_error_decl,
  postkind_statement,
  postkind_asm_stmt,
  postkind_compound_stmt,
  postkind_if_stmt,
  postkind_labeled_stmt,
  postkind_expression_stmt,
  postkind_conditional_stmt,
  postkind_switch_stmt,
  postkind_while_stmt,
  postkind_dowhile_stmt,
  postkind_for_stmt,
  postkind_break_stmt,
  postkind_continue_stmt,
  postkind_return_stmt,
  postkind_goto_stmt,
  postkind_computed_goto_stmt,
  postkind_empty_stmt,
  postkind_atomic_stmt,
  postkind_error_stmt,
  postkind_expression,
  postkind_unary,
  postkind_cast,
  postkind_field_ref,
  postkind_increment,
  postkind_preincrement,
  postkind_predecrement,
  postkind_postincrement,
  postkind_postdecrement,
  postkind_interface_deref,
  postkind_component_deref,
  postkind_dereference,
  postkind_extension_expr,
  postkind_sizeof_expr,
  postkind_alignof_expr,
  postkind_realpart,
  postkind_imagpart,
  postkind_address_of,
  postkind_unary_minus,
  postkind_unary_plus,
  postkind_conjugate,
  postkind_bitnot,
  postkind_not,
  postkind_binary,
  postkind_comparison,
  postkind_leq,
  postkind_geq,
  postkind_lt,
  postkind_gt,
  postkind_eq,
  postkind_ne,
  postkind_assignment,
  postkind_assign,
  postkind_plus_assign,
  postkind_minus_assign,
  postkind_times_assign,
  postkind_divide_assign,
  postkind_modulo_assign,
  postkind_lshift_assign,
  postkind_rshift_assign,
  postkind_bitand_assign,
  postkind_bitor_assign,
  postkind_bitxor_assign,
  postkind_array_ref,
  postkind_plus,
  postkind_minus,
  postkind_times,
  postkind_divide,
  postkind_modulo,
  postkind_lshift,
  postkind_rshift,
  postkind_bitand,
  postkind_bitor,
  postkind_bitxor,
  postkind_andand,
  postkind_oror,
  postkind_comma,
  postkind_sizeof_type,
  postkind_alignof_type,
  postkind_label_address,
  postkind_cast_list,
  postkind_conditional,
  postkind_identifier,
  postkind_compound_expr,
  postkind_function_call,
  postkind_init_list,
  postkind_init_specific,
  postkind_lexical_cst,
  postkind_string_cst,
  postkind_string,
  postkind_generic_call,
  postkind_type_argument,
  postkind_error_expr,
  postkind_type_element,
  postkind_typename,
  postkind_component_typeref,
  postkind_typeof_expr,
  postkind_typeof_type,
  postkind_attribute,
  postkind_gcc_attribute,
  postkind_target_attribute,
  postkind_nesc_attribute,
  postkind_rid,
  postkind_qualifier,
  postkind_tag_ref,
  postkind_struct_ref,
  postkind_nx_struct_ref,
  postkind_union_ref,
  postkind_nx_union_ref,
  postkind_attribute_ref,
  postkind_enum_ref,
  postkind_declarator,
  postkind_nested_declarator,
  postkind_function_declarator,
  postkind_pointer_declarator,
  postkind_qualified_declarator,
  postkind_array_declarator,
  postkind_interface_ref_declarator,
  postkind_identifier_declarator,
  postkind_generic_declarator,
  postkind_label,
  postkind_id_label,
  postkind_case_label,
  postkind_default_label,
  postkind_asttype,
  postkind_designator,
  postkind_designate_field,
  postkind_designate_index,
  postkind_word,
  postkind_asm_operand,
  postkind_implementation,
  postkind_configuration,
  postkind_module,
  postkind_binary_component,
  postkind_endpoint,
  postkind_parameterised_identifier,
};

size_t AST_sizeof[] = {
  sizeof(struct AST_node),
  sizeof(struct AST_declaration),
  sizeof(struct AST_asm_decl),
  sizeof(struct AST_data_decl),
  sizeof(struct AST_extension_decl),
  sizeof(struct AST_ellipsis_decl),
  sizeof(struct AST_enumerator),
  sizeof(struct AST_oldidentifier_decl),
  sizeof(struct AST_function_decl),
  sizeof(struct AST_implicit_decl),
  sizeof(struct AST_variable_decl),
  sizeof(struct AST_field_decl),
  sizeof(struct AST_nesc_decl),
  sizeof(struct AST_interface),
  sizeof(struct AST_component),
  sizeof(struct AST_rp_interface),
  sizeof(struct AST_interface_ref),
  sizeof(struct AST_component_ref),
  sizeof(struct AST_connection),
  sizeof(struct AST_connection),
  sizeof(struct AST_connection),
  sizeof(struct AST_type_parm_decl),
  sizeof(struct AST_declaration),
  sizeof(struct AST_statement),
  sizeof(struct AST_asm_stmt),
  sizeof(struct AST_compound_stmt),
  sizeof(struct AST_if_stmt),
  sizeof(struct AST_labeled_stmt),
  sizeof(struct AST_expression_stmt),
  sizeof(struct AST_conditional_stmt),
  sizeof(struct AST_switch_stmt),
  sizeof(struct AST_conditional_stmt),
  sizeof(struct AST_conditional_stmt),
  sizeof(struct AST_for_stmt),
  sizeof(struct AST_break_stmt),
  sizeof(struct AST_continue_stmt),
  sizeof(struct AST_return_stmt),
  sizeof(struct AST_goto_stmt),
  sizeof(struct AST_computed_goto_stmt),
  sizeof(struct AST_empty_stmt),
  sizeof(struct AST_atomic_stmt),
  sizeof(struct AST_statement),
  sizeof(struct AST_expression),
  sizeof(struct AST_unary),
  sizeof(struct AST_cast),
  sizeof(struct AST_field_ref),
  sizeof(struct AST_increment),
  sizeof(struct AST_increment),
  sizeof(struct AST_increment),
  sizeof(struct AST_increment),
  sizeof(struct AST_increment),
  sizeof(struct AST_interface_deref),
  sizeof(struct AST_component_deref),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_unary),
  sizeof(struct AST_binary),
  sizeof(struct AST_comparison),
  sizeof(struct AST_comparison),
  sizeof(struct AST_comparison),
  sizeof(struct AST_comparison),
  sizeof(struct AST_comparison),
  sizeof(struct AST_comparison),
  sizeof(struct AST_comparison),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_assignment),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_binary),
  sizeof(struct AST_comma),
  sizeof(struct AST_sizeof_type),
  sizeof(struct AST_alignof_type),
  sizeof(struct AST_label_address),
  sizeof(struct AST_cast_list),
  sizeof(struct AST_conditional),
  sizeof(struct AST_identifier),
  sizeof(struct AST_compound_expr),
  sizeof(struct AST_function_call),
  sizeof(struct AST_init_list),
  sizeof(struct AST_init_specific),
  sizeof(struct AST_lexical_cst),
  sizeof(struct AST_string_cst),
  sizeof(struct AST_string),
  sizeof(struct AST_generic_call),
  sizeof(struct AST_type_argument),
  sizeof(struct AST_expression),
  sizeof(struct AST_type_element),
  sizeof(struct AST_typename),
  sizeof(struct AST_component_typeref),
  sizeof(struct AST_typeof_expr),
  sizeof(struct AST_typeof_type),
  sizeof(struct AST_attribute),
  sizeof(struct AST_gcc_attribute),
  sizeof(struct AST_gcc_attribute),
  sizeof(struct AST_nesc_attribute),
  sizeof(struct AST_rid),
  sizeof(struct AST_qualifier),
  sizeof(struct AST_tag_ref),
  sizeof(struct AST_struct_ref),
  sizeof(struct AST_struct_ref),
  sizeof(struct AST_union_ref),
  sizeof(struct AST_union_ref),
  sizeof(struct AST_tag_ref),
  sizeof(struct AST_tag_ref),
  sizeof(struct AST_declarator),
  sizeof(struct AST_nested_declarator),
  sizeof(struct AST_function_declarator),
  sizeof(struct AST_pointer_declarator),
  sizeof(struct AST_qualified_declarator),
  sizeof(struct AST_array_declarator),
  sizeof(struct AST_interface_ref_declarator),
  sizeof(struct AST_identifier_declarator),
  sizeof(struct AST_generic_declarator),
  sizeof(struct AST_label),
  sizeof(struct AST_id_label),
  sizeof(struct AST_case_label),
  sizeof(struct AST_default_label),
  sizeof(struct AST_asttype),
  sizeof(struct AST_designator),
  sizeof(struct AST_designate_field),
  sizeof(struct AST_designate_index),
  sizeof(struct AST_word),
  sizeof(struct AST_asm_operand),
  sizeof(struct AST_implementation),
  sizeof(struct AST_configuration),
  sizeof(struct AST_module),
  sizeof(struct AST_binary_component),
  sizeof(struct AST_endpoint),
  sizeof(struct AST_parameterised_identifier),
};

type_t AST_typeof[] = {
  rctypeof(struct AST_node),
  rctypeof(struct AST_declaration),
  rctypeof(struct AST_asm_decl),
  rctypeof(struct AST_data_decl),
  rctypeof(struct AST_extension_decl),
  rctypeof(struct AST_ellipsis_decl),
  rctypeof(struct AST_enumerator),
  rctypeof(struct AST_oldidentifier_decl),
  rctypeof(struct AST_function_decl),
  rctypeof(struct AST_implicit_decl),
  rctypeof(struct AST_variable_decl),
  rctypeof(struct AST_field_decl),
  rctypeof(struct AST_nesc_decl),
  rctypeof(struct AST_interface),
  rctypeof(struct AST_component),
  rctypeof(struct AST_rp_interface),
  rctypeof(struct AST_interface_ref),
  rctypeof(struct AST_component_ref),
  rctypeof(struct AST_connection),
  rctypeof(struct AST_connection),
  rctypeof(struct AST_connection),
  rctypeof(struct AST_type_parm_decl),
  rctypeof(struct AST_declaration),
  rctypeof(struct AST_statement),
  rctypeof(struct AST_asm_stmt),
  rctypeof(struct AST_compound_stmt),
  rctypeof(struct AST_if_stmt),
  rctypeof(struct AST_labeled_stmt),
  rctypeof(struct AST_expression_stmt),
  rctypeof(struct AST_conditional_stmt),
  rctypeof(struct AST_switch_stmt),
  rctypeof(struct AST_conditional_stmt),
  rctypeof(struct AST_conditional_stmt),
  rctypeof(struct AST_for_stmt),
  rctypeof(struct AST_break_stmt),
  rctypeof(struct AST_continue_stmt),
  rctypeof(struct AST_return_stmt),
  rctypeof(struct AST_goto_stmt),
  rctypeof(struct AST_computed_goto_stmt),
  rctypeof(struct AST_empty_stmt),
  rctypeof(struct AST_atomic_stmt),
  rctypeof(struct AST_statement),
  rctypeof(struct AST_expression),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_cast),
  rctypeof(struct AST_field_ref),
  rctypeof(struct AST_increment),
  rctypeof(struct AST_increment),
  rctypeof(struct AST_increment),
  rctypeof(struct AST_increment),
  rctypeof(struct AST_increment),
  rctypeof(struct AST_interface_deref),
  rctypeof(struct AST_component_deref),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_unary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_comparison),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_assignment),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_binary),
  rctypeof(struct AST_comma),
  rctypeof(struct AST_sizeof_type),
  rctypeof(struct AST_alignof_type),
  rctypeof(struct AST_label_address),
  rctypeof(struct AST_cast_list),
  rctypeof(struct AST_conditional),
  rctypeof(struct AST_identifier),
  rctypeof(struct AST_compound_expr),
  rctypeof(struct AST_function_call),
  rctypeof(struct AST_init_list),
  rctypeof(struct AST_init_specific),
  rctypeof(struct AST_lexical_cst),
  rctypeof(struct AST_string_cst),
  rctypeof(struct AST_string),
  rctypeof(struct AST_generic_call),
  rctypeof(struct AST_type_argument),
  rctypeof(struct AST_expression),
  rctypeof(struct AST_type_element),
  rctypeof(struct AST_typename),
  rctypeof(struct AST_component_typeref),
  rctypeof(struct AST_typeof_expr),
  rctypeof(struct AST_typeof_type),
  rctypeof(struct AST_attribute),
  rctypeof(struct AST_gcc_attribute),
  rctypeof(struct AST_gcc_attribute),
  rctypeof(struct AST_nesc_attribute),
  rctypeof(struct AST_rid),
  rctypeof(struct AST_qualifier),
  rctypeof(struct AST_tag_ref),
  rctypeof(struct AST_struct_ref),
  rctypeof(struct AST_struct_ref),
  rctypeof(struct AST_union_ref),
  rctypeof(struct AST_union_ref),
  rctypeof(struct AST_tag_ref),
  rctypeof(struct AST_tag_ref),
  rctypeof(struct AST_declarator),
  rctypeof(struct AST_nested_declarator),
  rctypeof(struct AST_function_declarator),
  rctypeof(struct AST_pointer_declarator),
  rctypeof(struct AST_qualified_declarator),
  rctypeof(struct AST_array_declarator),
  rctypeof(struct AST_interface_ref_declarator),
  rctypeof(struct AST_identifier_declarator),
  rctypeof(struct AST_generic_declarator),
  rctypeof(struct AST_label),
  rctypeof(struct AST_id_label),
  rctypeof(struct AST_case_label),
  rctypeof(struct AST_default_label),
  rctypeof(struct AST_asttype),
  rctypeof(struct AST_designator),
  rctypeof(struct AST_designate_field),
  rctypeof(struct AST_designate_index),
  rctypeof(struct AST_word),
  rctypeof(struct AST_asm_operand),
  rctypeof(struct AST_implementation),
  rctypeof(struct AST_configuration),
  rctypeof(struct AST_module),
  rctypeof(struct AST_binary_component),
  rctypeof(struct AST_endpoint),
  rctypeof(struct AST_parameterised_identifier),
};

