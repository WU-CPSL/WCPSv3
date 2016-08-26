/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
typedef struct AST_node *node;
typedef struct AST_declaration *declaration;
typedef struct AST_statement *statement;
typedef struct AST_expression *expression;
typedef struct AST_type_element *type_element;
typedef struct AST_declarator *declarator;
typedef struct AST_label *label;
typedef struct AST_asm_decl *asm_decl;
typedef struct AST_data_decl *data_decl;
typedef struct AST_extension_decl *extension_decl;
typedef struct AST_ellipsis_decl *ellipsis_decl;
typedef struct AST_enumerator *enumerator;
typedef struct AST_oldidentifier_decl *oldidentifier_decl;
typedef struct AST_function_decl *function_decl;
typedef struct AST_implicit_decl *implicit_decl;
typedef struct AST_variable_decl *variable_decl;
typedef struct AST_field_decl *field_decl;
typedef struct AST_asttype *asttype;
typedef struct AST_typename *typename;
typedef struct AST_typeof_expr *typeof_expr;
typedef struct AST_typeof_type *typeof_type;
typedef struct AST_attribute *attribute;
typedef struct AST_gcc_attribute *gcc_attribute;
typedef struct AST_rid *rid;
typedef struct AST_qualifier *qualifier;
typedef struct AST_tag_ref *tag_ref;
typedef struct AST_struct_ref *struct_ref;
typedef struct AST_union_ref *union_ref;
typedef struct AST_nested_declarator *nested_declarator;
typedef struct AST_function_declarator *function_declarator;
typedef struct AST_pointer_declarator *pointer_declarator;
typedef struct AST_qualified_declarator *qualified_declarator;
typedef struct AST_array_declarator *array_declarator;
typedef struct AST_identifier_declarator *identifier_declarator;
typedef struct AST_asm_stmt *asm_stmt;
typedef struct AST_compound_stmt *compound_stmt;
typedef struct AST_if_stmt *if_stmt;
typedef struct AST_labeled_stmt *labeled_stmt;
typedef struct AST_expression_stmt *expression_stmt;
typedef struct AST_conditional_stmt *conditional_stmt;
typedef struct AST_switch_stmt *switch_stmt;
typedef struct AST_for_stmt *for_stmt;
typedef struct AST_break_stmt *break_stmt;
typedef struct AST_continue_stmt *continue_stmt;
typedef struct AST_return_stmt *return_stmt;
typedef struct AST_goto_stmt *goto_stmt;
typedef struct AST_computed_goto_stmt *computed_goto_stmt;
typedef struct AST_empty_stmt *empty_stmt;
typedef struct AST_unary *unary;
typedef struct AST_binary *binary;
typedef struct AST_comma *comma;
typedef struct AST_sizeof_type *sizeof_type;
typedef struct AST_alignof_type *alignof_type;
typedef struct AST_label_address *label_address;
typedef struct AST_cast *cast;
typedef struct AST_cast_list *cast_list;
typedef struct AST_conditional *conditional;
typedef struct AST_identifier *identifier;
typedef struct AST_compound_expr *compound_expr;
typedef struct AST_function_call *function_call;
typedef struct AST_field_ref *field_ref;
typedef struct AST_increment *increment;
typedef struct AST_comparison *comparison;
typedef struct AST_assignment *assignment;
typedef struct AST_init_list *init_list;
typedef struct AST_init_specific *init_specific;
typedef struct AST_designator *designator;
typedef struct AST_designate_field *designate_field;
typedef struct AST_designate_index *designate_index;
typedef struct AST_lexical_cst *lexical_cst;
typedef struct AST_string_cst *string_cst;
typedef struct AST_string *string;
typedef struct AST_id_label *id_label;
typedef struct AST_case_label *case_label;
typedef struct AST_default_label *default_label;
typedef struct AST_word *word;
typedef struct AST_asm_operand *asm_operand;
typedef struct AST_nesc_decl *nesc_decl;
typedef struct AST_interface *interface;
typedef struct AST_component *component;
typedef struct AST_implementation *implementation;
typedef struct AST_configuration *configuration;
typedef struct AST_module *module;
typedef struct AST_binary_component *binary_component;
typedef struct AST_rp_interface *rp_interface;
typedef struct AST_interface_ref *interface_ref;
typedef struct AST_component_ref *component_ref;
typedef struct AST_connection *connection;
typedef struct AST_endpoint *endpoint;
typedef struct AST_parameterised_identifier *parameterised_identifier;
typedef struct AST_generic_declarator *generic_declarator;
typedef struct AST_generic_call *generic_call;
typedef struct AST_interface_ref_declarator *interface_ref_declarator;
typedef struct AST_interface_deref *interface_deref;
typedef struct AST_component_deref *component_deref;
typedef struct AST_component_typeref *component_typeref;
typedef struct AST_atomic_stmt *atomic_stmt;
typedef struct AST_nesc_attribute *nesc_attribute;
typedef struct AST_type_parm_decl *type_parm_decl;
typedef struct AST_type_argument *type_argument;
typedef struct AST_declaration *error_decl;
typedef struct AST_tag_ref *attribute_ref;
typedef struct AST_tag_ref *enum_ref;
typedef struct AST_statement *error_stmt;
typedef struct AST_conditional_stmt *while_stmt;
typedef struct AST_conditional_stmt *dowhile_stmt;
typedef struct AST_expression *error_expr;
typedef struct AST_binary *array_ref;
typedef struct AST_unary *dereference;
typedef struct AST_unary *extension_expr;
typedef struct AST_unary *sizeof_expr;
typedef struct AST_unary *alignof_expr;
typedef struct AST_unary *realpart;
typedef struct AST_unary *imagpart;
typedef struct AST_unary *address_of;
typedef struct AST_unary *unary_minus;
typedef struct AST_unary *unary_plus;
typedef struct AST_unary *conjugate;
typedef struct AST_unary *bitnot;
typedef struct AST_unary *not;
typedef struct AST_increment *preincrement;
typedef struct AST_increment *predecrement;
typedef struct AST_increment *postincrement;
typedef struct AST_increment *postdecrement;
typedef struct AST_binary *plus;
typedef struct AST_binary *minus;
typedef struct AST_binary *times;
typedef struct AST_binary *divide;
typedef struct AST_binary *modulo;
typedef struct AST_binary *lshift;
typedef struct AST_binary *rshift;
typedef struct AST_comparison *leq;
typedef struct AST_comparison *geq;
typedef struct AST_comparison *lt;
typedef struct AST_comparison *gt;
typedef struct AST_comparison *eq;
typedef struct AST_comparison *ne;
typedef struct AST_binary *bitand;
typedef struct AST_binary *bitor;
typedef struct AST_binary *bitxor;
typedef struct AST_binary *andand;
typedef struct AST_binary *oror;
typedef struct AST_assignment *assign;
typedef struct AST_assignment *plus_assign;
typedef struct AST_assignment *minus_assign;
typedef struct AST_assignment *times_assign;
typedef struct AST_assignment *divide_assign;
typedef struct AST_assignment *modulo_assign;
typedef struct AST_assignment *lshift_assign;
typedef struct AST_assignment *rshift_assign;
typedef struct AST_assignment *bitand_assign;
typedef struct AST_assignment *bitor_assign;
typedef struct AST_assignment *bitxor_assign;
typedef struct AST_connection *rp_connection;
typedef struct AST_connection *eq_connection;
typedef struct AST_struct_ref *nx_struct_ref;
typedef struct AST_union_ref *nx_union_ref;
typedef struct AST_gcc_attribute *target_attribute;
typedef enum {
  kind_node = 42,
  postkind_node = 199,
  kind_declaration = 43,
  postkind_declaration = 64,
  kind_statement = 65,
  postkind_statement = 83,
  kind_expression = 84,
  postkind_expression = 156,
  kind_type_element = 157,
  postkind_type_element = 174,
  kind_declarator = 175,
  postkind_declarator = 183,
  kind_label = 184,
  postkind_label = 187,
  kind_asm_decl = 44,
  postkind_asm_decl = 44,
  kind_data_decl = 45,
  postkind_data_decl = 45,
  kind_extension_decl = 46,
  postkind_extension_decl = 46,
  kind_ellipsis_decl = 47,
  postkind_ellipsis_decl = 47,
  kind_enumerator = 48,
  postkind_enumerator = 48,
  kind_oldidentifier_decl = 49,
  postkind_oldidentifier_decl = 49,
  kind_function_decl = 50,
  postkind_function_decl = 50,
  kind_implicit_decl = 51,
  postkind_implicit_decl = 51,
  kind_variable_decl = 52,
  postkind_variable_decl = 52,
  kind_field_decl = 53,
  postkind_field_decl = 53,
  kind_asttype = 188,
  postkind_asttype = 188,
  kind_typename = 158,
  postkind_typename = 159,
  kind_typeof_expr = 160,
  postkind_typeof_expr = 160,
  kind_typeof_type = 161,
  postkind_typeof_type = 161,
  kind_attribute = 162,
  postkind_attribute = 165,
  kind_gcc_attribute = 163,
  postkind_gcc_attribute = 164,
  kind_rid = 166,
  postkind_rid = 166,
  kind_qualifier = 167,
  postkind_qualifier = 167,
  kind_tag_ref = 168,
  postkind_tag_ref = 174,
  kind_struct_ref = 169,
  postkind_struct_ref = 170,
  kind_union_ref = 171,
  postkind_union_ref = 172,
  kind_nested_declarator = 176,
  postkind_nested_declarator = 181,
  kind_function_declarator = 177,
  postkind_function_declarator = 177,
  kind_pointer_declarator = 178,
  postkind_pointer_declarator = 178,
  kind_qualified_declarator = 179,
  postkind_qualified_declarator = 179,
  kind_array_declarator = 180,
  postkind_array_declarator = 180,
  kind_identifier_declarator = 182,
  postkind_identifier_declarator = 182,
  kind_asm_stmt = 66,
  postkind_asm_stmt = 66,
  kind_compound_stmt = 67,
  postkind_compound_stmt = 67,
  kind_if_stmt = 68,
  postkind_if_stmt = 68,
  kind_labeled_stmt = 69,
  postkind_labeled_stmt = 69,
  kind_expression_stmt = 70,
  postkind_expression_stmt = 70,
  kind_conditional_stmt = 71,
  postkind_conditional_stmt = 74,
  kind_switch_stmt = 72,
  postkind_switch_stmt = 72,
  kind_for_stmt = 75,
  postkind_for_stmt = 75,
  kind_break_stmt = 76,
  postkind_break_stmt = 76,
  kind_continue_stmt = 77,
  postkind_continue_stmt = 77,
  kind_return_stmt = 78,
  postkind_return_stmt = 78,
  kind_goto_stmt = 79,
  postkind_goto_stmt = 79,
  kind_computed_goto_stmt = 80,
  postkind_computed_goto_stmt = 80,
  kind_empty_stmt = 81,
  postkind_empty_stmt = 81,
  kind_unary = 85,
  postkind_unary = 106,
  kind_binary = 107,
  postkind_binary = 139,
  kind_comma = 140,
  postkind_comma = 140,
  kind_sizeof_type = 141,
  postkind_sizeof_type = 141,
  kind_alignof_type = 142,
  postkind_alignof_type = 142,
  kind_label_address = 143,
  postkind_label_address = 143,
  kind_cast = 86,
  postkind_cast = 86,
  kind_cast_list = 144,
  postkind_cast_list = 144,
  kind_conditional = 145,
  postkind_conditional = 145,
  kind_identifier = 146,
  postkind_identifier = 146,
  kind_compound_expr = 147,
  postkind_compound_expr = 147,
  kind_function_call = 148,
  postkind_function_call = 148,
  kind_field_ref = 87,
  postkind_field_ref = 87,
  kind_increment = 88,
  postkind_increment = 92,
  kind_comparison = 108,
  postkind_comparison = 114,
  kind_assignment = 115,
  postkind_assignment = 126,
  kind_init_list = 149,
  postkind_init_list = 149,
  kind_init_specific = 150,
  postkind_init_specific = 150,
  kind_designator = 189,
  postkind_designator = 191,
  kind_designate_field = 190,
  postkind_designate_field = 190,
  kind_designate_index = 191,
  postkind_designate_index = 191,
  kind_lexical_cst = 151,
  postkind_lexical_cst = 152,
  kind_string_cst = 152,
  postkind_string_cst = 152,
  kind_string = 153,
  postkind_string = 153,
  kind_id_label = 185,
  postkind_id_label = 185,
  kind_case_label = 186,
  postkind_case_label = 186,
  kind_default_label = 187,
  postkind_default_label = 187,
  kind_word = 192,
  postkind_word = 192,
  kind_asm_operand = 193,
  postkind_asm_operand = 193,
  kind_nesc_decl = 54,
  postkind_nesc_decl = 56,
  kind_interface = 55,
  postkind_interface = 55,
  kind_component = 56,
  postkind_component = 56,
  kind_implementation = 194,
  postkind_implementation = 197,
  kind_configuration = 195,
  postkind_configuration = 195,
  kind_module = 196,
  postkind_module = 196,
  kind_binary_component = 197,
  postkind_binary_component = 197,
  kind_rp_interface = 57,
  postkind_rp_interface = 57,
  kind_interface_ref = 58,
  postkind_interface_ref = 58,
  kind_component_ref = 59,
  postkind_component_ref = 59,
  kind_connection = 60,
  postkind_connection = 62,
  kind_endpoint = 198,
  postkind_endpoint = 198,
  kind_parameterised_identifier = 199,
  postkind_parameterised_identifier = 199,
  kind_generic_declarator = 183,
  postkind_generic_declarator = 183,
  kind_generic_call = 154,
  postkind_generic_call = 154,
  kind_interface_ref_declarator = 181,
  postkind_interface_ref_declarator = 181,
  kind_interface_deref = 93,
  postkind_interface_deref = 93,
  kind_component_deref = 94,
  postkind_component_deref = 94,
  kind_component_typeref = 159,
  postkind_component_typeref = 159,
  kind_atomic_stmt = 82,
  postkind_atomic_stmt = 82,
  kind_nesc_attribute = 165,
  postkind_nesc_attribute = 165,
  kind_type_parm_decl = 63,
  postkind_type_parm_decl = 63,
  kind_type_argument = 155,
  postkind_type_argument = 155,
  kind_error_decl = 64,
  postkind_error_decl = 64,
  kind_attribute_ref = 173,
  postkind_attribute_ref = 173,
  kind_enum_ref = 174,
  postkind_enum_ref = 174,
  kind_error_stmt = 83,
  postkind_error_stmt = 83,
  kind_while_stmt = 73,
  postkind_while_stmt = 73,
  kind_dowhile_stmt = 74,
  postkind_dowhile_stmt = 74,
  kind_error_expr = 156,
  postkind_error_expr = 156,
  kind_array_ref = 127,
  postkind_array_ref = 127,
  kind_dereference = 95,
  postkind_dereference = 95,
  kind_extension_expr = 96,
  postkind_extension_expr = 96,
  kind_sizeof_expr = 97,
  postkind_sizeof_expr = 97,
  kind_alignof_expr = 98,
  postkind_alignof_expr = 98,
  kind_realpart = 99,
  postkind_realpart = 99,
  kind_imagpart = 100,
  postkind_imagpart = 100,
  kind_address_of = 101,
  postkind_address_of = 101,
  kind_unary_minus = 102,
  postkind_unary_minus = 102,
  kind_unary_plus = 103,
  postkind_unary_plus = 103,
  kind_conjugate = 104,
  postkind_conjugate = 104,
  kind_bitnot = 105,
  postkind_bitnot = 105,
  kind_not = 106,
  postkind_not = 106,
  kind_preincrement = 89,
  postkind_preincrement = 89,
  kind_predecrement = 90,
  postkind_predecrement = 90,
  kind_postincrement = 91,
  postkind_postincrement = 91,
  kind_postdecrement = 92,
  postkind_postdecrement = 92,
  kind_plus = 128,
  postkind_plus = 128,
  kind_minus = 129,
  postkind_minus = 129,
  kind_times = 130,
  postkind_times = 130,
  kind_divide = 131,
  postkind_divide = 131,
  kind_modulo = 132,
  postkind_modulo = 132,
  kind_lshift = 133,
  postkind_lshift = 133,
  kind_rshift = 134,
  postkind_rshift = 134,
  kind_leq = 109,
  postkind_leq = 109,
  kind_geq = 110,
  postkind_geq = 110,
  kind_lt = 111,
  postkind_lt = 111,
  kind_gt = 112,
  postkind_gt = 112,
  kind_eq = 113,
  postkind_eq = 113,
  kind_ne = 114,
  postkind_ne = 114,
  kind_bitand = 135,
  postkind_bitand = 135,
  kind_bitor = 136,
  postkind_bitor = 136,
  kind_bitxor = 137,
  postkind_bitxor = 137,
  kind_andand = 138,
  postkind_andand = 138,
  kind_oror = 139,
  postkind_oror = 139,
  kind_assign = 116,
  postkind_assign = 116,
  kind_plus_assign = 117,
  postkind_plus_assign = 117,
  kind_minus_assign = 118,
  postkind_minus_assign = 118,
  kind_times_assign = 119,
  postkind_times_assign = 119,
  kind_divide_assign = 120,
  postkind_divide_assign = 120,
  kind_modulo_assign = 121,
  postkind_modulo_assign = 121,
  kind_lshift_assign = 122,
  postkind_lshift_assign = 122,
  kind_rshift_assign = 123,
  postkind_rshift_assign = 123,
  kind_bitand_assign = 124,
  postkind_bitand_assign = 124,
  kind_bitor_assign = 125,
  postkind_bitor_assign = 125,
  kind_bitxor_assign = 126,
  postkind_bitxor_assign = 126,
  kind_rp_connection = 61,
  postkind_rp_connection = 61,
  kind_eq_connection = 62,
  postkind_eq_connection = 62,
  kind_nx_struct_ref = 170,
  postkind_nx_struct_ref = 170,
  kind_nx_union_ref = 172,
  postkind_nx_union_ref = 172,
  kind_target_attribute = 164,
  postkind_target_attribute = 164
} AST_kind;

