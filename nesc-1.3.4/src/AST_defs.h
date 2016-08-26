/* Automatically generated from nodetypes.def, do not edit. */

/* See the copyright notice in nodetypes.def */
/* The common supertype of all AST nodes */
struct AST_node { /* extends nil */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
};

/* The common type of all definitions */
struct AST_declaration { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
};

/* The common type of all statements
PARENT_LOOP: 
  - for break and continue: the containing for/while/do-while/switch
    statement they escape from
  - for for/while/do-while: the containing for/while/do-while/switch
    statement
CONTAINING_ATOMIC
  - for return statement: their containing atomic statement
  - for labels and looping statements, their containing atomic statement
(or NULL for none). Used to check that break, continue and goto do not
break in or out of an atomic statement.
(Note: for nested atomic statements, CONTAINING_ATOMIC will point to a
dangling node as we drop these nested statements from the AST)
ISATOMIC is 
  ATOMIC_ANY if the statement does not involve any shared variable accesses
  ATOMIC_SINGLE if the statement involves a single access to a shared 
    variable, and that access is guaranteed to be atomic (e.g., a single byte)
  NOT_ATOMIC otherwise */
struct AST_statement { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
};

/* Expression nodes are subtypes of this type.
LVALUE is true if this expression can be used in a context requiring an lvalue.
BITFIELD is true if this lvalue is a bitfield.
ISREGISTER is true if this lvalue is (declared to be) in a register.
SIDE_EFFECTS is true if the expression has side effects.
CST is non-null (and points to an appropriate constant) if this expression is
constant.
STATIC_ADDRESS is true for lvalues whose address is a constant expression
CONVERTED_TO_POINTER is true for expressions which default_conversion
indicates need converting to pointer type (note that these nodes did not have
their type changed)
CST_CHECKED is set to true once we've successfully checked this expression's
constantness, and associated constant value (used to avoid duplicate error
messages in repeated constant folding passes)
SPELLING saves the `spelling' (a user-friendly name) of expressions used
in initialisers.
PARENS is TRUE if the expression is in parentheses
IVALUE is a pointer to an ivalue (see init.h) holding the value of an
  initialiser expression. On an init_list or in an expression used as
  a simple initialiser (e.g., '3 + 2' in 'int x = 3 + 2'), this is the
  value of the initialiser. Inside these initialisers, ivalue points into
  the ivalue structure of the containing initialiser.
CONTEXT is the usage context for this expression (see nesc-uses.h)
ISATOMIC is 
  ATOMIC_ANY if the statement does not involve any shared variable accesses
  ATOMIC_SINGLE if the statement involves a single access to a shared 
    variable, and that access is guaranteed to be atomic (e.g., a single byte)
  NOT_ATOMIC otherwise */
struct AST_expression { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
};

/* A common super-type for all type-building elements (qualifiers, etc) */
struct AST_type_element { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
};

/* A common super-type for all declarator elements */
struct AST_declarator { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
};

/* A common super-type for all labels.
NEXT_LABEL points to the next case or default label of a switch 
(for case or default labels only) */
struct AST_label { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  label next_label;
};

/* Asm statement STMT at the top level of a file (GCC) */
struct AST_asm_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  asm_stmt sameregion asm_stmt;
};

/* The declaration MODIFIERS DECLS;
DECLS is a list */
struct AST_data_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  type_element sameregion modifiers;
  declaration sameregion decls;
};

/* __extension__ DECL; (GCC) */
struct AST_extension_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declaration sameregion decl;
};

/* A pseudo-declaration to represent ... in a function argument list */
struct AST_ellipsis_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
};

/* The enumeration element CSTRING = ARG1. CSTRING is optional */
struct AST_enumerator { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  cstring cstring;
  expression sameregion arg1;
  data_declaration ddecl;
};

/* CSTRING in an old-style parameter list */
struct AST_oldidentifier_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  cstring cstring;
  data_declaration ddecl;
};

