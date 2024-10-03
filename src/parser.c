#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  anon_sym_var = 20,
  anon_sym_COLON = 21,
  anon_sym_EQ = 22,
  anon_sym_RPAREN = 23,
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
  sym_return_type = 66,
  sym_struct_declaration = 67,
  sym_enum_declaration = 68,
  sym_variable_declaration = 69,
  sym_type_alias = 70,
  sym_block = 71,
  sym_DOLLARstatement = 72,
  sym_return_statement = 73,
  sym_if_statement = 74,
  sym_else_clause = 75,
  sym_for_statement = 76,
  sym_while_statement = 77,
  sym_DOLLARexpression = 78,
  sym_string_literal = 79,
  sym_boolean_literal = 80,
  sym_function_call = 81,
  sym_binary_expression = 82,
  sym_unary_expression = 83,
  sym_member_access = 84,
  sym_array_access = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_type_repeat1 = 87,
  aux_sym_type_repeat2 = 88,
  aux_sym_parameter_list_repeat1 = 89,
  aux_sym_struct_declaration_repeat1 = 90,
  aux_sym_block_repeat1 = 91,
  aux_sym_string_literal_repeat1 = 92,
  aux_sym_function_call_repeat1 = 93,
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
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_RPAREN] = {
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 32,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 42,
  [59] = 41,
  [60] = 49,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
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
  [76] = 62,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 42,
  [89] = 65,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 41,
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
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
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
  [163] = 147,
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
  [192] = 190,
  [193] = 183,
  [194] = 194,
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
        ')', 206,
        '*', 244,
        '+', 241,
        ',', 182,
        '-', 242,
        '.', 256,
        '/', 245,
        ':', 203,
        ';', 214,
        '<', 181,
        '=', 205,
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
        ')', 206,
        '+', 241,
        ',', 182,
        '-', 242,
        '/', 8,
        ';', 214,
        '<', 180,
        '=', 204,
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
        ')', 206,
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
        ')', 206,
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
      if (lookahead == ')') ADVANCE(206);
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
      if (lookahead == 'r') ADVANCE(201);
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
      if (lookahead == 'r') ADVANCE(202);
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
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 103},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 13},
  [194] = {(TSStateId)(-1)},
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
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(180),
    [sym_DOLLARdeclaration] = STATE(83),
    [sym_comment] = STATE(1),
    [sym_function_declaration] = STATE(81),
    [sym_struct_declaration] = STATE(81),
    [sym_enum_declaration] = STATE(81),
    [sym_variable_declaration] = STATE(81),
    [sym_type_alias] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(66),
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
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
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
    STATE(51), 1,
      sym_DOLLARstatement,
    STATE(52), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 6,
      sym_variable_declaration,
      sym_block,
      sym_return_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(18), 7,
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
  [743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
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
  [774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
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
  [805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
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
    STATE(114), 1,
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
    STATE(61), 1,
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
  [970] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_parameter_list_repeat1,
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
  [1009] = 11,
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
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_DOLLARexpression,
    STATE(24), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1052] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
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
  [1091] = 11,
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
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    STATE(56), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1134] = 10,
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
    STATE(23), 1,
      sym_DOLLARexpression,
    STATE(27), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1174] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(28), 1,
      sym_comment,
    STATE(57), 1,
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
  [1210] = 10,
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
    STATE(45), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1250] = 8,
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
    STATE(64), 1,
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
  [1286] = 10,
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
    STATE(31), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1326] = 10,
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
    STATE(32), 1,
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
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1366] = 10,
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
      sym_DOLLARexpression,
    STATE(33), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1406] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(34), 1,
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
  [1440] = 10,
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
      sym_DOLLARexpression,
    STATE(35), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1480] = 10,
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
    STATE(10), 1,
      sym_DOLLARexpression,
    STATE(36), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1520] = 10,
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
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1560] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(38), 1,
      sym_comment,
    ACTIONS(167), 2,
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
  [1594] = 10,
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
    STATE(39), 1,
      sym_comment,
    STATE(40), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1634] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_comment,
    ACTIONS(169), 2,
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
  [1668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
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
  [1696] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_comment,
    ACTIONS(177), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(175), 10,
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
  [1724] = 10,
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
    STATE(43), 1,
      sym_comment,
    STATE(48), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1764] = 10,
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
    STATE(44), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1804] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    STATE(45), 1,
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
  [1840] = 10,
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
    STATE(34), 1,
      sym_DOLLARexpression,
    STATE(46), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1880] = 10,
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
    STATE(47), 1,
      sym_comment,
    STATE(49), 1,
      sym_DOLLARexpression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 7,
      sym_string_literal,
      sym_boolean_literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_member_access,
      sym_array_access,
  [1920] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
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
  [1953] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    STATE(49), 1,
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
  [1986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
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
  [2013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
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
  [2040] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    STATE(52), 1,
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
  [2073] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_comment,
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
  [2100] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_comment,
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
  [2127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(203), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2154] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    STATE(56), 1,
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
  [2187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(211), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(209), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
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
  [2241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
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
  [2268] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
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
  [2301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
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
  [2328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(221), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(219), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(225), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(223), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(229), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(227), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(233), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(231), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2436] = 11,
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
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    STATE(83), 1,
      sym_DOLLARdeclaration,
    ACTIONS(9), 2,
      anon_sym_struct,
      anon_sym_class,
    STATE(81), 5,
      sym_function_declaration,
      sym_struct_declaration,
      sym_enum_declaration,
      sym_variable_declaration,
      sym_type_alias,
  [2475] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_def,
    ACTIONS(245), 1,
      anon_sym_enum,
    ACTIONS(248), 1,
      anon_sym_let,
    ACTIONS(251), 1,
      anon_sym_typedef,
    STATE(83), 1,
      sym_DOLLARdeclaration,
    ACTIONS(242), 2,
      anon_sym_struct,
      anon_sym_class,
    STATE(67), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(81), 5,
      sym_function_declaration,
      sym_struct_declaration,
      sym_enum_declaration,
      sym_variable_declaration,
      sym_type_alias,
  [2512] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_LT,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_type_repeat2,
    STATE(95), 1,
      sym_array_type,
    ACTIONS(256), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2539] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_LT,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_type_repeat2,
    STATE(95), 1,
      sym_array_type,
    ACTIONS(256), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2566] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_LT,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      aux_sym_type_repeat2,
    STATE(70), 1,
      sym_comment,
    STATE(98), 1,
      sym_array_type,
    ACTIONS(260), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2593] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_LT,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_type_repeat2,
    STATE(96), 1,
      sym_array_type,
    ACTIONS(262), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      anon_sym_LT,
    STATE(72), 2,
      sym_comment,
      aux_sym_type_repeat2,
    ACTIONS(267), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2640] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(269), 8,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2657] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(271), 8,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2674] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2690] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2706] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2722] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_comment,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2738] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2754] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_comment,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2770] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_comment,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2786] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(82), 1,
      sym_comment,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2802] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2818] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_comment,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2834] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(85), 1,
      sym_comment,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2850] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      sym_comment,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2866] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2882] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(88), 1,
      sym_comment,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2898] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2914] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2930] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2946] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(307), 1,
      anon_sym_static,
    STATE(92), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_abstract,
      anon_sym_override,
    ACTIONS(305), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_shared,
  [2968] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_typedef,
  [2984] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(94), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2999] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(95), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3014] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3029] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(97), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3044] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(98), 1,
      sym_comment,
    ACTIONS(256), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3059] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_static,
    STATE(99), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_shared,
  [3077] = 5,
    ACTIONS(321), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(325), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3094] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_private,
      anon_sym_public,
      anon_sym_sealed,
  [3109] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
    STATE(102), 1,
      sym_comment,
    STATE(157), 1,
      sym_return_type,
  [3128] = 4,
    ACTIONS(321), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(103), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [3143] = 5,
    ACTIONS(321), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(325), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3160] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_block,
    STATE(105), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_struct_declaration_repeat1,
  [3179] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
    STATE(106), 1,
      sym_comment,
    STATE(159), 1,
      sym_return_type,
  [3198] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_block,
    STATE(107), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_struct_declaration_repeat1,
  [3217] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
    STATE(108), 1,
      sym_comment,
    STATE(162), 1,
      sym_return_type,
  [3236] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_block,
    STATE(105), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(109), 1,
      sym_comment,
  [3255] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_block,
    STATE(107), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(110), 1,
      sym_comment,
  [3274] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_parameter_list_repeat1,
  [3293] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    STATE(112), 1,
      sym_comment,
    STATE(160), 1,
      sym_return_type,
  [3312] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_EQ,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_parameter_list_repeat1,
  [3331] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_function_call_repeat1,
  [3347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(115), 1,
      sym_comment,
    STATE(178), 1,
      sym_type,
  [3363] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [3379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(117), 2,
      sym_comment,
      aux_sym_struct_declaration_repeat1,
  [3393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(118), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
  [3407] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(84), 1,
      sym_block,
    STATE(119), 1,
      sym_comment,
  [3423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(113), 1,
      sym_type,
    STATE(120), 1,
      sym_comment,
  [3439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(121), 1,
      sym_comment,
    STATE(149), 1,
      sym_type,
  [3455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_GT,
    STATE(122), 2,
      sym_comment,
      aux_sym_type_repeat1,
  [3469] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(123), 1,
      sym_comment,
    STATE(125), 1,
      sym_type,
  [3485] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [3501] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3515] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(126), 1,
      sym_comment,
    STATE(129), 1,
      sym_type,
  [3531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [3547] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(128), 1,
      sym_comment,
    STATE(176), 1,
      sym_type,
  [3563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(381), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3577] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_GT,
    STATE(122), 1,
      aux_sym_type_repeat1,
    STATE(131), 1,
      sym_comment,
  [3605] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_block,
    STATE(132), 1,
      sym_comment,
  [3621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(133), 1,
      sym_comment,
    STATE(136), 1,
      sym_type,
  [3637] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_var,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_comment,
  [3653] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
  [3669] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_GT,
    STATE(131), 1,
      aux_sym_type_repeat1,
    STATE(136), 1,
      sym_comment,
  [3685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(111), 1,
      sym_type,
    STATE(137), 1,
      sym_comment,
  [3701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(138), 1,
      sym_comment,
    STATE(147), 1,
      sym_type,
  [3717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_const,
    STATE(139), 1,
      sym_comment,
    STATE(163), 1,
      sym_type,
  [3733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3747] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_parameter_list,
    STATE(141), 1,
      sym_comment,
  [3760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_static,
    STATE(142), 1,
      sym_comment,
  [3773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_parameter_list,
    STATE(143), 1,
      sym_comment,
  [3786] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(144), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_parameter_list,
    STATE(145), 1,
      sym_comment,
  [3810] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_static,
    STATE(146), 1,
      sym_comment,
  [3823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_comment,
  [3836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    ACTIONS(418), 1,
      sym_integer_literal,
    STATE(148), 1,
      sym_comment,
  [3849] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(149), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3860] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(150), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_block,
    STATE(151), 1,
      sym_comment,
  [3884] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 1,
      anon_sym_var,
    STATE(153), 1,
      sym_comment,
  [3908] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(154), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3919] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(155), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3930] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(156), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
    STATE(157), 1,
      sym_comment,
  [3954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_parameter_list,
    STATE(158), 1,
      sym_comment,
  [3967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
    STATE(159), 1,
      sym_comment,
  [3980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
    STATE(160), 1,
      sym_comment,
  [3993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    STATE(161), 1,
      sym_comment,
  [4006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    STATE(162), 1,
      sym_comment,
  [4019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(434), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_comment,
  [4032] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(164), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [4043] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(165), 1,
      sym_comment,
  [4053] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [4063] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(167), 1,
      sym_comment,
  [4073] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(168), 1,
      sym_comment,
  [4083] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(446), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [4093] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(448), 1,
      sym_identifier,
    STATE(170), 1,
      sym_comment,
  [4103] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(171), 1,
      sym_comment,
  [4113] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(172), 1,
      sym_comment,
  [4123] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(173), 1,
      sym_comment,
  [4133] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(456), 1,
      anon_sym_in,
    STATE(174), 1,
      sym_comment,
  [4143] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(458), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
  [4153] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_comment,
  [4163] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(177), 1,
      sym_comment,
  [4173] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_comment,
  [4183] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    STATE(179), 1,
      sym_comment,
  [4193] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_comment,
  [4203] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(181), 1,
      sym_comment,
  [4213] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(182), 1,
      sym_comment,
  [4223] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(183), 1,
      sym_comment,
  [4233] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_comment,
  [4243] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(185), 1,
      sym_comment,
  [4253] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(480), 1,
      anon_sym_COLON,
    STATE(186), 1,
      sym_comment,
  [4263] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(482), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym_comment,
  [4273] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(484), 1,
      sym_identifier,
    STATE(188), 1,
      sym_comment,
  [4283] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(189), 1,
      sym_comment,
  [4293] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(190), 1,
      sym_comment,
  [4303] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(191), 1,
      sym_comment,
  [4313] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(492), 1,
      anon_sym_COLON,
    STATE(192), 1,
      sym_comment,
  [4323] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(193), 1,
      sym_comment,
  [4333] = 1,
    ACTIONS(496), 1,
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
  [SMALL_STATE(24)] = 1009,
  [SMALL_STATE(25)] = 1052,
  [SMALL_STATE(26)] = 1091,
  [SMALL_STATE(27)] = 1134,
  [SMALL_STATE(28)] = 1174,
  [SMALL_STATE(29)] = 1210,
  [SMALL_STATE(30)] = 1250,
  [SMALL_STATE(31)] = 1286,
  [SMALL_STATE(32)] = 1326,
  [SMALL_STATE(33)] = 1366,
  [SMALL_STATE(34)] = 1406,
  [SMALL_STATE(35)] = 1440,
  [SMALL_STATE(36)] = 1480,
  [SMALL_STATE(37)] = 1520,
  [SMALL_STATE(38)] = 1560,
  [SMALL_STATE(39)] = 1594,
  [SMALL_STATE(40)] = 1634,
  [SMALL_STATE(41)] = 1668,
  [SMALL_STATE(42)] = 1696,
  [SMALL_STATE(43)] = 1724,
  [SMALL_STATE(44)] = 1764,
  [SMALL_STATE(45)] = 1804,
  [SMALL_STATE(46)] = 1840,
  [SMALL_STATE(47)] = 1880,
  [SMALL_STATE(48)] = 1920,
  [SMALL_STATE(49)] = 1953,
  [SMALL_STATE(50)] = 1986,
  [SMALL_STATE(51)] = 2013,
  [SMALL_STATE(52)] = 2040,
  [SMALL_STATE(53)] = 2073,
  [SMALL_STATE(54)] = 2100,
  [SMALL_STATE(55)] = 2127,
  [SMALL_STATE(56)] = 2154,
  [SMALL_STATE(57)] = 2187,
  [SMALL_STATE(58)] = 2214,
  [SMALL_STATE(59)] = 2241,
  [SMALL_STATE(60)] = 2268,
  [SMALL_STATE(61)] = 2301,
  [SMALL_STATE(62)] = 2328,
  [SMALL_STATE(63)] = 2355,
  [SMALL_STATE(64)] = 2382,
  [SMALL_STATE(65)] = 2409,
  [SMALL_STATE(66)] = 2436,
  [SMALL_STATE(67)] = 2475,
  [SMALL_STATE(68)] = 2512,
  [SMALL_STATE(69)] = 2539,
  [SMALL_STATE(70)] = 2566,
  [SMALL_STATE(71)] = 2593,
  [SMALL_STATE(72)] = 2620,
  [SMALL_STATE(73)] = 2640,
  [SMALL_STATE(74)] = 2657,
  [SMALL_STATE(75)] = 2674,
  [SMALL_STATE(76)] = 2690,
  [SMALL_STATE(77)] = 2706,
  [SMALL_STATE(78)] = 2722,
  [SMALL_STATE(79)] = 2738,
  [SMALL_STATE(80)] = 2754,
  [SMALL_STATE(81)] = 2770,
  [SMALL_STATE(82)] = 2786,
  [SMALL_STATE(83)] = 2802,
  [SMALL_STATE(84)] = 2818,
  [SMALL_STATE(85)] = 2834,
  [SMALL_STATE(86)] = 2850,
  [SMALL_STATE(87)] = 2866,
  [SMALL_STATE(88)] = 2882,
  [SMALL_STATE(89)] = 2898,
  [SMALL_STATE(90)] = 2914,
  [SMALL_STATE(91)] = 2930,
  [SMALL_STATE(92)] = 2946,
  [SMALL_STATE(93)] = 2968,
  [SMALL_STATE(94)] = 2984,
  [SMALL_STATE(95)] = 2999,
  [SMALL_STATE(96)] = 3014,
  [SMALL_STATE(97)] = 3029,
  [SMALL_STATE(98)] = 3044,
  [SMALL_STATE(99)] = 3059,
  [SMALL_STATE(100)] = 3077,
  [SMALL_STATE(101)] = 3094,
  [SMALL_STATE(102)] = 3109,
  [SMALL_STATE(103)] = 3128,
  [SMALL_STATE(104)] = 3143,
  [SMALL_STATE(105)] = 3160,
  [SMALL_STATE(106)] = 3179,
  [SMALL_STATE(107)] = 3198,
  [SMALL_STATE(108)] = 3217,
  [SMALL_STATE(109)] = 3236,
  [SMALL_STATE(110)] = 3255,
  [SMALL_STATE(111)] = 3274,
  [SMALL_STATE(112)] = 3293,
  [SMALL_STATE(113)] = 3312,
  [SMALL_STATE(114)] = 3331,
  [SMALL_STATE(115)] = 3347,
  [SMALL_STATE(116)] = 3363,
  [SMALL_STATE(117)] = 3379,
  [SMALL_STATE(118)] = 3393,
  [SMALL_STATE(119)] = 3407,
  [SMALL_STATE(120)] = 3423,
  [SMALL_STATE(121)] = 3439,
  [SMALL_STATE(122)] = 3455,
  [SMALL_STATE(123)] = 3469,
  [SMALL_STATE(124)] = 3485,
  [SMALL_STATE(125)] = 3501,
  [SMALL_STATE(126)] = 3515,
  [SMALL_STATE(127)] = 3531,
  [SMALL_STATE(128)] = 3547,
  [SMALL_STATE(129)] = 3563,
  [SMALL_STATE(130)] = 3577,
  [SMALL_STATE(131)] = 3589,
  [SMALL_STATE(132)] = 3605,
  [SMALL_STATE(133)] = 3621,
  [SMALL_STATE(134)] = 3637,
  [SMALL_STATE(135)] = 3653,
  [SMALL_STATE(136)] = 3669,
  [SMALL_STATE(137)] = 3685,
  [SMALL_STATE(138)] = 3701,
  [SMALL_STATE(139)] = 3717,
  [SMALL_STATE(140)] = 3733,
  [SMALL_STATE(141)] = 3747,
  [SMALL_STATE(142)] = 3760,
  [SMALL_STATE(143)] = 3773,
  [SMALL_STATE(144)] = 3786,
  [SMALL_STATE(145)] = 3797,
  [SMALL_STATE(146)] = 3810,
  [SMALL_STATE(147)] = 3823,
  [SMALL_STATE(148)] = 3836,
  [SMALL_STATE(149)] = 3849,
  [SMALL_STATE(150)] = 3860,
  [SMALL_STATE(151)] = 3871,
  [SMALL_STATE(152)] = 3884,
  [SMALL_STATE(153)] = 3895,
  [SMALL_STATE(154)] = 3908,
  [SMALL_STATE(155)] = 3919,
  [SMALL_STATE(156)] = 3930,
  [SMALL_STATE(157)] = 3941,
  [SMALL_STATE(158)] = 3954,
  [SMALL_STATE(159)] = 3967,
  [SMALL_STATE(160)] = 3980,
  [SMALL_STATE(161)] = 3993,
  [SMALL_STATE(162)] = 4006,
  [SMALL_STATE(163)] = 4019,
  [SMALL_STATE(164)] = 4032,
  [SMALL_STATE(165)] = 4043,
  [SMALL_STATE(166)] = 4053,
  [SMALL_STATE(167)] = 4063,
  [SMALL_STATE(168)] = 4073,
  [SMALL_STATE(169)] = 4083,
  [SMALL_STATE(170)] = 4093,
  [SMALL_STATE(171)] = 4103,
  [SMALL_STATE(172)] = 4113,
  [SMALL_STATE(173)] = 4123,
  [SMALL_STATE(174)] = 4133,
  [SMALL_STATE(175)] = 4143,
  [SMALL_STATE(176)] = 4153,
  [SMALL_STATE(177)] = 4163,
  [SMALL_STATE(178)] = 4173,
  [SMALL_STATE(179)] = 4183,
  [SMALL_STATE(180)] = 4193,
  [SMALL_STATE(181)] = 4203,
  [SMALL_STATE(182)] = 4213,
  [SMALL_STATE(183)] = 4223,
  [SMALL_STATE(184)] = 4233,
  [SMALL_STATE(185)] = 4243,
  [SMALL_STATE(186)] = 4253,
  [SMALL_STATE(187)] = 4263,
  [SMALL_STATE(188)] = 4273,
  [SMALL_STATE(189)] = 4283,
  [SMALL_STATE(190)] = 4293,
  [SMALL_STATE(191)] = 4303,
  [SMALL_STATE(192)] = 4313,
  [SMALL_STATE(193)] = 4323,
  [SMALL_STATE(194)] = 4333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARexpression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARexpression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 7, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARstatement, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARstatement, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOLLARstatement, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARstatement, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 5, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 6, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOLLARdeclaration, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 5, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 7, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 8, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 9, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [468] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
