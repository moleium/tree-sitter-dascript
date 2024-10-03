#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_STAR_SLASH = 5,
  sym_identifier = 6,
  anon_sym_const = 7,
  anon_sym_LT = 8,
  anon_sym_COMMA = 9,
  anon_sym_GT = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_def = 13,
  anon_sym_abstract = 14,
  anon_sym_override = 15,
  anon_sym_private = 16,
  anon_sym_public = 17,
  anon_sym_shared = 18,
  anon_sym_static = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_var = 22,
  anon_sym_COLON = 23,
  anon_sym_EQ = 24,
  anon_sym_struct = 25,
  anon_sym_class = 26,
  anon_sym_sealed = 27,
  anon_sym_enum = 28,
  anon_sym_let = 29,
  anon_sym_SEMI = 30,
  anon_sym_typedef = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  anon_sym_return = 34,
  anon_sym_if = 35,
  anon_sym_else = 36,
  anon_sym_for = 37,
  anon_sym_in = 38,
  anon_sym_while = 39,
  sym_integer_literal = 40,
  sym_float_literal = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_string_literal_token1 = 43,
  aux_sym_string_literal_token2 = 44,
  anon_sym_true = 45,
  anon_sym_false = 46,
  anon_sym_PLUS = 47,
  anon_sym_DASH = 48,
  anon_sym_STAR = 49,
  anon_sym_SLASH = 50,
  anon_sym_PERCENT = 51,
  anon_sym_EQ_EQ = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_LT_EQ = 54,
  anon_sym_GT_EQ = 55,
  anon_sym_AMP_AMP = 56,
  anon_sym_PIPE_PIPE = 57,
  anon_sym_BANG = 58,
  anon_sym_DOT = 59,
  sym_source_file = 60,
  sym_DOLLARdeclaration = 61,
  sym_comment = 62,
  sym_block_comment = 63,
  sym_type = 64,
  sym_array_type = 65,
  sym_function_declaration = 66,
  sym_parameter_list = 67,
  sym_parameter = 68,
  sym_return_type = 69,
  sym_struct_declaration = 70,
  sym_enum_declaration = 71,
  sym_variable_declaration = 72,
  sym_type_alias = 73,
  sym_block = 74,
  sym_DOLLARstatement = 75,
  sym_return_statement = 76,
  sym_if_statement = 77,
  sym_else_clause = 78,
  sym_for_statement = 79,
  sym_while_statement = 80,
  sym_DOLLARexpression = 81,
  sym_string_literal = 82,
  sym_boolean_literal = 83,
  sym_function_call = 84,
  sym_binary_expression = 85,
  sym_unary_expression = 86,
  sym_member_access = 87,
  sym_array_access = 88,
  sym_annotation = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_block_comment_repeat1 = 91,
  aux_sym_type_repeat1 = 92,
  aux_sym_type_repeat2 = 93,
  aux_sym_parameter_list_repeat1 = 94,
  aux_sym_struct_declaration_repeat1 = 95,
  aux_sym_block_repeat1 = 96,
  aux_sym_string_literal_repeat1 = 97,
  aux_sym_function_call_repeat1 = 98,
  aux_sym_annotation_repeat1 = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_identifier] = "identifier",
  [anon_sym_const] = "const",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_def] = "def",
  [anon_sym_abstract] = "abstract",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_shared] = "shared",
  [anon_sym_static] = "static",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_struct] = "struct",
  [anon_sym_class] = "class",
  [anon_sym_sealed] = "sealed",
  [anon_sym_enum] = "enum",
  [anon_sym_let] = "let",
  [anon_sym_SEMI] = ";",
  [anon_sym_typedef] = "typedef",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_DOLLARdeclaration] = "$declaration",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_type] = "type",
  [sym_array_type] = "array_type",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_return_type] = "return_type",
  [sym_struct_declaration] = "struct_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_type_alias] = "type_alias",
  [sym_block] = "block",
  [sym_DOLLARstatement] = "$statement",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_DOLLARexpression] = "$expression",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_function_call] = "function_call",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_member_access] = "member_access",
  [sym_array_access] = "array_access",
  [sym_annotation] = "annotation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_identifier] = sym_identifier,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_DOLLARdeclaration] = sym_DOLLARdeclaration,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_type] = sym_type,
  [sym_array_type] = sym_array_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_return_type] = sym_return_type,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_type_alias] = sym_type_alias,
  [sym_block] = sym_block,
  [sym_DOLLARstatement] = sym_DOLLARstatement,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_DOLLARexpression] = sym_DOLLARexpression,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_function_call] = sym_function_call,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_member_access] = sym_member_access,
  [sym_array_access] = sym_array_access,
  [sym_annotation] = sym_annotation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_type_repeat2] = aux_sym_type_repeat2,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARdeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARstatement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARexpression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 2,
  [7] = 3,
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 44,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 45,
  [78] = 78,
  [79] = 60,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 61,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 44,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 124,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 158,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 191,
  [200] = 186,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 261,
        '"', 239,
        '%', 253,
        '&', 7,
        '(', 207,
        ')', 208,
        '*', 251,
        '+', 248,
        ',', 189,
        '-', 249,
        '.', 262,
        '/', 252,
        ':', 211,
        ';', 221,
        '<', 188,
        '=', 213,
        '>', 191,
        '[', 192,
        '\\', 99,
        ']', 193,
        'a', 25,
        'c', 59,
        'd', 35,
        'e', 60,
        'f', 17,
        'i', 50,
        'l', 36,
        'o', 96,
        'p', 69,
        'r', 45,
        's', 47,
        't', 73,
        'v', 18,
        'w', 53,
        '{', 223,
        '|', 98,
        '}', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 260,
        '"', 239,
        ')', 208,
        '+', 248,
        ',', 189,
        '-', 249,
        '/', 10,
        ';', 221,
        '<', 187,
        '=', 212,
        '>', 190,
        '[', 192,
        'f', 115,
        'i', 143,
        'l', 131,
        'r', 139,
        't', 159,
        'w', 144,
        '{', 223,
        '}', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 260,
        '"', 239,
        ')', 208,
        '+', 248,
        '-', 249,
        '/', 10,
        ';', 221,
        'f', 116,
        't', 159,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 260,
        '"', 239,
        '+', 248,
        '-', 249,
        '/', 10,
        'e', 155,
        'f', 115,
        'i', 143,
        'l', 131,
        'r', 139,
        't', 159,
        'w', 144,
        '{', 223,
        '}', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 15,
        '%', 253,
        '&', 7,
        '(', 207,
        ')', 208,
        '*', 250,
        '+', 248,
        ',', 189,
        '-', 249,
        '.', 262,
        '/', 252,
        ';', 221,
        '<', 188,
        '=', 16,
        '>', 191,
        '[', 192,
        ']', 193,
        'a', 123,
        'o', 182,
        'p', 163,
        's', 145,
        '{', 223,
        '|', 98,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(258);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 's') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 's') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 's') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 98:
      if (lookahead == '|') ADVANCE(259);
      END_STATE();
    case 99:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_shared);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 105},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {(TSStateId)(-1)},
  [203] = {(TSStateId)(-1)},
  [204] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(189),
    [sym_DOLLARdeclaration] = STATE(95),
    [sym_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_function_declaration] = STATE(73),
    [sym_struct_declaration] = STATE(73),
    [sym_enum_declaration] = STATE(73),
    [sym_variable_declaration] = STATE(73),
    [sym_type_alias] = STATE(73),
    [sym_annotation] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_def] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_typedef] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [79] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [158] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [237] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_let,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_return,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(68), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(74), 1,
      sym_integer_literal,
    ACTIONS(77), 1,
      sym_float_literal,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(5), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_block_repeat1,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [314] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [393] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [472] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(49), 1,
      sym_DOLLARstatement,
    STATE(50), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [551] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(9), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(97), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(97), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [624] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(103), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(107), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [694] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(111), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [729] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(113), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(115), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(117), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(119), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(121), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(123), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [834] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(127), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [869] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(131), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [904] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(135), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(139), 17,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [974] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1021] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1068] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_annotation_repeat1,
    STATE(23), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1111] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_else,
    STATE(67), 1,
      sym_else_clause,
    STATE(24), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(159), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(157), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1148] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_function_call_repeat1,
    STATE(25), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1191] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1229] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1273] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1317] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1361] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1405] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1449] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1493] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1537] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1581] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    STATE(35), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1621] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_block,
    STATE(36), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1661] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    STATE(51), 1,
      sym_block,
    STATE(37), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1701] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(38), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1739] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1783] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(40), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1821] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1865] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1909] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(43), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(179), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(177), 10,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1979] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(183), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(181), 10,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2011] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [2055] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_DOLLARexpression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(45), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [2099] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(183), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(181), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2130] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(187), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(185), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2161] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(50), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2198] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(193), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(191), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(197), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(195), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(201), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(199), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2291] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(54), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2328] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(55), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(209), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(207), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2396] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_def,
    ACTIONS(222), 1,
      anon_sym_enum,
    ACTIONS(225), 1,
      anon_sym_let,
    ACTIONS(228), 1,
      anon_sym_typedef,
    STATE(95), 1,
      sym_DOLLARdeclaration,
    ACTIONS(219), 2,
      anon_sym_struct,
      anon_sym_class,
    STATE(57), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
    STATE(73), 6,
      sym_function_declaration,
      sym_struct_declaration,
      sym_enum_declaration,
      sym_variable_declaration,
      sym_type_alias,
      sym_annotation,
  [2441] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(179), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(177), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2472] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_def,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_typedef,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym_source_file_repeat1,
    STATE(95), 1,
      sym_DOLLARdeclaration,
    ACTIONS(13), 2,
      anon_sym_struct,
      anon_sym_class,
    STATE(59), 2,
      sym_comment,
      sym_block_comment,
    STATE(73), 6,
      sym_function_declaration,
      sym_struct_declaration,
      sym_enum_declaration,
      sym_variable_declaration,
      sym_type_alias,
      sym_annotation,
  [2519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(235), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(233), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2550] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(239), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(237), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2581] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(62), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2618] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(245), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(243), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2649] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    STATE(64), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2686] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(251), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(249), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(255), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(253), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2748] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(259), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(257), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2779] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      aux_sym_type_repeat2,
    STATE(100), 1,
      sym_array_type,
    STATE(68), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(263), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2810] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      aux_sym_type_repeat2,
    STATE(98), 1,
      sym_array_type,
    STATE(69), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(267), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2841] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      aux_sym_type_repeat2,
    STATE(102), 1,
      sym_array_type,
    STATE(70), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(269), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2872] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      aux_sym_type_repeat2,
    STATE(100), 1,
      sym_array_type,
    STATE(71), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(263), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2903] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_LT,
    STATE(72), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_type_repeat2,
    ACTIONS(274), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2990] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3095] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(300), 8,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3305] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(308), 8,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3347] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [3431] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_static,
    ACTIONS(318), 2,
      anon_sym_abstract,
      anon_sym_override,
    STATE(97), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(320), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_shared,
  [3457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(324), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(326), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(267), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3514] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(328), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(263), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3552] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_static,
    STATE(103), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(332), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_shared,
  [3574] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    STATE(122), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(104), 2,
      sym_comment,
      sym_block_comment,
  [3597] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      anon_sym_var,
    STATE(133), 1,
      sym_parameter,
    STATE(105), 2,
      sym_comment,
      sym_block_comment,
  [3620] = 6,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(352), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(106), 2,
      sym_comment,
      sym_block_comment,
  [3641] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_block,
    STATE(156), 1,
      sym_return_type,
    STATE(107), 2,
      sym_comment,
      sym_block_comment,
  [3664] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(85), 1,
      sym_block,
    STATE(150), 1,
      sym_return_type,
    STATE(108), 2,
      sym_comment,
      sym_block_comment,
  [3687] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    STATE(104), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(109), 2,
      sym_comment,
      sym_block_comment,
  [3710] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
    STATE(116), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(110), 2,
      sym_comment,
      sym_block_comment,
  [3733] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_block,
    STATE(163), 1,
      sym_return_type,
    STATE(111), 2,
      sym_comment,
      sym_block_comment,
  [3756] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(112), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(358), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_sealed,
  [3775] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_block,
    STATE(145), 1,
      sym_return_type,
    STATE(113), 2,
      sym_comment,
      sym_block_comment,
  [3798] = 5,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(114), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [3817] = 6,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(352), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(115), 2,
      sym_comment,
      sym_block_comment,
  [3838] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    STATE(122), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(116), 2,
      sym_comment,
      sym_block_comment,
  [3861] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_var,
    STATE(165), 1,
      sym_parameter,
    STATE(117), 2,
      sym_comment,
      sym_block_comment,
  [3881] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      anon_sym_EQ,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(118), 2,
      sym_comment,
      sym_block_comment,
  [3899] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(130), 1,
      sym_type,
    STATE(119), 2,
      sym_comment,
      sym_block_comment,
  [3919] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(120), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_parameter_list_repeat1,
  [3937] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(118), 1,
      sym_type,
    STATE(121), 2,
      sym_comment,
      sym_block_comment,
  [3957] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
    STATE(122), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_struct_declaration_repeat1,
  [3975] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_block,
    STATE(123), 2,
      sym_comment,
      sym_block_comment,
  [3995] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(158), 1,
      sym_type,
    STATE(124), 2,
      sym_comment,
      sym_block_comment,
  [4015] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym_block,
    STATE(125), 2,
      sym_comment,
      sym_block_comment,
  [4035] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_GT,
    STATE(136), 1,
      aux_sym_type_repeat1,
    STATE(126), 2,
      sym_comment,
      sym_block_comment,
  [4055] = 4,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [4071] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(183), 1,
      sym_type,
    STATE(128), 2,
      sym_comment,
      sym_block_comment,
  [4091] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_annotation_repeat1,
    STATE(129), 2,
      sym_comment,
      sym_block_comment,
  [4111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(130), 2,
      sym_comment,
      sym_block_comment,
  [4129] = 6,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_block_comment_token1,
    ACTIONS(403), 1,
      anon_sym_STAR_SLASH,
    STATE(141), 1,
      aux_sym_block_comment_repeat1,
    STATE(131), 2,
      sym_comment,
      sym_block_comment,
  [4149] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_function_call_repeat1,
    STATE(132), 2,
      sym_comment,
      sym_block_comment,
  [4169] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_parameter_list_repeat1,
    STATE(133), 2,
      sym_comment,
      sym_block_comment,
  [4189] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(179), 1,
      sym_type,
    STATE(134), 2,
      sym_comment,
      sym_block_comment,
  [4209] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(160), 1,
      sym_type,
    STATE(135), 2,
      sym_comment,
      sym_block_comment,
  [4229] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_GT,
    STATE(142), 1,
      aux_sym_type_repeat1,
    STATE(136), 2,
      sym_comment,
      sym_block_comment,
  [4249] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(137), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_annotation_repeat1,
  [4267] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_parameter_list_repeat1,
    STATE(138), 2,
      sym_comment,
      sym_block_comment,
  [4287] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(126), 1,
      sym_type,
    STATE(139), 2,
      sym_comment,
      sym_block_comment,
  [4307] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(140), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_function_call_repeat1,
  [4325] = 5,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 1,
      aux_sym_block_comment_token1,
    ACTIONS(426), 1,
      anon_sym_STAR_SLASH,
    STATE(141), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [4343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_GT,
    STATE(142), 3,
      sym_comment,
      sym_block_comment,
      aux_sym_type_repeat1,
  [4361] = 6,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_block_comment_token1,
    ACTIONS(433), 1,
      anon_sym_STAR_SLASH,
    STATE(131), 1,
      aux_sym_block_comment_repeat1,
    STATE(143), 2,
      sym_comment,
      sym_block_comment,
  [4381] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_const,
    STATE(166), 1,
      sym_type,
    STATE(144), 2,
      sym_comment,
      sym_block_comment,
  [4401] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
    STATE(145), 2,
      sym_comment,
      sym_block_comment,
  [4418] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_parameter_list,
    STATE(146), 2,
      sym_comment,
      sym_block_comment,
  [4435] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_parameter_list,
    STATE(147), 2,
      sym_comment,
      sym_block_comment,
  [4452] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_parameter_list,
    STATE(148), 2,
      sym_comment,
      sym_block_comment,
  [4469] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_static,
    STATE(149), 2,
      sym_comment,
      sym_block_comment,
  [4486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
    STATE(150), 2,
      sym_comment,
      sym_block_comment,
  [4503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
    STATE(151), 2,
      sym_comment,
      sym_block_comment,
  [4518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    STATE(152), 2,
      sym_comment,
      sym_block_comment,
  [4535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    STATE(153), 2,
      sym_comment,
      sym_block_comment,
  [4552] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_static,
    STATE(154), 2,
      sym_comment,
      sym_block_comment,
  [4569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
    STATE(155), 2,
      sym_comment,
      sym_block_comment,
  [4584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_block,
    STATE(156), 2,
      sym_comment,
      sym_block_comment,
  [4601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_parameter_list,
    STATE(157), 2,
      sym_comment,
      sym_block_comment,
  [4618] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_EQ,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    STATE(158), 2,
      sym_comment,
      sym_block_comment,
  [4635] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(451), 1,
      sym_integer_literal,
    STATE(159), 2,
      sym_comment,
      sym_block_comment,
  [4652] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    STATE(160), 2,
      sym_comment,
      sym_block_comment,
  [4667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    STATE(161), 2,
      sym_comment,
      sym_block_comment,
  [4682] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(162), 2,
      sym_comment,
      sym_block_comment,
  [4699] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    STATE(163), 2,
      sym_comment,
      sym_block_comment,
  [4716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(164), 2,
      sym_comment,
      sym_block_comment,
  [4733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(165), 2,
      sym_comment,
      sym_block_comment,
  [4748] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      anon_sym_EQ,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    STATE(166), 2,
      sym_comment,
      sym_block_comment,
  [4765] = 4,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 2,
      aux_sym_block_comment_token1,
      anon_sym_STAR_SLASH,
    STATE(167), 2,
      sym_comment,
      sym_block_comment,
  [4780] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(467), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
    STATE(168), 2,
      sym_comment,
      sym_block_comment,
  [4795] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(169), 2,
      sym_comment,
      sym_block_comment,
  [4809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      anon_sym_COLON,
    STATE(170), 2,
      sym_comment,
      sym_block_comment,
  [4823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(171), 2,
      sym_comment,
      sym_block_comment,
  [4837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(172), 2,
      sym_comment,
      sym_block_comment,
  [4851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      anon_sym_in,
    STATE(173), 2,
      sym_comment,
      sym_block_comment,
  [4865] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(174), 2,
      sym_comment,
      sym_block_comment,
  [4879] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(175), 2,
      sym_comment,
      sym_block_comment,
  [4893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(176), 2,
      sym_comment,
      sym_block_comment,
  [4907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(177), 2,
      sym_comment,
      sym_block_comment,
  [4921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(178), 2,
      sym_comment,
      sym_block_comment,
  [4935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(179), 2,
      sym_comment,
      sym_block_comment,
  [4949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 1,
      anon_sym_COLON,
    STATE(180), 2,
      sym_comment,
      sym_block_comment,
  [4963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      sym_identifier,
    STATE(181), 2,
      sym_comment,
      sym_block_comment,
  [4977] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(182), 2,
      sym_comment,
      sym_block_comment,
  [4991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(183), 2,
      sym_comment,
      sym_block_comment,
  [5005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      anon_sym_EQ,
    STATE(184), 2,
      sym_comment,
      sym_block_comment,
  [5019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(185), 2,
      sym_comment,
      sym_block_comment,
  [5033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(186), 2,
      sym_comment,
      sym_block_comment,
  [5047] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(505), 1,
      sym_identifier,
    STATE(187), 2,
      sym_comment,
      sym_block_comment,
  [5061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(188), 2,
      sym_comment,
      sym_block_comment,
  [5075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    STATE(189), 2,
      sym_comment,
      sym_block_comment,
  [5089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(190), 2,
      sym_comment,
      sym_block_comment,
  [5103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(191), 2,
      sym_comment,
      sym_block_comment,
  [5117] = 4,
    ACTIONS(346), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(515), 1,
      aux_sym_comment_token1,
    STATE(192), 2,
      sym_comment,
      sym_block_comment,
  [5131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(193), 2,
      sym_comment,
      sym_block_comment,
  [5145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      anon_sym_COLON,
    STATE(194), 2,
      sym_comment,
      sym_block_comment,
  [5159] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(195), 2,
      sym_comment,
      sym_block_comment,
  [5173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(196), 2,
      sym_comment,
      sym_block_comment,
  [5187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(197), 2,
      sym_comment,
      sym_block_comment,
  [5201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(527), 1,
      anon_sym_EQ,
    STATE(198), 2,
      sym_comment,
      sym_block_comment,
  [5215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(199), 2,
      sym_comment,
      sym_block_comment,
  [5229] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(200), 2,
      sym_comment,
      sym_block_comment,
  [5243] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(201), 2,
      sym_comment,
      sym_block_comment,
  [5257] = 1,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
  [5261] = 1,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [5265] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 393,
  [SMALL_STATE(8)] = 472,
  [SMALL_STATE(9)] = 551,
  [SMALL_STATE(10)] = 589,
  [SMALL_STATE(11)] = 624,
  [SMALL_STATE(12)] = 659,
  [SMALL_STATE(13)] = 694,
  [SMALL_STATE(14)] = 729,
  [SMALL_STATE(15)] = 764,
  [SMALL_STATE(16)] = 799,
  [SMALL_STATE(17)] = 834,
  [SMALL_STATE(18)] = 869,
  [SMALL_STATE(19)] = 904,
  [SMALL_STATE(20)] = 939,
  [SMALL_STATE(21)] = 974,
  [SMALL_STATE(22)] = 1021,
  [SMALL_STATE(23)] = 1068,
  [SMALL_STATE(24)] = 1111,
  [SMALL_STATE(25)] = 1148,
  [SMALL_STATE(26)] = 1191,
  [SMALL_STATE(27)] = 1229,
  [SMALL_STATE(28)] = 1273,
  [SMALL_STATE(29)] = 1317,
  [SMALL_STATE(30)] = 1361,
  [SMALL_STATE(31)] = 1405,
  [SMALL_STATE(32)] = 1449,
  [SMALL_STATE(33)] = 1493,
  [SMALL_STATE(34)] = 1537,
  [SMALL_STATE(35)] = 1581,
  [SMALL_STATE(36)] = 1621,
  [SMALL_STATE(37)] = 1661,
  [SMALL_STATE(38)] = 1701,
  [SMALL_STATE(39)] = 1739,
  [SMALL_STATE(40)] = 1783,
  [SMALL_STATE(41)] = 1821,
  [SMALL_STATE(42)] = 1865,
  [SMALL_STATE(43)] = 1909,
  [SMALL_STATE(44)] = 1947,
  [SMALL_STATE(45)] = 1979,
  [SMALL_STATE(46)] = 2011,
  [SMALL_STATE(47)] = 2055,
  [SMALL_STATE(48)] = 2099,
  [SMALL_STATE(49)] = 2130,
  [SMALL_STATE(50)] = 2161,
  [SMALL_STATE(51)] = 2198,
  [SMALL_STATE(52)] = 2229,
  [SMALL_STATE(53)] = 2260,
  [SMALL_STATE(54)] = 2291,
  [SMALL_STATE(55)] = 2328,
  [SMALL_STATE(56)] = 2365,
  [SMALL_STATE(57)] = 2396,
  [SMALL_STATE(58)] = 2441,
  [SMALL_STATE(59)] = 2472,
  [SMALL_STATE(60)] = 2519,
  [SMALL_STATE(61)] = 2550,
  [SMALL_STATE(62)] = 2581,
  [SMALL_STATE(63)] = 2618,
  [SMALL_STATE(64)] = 2649,
  [SMALL_STATE(65)] = 2686,
  [SMALL_STATE(66)] = 2717,
  [SMALL_STATE(67)] = 2748,
  [SMALL_STATE(68)] = 2779,
  [SMALL_STATE(69)] = 2810,
  [SMALL_STATE(70)] = 2841,
  [SMALL_STATE(71)] = 2872,
  [SMALL_STATE(72)] = 2903,
  [SMALL_STATE(73)] = 2927,
  [SMALL_STATE(74)] = 2948,
  [SMALL_STATE(75)] = 2969,
  [SMALL_STATE(76)] = 2990,
  [SMALL_STATE(77)] = 3011,
  [SMALL_STATE(78)] = 3032,
  [SMALL_STATE(79)] = 3053,
  [SMALL_STATE(80)] = 3074,
  [SMALL_STATE(81)] = 3095,
  [SMALL_STATE(82)] = 3116,
  [SMALL_STATE(83)] = 3137,
  [SMALL_STATE(84)] = 3158,
  [SMALL_STATE(85)] = 3179,
  [SMALL_STATE(86)] = 3200,
  [SMALL_STATE(87)] = 3221,
  [SMALL_STATE(88)] = 3242,
  [SMALL_STATE(89)] = 3263,
  [SMALL_STATE(90)] = 3284,
  [SMALL_STATE(91)] = 3305,
  [SMALL_STATE(92)] = 3326,
  [SMALL_STATE(93)] = 3347,
  [SMALL_STATE(94)] = 3368,
  [SMALL_STATE(95)] = 3389,
  [SMALL_STATE(96)] = 3410,
  [SMALL_STATE(97)] = 3431,
  [SMALL_STATE(98)] = 3457,
  [SMALL_STATE(99)] = 3476,
  [SMALL_STATE(100)] = 3495,
  [SMALL_STATE(101)] = 3514,
  [SMALL_STATE(102)] = 3533,
  [SMALL_STATE(103)] = 3552,
  [SMALL_STATE(104)] = 3574,
  [SMALL_STATE(105)] = 3597,
  [SMALL_STATE(106)] = 3620,
  [SMALL_STATE(107)] = 3641,
  [SMALL_STATE(108)] = 3664,
  [SMALL_STATE(109)] = 3687,
  [SMALL_STATE(110)] = 3710,
  [SMALL_STATE(111)] = 3733,
  [SMALL_STATE(112)] = 3756,
  [SMALL_STATE(113)] = 3775,
  [SMALL_STATE(114)] = 3798,
  [SMALL_STATE(115)] = 3817,
  [SMALL_STATE(116)] = 3838,
  [SMALL_STATE(117)] = 3861,
  [SMALL_STATE(118)] = 3881,
  [SMALL_STATE(119)] = 3899,
  [SMALL_STATE(120)] = 3919,
  [SMALL_STATE(121)] = 3937,
  [SMALL_STATE(122)] = 3957,
  [SMALL_STATE(123)] = 3975,
  [SMALL_STATE(124)] = 3995,
  [SMALL_STATE(125)] = 4015,
  [SMALL_STATE(126)] = 4035,
  [SMALL_STATE(127)] = 4055,
  [SMALL_STATE(128)] = 4071,
  [SMALL_STATE(129)] = 4091,
  [SMALL_STATE(130)] = 4111,
  [SMALL_STATE(131)] = 4129,
  [SMALL_STATE(132)] = 4149,
  [SMALL_STATE(133)] = 4169,
  [SMALL_STATE(134)] = 4189,
  [SMALL_STATE(135)] = 4209,
  [SMALL_STATE(136)] = 4229,
  [SMALL_STATE(137)] = 4249,
  [SMALL_STATE(138)] = 4267,
  [SMALL_STATE(139)] = 4287,
  [SMALL_STATE(140)] = 4307,
  [SMALL_STATE(141)] = 4325,
  [SMALL_STATE(142)] = 4343,
  [SMALL_STATE(143)] = 4361,
  [SMALL_STATE(144)] = 4381,
  [SMALL_STATE(145)] = 4401,
  [SMALL_STATE(146)] = 4418,
  [SMALL_STATE(147)] = 4435,
  [SMALL_STATE(148)] = 4452,
  [SMALL_STATE(149)] = 4469,
  [SMALL_STATE(150)] = 4486,
  [SMALL_STATE(151)] = 4503,
  [SMALL_STATE(152)] = 4518,
  [SMALL_STATE(153)] = 4535,
  [SMALL_STATE(154)] = 4552,
  [SMALL_STATE(155)] = 4569,
  [SMALL_STATE(156)] = 4584,
  [SMALL_STATE(157)] = 4601,
  [SMALL_STATE(158)] = 4618,
  [SMALL_STATE(159)] = 4635,
  [SMALL_STATE(160)] = 4652,
  [SMALL_STATE(161)] = 4667,
  [SMALL_STATE(162)] = 4682,
  [SMALL_STATE(163)] = 4699,
  [SMALL_STATE(164)] = 4716,
  [SMALL_STATE(165)] = 4733,
  [SMALL_STATE(166)] = 4748,
  [SMALL_STATE(167)] = 4765,
  [SMALL_STATE(168)] = 4780,
  [SMALL_STATE(169)] = 4795,
  [SMALL_STATE(170)] = 4809,
  [SMALL_STATE(171)] = 4823,
  [SMALL_STATE(172)] = 4837,
  [SMALL_STATE(173)] = 4851,
  [SMALL_STATE(174)] = 4865,
  [SMALL_STATE(175)] = 4879,
  [SMALL_STATE(176)] = 4893,
  [SMALL_STATE(177)] = 4907,
  [SMALL_STATE(178)] = 4921,
  [SMALL_STATE(179)] = 4935,
  [SMALL_STATE(180)] = 4949,
  [SMALL_STATE(181)] = 4963,
  [SMALL_STATE(182)] = 4977,
  [SMALL_STATE(183)] = 4991,
  [SMALL_STATE(184)] = 5005,
  [SMALL_STATE(185)] = 5019,
  [SMALL_STATE(186)] = 5033,
  [SMALL_STATE(187)] = 5047,
  [SMALL_STATE(188)] = 5061,
  [SMALL_STATE(189)] = 5075,
  [SMALL_STATE(190)] = 5089,
  [SMALL_STATE(191)] = 5103,
  [SMALL_STATE(192)] = 5117,
  [SMALL_STATE(193)] = 5131,
  [SMALL_STATE(194)] = 5145,
  [SMALL_STATE(195)] = 5159,
  [SMALL_STATE(196)] = 5173,
  [SMALL_STATE(197)] = 5187,
  [SMALL_STATE(198)] = 5201,
  [SMALL_STATE(199)] = 5215,
  [SMALL_STATE(200)] = 5229,
  [SMALL_STATE(201)] = 5243,
  [SMALL_STATE(202)] = 5257,
  [SMALL_STATE(203)] = 5261,
  [SMALL_STATE(204)] = 5265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARexpression, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARexpression, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARstatement, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARstatement, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARstatement, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARstatement, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, 0, 0), SHIFT_REPEAT(139),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARdeclaration, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 5, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 6, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 8, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 9, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [509] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dascript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