/* A function declaration with body STMT
OLD_PARMS is the old-style parameter declaration list. */
struct AST_function_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  type_element sameregion modifiers;
  attribute sameregion attributes;
  declaration old_parms;
  statement sameregion stmt;
  function_decl parent_function;
  data_declaration ddecl;
  function_declarator fdeclarator;
  type declared_type;
  env undeclared_variables;
  env base_labels;
  env scoped_labels;
  statement current_loop;
  int nlocals;
};

/* Used as the AST node for implicit declarations. IDENT points to the
identifier node that implicitly declared the function */
struct AST_implicit_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  identifier ident;
};

/* Declaration of DECLARATOR ASM_STMT ATTRIBUTES = ARG1.
ATTRIBUTES is a list. ASM_STMT is optional (GCC specific).
ARG1 is an optional initialiser.
DDECL points to the declaration for this item.
DECLARED_TYPE is the type in this declaration (which may be different than that
in DDECL->TYPE)
FORWARD is true for parameters that are forward declarations */
struct AST_variable_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  attribute sameregion attributes;
  expression sameregion arg1;
  asm_stmt sameregion asm_stmt;
  data_declaration ddecl;
  type declared_type;
  bool forward;
};

/* Declaration of field DECLARATOR ATTRIBUTES : ARG1.
QUALIFIERS and ATTRIBUTEES are lists. ARG1 is an optional bitfield specifier
TYPE_CHECKED is set to true once it has been checked that this field is of
  network type (inside network structures)
FDECL is this field's declaration */
struct AST_field_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  attribute sameregion attributes;
  expression sameregion arg1;
  bool type_checked;
  field_declaration fdecl;
};

/* The source-level type QUALIFIERS DECLARATOR */
struct AST_asttype { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  type_element sameregion qualifiers;
  type type;
};

/* typedef-type with declaration DDECL. The name is ddecl->name */
struct AST_typename { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  data_declaration ddecl;
};

/* typeof ARG1 */
struct AST_typeof_expr { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  expression sameregion arg1;
};

/* typeof(ASTTYPE) */
struct AST_typeof_type { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  asttype sameregion asttype;
};

/* base type for gcc and nesc attributes */
struct AST_attribute { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
};

/* The (gcc) attribute WORD1(ARGS). args can be empty, and may not be
semantically valid */
struct AST_gcc_attribute { /* extends attribute */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  expression sameregion args;
};

/* Storage class specifier, type specifier or type qualifier ID (see RID_xxx) */
struct AST_rid { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  enum rid id;
};

/* Type or function qualifier ID (see qualifiers.h and type_quals in types.h) */
struct AST_qualifier { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  enum rid id;
};

/* struct/union/enum WORD1 { FIELDS; }  ATTRIBUTES
ATTRIBUTES and FIELDS are lists.
ATTRIBUTES is GCC specific. WORD1 is optional.
DEFINED is TRUE if this declaration defines the struct/union/enum.
DEFINED == FALSE => FIELDS == NULL

TDECL points to the internal declaration node for this type */
struct AST_tag_ref { /* extends type_element */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  attribute sameregion attributes;
  declaration sameregion fields;
  bool defined;
  tag_declaration tdecl;
};

/* A struct */
struct AST_struct_ref { /* extends tag_ref */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  attribute sameregion attributes;
  declaration sameregion fields;
  bool defined;
  tag_declaration tdecl;
};

/* A union */
struct AST_union_ref { /* extends tag_ref */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  attribute sameregion attributes;
  declaration sameregion fields;
  bool defined;
  tag_declaration tdecl;
};

