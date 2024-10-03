#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 180
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  anon_sym_STAR_SLASH = 4,
  sym_identifier = 5,
  anon_sym_const = 6,
  anon_sym_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_def = 12,
  anon_sym_abstract = 13,
  anon_sym_override = 14,
  anon_sym_private = 15,
  anon_sym_public = 16,
  anon_sym_shared = 17,
  anon_sym_static = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_var = 21,
  anon_sym_COLON = 22,
  anon_sym_EQ = 23,
  anon_sym_struct = 24,
  anon_sym_class = 25,
  anon_sym_sealed = 26,
  anon_sym_enum = 27,
  anon_sym_let = 28,
  anon_sym_SEMI = 29,
  anon_sym_typedef = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  anon_sym_return = 33,
  anon_sym_if = 34,
  anon_sym_else = 35,
  anon_sym_for = 36,
  anon_sym_in = 37,
  anon_sym_while = 38,
  sym_integer_literal = 39,
  sym_float_literal = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_string_literal_token1 = 42,
  aux_sym_string_literal_token2 = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  anon_sym_PLUS = 46,
  anon_sym_DASH = 47,
  anon_sym_STAR = 48,
  anon_sym_SLASH = 49,
  anon_sym_PERCENT = 50,
  anon_sym_EQ_EQ = 51,
  anon_sym_BANG_EQ = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_AMP_AMP = 55,
  anon_sym_PIPE_PIPE = 56,
  anon_sym_BANG = 57,
  anon_sym_DOT = 58,
  sym_source_file = 59,
  sym_DOLLARdeclaration = 60,
  sym_comment = 61,
  sym_type = 62,
  sym_array_type = 63,
  sym_function_declaration = 64,
  sym_parameter_list = 65,
  sym_parameter = 66,
  sym_return_type = 67,
  sym_struct_declaration = 68,
  sym_enum_declaration = 69,
  sym_variable_declaration = 70,
  sym_type_alias = 71,
  sym_block = 72,
  sym_DOLLARstatement = 73,
  sym_return_statement = 74,
  sym_if_statement = 75,
  sym_else_clause = 76,
  sym_for_statement = 77,
  sym_while_statement = 78,
  sym_DOLLARexpression = 79,
  sym_string_literal = 80,
  sym_boolean_literal = 81,
  sym_function_call = 82,
  sym_binary_expression = 83,
  sym_unary_expression = 84,
  sym_member_access = 85,
  sym_array_access = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_type_repeat1 = 88,
  aux_sym_type_repeat2 = 89,
  aux_sym_parameter_list_repeat1 = 90,
  aux_sym_struct_declaration_repeat1 = 91,
  aux_sym_block_repeat1 = 92,
  aux_sym_string_literal_repeat1 = 93,
  aux_sym_function_call_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_type_repeat2] = aux_sym_type_repeat2,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
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
  [aux_sym_source_file_repeat1] = {
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
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 2,
  [8] = 4,
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
  [28] = 28,
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
  [42] = 29,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 38,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 56,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 39,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 38,
  [85] = 85,
  [86] = 57,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
  [112] = 110,
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
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 148,
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
  [166] = 166,
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
  [177] = 174,
  [178] = 173,
  [179] = 179,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      ADVANCE_MAP(
        '!', 255,
        '"', 232,
        '%', 247,
        '&', 6,
        '(', 200,
        ')', 201,
        '*', 244,
        '+', 241,
        ',', 182,
        '-', 242,
        '.', 256,
        '/', 245,
        ':', 204,
        ';', 214,
        '<', 181,
        '=', 206,
        '>', 184,
        '[', 185,
        '\\', 98,
        ']', 186,
        'a', 24,
        'c', 58,
        'd', 34,
        'e', 59,
        'f', 16,
        'i', 49,
        'l', 35,
        'o', 95,
        'p', 68,
        'r', 44,
        's', 46,
        't', 72,
        'v', 17,
        'w', 52,
        '{', 216,
        '|', 97,
        '}', 217,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 254,
        '"', 232,
        ')', 201,
        '+', 241,
        ',', 182,
        '-', 242,
        '/', 8,
        ';', 214,
        '<', 180,
        '=', 205,
        '>', 183,
        '[', 185,
        'f', 108,
        'i', 136,
        'l', 124,
        'r', 132,
        't', 152,
        'w', 137,
        '{', 216,
        '}', 217,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 254,
        '"', 232,
        ')', 201,
        '+', 241,
        '-', 242,
        '/', 8,
        ';', 214,
        'f', 109,
        't', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 254,
        '"', 232,
        '+', 241,
        '-', 242,
        '/', 8,
        'e', 148,
        'f', 108,
        'i', 136,
        'l', 124,
        'r', 132,
        't', 152,
        'w', 137,
        '{', 216,
        '}', 217,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 14,
        '%', 247,
        '&', 6,
        '(', 200,
        ')', 201,
        '*', 243,
        '+', 241,
        ',', 182,
        '-', 242,
        '.', 256,
        '/', 246,
        ';', 214,
        '<', 181,
        '=', 15,
        '>', 184,
        '[', 185,
        ']', 186,
        'a', 116,
        'o', 175,
        'p', 156,
        's', 138,
        '{', 216,
        '|', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 's') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 's') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 's') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 97:
      if (lookahead == '|') ADVANCE(253);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_shared);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_sealed);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 103},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 13},
  [179] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(163),
    [sym_DOLLARdeclaration] = STATE(87),
    [sym_comment] = STATE(1),
    [sym_function_declaration] = STATE(72),
    [sym_struct_declaration] = STATE(72),
    [sym_enum_declaration] = STATE(72),
    [sym_variable_declaration] = STATE(72),
    [sym_type_alias] = STATE(72),
    [aux_sym_source_file_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_typedef] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [75] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_return,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_while,
    ACTIONS(66), 1,
      sym_integer_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_comment,
      aux_sym_block_repeat1,
    ACTIONS(78), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [148] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [223] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [298] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [373] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_block_repeat1,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [448] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(46), 1,
      sym_DOLLARexpression,
    STATE(59), 1,
      sym_DOLLARstatement,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(48), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [523] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(93), 17,
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
  [557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(99), 17,
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
  [588] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_comment,
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
  [619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_comment,
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
  [650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_comment,
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
  [681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_comment,
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
  [712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(93), 17,
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
  [743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_comment,
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
  [774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_comment,
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
  [805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_comment,
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
  [836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_comment,
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
  [867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_comment,
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
  [898] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [937] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      anon_sym_else,
    STATE(22), 1,
      sym_comment,
    STATE(47), 1,
      sym_else_clause,
    ACTIONS(151), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(149), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [970] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_DOLLARexpression,
    STATE(23), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1013] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    STATE(55), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1056] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_comment,
    STATE(32), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1096] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
    STATE(52), 1,
      sym_block,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1132] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    STATE(27), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1168] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_comment,
    STATE(34), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1208] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_comment,
    STATE(60), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1248] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_comment,
    STATE(45), 1,
      sym_block,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1284] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_DOLLARexpression,
    STATE(31), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1324] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(32), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1358] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1398] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1432] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_comment,
    STATE(58), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1472] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1506] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_DOLLARexpression,
    STATE(37), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(169), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(167), 10,
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
  [1574] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(173), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(171), 10,
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
  [1602] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_DOLLARexpression,
    STATE(40), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1642] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_DOLLARexpression,
    STATE(41), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1682] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_comment,
    STATE(61), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1722] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(35), 1,
      sym_float_literal,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_DOLLARexpression,
    STATE(43), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(44), 1,
      sym_comment,
    ACTIONS(173), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(171), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 1,
      sym_comment,
    ACTIONS(177), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(175), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1816] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [1849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 1,
      sym_comment,
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
  [1876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_comment,
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
  [1903] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(191), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(189), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1930] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
      sym_comment,
    ACTIONS(195), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(193), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(197), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(201), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(205), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(169), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(167), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2065] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [2098] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(213), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(211), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2125] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(217), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(215), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2152] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [2185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(221), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2212] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [2245] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 10,
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
  [2278] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_typedef,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    STATE(87), 1,
      sym_DOLLARdeclaration,
    ACTIONS(9), 2,
      anon_sym_struct,
      anon_sym_class,
    STATE(72), 5,
      sym_function_declaration,
      sym_struct_declaration,
      sym_enum_declaration,
      sym_variable_declaration,
      sym_type_alias,
  [2317] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      anon_sym_def,
    ACTIONS(239), 1,
      anon_sym_enum,
    ACTIONS(242), 1,
      anon_sym_let,
    ACTIONS(245), 1,
      anon_sym_typedef,
    STATE(87), 1,
      sym_DOLLARdeclaration,
    ACTIONS(236), 2,
      anon_sym_struct,
      anon_sym_class,
    STATE(63), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(72), 5,
      sym_function_declaration,
      sym_struct_declaration,
      sym_enum_declaration,
      sym_variable_declaration,
      sym_type_alias,
  [2354] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_type_repeat2,
    STATE(90), 1,
      sym_array_type,
    ACTIONS(250), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2381] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_type_repeat2,
    STATE(93), 1,
      sym_array_type,
    ACTIONS(254), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2408] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      aux_sym_type_repeat2,
    STATE(66), 1,
      sym_comment,
    STATE(92), 1,
      sym_array_type,
    ACTIONS(256), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2435] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_type_repeat2,
    STATE(92), 1,
      sym_array_type,
    ACTIONS(256), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2462] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(258), 1,
      anon_sym_LT,
    STATE(68), 2,
      sym_comment,
      aux_sym_type_repeat2,
    ACTIONS(261), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2482] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(263), 8,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2499] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_comment,
    ACTIONS(265), 8,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2516] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2532] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      sym_comment,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2548] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2564] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2580] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_static,
    STATE(75), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_abstract,
      anon_sym_override,
    ACTIONS(277), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_shared,
  [2602] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2618] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2634] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_comment,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2650] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_comment,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2682] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_comment,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2698] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(82), 1,
      sym_comment,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2714] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2730] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(85), 1,
      sym_comment,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2762] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      sym_comment,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2778] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2794] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(88), 1,
      sym_comment,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2810] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2826] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(256), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2841] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(303), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2856] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(92), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2871] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(305), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2886] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(94), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_static,
    STATE(95), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_shared,
  [2919] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    STATE(96), 1,
      sym_comment,
    STATE(147), 1,
      sym_return_type,
  [2938] = 4,
    ACTIONS(319), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(97), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [2953] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym_block,
    STATE(98), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_struct_declaration_repeat1,
  [2972] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    STATE(99), 1,
      sym_comment,
    STATE(138), 1,
      sym_return_type,
  [2991] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      sym_block,
    STATE(100), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_struct_declaration_repeat1,
  [3010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_sealed,
  [3025] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      anon_sym_var,
    STATE(102), 1,
      sym_comment,
    STATE(114), 1,
      sym_parameter,
  [3044] = 5,
    ACTIONS(319), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
    STATE(103), 1,
      sym_comment,
    ACTIONS(340), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3061] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    STATE(104), 1,
      sym_comment,
    STATE(141), 1,
      sym_return_type,
  [3080] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
    STATE(105), 1,
      sym_comment,
    STATE(135), 1,
      sym_return_type,
  [3099] = 5,
    ACTIONS(319), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_literal_repeat1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(340), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3116] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_block,
    STATE(107), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_struct_declaration_repeat1,
  [3135] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_block,
    STATE(98), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(108), 1,
      sym_comment,
  [3154] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_COLON,
    STATE(77), 1,
      sym_block,
    STATE(109), 1,
      sym_comment,
  [3170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(110), 1,
      sym_comment,
    STATE(149), 1,
      sym_type,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    STATE(111), 2,
      sym_comment,
      aux_sym_struct_declaration_repeat1,
  [3200] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(112), 1,
      sym_comment,
    STATE(148), 1,
      sym_type,
  [3216] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(113), 1,
      sym_comment,
    STATE(168), 1,
      sym_type,
  [3232] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_parameter_list_repeat1,
  [3248] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(115), 1,
      sym_comment,
    STATE(176), 1,
      sym_type,
  [3264] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_GT,
    STATE(116), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_type_repeat1,
  [3280] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(116), 1,
      sym_type,
    STATE(117), 1,
      sym_comment,
  [3296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(365), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_function_call_repeat1,
  [3326] = 3,
    ACTIONS(319), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3338] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_GT,
    STATE(121), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_type_repeat1,
  [3354] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym_block,
    STATE(122), 1,
      sym_comment,
  [3370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3384] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(118), 1,
      sym_type,
    STATE(124), 1,
      sym_comment,
  [3400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(125), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(126), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_GT,
    STATE(127), 2,
      sym_comment,
      aux_sym_type_repeat1,
  [3442] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(123), 1,
      sym_type,
    STATE(128), 1,
      sym_comment,
  [3458] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_var,
    STATE(129), 1,
      sym_comment,
    STATE(152), 1,
      sym_parameter,
  [3474] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_parameter_list_repeat1,
    STATE(130), 1,
      sym_comment,
  [3490] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_const,
    STATE(131), 1,
      sym_comment,
    STATE(145), 1,
      sym_type,
  [3506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    STATE(132), 1,
      sym_comment,
  [3519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_parameter_list,
    STATE(133), 1,
      sym_comment,
  [3532] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(134), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    STATE(135), 1,
      sym_comment,
  [3556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    STATE(136), 1,
      sym_comment,
  [3569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_static,
    STATE(137), 1,
      sym_comment,
  [3582] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    STATE(138), 1,
      sym_comment,
  [3595] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_parameter_list,
    STATE(139), 1,
      sym_comment,
  [3608] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_parameter_list,
    STATE(140), 1,
      sym_comment,
  [3621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    STATE(141), 1,
      sym_comment,
  [3634] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(142), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [3656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_parameter_list,
    STATE(144), 1,
      sym_comment,
  [3669] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(145), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_static,
    STATE(146), 1,
      sym_comment,
  [3693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
    STATE(147), 1,
      sym_comment,
  [3706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_comment,
  [3719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_comment,
  [3732] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(150), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 1,
      sym_integer_literal,
    STATE(151), 1,
      sym_comment,
  [3756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3767] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(418), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [3777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(154), 1,
      sym_comment,
  [3787] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(155), 1,
      sym_comment,
  [3797] = 3,
    ACTIONS(319), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(424), 1,
      aux_sym_comment_token1,
    STATE(156), 1,
      sym_comment,
  [3807] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(157), 1,
      sym_comment,
  [3817] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(158), 1,
      sym_comment,
  [3827] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(159), 1,
      sym_comment,
  [3837] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(160), 1,
      sym_comment,
  [3847] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(161), 1,
      sym_comment,
  [3857] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(436), 1,
      anon_sym_in,
    STATE(162), 1,
      sym_comment,
  [3867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(163), 1,
      sym_comment,
  [3877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(164), 1,
      sym_comment,
  [3887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(165), 1,
      sym_comment,
  [3897] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(166), 1,
      sym_comment,
  [3907] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(167), 1,
      sym_comment,
  [3917] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    STATE(168), 1,
      sym_comment,
  [3927] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(452), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_comment,
  [3947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(171), 1,
      sym_comment,
  [3957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_comment,
  [3967] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(173), 1,
      sym_comment,
  [3977] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comment,
  [3987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(175), 1,
      sym_comment,
  [3997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_comment,
  [4007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(466), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_comment,
  [4017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(178), 1,
      sym_comment,
  [4027] = 1,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 223,
  [SMALL_STATE(6)] = 298,
  [SMALL_STATE(7)] = 373,
  [SMALL_STATE(8)] = 448,
  [SMALL_STATE(9)] = 523,
  [SMALL_STATE(10)] = 557,
  [SMALL_STATE(11)] = 588,
  [SMALL_STATE(12)] = 619,
  [SMALL_STATE(13)] = 650,
  [SMALL_STATE(14)] = 681,
  [SMALL_STATE(15)] = 712,
  [SMALL_STATE(16)] = 743,
  [SMALL_STATE(17)] = 774,
  [SMALL_STATE(18)] = 805,
  [SMALL_STATE(19)] = 836,
  [SMALL_STATE(20)] = 867,
  [SMALL_STATE(21)] = 898,
  [SMALL_STATE(22)] = 937,
  [SMALL_STATE(23)] = 970,
  [SMALL_STATE(24)] = 1013,
  [SMALL_STATE(25)] = 1056,
  [SMALL_STATE(26)] = 1096,
  [SMALL_STATE(27)] = 1132,
  [SMALL_STATE(28)] = 1168,
  [SMALL_STATE(29)] = 1208,
  [SMALL_STATE(30)] = 1248,
  [SMALL_STATE(31)] = 1284,
  [SMALL_STATE(32)] = 1324,
  [SMALL_STATE(33)] = 1358,
  [SMALL_STATE(34)] = 1398,
  [SMALL_STATE(35)] = 1432,
  [SMALL_STATE(36)] = 1472,
  [SMALL_STATE(37)] = 1506,
  [SMALL_STATE(38)] = 1546,
  [SMALL_STATE(39)] = 1574,
  [SMALL_STATE(40)] = 1602,
  [SMALL_STATE(41)] = 1642,
  [SMALL_STATE(42)] = 1682,
  [SMALL_STATE(43)] = 1722,
  [SMALL_STATE(44)] = 1762,
  [SMALL_STATE(45)] = 1789,
  [SMALL_STATE(46)] = 1816,
  [SMALL_STATE(47)] = 1849,
  [SMALL_STATE(48)] = 1876,
  [SMALL_STATE(49)] = 1903,
  [SMALL_STATE(50)] = 1930,
  [SMALL_STATE(51)] = 1957,
  [SMALL_STATE(52)] = 1984,
  [SMALL_STATE(53)] = 2011,
  [SMALL_STATE(54)] = 2038,
  [SMALL_STATE(55)] = 2065,
  [SMALL_STATE(56)] = 2098,
  [SMALL_STATE(57)] = 2125,
  [SMALL_STATE(58)] = 2152,
  [SMALL_STATE(59)] = 2185,
  [SMALL_STATE(60)] = 2212,
  [SMALL_STATE(61)] = 2245,
  [SMALL_STATE(62)] = 2278,
  [SMALL_STATE(63)] = 2317,
  [SMALL_STATE(64)] = 2354,
  [SMALL_STATE(65)] = 2381,
  [SMALL_STATE(66)] = 2408,
  [SMALL_STATE(67)] = 2435,
  [SMALL_STATE(68)] = 2462,
  [SMALL_STATE(69)] = 2482,
  [SMALL_STATE(70)] = 2499,
  [SMALL_STATE(71)] = 2516,
  [SMALL_STATE(72)] = 2532,
  [SMALL_STATE(73)] = 2548,
  [SMALL_STATE(74)] = 2564,
  [SMALL_STATE(75)] = 2580,
  [SMALL_STATE(76)] = 2602,
  [SMALL_STATE(77)] = 2618,
  [SMALL_STATE(78)] = 2634,
  [SMALL_STATE(79)] = 2650,
  [SMALL_STATE(80)] = 2666,
  [SMALL_STATE(81)] = 2682,
  [SMALL_STATE(82)] = 2698,
  [SMALL_STATE(83)] = 2714,
  [SMALL_STATE(84)] = 2730,
  [SMALL_STATE(85)] = 2746,
  [SMALL_STATE(86)] = 2762,
  [SMALL_STATE(87)] = 2778,
  [SMALL_STATE(88)] = 2794,
  [SMALL_STATE(89)] = 2810,
  [SMALL_STATE(90)] = 2826,
  [SMALL_STATE(91)] = 2841,
  [SMALL_STATE(92)] = 2856,
  [SMALL_STATE(93)] = 2871,
  [SMALL_STATE(94)] = 2886,
  [SMALL_STATE(95)] = 2901,
  [SMALL_STATE(96)] = 2919,
  [SMALL_STATE(97)] = 2938,
  [SMALL_STATE(98)] = 2953,
  [SMALL_STATE(99)] = 2972,
  [SMALL_STATE(100)] = 2991,
  [SMALL_STATE(101)] = 3010,
  [SMALL_STATE(102)] = 3025,
  [SMALL_STATE(103)] = 3044,
  [SMALL_STATE(104)] = 3061,
  [SMALL_STATE(105)] = 3080,
  [SMALL_STATE(106)] = 3099,
  [SMALL_STATE(107)] = 3116,
  [SMALL_STATE(108)] = 3135,
  [SMALL_STATE(109)] = 3154,
  [SMALL_STATE(110)] = 3170,
  [SMALL_STATE(111)] = 3186,
  [SMALL_STATE(112)] = 3200,
  [SMALL_STATE(113)] = 3216,
  [SMALL_STATE(114)] = 3232,
  [SMALL_STATE(115)] = 3248,
  [SMALL_STATE(116)] = 3264,
  [SMALL_STATE(117)] = 3280,
  [SMALL_STATE(118)] = 3296,
  [SMALL_STATE(119)] = 3310,
  [SMALL_STATE(120)] = 3326,
  [SMALL_STATE(121)] = 3338,
  [SMALL_STATE(122)] = 3354,
  [SMALL_STATE(123)] = 3370,
  [SMALL_STATE(124)] = 3384,
  [SMALL_STATE(125)] = 3400,
  [SMALL_STATE(126)] = 3414,
  [SMALL_STATE(127)] = 3428,
  [SMALL_STATE(128)] = 3442,
  [SMALL_STATE(129)] = 3458,
  [SMALL_STATE(130)] = 3474,
  [SMALL_STATE(131)] = 3490,
  [SMALL_STATE(132)] = 3506,
  [SMALL_STATE(133)] = 3519,
  [SMALL_STATE(134)] = 3532,
  [SMALL_STATE(135)] = 3543,
  [SMALL_STATE(136)] = 3556,
  [SMALL_STATE(137)] = 3569,
  [SMALL_STATE(138)] = 3582,
  [SMALL_STATE(139)] = 3595,
  [SMALL_STATE(140)] = 3608,
  [SMALL_STATE(141)] = 3621,
  [SMALL_STATE(142)] = 3634,
  [SMALL_STATE(143)] = 3645,
  [SMALL_STATE(144)] = 3656,
  [SMALL_STATE(145)] = 3669,
  [SMALL_STATE(146)] = 3680,
  [SMALL_STATE(147)] = 3693,
  [SMALL_STATE(148)] = 3706,
  [SMALL_STATE(149)] = 3719,
  [SMALL_STATE(150)] = 3732,
  [SMALL_STATE(151)] = 3743,
  [SMALL_STATE(152)] = 3756,
  [SMALL_STATE(153)] = 3767,
  [SMALL_STATE(154)] = 3777,
  [SMALL_STATE(155)] = 3787,
  [SMALL_STATE(156)] = 3797,
  [SMALL_STATE(157)] = 3807,
  [SMALL_STATE(158)] = 3817,
  [SMALL_STATE(159)] = 3827,
  [SMALL_STATE(160)] = 3837,
  [SMALL_STATE(161)] = 3847,
  [SMALL_STATE(162)] = 3857,
  [SMALL_STATE(163)] = 3867,
  [SMALL_STATE(164)] = 3877,
  [SMALL_STATE(165)] = 3887,
  [SMALL_STATE(166)] = 3897,
  [SMALL_STATE(167)] = 3907,
  [SMALL_STATE(168)] = 3917,
  [SMALL_STATE(169)] = 3927,
  [SMALL_STATE(170)] = 3937,
  [SMALL_STATE(171)] = 3947,
  [SMALL_STATE(172)] = 3957,
  [SMALL_STATE(173)] = 3967,
  [SMALL_STATE(174)] = 3977,
  [SMALL_STATE(175)] = 3987,
  [SMALL_STATE(176)] = 3997,
  [SMALL_STATE(177)] = 4007,
  [SMALL_STATE(178)] = 4017,
  [SMALL_STATE(179)] = 4027,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARexpression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARexpression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARstatement, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARstatement, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARstatement, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARstatement, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, 0, 0), SHIFT_REPEAT(117),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARdeclaration, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 5, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 6, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