extern AST_kind AST_parent_kind[]; /* indexed by kind - kind_node */

extern AST_kind AST_post_kind[]; /* indexed by kind - kind_node */

extern size_t AST_sizeof[]; /* indexed by kind - kind_node */

extern type_t AST_typeof[]; /* indexed by kind - kind_node */
#define is_node(x) ((x)->kind >= kind_node && (x)->kind <= postkind_node)
#define is_declaration(x) ((x)->kind >= kind_declaration && (x)->kind <= postkind_declaration)
#define is_statement(x) ((x)->kind >= kind_statement && (x)->kind <= postkind_statement)
#define is_expression(x) ((x)->kind >= kind_expression && (x)->kind <= postkind_expression)
#define is_type_element(x) ((x)->kind >= kind_type_element && (x)->kind <= postkind_type_element)
#define is_declarator(x) ((x)->kind >= kind_declarator && (x)->kind <= postkind_declarator)
#define is_label(x) ((x)->kind >= kind_label && (x)->kind <= postkind_label)
#define is_asm_decl(x) ((x)->kind >= kind_asm_decl && (x)->kind <= postkind_asm_decl)
#define is_data_decl(x) ((x)->kind >= kind_data_decl && (x)->kind <= postkind_data_decl)
#define is_extension_decl(x) ((x)->kind >= kind_extension_decl && (x)->kind <= postkind_extension_decl)
#define is_ellipsis_decl(x) ((x)->kind >= kind_ellipsis_decl && (x)->kind <= postkind_ellipsis_decl)
#define is_enumerator(x) ((x)->kind >= kind_enumerator && (x)->kind <= postkind_enumerator)
#define is_oldidentifier_decl(x) ((x)->kind >= kind_oldidentifier_decl && (x)->kind <= postkind_oldidentifier_decl)
#define is_function_decl(x) ((x)->kind >= kind_function_decl && (x)->kind <= postkind_function_decl)
#define is_implicit_decl(x) ((x)->kind >= kind_implicit_decl && (x)->kind <= postkind_implicit_decl)
#define is_variable_decl(x) ((x)->kind >= kind_variable_decl && (x)->kind <= postkind_variable_decl)
#define is_field_decl(x) ((x)->kind >= kind_field_decl && (x)->kind <= postkind_field_decl)
#define is_asttype(x) ((x)->kind >= kind_asttype && (x)->kind <= postkind_asttype)
#define is_typename(x) ((x)->kind >= kind_typename && (x)->kind <= postkind_typename)
#define is_typeof_expr(x) ((x)->kind >= kind_typeof_expr && (x)->kind <= postkind_typeof_expr)
#define is_typeof_type(x) ((x)->kind >= kind_typeof_type && (x)->kind <= postkind_typeof_type)
#define is_attribute(x) ((x)->kind >= kind_attribute && (x)->kind <= postkind_attribute)
#define is_gcc_attribute(x) ((x)->kind >= kind_gcc_attribute && (x)->kind <= postkind_gcc_attribute)
#define is_rid(x) ((x)->kind >= kind_rid && (x)->kind <= postkind_rid)
#define is_qualifier(x) ((x)->kind >= kind_qualifier && (x)->kind <= postkind_qualifier)
#define is_tag_ref(x) ((x)->kind >= kind_tag_ref && (x)->kind <= postkind_tag_ref)
#define is_struct_ref(x) ((x)->kind >= kind_struct_ref && (x)->kind <= postkind_struct_ref)
#define is_union_ref(x) ((x)->kind >= kind_union_ref && (x)->kind <= postkind_union_ref)
#define is_nested_declarator(x) ((x)->kind >= kind_nested_declarator && (x)->kind <= postkind_nested_declarator)
#define is_function_declarator(x) ((x)->kind >= kind_function_declarator && (x)->kind <= postkind_function_declarator)
#define is_pointer_declarator(x) ((x)->kind >= kind_pointer_declarator && (x)->kind <= postkind_pointer_declarator)
#define is_qualified_declarator(x) ((x)->kind >= kind_qualified_declarator && (x)->kind <= postkind_qualified_declarator)
#define is_array_declarator(x) ((x)->kind >= kind_array_declarator && (x)->kind <= postkind_array_declarator)
#define is_identifier_declarator(x) ((x)->kind >= kind_identifier_declarator && (x)->kind <= postkind_identifier_declarator)
#define is_asm_stmt(x) ((x)->kind >= kind_asm_stmt && (x)->kind <= postkind_asm_stmt)
#define is_compound_stmt(x) ((x)->kind >= kind_compound_stmt && (x)->kind <= postkind_compound_stmt)
#define is_if_stmt(x) ((x)->kind >= kind_if_stmt && (x)->kind <= postkind_if_stmt)
#define is_labeled_stmt(x) ((x)->kind >= kind_labeled_stmt && (x)->kind <= postkind_labeled_stmt)
#define is_expression_stmt(x) ((x)->kind >= kind_expression_stmt && (x)->kind <= postkind_expression_stmt)
#define is_conditional_stmt(x) ((x)->kind >= kind_conditional_stmt && (x)->kind <= postkind_conditional_stmt)
#define is_switch_stmt(x) ((x)->kind >= kind_switch_stmt && (x)->kind <= postkind_switch_stmt)
#define is_for_stmt(x) ((x)->kind >= kind_for_stmt && (x)->kind <= postkind_for_stmt)
#define is_break_stmt(x) ((x)->kind >= kind_break_stmt && (x)->kind <= postkind_break_stmt)
#define is_continue_stmt(x) ((x)->kind >= kind_continue_stmt && (x)->kind <= postkind_continue_stmt)
#define is_return_stmt(x) ((x)->kind >= kind_return_stmt && (x)->kind <= postkind_return_stmt)
#define is_goto_stmt(x) ((x)->kind >= kind_goto_stmt && (x)->kind <= postkind_goto_stmt)
#define is_computed_goto_stmt(x) ((x)->kind >= kind_computed_goto_stmt && (x)->kind <= postkind_computed_goto_stmt)
#define is_empty_stmt(x) ((x)->kind >= kind_empty_stmt && (x)->kind <= postkind_empty_stmt)
#define is_unary(x) ((x)->kind >= kind_unary && (x)->kind <= postkind_unary)
#define is_binary(x) ((x)->kind >= kind_binary && (x)->kind <= postkind_binary)
#define is_comma(x) ((x)->kind >= kind_comma && (x)->kind <= postkind_comma)
#define is_sizeof_type(x) ((x)->kind >= kind_sizeof_type && (x)->kind <= postkind_sizeof_type)
#define is_alignof_type(x) ((x)->kind >= kind_alignof_type && (x)->kind <= postkind_alignof_type)
#define is_label_address(x) ((x)->kind >= kind_label_address && (x)->kind <= postkind_label_address)
#define is_cast(x) ((x)->kind >= kind_cast && (x)->kind <= postkind_cast)
#define is_cast_list(x) ((x)->kind >= kind_cast_list && (x)->kind <= postkind_cast_list)
#define is_conditional(x) ((x)->kind >= kind_conditional && (x)->kind <= postkind_conditional)
#define is_identifier(x) ((x)->kind >= kind_identifier && (x)->kind <= postkind_identifier)
#define is_compound_expr(x) ((x)->kind >= kind_compound_expr && (x)->kind <= postkind_compound_expr)
#define is_function_call(x) ((x)->kind >= kind_function_call && (x)->kind <= postkind_function_call)
#define is_field_ref(x) ((x)->kind >= kind_field_ref && (x)->kind <= postkind_field_ref)
#define is_increment(x) ((x)->kind >= kind_increment && (x)->kind <= postkind_increment)
#define is_comparison(x) ((x)->kind >= kind_comparison && (x)->kind <= postkind_comparison)
#define is_assignment(x) ((x)->kind >= kind_assignment && (x)->kind <= postkind_assignment)
#define is_init_list(x) ((x)->kind >= kind_init_list && (x)->kind <= postkind_init_list)
#define is_init_specific(x) ((x)->kind >= kind_init_specific && (x)->kind <= postkind_init_specific)
#define is_designator(x) ((x)->kind >= kind_designator && (x)->kind <= postkind_designator)
#define is_designate_field(x) ((x)->kind >= kind_designate_field && (x)->kind <= postkind_designate_field)
#define is_designate_index(x) ((x)->kind >= kind_designate_index && (x)->kind <= postkind_designate_index)
#define is_lexical_cst(x) ((x)->kind >= kind_lexical_cst && (x)->kind <= postkind_lexical_cst)
#define is_string_cst(x) ((x)->kind >= kind_string_cst && (x)->kind <= postkind_string_cst)
#define is_string(x) ((x)->kind >= kind_string && (x)->kind <= postkind_string)
#define is_id_label(x) ((x)->kind >= kind_id_label && (x)->kind <= postkind_id_label)
#define is_case_label(x) ((x)->kind >= kind_case_label && (x)->kind <= postkind_case_label)
#define is_default_label(x) ((x)->kind >= kind_default_label && (x)->kind <= postkind_default_label)
#define is_word(x) ((x)->kind >= kind_word && (x)->kind <= postkind_word)
#define is_asm_operand(x) ((x)->kind >= kind_asm_operand && (x)->kind <= postkind_asm_operand)
#define is_nesc_decl(x) ((x)->kind >= kind_nesc_decl && (x)->kind <= postkind_nesc_decl)
#define is_interface(x) ((x)->kind >= kind_interface && (x)->kind <= postkind_interface)
#define is_component(x) ((x)->kind >= kind_component && (x)->kind <= postkind_component)
#define is_implementation(x) ((x)->kind >= kind_implementation && (x)->kind <= postkind_implementation)
#define is_configuration(x) ((x)->kind >= kind_configuration && (x)->kind <= postkind_configuration)
#define is_module(x) ((x)->kind >= kind_module && (x)->kind <= postkind_module)
#define is_binary_component(x) ((x)->kind >= kind_binary_component && (x)->kind <= postkind_binary_component)
#define is_rp_interface(x) ((x)->kind >= kind_rp_interface && (x)->kind <= postkind_rp_interface)
#define is_interface_ref(x) ((x)->kind >= kind_interface_ref && (x)->kind <= postkind_interface_ref)
#define is_component_ref(x) ((x)->kind >= kind_component_ref && (x)->kind <= postkind_component_ref)
#define is_connection(x) ((x)->kind >= kind_connection && (x)->kind <= postkind_connection)
#define is_endpoint(x) ((x)->kind >= kind_endpoint && (x)->kind <= postkind_endpoint)
#define is_parameterised_identifier(x) ((x)->kind >= kind_parameterised_identifier && (x)->kind <= postkind_parameterised_identifier)
#define is_generic_declarator(x) ((x)->kind >= kind_generic_declarator && (x)->kind <= postkind_generic_declarator)
#define is_generic_call(x) ((x)->kind >= kind_generic_call && (x)->kind <= postkind_generic_call)
#define is_interface_ref_declarator(x) ((x)->kind >= kind_interface_ref_declarator && (x)->kind <= postkind_interface_ref_declarator)
#define is_interface_deref(x) ((x)->kind >= kind_interface_deref && (x)->kind <= postkind_interface_deref)
#define is_component_deref(x) ((x)->kind >= kind_component_deref && (x)->kind <= postkind_component_deref)
#define is_component_typeref(x) ((x)->kind >= kind_component_typeref && (x)->kind <= postkind_component_typeref)
#define is_atomic_stmt(x) ((x)->kind >= kind_atomic_stmt && (x)->kind <= postkind_atomic_stmt)
#define is_nesc_attribute(x) ((x)->kind >= kind_nesc_attribute && (x)->kind <= postkind_nesc_attribute)
#define is_type_parm_decl(x) ((x)->kind >= kind_type_parm_decl && (x)->kind <= postkind_type_parm_decl)
#define is_type_argument(x) ((x)->kind >= kind_type_argument && (x)->kind <= postkind_type_argument)
#define is_error_decl(x) ((x)->kind >= kind_error_decl && (x)->kind <= postkind_error_decl)
#define is_attribute_ref(x) ((x)->kind >= kind_attribute_ref && (x)->kind <= postkind_attribute_ref)
#define is_enum_ref(x) ((x)->kind >= kind_enum_ref && (x)->kind <= postkind_enum_ref)
#define is_error_stmt(x) ((x)->kind >= kind_error_stmt && (x)->kind <= postkind_error_stmt)
#define is_while_stmt(x) ((x)->kind >= kind_while_stmt && (x)->kind <= postkind_while_stmt)
#define is_dowhile_stmt(x) ((x)->kind >= kind_dowhile_stmt && (x)->kind <= postkind_dowhile_stmt)
#define is_error_expr(x) ((x)->kind >= kind_error_expr && (x)->kind <= postkind_error_expr)
#define is_array_ref(x) ((x)->kind >= kind_array_ref && (x)->kind <= postkind_array_ref)
#define is_dereference(x) ((x)->kind >= kind_dereference && (x)->kind <= postkind_dereference)
#define is_extension_expr(x) ((x)->kind >= kind_extension_expr && (x)->kind <= postkind_extension_expr)
#define is_sizeof_expr(x) ((x)->kind >= kind_sizeof_expr && (x)->kind <= postkind_sizeof_expr)
#define is_alignof_expr(x) ((x)->kind >= kind_alignof_expr && (x)->kind <= postkind_alignof_expr)
#define is_realpart(x) ((x)->kind >= kind_realpart && (x)->kind <= postkind_realpart)
#define is_imagpart(x) ((x)->kind >= kind_imagpart && (x)->kind <= postkind_imagpart)
#define is_address_of(x) ((x)->kind >= kind_address_of && (x)->kind <= postkind_address_of)
#define is_unary_minus(x) ((x)->kind >= kind_unary_minus && (x)->kind <= postkind_unary_minus)
#define is_unary_plus(x) ((x)->kind >= kind_unary_plus && (x)->kind <= postkind_unary_plus)
#define is_conjugate(x) ((x)->kind >= kind_conjugate && (x)->kind <= postkind_conjugate)
#define is_bitnot(x) ((x)->kind >= kind_bitnot && (x)->kind <= postkind_bitnot)
#define is_not(x) ((x)->kind >= kind_not && (x)->kind <= postkind_not)
#define is_preincrement(x) ((x)->kind >= kind_preincrement && (x)->kind <= postkind_preincrement)
#define is_predecrement(x) ((x)->kind >= kind_predecrement && (x)->kind <= postkind_predecrement)
#define is_postincrement(x) ((x)->kind >= kind_postincrement && (x)->kind <= postkind_postincrement)
#define is_postdecrement(x) ((x)->kind >= kind_postdecrement && (x)->kind <= postkind_postdecrement)
#define is_plus(x) ((x)->kind >= kind_plus && (x)->kind <= postkind_plus)
#define is_minus(x) ((x)->kind >= kind_minus && (x)->kind <= postkind_minus)
#define is_times(x) ((x)->kind >= kind_times && (x)->kind <= postkind_times)
#define is_divide(x) ((x)->kind >= kind_divide && (x)->kind <= postkind_divide)
#define is_modulo(x) ((x)->kind >= kind_modulo && (x)->kind <= postkind_modulo)
#define is_lshift(x) ((x)->kind >= kind_lshift && (x)->kind <= postkind_lshift)
#define is_rshift(x) ((x)->kind >= kind_rshift && (x)->kind <= postkind_rshift)
#define is_leq(x) ((x)->kind >= kind_leq && (x)->kind <= postkind_leq)
#define is_geq(x) ((x)->kind >= kind_geq && (x)->kind <= postkind_geq)
#define is_lt(x) ((x)->kind >= kind_lt && (x)->kind <= postkind_lt)
#define is_gt(x) ((x)->kind >= kind_gt && (x)->kind <= postkind_gt)
#define is_eq(x) ((x)->kind >= kind_eq && (x)->kind <= postkind_eq)
#define is_ne(x) ((x)->kind >= kind_ne && (x)->kind <= postkind_ne)
#define is_bitand(x) ((x)->kind >= kind_bitand && (x)->kind <= postkind_bitand)
#define is_bitor(x) ((x)->kind >= kind_bitor && (x)->kind <= postkind_bitor)
#define is_bitxor(x) ((x)->kind >= kind_bitxor && (x)->kind <= postkind_bitxor)
#define is_andand(x) ((x)->kind >= kind_andand && (x)->kind <= postkind_andand)
#define is_oror(x) ((x)->kind >= kind_oror && (x)->kind <= postkind_oror)
#define is_assign(x) ((x)->kind >= kind_assign && (x)->kind <= postkind_assign)
#define is_plus_assign(x) ((x)->kind >= kind_plus_assign && (x)->kind <= postkind_plus_assign)
#define is_minus_assign(x) ((x)->kind >= kind_minus_assign && (x)->kind <= postkind_minus_assign)
#define is_times_assign(x) ((x)->kind >= kind_times_assign && (x)->kind <= postkind_times_assign)
#define is_divide_assign(x) ((x)->kind >= kind_divide_assign && (x)->kind <= postkind_divide_assign)
#define is_modulo_assign(x) ((x)->kind >= kind_modulo_assign && (x)->kind <= postkind_modulo_assign)
#define is_lshift_assign(x) ((x)->kind >= kind_lshift_assign && (x)->kind <= postkind_lshift_assign)
#define is_rshift_assign(x) ((x)->kind >= kind_rshift_assign && (x)->kind <= postkind_rshift_assign)
#define is_bitand_assign(x) ((x)->kind >= kind_bitand_assign && (x)->kind <= postkind_bitand_assign)
#define is_bitor_assign(x) ((x)->kind >= kind_bitor_assign && (x)->kind <= postkind_bitor_assign)
#define is_bitxor_assign(x) ((x)->kind >= kind_bitxor_assign && (x)->kind <= postkind_bitxor_assign)
#define is_rp_connection(x) ((x)->kind >= kind_rp_connection && (x)->kind <= postkind_rp_connection)
#define is_eq_connection(x) ((x)->kind >= kind_eq_connection && (x)->kind <= postkind_eq_connection)
#define is_nx_struct_ref(x) ((x)->kind >= kind_nx_struct_ref && (x)->kind <= postkind_nx_struct_ref)
#define is_nx_union_ref(x) ((x)->kind >= kind_nx_union_ref && (x)->kind <= postkind_nx_union_ref)
#define is_target_attribute(x) ((x)->kind >= kind_target_attribute && (x)->kind <= postkind_target_attribute)
typedef struct
{
  AST_kind kind;
} *AST_generic;

#ifdef __GNUC__
#define AST_CAST(type, x) ({AST_generic tEmPcast = (AST_generic)(x); if (tEmPcast) assert(is_ ## type(tEmPcast)); (type)(tEmPcast); })
#define AST_CASTPTR(type, x) ({AST_generic *tEmPcast = (AST_generic *)(x); if (tEmPcast && *tEmPcast) assert(is_ ## type(*tEmPcast)); (type *)(tEmPcast); })
#define AST_CASTSRPTR(type, x) ({AST_generic *tEmPcast = (AST_generic *)(x); if (tEmPcast && *tEmPcast) assert(is_ ## type(*tEmPcast)); (type sameregion *)(tEmPcast); })
#else
/* Could also generate some code to make this safe */
#define AST_CAST(type, x) ((type)(x))
#define AST_CASTPTR(type, x) ((type *)(x))
#define AST_CASTSRPTR(type, x) ((type sameregion *)(x))
#endif