/* A common supertype for function/pointer/array declarator which includes
the nested DECLARATOR */
struct AST_nested_declarator { /* extends declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
};

/* Function declarator DECLARATOR(PARMS). PARMS is a list of declarations.
ENV is the environment for parms
GPARMS is the list of declarations of generic parameters (commands, events only)
RETURN_TYPE (optional) contains an overridden return type from nesdoc */
struct AST_function_declarator { /* extends nested_declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  declaration sameregion parms;
  declaration sameregion gparms;
  type_element sameregion qualifiers;
  environment env;
  asttype sameregion return_type;
};

/* Pointer declarator *DECLARATOR */
struct AST_pointer_declarator { /* extends nested_declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
};

/* Declarator MODIFIERS DECLARATOR. The MODIFIERS are qualifiers
or attributes.
Note: MODIFIERS is never NULL */
struct AST_qualified_declarator { /* extends nested_declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  type_element sameregion modifiers;
};

/* Array declarator DECLARATOR[ARG1]. ARG1 is optional */
struct AST_array_declarator { /* extends nested_declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  expression sameregion arg1;
};

/* Declaration of CSTRING */
struct AST_identifier_declarator { /* extends declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  cstring cstring;
};

/* The statement asm QUALIFIERS (ARG1 : ASM_OPERANDS1 : ASM_OPERANDS2 : ASM_CLOBBERS) 
where ASM_OPERANDS1, ASM_OPERANDS2, QUALIFIERS are optional, ASM_CLOBBERS is a list (GCC) */
struct AST_asm_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion arg1;
  asm_operand sameregion asm_operands1;
  asm_operand sameregion asm_operands2;
  string sameregion asm_clobbers;
  type_element sameregion qualifiers;
};

/* { ID_LABELS DECLS STMTS }. The ID_LABELS are GCC-specific. ID_LABELS, DECLS,
STMTS are lists
ENV is the environment for the block */
struct AST_compound_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  id_label sameregion id_labels;
  declaration sameregion decls;
  statement sameregion stmts;
  environment env;
};

/* IF (CONDITION) STMT1 ELSE STMT2. STMT2 is optional */
struct AST_if_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion condition;
  statement sameregion stmt1;
  statement sameregion stmt2;
};

/* LABEL: STMT */
struct AST_labeled_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  label sameregion label;
  statement sameregion stmt;
};

/* EXPR; */
struct AST_expression_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion arg1;
};

/* Basic type for all conditional statements */
struct AST_conditional_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion condition;
  statement sameregion stmt;
};

/* SWITCH (CONDITION) STMT.
NEXT_LABEL points to the switches first label */
struct AST_switch_stmt { /* extends conditional_stmt */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion condition;
  statement sameregion stmt;
  label next_label;
};

/* FOR (ARG1; ARG2; ARG3) STMT. ARG1, ARG2, ARG3 are optional */
struct AST_for_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion arg1;
  expression sameregion arg2;
  expression sameregion arg3;
  statement sameregion stmt;
};

/* BREAK; */
struct AST_break_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
};

/* CONTINUE; */
struct AST_continue_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
};

/* RETURN ARG1. ARG1 is optional */
struct AST_return_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion arg1;
};

/* GOTO ID_LABEL */
struct AST_goto_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  id_label sameregion id_label;
};

/* GOTO *ARG1 (GCC) */
struct AST_computed_goto_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  expression sameregion arg1;
};

/* ; */
struct AST_empty_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
};

/* Unary expression nodes, kind defines operator */
struct AST_unary { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
};

/* Binary expression nodes, kind defines operator */
struct AST_binary { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  expression sameregion arg2;
};

/* A comma separated list of expressions ARG1 */
struct AST_comma { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
};

/* sizeof (ASTTYPE) */
struct AST_sizeof_type { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  asttype sameregion asttype;
};

/* __alignof (ASTTYPE) (GCC) */
struct AST_alignof_type { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  asttype sameregion asttype;
};

/* &&ID_LABEL (GCC) */
struct AST_label_address { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  id_label sameregion id_label;
};

/* (ASTTYPE)ARG1 */
struct AST_cast { /* extends unary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  asttype sameregion asttype;
};

/* (ASTTYPE){INIT_EXPR} (GCC) */
struct AST_cast_list { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  asttype sameregion asttype;
  expression sameregion init_expr;
};

/* CONDITION ? ARG1 : ARG2
   GCC specific: ARG1 is optional */
struct AST_conditional { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion condition;
  expression sameregion arg1;
  expression sameregion arg2;
};

/* The identrifier CSTRING
DEAD_USE is true for identifiers used as the target of a regular assignment */
struct AST_identifier { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  cstring cstring;
  data_declaration ddecl;
};

/* ({stmt}) (GCC) */
struct AST_compound_expr { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  statement sameregion stmt;
};

/* ARG1(ARGS). ARGS is a list of expressions
If VA_ARG_CALL is non-null, this is actually a call to the pseudo-function
__builtin_va_arg(args, va_arg_call) (where va_arg_call is a type). In 
this case arg1 is a dummy identifier.
CALL_KIND is one of normal_call, post_task, command_call or event_signal. */
struct AST_function_call { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  expression sameregion args;
  asttype va_arg_call;
  nesc_call_kind call_kind;
};

/* ARG1.CSTRING
The field_declaration is saved in FDECL */
struct AST_field_ref { /* extends unary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  cstring cstring;
  field_declaration fdecl;
};

/* parent for increment nodes */
struct AST_increment { /* extends unary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  data_declaration temp1;
  data_declaration temp2;
};

/* binary comparison ops */
struct AST_comparison { /* extends binary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  expression sameregion arg2;
};

/* ARG1 <assignop> ARG2 */
struct AST_assignment { /* extends binary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  expression sameregion arg2;
  data_declaration temp1;
};

/* { ARGS }. ARGS is a list of expressions
The type of the init_list is the type of the initialised entity.
If this entity is an incomplete array type, the type of the init_list
is the actual array size deduced from the initialiser. */
struct AST_init_list { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion args;
};

/* DESIGNATOR = INIT_EXPR in an init_list.
DESIGNATOR is a list
The type is not set in init_specific nodes */
struct AST_init_specific { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  designator sameregion designator;
  expression sameregion init_expr;
};

/* Base type for designators */
struct AST_designator { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
};

/* . CSTRING in an initialisation designator */
struct AST_designate_field { /* extends designator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  cstring cstring;
};

/* [ARG1] or [ARG1 ... ARG2] in a designator. ARG2 is optional.
ARG2 is a GCC extension */
struct AST_designate_index { /* extends designator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  expression sameregion arg1;
  expression sameregion arg2;
};

/* A constant represented as in its unparsed lexical form CSTRING. These
appear in the AST. */
struct AST_lexical_cst { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  cstring cstring;
};

/* A single lexical string - a sequence of these gets concatenated to
form a string. The source form of the constant can be found in
CSTRING. */
struct AST_string_cst { /* extends lexical_cst */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  cstring cstring;
};

/* A list of STRINGS forming a single string constant.
DDECL is the magic_string declaration for this string. */
struct AST_string { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  string_cst sameregion strings;
  data_declaration ddecl;
};

/* The label CSTRING: */
struct AST_id_label { /* extends label */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  label next_label;
  cstring cstring;
  label_declaration ldecl;
};

/* CASE ARG1 ... ARG2: ARG2 is optional, it's presence is GCC-specific */
struct AST_case_label { /* extends label */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  label next_label;
  expression sameregion arg1;
  expression sameregion arg2;
};

/* DEFAULT: */
struct AST_default_label { /* extends label */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  label next_label;
};

/* The identifier CSTRING used uninterpreted */
struct AST_word { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  cstring cstring;
};

/* STRING(EXPR) or [WORD1] STRING(EXPR) (GCC) */
struct AST_asm_operand { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  string sameregion string;
  expression sameregion arg1;
};

/* a supertype for interface/component declarations of WORD1
CDECL is the declaration for this interface/component
ATTRIBUTES are its attributes */
struct AST_nesc_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  attribute sameregion attributes;
  nesc_declaration cdecl;
};

/* interface WORD1 { DECLS } */
struct AST_interface { /* extends nesc_decl */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  attribute sameregion attributes;
  nesc_declaration cdecl;
  declaration sameregion decls;
};

/* ABSTRACT configuration/module WORD1 PARMS { DECLS } IMPLEMENTATION
If ABSTRACT is true, this is a generic component, and PARMS is its
parameters. */
struct AST_component { /* extends nesc_decl */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  attribute sameregion attributes;
  nesc_declaration cdecl;
  bool abstract;
  declaration sameregion parms;
  declaration sameregion decls;
  implementation sameregion implementation;
};

/* a base type for module and configuration implementations
IENV is the implementation's environment
CDECL is the declaration for this component */
struct AST_implementation { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  environment ienv;
  nesc_declaration cdecl;
};

/* configuration implementation { DECLS }
where DECLS include regular declarations, component_refs and connections */
struct AST_configuration { /* extends implementation */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  environment ienv;
  nesc_declaration cdecl;
  declaration sameregion decls;
};

/* module implementation { DECLS }' */
struct AST_module { /* extends implementation */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  environment ienv;
  nesc_declaration cdecl;
  declaration sameregion decls;
};

/* binary component implementation placeholder */
struct AST_binary_component { /* extends implementation */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  environment ienv;
  nesc_declaration cdecl;
};

/* a required or provided function or interface declaration (DECL is
either a data_decl or an interface_ref). REQUIRED is true for 'requires',
false for 'provides' clauses */
struct AST_rp_interface { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool required;
  declaration sameregion decls;
};

/* an interface which is required or provided by a component:
interface WORD1 < ARGS > WORD2 [ GPARMS ] ATTRIBUTES
ARGS is a list of type_arguments for template interfaces
WORD2 is optional, GPARMS, ARGS, ATTRIBUTES are optional */
struct AST_interface_ref { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  expression sameregion args;
  word sameregion word2;
  declaration sameregion gparms;
  attribute sameregion attributes;
  data_declaration ddecl;
};

/* a reference to component WORD1 'as' WORD2
WORD2 is optional
ABSTRACT is true for abstract component instantiations, false otherwise
ARGS is the argument list for abstract component instantiations
CDECL is filled in to point to the loaded component */
struct AST_component_ref { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  word sameregion word2;
  bool abstract;
  expression sameregion args;
  nesc_declaration cdecl;
};

/* A connection between interfaces EP1 and EP2 */
struct AST_connection { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  endpoint sameregion ep1;
  endpoint sameregion ep2;
};

/* a list of parameterised_identifier in IDS */
struct AST_endpoint { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  parameterised_identifier sameregion ids;
};

/* WORD1[ARGS] if ARGS != null, just WORD1 otherwise */
struct AST_parameterised_identifier { /* extends node */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  expression sameregion args;
};

/* parameterised declaration DECLARATOR [ PARMS ] */
struct AST_generic_declarator { /* extends declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  declaration sameregion parms;
};

/* ARG1[ARGS]. ARGS is a list of expressions, ARG1 is a generic function */
struct AST_generic_call { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  expression sameregion args;
};

/* WORD1 . DECLARATOR in a declarator (for defining commands, events in component
implementations
For now at least, DECLARATOR is always an identifier_declarator */
struct AST_interface_ref_declarator { /* extends nested_declarator */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  declarator sameregion declarator;
  word sameregion word1;
};

/* ARG1.CSTRING where ARG1 is an interface_ref.
DDECL is the command or event's declaration */
struct AST_interface_deref { /* extends unary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  cstring cstring;
  data_declaration ddecl;
};

/* ARG1.CSTRING where ARG1 is a component_ref.
component_deref is *not* used for references to typedefed types in components.
DDECL is the specification element's declaration */
struct AST_component_deref { /* extends unary */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  expression sameregion arg1;
  cstring cstring;
  data_declaration ddecl;
};

/* CSTRING . typedef-name, a typedef-from-component-type 
with declaration DDECL. The typedef-name is in ddecl->name */
struct AST_component_typeref { /* extends typename */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  data_declaration ddecl;
  cstring cstring;
};

/* ATOMIC stmt
An atomic_stmt is not made for lexically nested atomic statements */
struct AST_atomic_stmt { /* extends statement */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  statement parent_loop;
  atomic_stmt containing_atomic;
  atomic_t isatomic;
  statement sameregion stmt;
};

/* @WORD1(ARG1), a nesC attribute. ARG1 is an init_list.
TDECL is the reference to the declaration of attribute WORD1 */
struct AST_nesc_attribute { /* extends attribute */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  word sameregion word1;
  expression sameregion arg1;
  tag_declaration tdecl;
};

/* A declaration of type parameter CSTRING */
struct AST_type_parm_decl { /* extends declaration */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  cstring cstring;
  data_declaration ddecl;
};

/* ASTTYPE used as a template argument */
struct AST_type_argument { /* extends expression */
  AST_kind kind;
  location location;
  node sameregion next;
  node sameregion parent;
  node sameregion *sameregion parent_ptr;
  node instantiation;
  bool lvalue;
  bool side_effects;
  known_cst cst;
  bool bitfield;
  bool isregister;
  type type;
  known_cst static_address;
  bool converted_to_pointer;
  bool cst_checked;
  const char * spelling;
  bool parens;
  ivalue ivalue;
  context context;
  atomic_t isatomic;
  asttype sameregion asttype;
};



node new_node(region r, location location);
declaration new_declaration(region r, location location);
statement new_statement(region r, location location);
expression new_expression(region r, location location);
type_element new_type_element(region r, location location);
declarator new_declarator(region r, location location);
label new_label(region r, location location);
asm_decl new_asm_decl(region r, location location, asm_stmt asm_stmt);
data_decl new_data_decl(region r, location location, type_element modifiers, declaration decls);
extension_decl new_extension_decl(region r, location location, declaration decl);
ellipsis_decl new_ellipsis_decl(region r, location location);
enumerator new_enumerator(region r, location location, cstring cstring, expression arg1, data_declaration ddecl);
oldidentifier_decl new_oldidentifier_decl(region r, location location, cstring cstring, data_declaration ddecl);
function_decl new_function_decl(region r, location location, declarator declarator, type_element modifiers, attribute attributes, declaration old_parms, statement stmt, function_decl parent_function, data_declaration ddecl);
implicit_decl new_implicit_decl(region r, location location, identifier ident);
variable_decl new_variable_decl(region r, location location, declarator declarator, attribute attributes, expression arg1, asm_stmt asm_stmt, data_declaration ddecl);
field_decl new_field_decl(region r, location location, declarator declarator, attribute attributes, expression arg1);
asttype new_asttype(region r, location location, declarator declarator, type_element qualifiers);
typename new_typename(region r, location location, data_declaration ddecl);
typeof_expr new_typeof_expr(region r, location location, expression arg1);
typeof_type new_typeof_type(region r, location location, asttype asttype);
attribute new_attribute(region r, location location, word word1);
gcc_attribute new_gcc_attribute(region r, location location, word word1, expression args);
rid new_rid(region r, location location, enum rid id);
qualifier new_qualifier(region r, location location, enum rid id);
tag_ref new_tag_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
struct_ref new_struct_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
union_ref new_union_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
nested_declarator new_nested_declarator(region r, location location, declarator declarator);
function_declarator new_function_declarator(region r, location location, declarator declarator, declaration parms, declaration gparms, type_element qualifiers, environment env);
pointer_declarator new_pointer_declarator(region r, location location, declarator declarator);
qualified_declarator new_qualified_declarator(region r, location location, declarator declarator, type_element modifiers);
array_declarator new_array_declarator(region r, location location, declarator declarator, expression arg1);
identifier_declarator new_identifier_declarator(region r, location location, cstring cstring);
asm_stmt new_asm_stmt(region r, location location, expression arg1, asm_operand asm_operands1, asm_operand asm_operands2, string asm_clobbers, type_element qualifiers);
compound_stmt new_compound_stmt(region r, location location, id_label id_labels, declaration decls, statement stmts, environment env);
if_stmt new_if_stmt(region r, location location, expression condition, statement stmt1, statement stmt2);
labeled_stmt new_labeled_stmt(region r, location location, label label, statement stmt);
expression_stmt new_expression_stmt(region r, location location, expression arg1);
conditional_stmt new_conditional_stmt(region r, location location, expression condition, statement stmt);
switch_stmt new_switch_stmt(region r, location location, expression condition, statement stmt);
for_stmt new_for_stmt(region r, location location, expression arg1, expression arg2, expression arg3, statement stmt);
break_stmt new_break_stmt(region r, location location);
continue_stmt new_continue_stmt(region r, location location);
return_stmt new_return_stmt(region r, location location, expression arg1);
goto_stmt new_goto_stmt(region r, location location, id_label id_label);
computed_goto_stmt new_computed_goto_stmt(region r, location location, expression arg1);
empty_stmt new_empty_stmt(region r, location location);
unary new_unary(region r, location location, expression arg1);
binary new_binary(region r, location location, expression arg1, expression arg2);
comma new_comma(region r, location location, expression arg1);
sizeof_type new_sizeof_type(region r, location location, asttype asttype);
alignof_type new_alignof_type(region r, location location, asttype asttype);
label_address new_label_address(region r, location location, id_label id_label);
cast new_cast(region r, location location, expression arg1, asttype asttype);
cast_list new_cast_list(region r, location location, asttype asttype, expression init_expr);
conditional new_conditional(region r, location location, expression condition, expression arg1, expression arg2);
identifier new_identifier(region r, location location, cstring cstring, data_declaration ddecl);
compound_expr new_compound_expr(region r, location location, statement stmt);
function_call new_function_call(region r, location location, expression arg1, expression args, asttype va_arg_call, nesc_call_kind call_kind);
field_ref new_field_ref(region r, location location, expression arg1, cstring cstring);
increment new_increment(region r, location location, expression arg1);
comparison new_comparison(region r, location location, expression arg1, expression arg2);
assignment new_assignment(region r, location location, expression arg1, expression arg2);
init_list new_init_list(region r, location location, expression args);
init_specific new_init_specific(region r, location location, designator designator, expression init_expr);
designator new_designator(region r, location location);
designate_field new_designate_field(region r, location location, cstring cstring);
designate_index new_designate_index(region r, location location, expression arg1, expression arg2);
lexical_cst new_lexical_cst(region r, location location, cstring cstring);
string_cst new_string_cst(region r, location location, cstring cstring);
string new_string(region r, location location, string_cst strings, data_declaration ddecl);
id_label new_id_label(region r, location location, cstring cstring);
case_label new_case_label(region r, location location, expression arg1, expression arg2);
default_label new_default_label(region r, location location);
word new_word(region r, location location, cstring cstring);
asm_operand new_asm_operand(region r, location location, word word1, string string, expression arg1);
nesc_decl new_nesc_decl(region r, location location, word word1, attribute attributes);
interface new_interface(region r, location location, word word1, attribute attributes, declaration decls);
component new_component(region r, location location, word word1, attribute attributes, bool abstract, declaration parms, declaration decls, implementation implementation);
implementation new_implementation(region r, location location, environment ienv);
configuration new_configuration(region r, location location, environment ienv, declaration decls);
module new_module(region r, location location, environment ienv, declaration decls);
binary_component new_binary_component(region r, location location, environment ienv);
rp_interface new_rp_interface(region r, location location, bool required, declaration decls);
interface_ref new_interface_ref(region r, location location, word word1, expression args, word word2, declaration gparms, attribute attributes, data_declaration ddecl);
component_ref new_component_ref(region r, location location, word word1, word word2, bool abstract, expression args);
connection new_connection(region r, location location, endpoint ep1, endpoint ep2);
endpoint new_endpoint(region r, location location, parameterised_identifier ids);
parameterised_identifier new_parameterised_identifier(region r, location location, word word1, expression args);
generic_declarator new_generic_declarator(region r, location location, declarator declarator, declaration parms);
generic_call new_generic_call(region r, location location, expression arg1, expression args);
interface_ref_declarator new_interface_ref_declarator(region r, location location, declarator declarator, word word1);
interface_deref new_interface_deref(region r, location location, expression arg1, cstring cstring, data_declaration ddecl);
component_deref new_component_deref(region r, location location, expression arg1, cstring cstring, data_declaration ddecl);
component_typeref new_component_typeref(region r, location location, data_declaration ddecl, cstring cstring);
atomic_stmt new_atomic_stmt(region r, location location, statement stmt);
nesc_attribute new_nesc_attribute(region r, location location, word word1, expression arg1);
type_parm_decl new_type_parm_decl(region r, location location, cstring cstring, data_declaration ddecl);
type_argument new_type_argument(region r, location location, asttype asttype);
error_decl new_error_decl(region r, location location);
attribute_ref new_attribute_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
enum_ref new_enum_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
error_stmt new_error_stmt(region r, location location);
while_stmt new_while_stmt(region r, location location, expression condition, statement stmt);
dowhile_stmt new_dowhile_stmt(region r, location location, expression condition, statement stmt);
error_expr new_error_expr(region r, location location);
array_ref new_array_ref(region r, location location, expression arg1, expression arg2);
dereference new_dereference(region r, location location, expression arg1);
extension_expr new_extension_expr(region r, location location, expression arg1);
sizeof_expr new_sizeof_expr(region r, location location, expression arg1);
alignof_expr new_alignof_expr(region r, location location, expression arg1);
realpart new_realpart(region r, location location, expression arg1);
imagpart new_imagpart(region r, location location, expression arg1);
address_of new_address_of(region r, location location, expression arg1);
unary_minus new_unary_minus(region r, location location, expression arg1);
unary_plus new_unary_plus(region r, location location, expression arg1);
conjugate new_conjugate(region r, location location, expression arg1);
bitnot new_bitnot(region r, location location, expression arg1);
not new_not(region r, location location, expression arg1);
preincrement new_preincrement(region r, location location, expression arg1);
predecrement new_predecrement(region r, location location, expression arg1);
postincrement new_postincrement(region r, location location, expression arg1);
postdecrement new_postdecrement(region r, location location, expression arg1);
plus new_plus(region r, location location, expression arg1, expression arg2);
minus new_minus(region r, location location, expression arg1, expression arg2);
times new_times(region r, location location, expression arg1, expression arg2);
divide new_divide(region r, location location, expression arg1, expression arg2);
modulo new_modulo(region r, location location, expression arg1, expression arg2);
lshift new_lshift(region r, location location, expression arg1, expression arg2);
rshift new_rshift(region r, location location, expression arg1, expression arg2);
leq new_leq(region r, location location, expression arg1, expression arg2);
geq new_geq(region r, location location, expression arg1, expression arg2);
lt new_lt(region r, location location, expression arg1, expression arg2);
gt new_gt(region r, location location, expression arg1, expression arg2);
eq new_eq(region r, location location, expression arg1, expression arg2);
ne new_ne(region r, location location, expression arg1, expression arg2);
bitand new_bitand(region r, location location, expression arg1, expression arg2);
bitor new_bitor(region r, location location, expression arg1, expression arg2);
bitxor new_bitxor(region r, location location, expression arg1, expression arg2);
andand new_andand(region r, location location, expression arg1, expression arg2);
oror new_oror(region r, location location, expression arg1, expression arg2);
assign new_assign(region r, location location, expression arg1, expression arg2);
plus_assign new_plus_assign(region r, location location, expression arg1, expression arg2);
minus_assign new_minus_assign(region r, location location, expression arg1, expression arg2);
times_assign new_times_assign(region r, location location, expression arg1, expression arg2);
divide_assign new_divide_assign(region r, location location, expression arg1, expression arg2);
modulo_assign new_modulo_assign(region r, location location, expression arg1, expression arg2);
lshift_assign new_lshift_assign(region r, location location, expression arg1, expression arg2);
rshift_assign new_rshift_assign(region r, location location, expression arg1, expression arg2);
bitand_assign new_bitand_assign(region r, location location, expression arg1, expression arg2);
bitor_assign new_bitor_assign(region r, location location, expression arg1, expression arg2);
bitxor_assign new_bitxor_assign(region r, location location, expression arg1, expression arg2);
rp_connection new_rp_connection(region r, location location, endpoint ep1, endpoint ep2);
eq_connection new_eq_connection(region r, location location, endpoint ep1, endpoint ep2);
nx_struct_ref new_nx_struct_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
nx_union_ref new_nx_union_ref(region r, location location, word word1, attribute attributes, declaration fields, bool defined);
target_attribute new_target_attribute(region r, location location, word word1, expression args);
