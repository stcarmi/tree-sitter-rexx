#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 1
#define TOKEN_COUNT 136
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  aux_sym_keyword_token1 = 5,
  aux_sym_keyword_token2 = 6,
  aux_sym_keyword_token3 = 7,
  aux_sym_keyword_token4 = 8,
  aux_sym_keyword_token5 = 9,
  aux_sym_keyword_token6 = 10,
  aux_sym_keyword_token7 = 11,
  aux_sym_keyword_token8 = 12,
  aux_sym_keyword_token9 = 13,
  aux_sym_keyword_token10 = 14,
  aux_sym_keyword_token11 = 15,
  aux_sym_keyword_token12 = 16,
  aux_sym_keyword_token13 = 17,
  aux_sym_keyword_token14 = 18,
  aux_sym_keyword_token15 = 19,
  aux_sym_keyword_token16 = 20,
  aux_sym_keyword_token17 = 21,
  aux_sym_keyword_token18 = 22,
  aux_sym_keyword_token19 = 23,
  aux_sym_keyword_token20 = 24,
  aux_sym_keyword_token21 = 25,
  aux_sym_keyword_token22 = 26,
  aux_sym_keyword_token23 = 27,
  aux_sym_keyword_token24 = 28,
  aux_sym_keyword_token25 = 29,
  aux_sym_keyword_token26 = 30,
  aux_sym_keyword_token27 = 31,
  aux_sym_keyword_token28 = 32,
  aux_sym_keyword_token29 = 33,
  aux_sym_keyword_token30 = 34,
  aux_sym_keyword_token31 = 35,
  aux_sym_keyword_token32 = 36,
  aux_sym_keyword_token33 = 37,
  aux_sym_keyword_token34 = 38,
  aux_sym_keyword_token35 = 39,
  aux_sym_keyword_token36 = 40,
  aux_sym_keyword_token37 = 41,
  aux_sym_keyword_token38 = 42,
  aux_sym_keyword_token39 = 43,
  aux_sym_keyword_token40 = 44,
  aux_sym_keyword_token41 = 45,
  aux_sym_keyword_token42 = 46,
  aux_sym_keyword_token43 = 47,
  aux_sym_keyword_token44 = 48,
  aux_sym_keyword_token45 = 49,
  aux_sym_keyword_token46 = 50,
  aux_sym_keyword_token47 = 51,
  aux_sym_keyword_token48 = 52,
  aux_sym_builtin_function_token1 = 53,
  aux_sym_builtin_function_token2 = 54,
  aux_sym_builtin_function_token3 = 55,
  aux_sym_builtin_function_token4 = 56,
  aux_sym_builtin_function_token5 = 57,
  aux_sym_builtin_function_token6 = 58,
  aux_sym_builtin_function_token7 = 59,
  aux_sym_builtin_function_token8 = 60,
  aux_sym_builtin_function_token9 = 61,
  aux_sym_builtin_function_token10 = 62,
  aux_sym_builtin_function_token11 = 63,
  aux_sym_builtin_function_token12 = 64,
  aux_sym_builtin_function_token13 = 65,
  aux_sym_builtin_function_token14 = 66,
  aux_sym_builtin_function_token15 = 67,
  aux_sym_builtin_function_token16 = 68,
  aux_sym_builtin_function_token17 = 69,
  aux_sym_builtin_function_token18 = 70,
  aux_sym_builtin_function_token19 = 71,
  aux_sym_builtin_function_token20 = 72,
  aux_sym_builtin_function_token21 = 73,
  aux_sym_builtin_function_token22 = 74,
  aux_sym_builtin_function_token23 = 75,
  aux_sym_builtin_function_token24 = 76,
  aux_sym_builtin_function_token25 = 77,
  aux_sym_builtin_function_token26 = 78,
  aux_sym_builtin_function_token27 = 79,
  aux_sym_builtin_function_token28 = 80,
  aux_sym_builtin_function_token29 = 81,
  aux_sym_builtin_function_token30 = 82,
  aux_sym_builtin_function_token31 = 83,
  aux_sym_builtin_function_token32 = 84,
  aux_sym_builtin_function_token33 = 85,
  aux_sym_builtin_function_token34 = 86,
  aux_sym_builtin_function_token35 = 87,
  aux_sym_builtin_function_token36 = 88,
  aux_sym_builtin_function_token37 = 89,
  aux_sym_builtin_function_token38 = 90,
  aux_sym_builtin_function_token39 = 91,
  aux_sym_builtin_function_token40 = 92,
  aux_sym_builtin_function_token41 = 93,
  aux_sym_builtin_function_token42 = 94,
  aux_sym_builtin_function_token43 = 95,
  aux_sym_builtin_function_token44 = 96,
  aux_sym_builtin_function_token45 = 97,
  aux_sym_builtin_function_token46 = 98,
  aux_sym_builtin_function_token47 = 99,
  aux_sym_builtin_function_token48 = 100,
  aux_sym_builtin_function_token49 = 101,
  aux_sym_builtin_function_token50 = 102,
  anon_sym_EQ = 103,
  anon_sym_EQ_EQ = 104,
  anon_sym_BSLASH_EQ = 105,
  anon_sym_BSLASH_EQ_EQ = 106,
  anon_sym_LT = 107,
  anon_sym_GT = 108,
  anon_sym_LT_EQ = 109,
  anon_sym_GT_EQ = 110,
  anon_sym_LT_GT = 111,
  anon_sym_LT_LT = 112,
  anon_sym_GT_GT = 113,
  anon_sym_LT_LT_EQ = 114,
  anon_sym_GT_GT_EQ = 115,
  anon_sym_BSLASH_LT = 116,
  anon_sym_BSLASH_GT = 117,
  anon_sym_PLUS = 118,
  anon_sym_DASH = 119,
  anon_sym_STAR = 120,
  anon_sym_SLASH = 121,
  anon_sym_SLASH_SLASH = 122,
  anon_sym_PERCENT = 123,
  anon_sym_STAR_STAR = 124,
  anon_sym_PIPE_PIPE = 125,
  anon_sym_AMP_AMP = 126,
  anon_sym_AMP = 127,
  anon_sym_PIPE = 128,
  anon_sym_BSLASH = 129,
  sym_semicolon = 130,
  aux_sym_string_token1 = 131,
  aux_sym_string_token2 = 132,
  sym_number = 133,
  sym_identifier = 134,
  sym_block_comment = 135,
  sym_program = 136,
  sym__token = 137,
  sym_label = 138,
  sym_function_call = 139,
  sym__argument_list = 140,
  sym__argument = 141,
  sym_keyword = 142,
  sym_builtin_function = 143,
  sym_operator = 144,
  sym_paren_open = 145,
  sym_paren_close = 146,
  sym_string = 147,
  aux_sym_program_repeat1 = 148,
  aux_sym__argument_list_repeat1 = 149,
  aux_sym__argument_repeat1 = 150,
  alias_sym_function_name = 151,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_keyword_token2] = "keyword_token2",
  [aux_sym_keyword_token3] = "keyword_token3",
  [aux_sym_keyword_token4] = "keyword_token4",
  [aux_sym_keyword_token5] = "keyword_token5",
  [aux_sym_keyword_token6] = "keyword_token6",
  [aux_sym_keyword_token7] = "keyword_token7",
  [aux_sym_keyword_token8] = "keyword_token8",
  [aux_sym_keyword_token9] = "keyword_token9",
  [aux_sym_keyword_token10] = "keyword_token10",
  [aux_sym_keyword_token11] = "keyword_token11",
  [aux_sym_keyword_token12] = "keyword_token12",
  [aux_sym_keyword_token13] = "keyword_token13",
  [aux_sym_keyword_token14] = "keyword_token14",
  [aux_sym_keyword_token15] = "keyword_token15",
  [aux_sym_keyword_token16] = "keyword_token16",
  [aux_sym_keyword_token17] = "keyword_token17",
  [aux_sym_keyword_token18] = "keyword_token18",
  [aux_sym_keyword_token19] = "keyword_token19",
  [aux_sym_keyword_token20] = "keyword_token20",
  [aux_sym_keyword_token21] = "keyword_token21",
  [aux_sym_keyword_token22] = "keyword_token22",
  [aux_sym_keyword_token23] = "keyword_token23",
  [aux_sym_keyword_token24] = "keyword_token24",
  [aux_sym_keyword_token25] = "keyword_token25",
  [aux_sym_keyword_token26] = "keyword_token26",
  [aux_sym_keyword_token27] = "keyword_token27",
  [aux_sym_keyword_token28] = "keyword_token28",
  [aux_sym_keyword_token29] = "keyword_token29",
  [aux_sym_keyword_token30] = "keyword_token30",
  [aux_sym_keyword_token31] = "keyword_token31",
  [aux_sym_keyword_token32] = "keyword_token32",
  [aux_sym_keyword_token33] = "keyword_token33",
  [aux_sym_keyword_token34] = "keyword_token34",
  [aux_sym_keyword_token35] = "keyword_token35",
  [aux_sym_keyword_token36] = "keyword_token36",
  [aux_sym_keyword_token37] = "keyword_token37",
  [aux_sym_keyword_token38] = "keyword_token38",
  [aux_sym_keyword_token39] = "keyword_token39",
  [aux_sym_keyword_token40] = "keyword_token40",
  [aux_sym_keyword_token41] = "keyword_token41",
  [aux_sym_keyword_token42] = "keyword_token42",
  [aux_sym_keyword_token43] = "keyword_token43",
  [aux_sym_keyword_token44] = "keyword_token44",
  [aux_sym_keyword_token45] = "keyword_token45",
  [aux_sym_keyword_token46] = "keyword_token46",
  [aux_sym_keyword_token47] = "keyword_token47",
  [aux_sym_keyword_token48] = "keyword_token48",
  [aux_sym_builtin_function_token1] = "builtin_function_token1",
  [aux_sym_builtin_function_token2] = "builtin_function_token2",
  [aux_sym_builtin_function_token3] = "builtin_function_token3",
  [aux_sym_builtin_function_token4] = "builtin_function_token4",
  [aux_sym_builtin_function_token5] = "builtin_function_token5",
  [aux_sym_builtin_function_token6] = "builtin_function_token6",
  [aux_sym_builtin_function_token7] = "builtin_function_token7",
  [aux_sym_builtin_function_token8] = "builtin_function_token8",
  [aux_sym_builtin_function_token9] = "builtin_function_token9",
  [aux_sym_builtin_function_token10] = "builtin_function_token10",
  [aux_sym_builtin_function_token11] = "builtin_function_token11",
  [aux_sym_builtin_function_token12] = "builtin_function_token12",
  [aux_sym_builtin_function_token13] = "builtin_function_token13",
  [aux_sym_builtin_function_token14] = "builtin_function_token14",
  [aux_sym_builtin_function_token15] = "builtin_function_token15",
  [aux_sym_builtin_function_token16] = "builtin_function_token16",
  [aux_sym_builtin_function_token17] = "builtin_function_token17",
  [aux_sym_builtin_function_token18] = "builtin_function_token18",
  [aux_sym_builtin_function_token19] = "builtin_function_token19",
  [aux_sym_builtin_function_token20] = "builtin_function_token20",
  [aux_sym_builtin_function_token21] = "builtin_function_token21",
  [aux_sym_builtin_function_token22] = "builtin_function_token22",
  [aux_sym_builtin_function_token23] = "builtin_function_token23",
  [aux_sym_builtin_function_token24] = "builtin_function_token24",
  [aux_sym_builtin_function_token25] = "builtin_function_token25",
  [aux_sym_builtin_function_token26] = "builtin_function_token26",
  [aux_sym_builtin_function_token27] = "builtin_function_token27",
  [aux_sym_builtin_function_token28] = "builtin_function_token28",
  [aux_sym_builtin_function_token29] = "builtin_function_token29",
  [aux_sym_builtin_function_token30] = "builtin_function_token30",
  [aux_sym_builtin_function_token31] = "builtin_function_token31",
  [aux_sym_builtin_function_token32] = "builtin_function_token32",
  [aux_sym_builtin_function_token33] = "builtin_function_token33",
  [aux_sym_builtin_function_token34] = "builtin_function_token34",
  [aux_sym_builtin_function_token35] = "builtin_function_token35",
  [aux_sym_builtin_function_token36] = "builtin_function_token36",
  [aux_sym_builtin_function_token37] = "builtin_function_token37",
  [aux_sym_builtin_function_token38] = "builtin_function_token38",
  [aux_sym_builtin_function_token39] = "builtin_function_token39",
  [aux_sym_builtin_function_token40] = "builtin_function_token40",
  [aux_sym_builtin_function_token41] = "builtin_function_token41",
  [aux_sym_builtin_function_token42] = "builtin_function_token42",
  [aux_sym_builtin_function_token43] = "builtin_function_token43",
  [aux_sym_builtin_function_token44] = "builtin_function_token44",
  [aux_sym_builtin_function_token45] = "builtin_function_token45",
  [aux_sym_builtin_function_token46] = "builtin_function_token46",
  [aux_sym_builtin_function_token47] = "builtin_function_token47",
  [aux_sym_builtin_function_token48] = "builtin_function_token48",
  [aux_sym_builtin_function_token49] = "builtin_function_token49",
  [aux_sym_builtin_function_token50] = "builtin_function_token50",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BSLASH_EQ] = "\\=",
  [anon_sym_BSLASH_EQ_EQ] = "\\==",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_BSLASH_LT] = "\\<",
  [anon_sym_BSLASH_GT] = "\\>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_BSLASH] = "\\",
  [sym_semicolon] = "semicolon",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym_label] = "label",
  [sym_function_call] = "function_call",
  [sym__argument_list] = "_argument_list",
  [sym__argument] = "_argument",
  [sym_keyword] = "keyword",
  [sym_builtin_function] = "builtin_function",
  [sym_operator] = "operator",
  [sym_paren_open] = "paren_open",
  [sym_paren_close] = "paren_close",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__argument_list_repeat1] = "_argument_list_repeat1",
  [aux_sym__argument_repeat1] = "_argument_repeat1",
  [alias_sym_function_name] = "function_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_keyword_token2] = aux_sym_keyword_token2,
  [aux_sym_keyword_token3] = aux_sym_keyword_token3,
  [aux_sym_keyword_token4] = aux_sym_keyword_token4,
  [aux_sym_keyword_token5] = aux_sym_keyword_token5,
  [aux_sym_keyword_token6] = aux_sym_keyword_token6,
  [aux_sym_keyword_token7] = aux_sym_keyword_token7,
  [aux_sym_keyword_token8] = aux_sym_keyword_token8,
  [aux_sym_keyword_token9] = aux_sym_keyword_token9,
  [aux_sym_keyword_token10] = aux_sym_keyword_token10,
  [aux_sym_keyword_token11] = aux_sym_keyword_token11,
  [aux_sym_keyword_token12] = aux_sym_keyword_token12,
  [aux_sym_keyword_token13] = aux_sym_keyword_token13,
  [aux_sym_keyword_token14] = aux_sym_keyword_token14,
  [aux_sym_keyword_token15] = aux_sym_keyword_token15,
  [aux_sym_keyword_token16] = aux_sym_keyword_token16,
  [aux_sym_keyword_token17] = aux_sym_keyword_token17,
  [aux_sym_keyword_token18] = aux_sym_keyword_token18,
  [aux_sym_keyword_token19] = aux_sym_keyword_token19,
  [aux_sym_keyword_token20] = aux_sym_keyword_token20,
  [aux_sym_keyword_token21] = aux_sym_keyword_token21,
  [aux_sym_keyword_token22] = aux_sym_keyword_token22,
  [aux_sym_keyword_token23] = aux_sym_keyword_token23,
  [aux_sym_keyword_token24] = aux_sym_keyword_token24,
  [aux_sym_keyword_token25] = aux_sym_keyword_token25,
  [aux_sym_keyword_token26] = aux_sym_keyword_token26,
  [aux_sym_keyword_token27] = aux_sym_keyword_token27,
  [aux_sym_keyword_token28] = aux_sym_keyword_token28,
  [aux_sym_keyword_token29] = aux_sym_keyword_token29,
  [aux_sym_keyword_token30] = aux_sym_keyword_token30,
  [aux_sym_keyword_token31] = aux_sym_keyword_token31,
  [aux_sym_keyword_token32] = aux_sym_keyword_token32,
  [aux_sym_keyword_token33] = aux_sym_keyword_token33,
  [aux_sym_keyword_token34] = aux_sym_keyword_token34,
  [aux_sym_keyword_token35] = aux_sym_keyword_token35,
  [aux_sym_keyword_token36] = aux_sym_keyword_token36,
  [aux_sym_keyword_token37] = aux_sym_keyword_token37,
  [aux_sym_keyword_token38] = aux_sym_keyword_token38,
  [aux_sym_keyword_token39] = aux_sym_keyword_token39,
  [aux_sym_keyword_token40] = aux_sym_keyword_token40,
  [aux_sym_keyword_token41] = aux_sym_keyword_token41,
  [aux_sym_keyword_token42] = aux_sym_keyword_token42,
  [aux_sym_keyword_token43] = aux_sym_keyword_token43,
  [aux_sym_keyword_token44] = aux_sym_keyword_token44,
  [aux_sym_keyword_token45] = aux_sym_keyword_token45,
  [aux_sym_keyword_token46] = aux_sym_keyword_token46,
  [aux_sym_keyword_token47] = aux_sym_keyword_token47,
  [aux_sym_keyword_token48] = aux_sym_keyword_token48,
  [aux_sym_builtin_function_token1] = aux_sym_builtin_function_token1,
  [aux_sym_builtin_function_token2] = aux_sym_builtin_function_token2,
  [aux_sym_builtin_function_token3] = aux_sym_builtin_function_token3,
  [aux_sym_builtin_function_token4] = aux_sym_builtin_function_token4,
  [aux_sym_builtin_function_token5] = aux_sym_builtin_function_token5,
  [aux_sym_builtin_function_token6] = aux_sym_builtin_function_token6,
  [aux_sym_builtin_function_token7] = aux_sym_builtin_function_token7,
  [aux_sym_builtin_function_token8] = aux_sym_builtin_function_token8,
  [aux_sym_builtin_function_token9] = aux_sym_builtin_function_token9,
  [aux_sym_builtin_function_token10] = aux_sym_builtin_function_token10,
  [aux_sym_builtin_function_token11] = aux_sym_builtin_function_token11,
  [aux_sym_builtin_function_token12] = aux_sym_builtin_function_token12,
  [aux_sym_builtin_function_token13] = aux_sym_builtin_function_token13,
  [aux_sym_builtin_function_token14] = aux_sym_builtin_function_token14,
  [aux_sym_builtin_function_token15] = aux_sym_builtin_function_token15,
  [aux_sym_builtin_function_token16] = aux_sym_builtin_function_token16,
  [aux_sym_builtin_function_token17] = aux_sym_builtin_function_token17,
  [aux_sym_builtin_function_token18] = aux_sym_builtin_function_token18,
  [aux_sym_builtin_function_token19] = aux_sym_builtin_function_token19,
  [aux_sym_builtin_function_token20] = aux_sym_builtin_function_token20,
  [aux_sym_builtin_function_token21] = aux_sym_builtin_function_token21,
  [aux_sym_builtin_function_token22] = aux_sym_builtin_function_token22,
  [aux_sym_builtin_function_token23] = aux_sym_builtin_function_token23,
  [aux_sym_builtin_function_token24] = aux_sym_builtin_function_token24,
  [aux_sym_builtin_function_token25] = aux_sym_builtin_function_token25,
  [aux_sym_builtin_function_token26] = aux_sym_builtin_function_token26,
  [aux_sym_builtin_function_token27] = aux_sym_builtin_function_token27,
  [aux_sym_builtin_function_token28] = aux_sym_builtin_function_token28,
  [aux_sym_builtin_function_token29] = aux_sym_builtin_function_token29,
  [aux_sym_builtin_function_token30] = aux_sym_builtin_function_token30,
  [aux_sym_builtin_function_token31] = aux_sym_builtin_function_token31,
  [aux_sym_builtin_function_token32] = aux_sym_builtin_function_token32,
  [aux_sym_builtin_function_token33] = aux_sym_builtin_function_token33,
  [aux_sym_builtin_function_token34] = aux_sym_builtin_function_token34,
  [aux_sym_builtin_function_token35] = aux_sym_builtin_function_token35,
  [aux_sym_builtin_function_token36] = aux_sym_builtin_function_token36,
  [aux_sym_builtin_function_token37] = aux_sym_builtin_function_token37,
  [aux_sym_builtin_function_token38] = aux_sym_builtin_function_token38,
  [aux_sym_builtin_function_token39] = aux_sym_builtin_function_token39,
  [aux_sym_builtin_function_token40] = aux_sym_builtin_function_token40,
  [aux_sym_builtin_function_token41] = aux_sym_builtin_function_token41,
  [aux_sym_builtin_function_token42] = aux_sym_builtin_function_token42,
  [aux_sym_builtin_function_token43] = aux_sym_builtin_function_token43,
  [aux_sym_builtin_function_token44] = aux_sym_builtin_function_token44,
  [aux_sym_builtin_function_token45] = aux_sym_builtin_function_token45,
  [aux_sym_builtin_function_token46] = aux_sym_builtin_function_token46,
  [aux_sym_builtin_function_token47] = aux_sym_builtin_function_token47,
  [aux_sym_builtin_function_token48] = aux_sym_builtin_function_token48,
  [aux_sym_builtin_function_token49] = aux_sym_builtin_function_token49,
  [aux_sym_builtin_function_token50] = aux_sym_builtin_function_token50,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BSLASH_EQ] = anon_sym_BSLASH_EQ,
  [anon_sym_BSLASH_EQ_EQ] = anon_sym_BSLASH_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_BSLASH_LT] = anon_sym_BSLASH_LT,
  [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_semicolon] = sym_semicolon,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym_label] = sym_label,
  [sym_function_call] = sym_function_call,
  [sym__argument_list] = sym__argument_list,
  [sym__argument] = sym__argument,
  [sym_keyword] = sym_keyword,
  [sym_builtin_function] = sym_builtin_function,
  [sym_operator] = sym_operator,
  [sym_paren_open] = sym_paren_open,
  [sym_paren_close] = sym_paren_close,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__argument_list_repeat1] = aux_sym__argument_list_repeat1,
  [aux_sym__argument_repeat1] = aux_sym__argument_repeat1,
  [alias_sym_function_name] = alias_sym_function_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_function_token50] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_GT] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__argument_list] = {
    .visible = false,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_open] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_close] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_function_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_keyword, 2,
    sym_keyword,
    alias_sym_function_name,
  sym_builtin_function, 2,
    sym_builtin_function,
    alias_sym_function_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 1,
        '%', 130,
        '&', 134,
        '\'', 2,
        '(', 9,
        ')', 10,
        '*', 127,
        '+', 125,
        ',', 11,
        '-', 126,
        '/', 128,
        ':', 8,
        ';', 137,
        '<', 114,
        '=', 110,
        '>', 115,
        '\\', 136,
        '|', 135,
        'A', 164,
        'a', 164,
        'B', 143,
        'b', 143,
        'C', 146,
        'c', 146,
        'D', 144,
        'd', 144,
        'E', 261,
        'e', 261,
        'F', 300,
        'f', 300,
        'I', 230,
        'i', 230,
        'J', 395,
        'j', 395,
        'L', 160,
        'l', 160,
        'N', 298,
        'n', 298,
        'O', 231,
        'o', 231,
        'P', 152,
        'p', 152,
        'Q', 396,
        'q', 396,
        'R', 151,
        'r', 151,
        'S', 147,
        's', 147,
        'T', 246,
        't', 246,
        'U', 291,
        'u', 291,
        'V', 148,
        'v', 148,
        'W', 241,
        'w', 241,
        'X', 145,
        'x', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 1,
        '%', 130,
        '&', 134,
        '\'', 2,
        '(', 9,
        ')', 10,
        '*', 127,
        '+', 125,
        ',', 11,
        '-', 126,
        '/', 128,
        ';', 137,
        '<', 114,
        '=', 110,
        '>', 115,
        '\\', 136,
        '|', 135,
        'A', 164,
        'a', 164,
        'B', 143,
        'b', 143,
        'C', 146,
        'c', 146,
        'D', 144,
        'd', 144,
        'E', 261,
        'e', 261,
        'F', 300,
        'f', 300,
        'I', 230,
        'i', 230,
        'J', 395,
        'j', 395,
        'L', 160,
        'l', 160,
        'N', 298,
        'n', 298,
        'O', 231,
        'o', 231,
        'P', 152,
        'p', 152,
        'Q', 396,
        'q', 396,
        'R', 151,
        'r', 151,
        'S', 147,
        's', 147,
        'T', 246,
        't', 246,
        'U', 291,
        'u', 291,
        'V', 148,
        'v', 148,
        'W', 241,
        'w', 241,
        'X', 145,
        'x', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_keyword_token21);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_keyword_token22);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_keyword_token23);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_keyword_token24);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_keyword_token25);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_keyword_token26);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_keyword_token27);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_keyword_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_keyword_token29);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_keyword_token30);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_keyword_token31);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_keyword_token32);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_keyword_token33);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_keyword_token34);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_keyword_token35);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_keyword_token36);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_keyword_token37);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_keyword_token38);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_keyword_token39);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_keyword_token40);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_keyword_token41);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_keyword_token42);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_keyword_token43);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_keyword_token44);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_keyword_token45);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_keyword_token46);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_keyword_token47);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_keyword_token48);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_builtin_function_token1);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_builtin_function_token2);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_builtin_function_token3);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_builtin_function_token4);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_builtin_function_token5);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_builtin_function_token6);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_builtin_function_token7);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_builtin_function_token8);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_builtin_function_token9);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_builtin_function_token10);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_builtin_function_token11);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_builtin_function_token12);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_builtin_function_token13);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_builtin_function_token14);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_builtin_function_token15);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_builtin_function_token16);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_builtin_function_token17);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_builtin_function_token18);
      ADVANCE_MAP(
        'I', 294,
        'i', 294,
        'L', 221,
        'l', 221,
        'P', 305,
        'p', 305,
        'S', 81,
        's', 81,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_builtin_function_token19);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_builtin_function_token20);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_builtin_function_token21);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_builtin_function_token22);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_builtin_function_token23);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_builtin_function_token24);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_builtin_function_token25);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_builtin_function_token26);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_builtin_function_token27);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_builtin_function_token28);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_builtin_function_token29);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_builtin_function_token30);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_builtin_function_token31);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_builtin_function_token32);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_builtin_function_token33);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_builtin_function_token34);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_builtin_function_token35);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_builtin_function_token36);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_builtin_function_token37);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_builtin_function_token38);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_builtin_function_token39);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_builtin_function_token40);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_builtin_function_token41);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_builtin_function_token42);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_builtin_function_token43);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_builtin_function_token44);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_builtin_function_token45);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_builtin_function_token46);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_builtin_function_token47);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_builtin_function_token48);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_builtin_function_token49);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_builtin_function_token50);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASH_GT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(124);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '2', 165,
        'A', 379,
        'a', 379,
        'E', 262,
        'e', 262,
        'I', 236,
        'i', 236,
        'O', 15,
        'o', 15,
        'R', 302,
        'r', 302,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '2', 177,
        'A', 268,
        'a', 268,
        'E', 293,
        'e', 293,
        'H', 157,
        'h', 157,
        'O', 278,
        'o', 278,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 411,
        'a', 411,
        'E', 271,
        'e', 271,
        'I', 237,
        'i', 237,
        'O', 397,
        'o', 397,
        'T', 333,
        't', 333,
        'U', 168,
        'u', 168,
        'Y', 277,
        'y', 277,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 348,
        'a', 348,
        'O', 352,
        'o', 352,
        'R', 299,
        'r', 299,
        'U', 269,
        'u', 269,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 362,
        'a', 362,
        'E', 149,
        'e', 149,
        'I', 292,
        'i', 292,
        'O', 408,
        'o', 408,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(167);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(191);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'F', 232,
        'f', 232,
        'N', 57,
        'n', 57,
        'P', 381,
        'p', 381,
        'T', 247,
        't', 247,
        'V', 218,
        'v', 218,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(412);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(382);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(385);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(223);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'L', 359,
        'l', 359,
        'N', 178,
        'n', 178,
        'R', 334,
        'r', 334,
        'X', 252,
        'x', 252,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(417);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(304);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(310);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(374);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(375);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(376);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(70);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(416);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [aux_sym_keyword_token2] = ACTIONS(1),
    [aux_sym_keyword_token3] = ACTIONS(1),
    [aux_sym_keyword_token4] = ACTIONS(1),
    [aux_sym_keyword_token5] = ACTIONS(1),
    [aux_sym_keyword_token6] = ACTIONS(1),
    [aux_sym_keyword_token7] = ACTIONS(1),
    [aux_sym_keyword_token8] = ACTIONS(1),
    [aux_sym_keyword_token9] = ACTIONS(1),
    [aux_sym_keyword_token10] = ACTIONS(1),
    [aux_sym_keyword_token11] = ACTIONS(1),
    [aux_sym_keyword_token12] = ACTIONS(1),
    [aux_sym_keyword_token13] = ACTIONS(1),
    [aux_sym_keyword_token14] = ACTIONS(1),
    [aux_sym_keyword_token15] = ACTIONS(1),
    [aux_sym_keyword_token16] = ACTIONS(1),
    [aux_sym_keyword_token17] = ACTIONS(1),
    [aux_sym_keyword_token18] = ACTIONS(1),
    [aux_sym_keyword_token19] = ACTIONS(1),
    [aux_sym_keyword_token20] = ACTIONS(1),
    [aux_sym_keyword_token21] = ACTIONS(1),
    [aux_sym_keyword_token22] = ACTIONS(1),
    [aux_sym_keyword_token23] = ACTIONS(1),
    [aux_sym_keyword_token24] = ACTIONS(1),
    [aux_sym_keyword_token25] = ACTIONS(1),
    [aux_sym_keyword_token26] = ACTIONS(1),
    [aux_sym_keyword_token27] = ACTIONS(1),
    [aux_sym_keyword_token28] = ACTIONS(1),
    [aux_sym_keyword_token29] = ACTIONS(1),
    [aux_sym_keyword_token30] = ACTIONS(1),
    [aux_sym_keyword_token31] = ACTIONS(1),
    [aux_sym_keyword_token32] = ACTIONS(1),
    [aux_sym_keyword_token33] = ACTIONS(1),
    [aux_sym_keyword_token34] = ACTIONS(1),
    [aux_sym_keyword_token35] = ACTIONS(1),
    [aux_sym_keyword_token36] = ACTIONS(1),
    [aux_sym_keyword_token37] = ACTIONS(1),
    [aux_sym_keyword_token38] = ACTIONS(1),
    [aux_sym_keyword_token39] = ACTIONS(1),
    [aux_sym_keyword_token40] = ACTIONS(1),
    [aux_sym_keyword_token41] = ACTIONS(1),
    [aux_sym_keyword_token42] = ACTIONS(1),
    [aux_sym_keyword_token43] = ACTIONS(1),
    [aux_sym_keyword_token44] = ACTIONS(1),
    [aux_sym_keyword_token45] = ACTIONS(1),
    [aux_sym_keyword_token46] = ACTIONS(1),
    [aux_sym_keyword_token47] = ACTIONS(1),
    [aux_sym_keyword_token48] = ACTIONS(1),
    [aux_sym_builtin_function_token1] = ACTIONS(1),
    [aux_sym_builtin_function_token2] = ACTIONS(1),
    [aux_sym_builtin_function_token3] = ACTIONS(1),
    [aux_sym_builtin_function_token4] = ACTIONS(1),
    [aux_sym_builtin_function_token5] = ACTIONS(1),
    [aux_sym_builtin_function_token6] = ACTIONS(1),
    [aux_sym_builtin_function_token7] = ACTIONS(1),
    [aux_sym_builtin_function_token8] = ACTIONS(1),
    [aux_sym_builtin_function_token9] = ACTIONS(1),
    [aux_sym_builtin_function_token10] = ACTIONS(1),
    [aux_sym_builtin_function_token11] = ACTIONS(1),
    [aux_sym_builtin_function_token12] = ACTIONS(1),
    [aux_sym_builtin_function_token13] = ACTIONS(1),
    [aux_sym_builtin_function_token14] = ACTIONS(1),
    [aux_sym_builtin_function_token15] = ACTIONS(1),
    [aux_sym_builtin_function_token16] = ACTIONS(1),
    [aux_sym_builtin_function_token17] = ACTIONS(1),
    [aux_sym_builtin_function_token18] = ACTIONS(1),
    [aux_sym_builtin_function_token19] = ACTIONS(1),
    [aux_sym_builtin_function_token20] = ACTIONS(1),
    [aux_sym_builtin_function_token21] = ACTIONS(1),
    [aux_sym_builtin_function_token22] = ACTIONS(1),
    [aux_sym_builtin_function_token23] = ACTIONS(1),
    [aux_sym_builtin_function_token24] = ACTIONS(1),
    [aux_sym_builtin_function_token25] = ACTIONS(1),
    [aux_sym_builtin_function_token26] = ACTIONS(1),
    [aux_sym_builtin_function_token27] = ACTIONS(1),
    [aux_sym_builtin_function_token28] = ACTIONS(1),
    [aux_sym_builtin_function_token29] = ACTIONS(1),
    [aux_sym_builtin_function_token30] = ACTIONS(1),
    [aux_sym_builtin_function_token31] = ACTIONS(1),
    [aux_sym_builtin_function_token32] = ACTIONS(1),
    [aux_sym_builtin_function_token33] = ACTIONS(1),
    [aux_sym_builtin_function_token34] = ACTIONS(1),
    [aux_sym_builtin_function_token35] = ACTIONS(1),
    [aux_sym_builtin_function_token36] = ACTIONS(1),
    [aux_sym_builtin_function_token37] = ACTIONS(1),
    [aux_sym_builtin_function_token38] = ACTIONS(1),
    [aux_sym_builtin_function_token39] = ACTIONS(1),
    [aux_sym_builtin_function_token40] = ACTIONS(1),
    [aux_sym_builtin_function_token41] = ACTIONS(1),
    [aux_sym_builtin_function_token42] = ACTIONS(1),
    [aux_sym_builtin_function_token43] = ACTIONS(1),
    [aux_sym_builtin_function_token44] = ACTIONS(1),
    [aux_sym_builtin_function_token45] = ACTIONS(1),
    [aux_sym_builtin_function_token46] = ACTIONS(1),
    [aux_sym_builtin_function_token47] = ACTIONS(1),
    [aux_sym_builtin_function_token48] = ACTIONS(1),
    [aux_sym_builtin_function_token49] = ACTIONS(1),
    [aux_sym_builtin_function_token50] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_LT] = ACTIONS(1),
    [anon_sym_BSLASH_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(24),
    [sym__token] = STATE(2),
    [sym_label] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_keyword] = STATE(14),
    [sym_builtin_function] = STATE(14),
    [sym_operator] = STATE(2),
    [sym_paren_open] = STATE(2),
    [sym_paren_close] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keyword_token1] = ACTIONS(13),
    [aux_sym_keyword_token2] = ACTIONS(13),
    [aux_sym_keyword_token3] = ACTIONS(13),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(13),
    [aux_sym_keyword_token9] = ACTIONS(13),
    [aux_sym_keyword_token10] = ACTIONS(13),
    [aux_sym_keyword_token11] = ACTIONS(13),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(13),
    [aux_sym_keyword_token15] = ACTIONS(13),
    [aux_sym_keyword_token16] = ACTIONS(13),
    [aux_sym_keyword_token17] = ACTIONS(13),
    [aux_sym_keyword_token18] = ACTIONS(13),
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(13),
    [aux_sym_keyword_token21] = ACTIONS(13),
    [aux_sym_keyword_token22] = ACTIONS(13),
    [aux_sym_keyword_token23] = ACTIONS(13),
    [aux_sym_keyword_token24] = ACTIONS(13),
    [aux_sym_keyword_token25] = ACTIONS(13),
    [aux_sym_keyword_token26] = ACTIONS(13),
    [aux_sym_keyword_token27] = ACTIONS(13),
    [aux_sym_keyword_token28] = ACTIONS(13),
    [aux_sym_keyword_token29] = ACTIONS(13),
    [aux_sym_keyword_token30] = ACTIONS(13),
    [aux_sym_keyword_token31] = ACTIONS(13),
    [aux_sym_keyword_token32] = ACTIONS(13),
    [aux_sym_keyword_token33] = ACTIONS(13),
    [aux_sym_keyword_token34] = ACTIONS(13),
    [aux_sym_keyword_token35] = ACTIONS(13),
    [aux_sym_keyword_token36] = ACTIONS(13),
    [aux_sym_keyword_token37] = ACTIONS(13),
    [aux_sym_keyword_token38] = ACTIONS(13),
    [aux_sym_keyword_token39] = ACTIONS(13),
    [aux_sym_keyword_token40] = ACTIONS(13),
    [aux_sym_keyword_token41] = ACTIONS(13),
    [aux_sym_keyword_token42] = ACTIONS(13),
    [aux_sym_keyword_token43] = ACTIONS(13),
    [aux_sym_keyword_token44] = ACTIONS(13),
    [aux_sym_keyword_token45] = ACTIONS(13),
    [aux_sym_keyword_token46] = ACTIONS(13),
    [aux_sym_keyword_token47] = ACTIONS(13),
    [aux_sym_keyword_token48] = ACTIONS(13),
    [aux_sym_builtin_function_token1] = ACTIONS(15),
    [aux_sym_builtin_function_token2] = ACTIONS(15),
    [aux_sym_builtin_function_token3] = ACTIONS(15),
    [aux_sym_builtin_function_token4] = ACTIONS(15),
    [aux_sym_builtin_function_token5] = ACTIONS(15),
    [aux_sym_builtin_function_token6] = ACTIONS(15),
    [aux_sym_builtin_function_token7] = ACTIONS(15),
    [aux_sym_builtin_function_token8] = ACTIONS(15),
    [aux_sym_builtin_function_token9] = ACTIONS(15),
    [aux_sym_builtin_function_token10] = ACTIONS(15),
    [aux_sym_builtin_function_token11] = ACTIONS(15),
    [aux_sym_builtin_function_token12] = ACTIONS(15),
    [aux_sym_builtin_function_token13] = ACTIONS(15),
    [aux_sym_builtin_function_token14] = ACTIONS(15),
    [aux_sym_builtin_function_token15] = ACTIONS(15),
    [aux_sym_builtin_function_token16] = ACTIONS(15),
    [aux_sym_builtin_function_token17] = ACTIONS(15),
    [aux_sym_builtin_function_token18] = ACTIONS(15),
    [aux_sym_builtin_function_token19] = ACTIONS(15),
    [aux_sym_builtin_function_token20] = ACTIONS(15),
    [aux_sym_builtin_function_token21] = ACTIONS(15),
    [aux_sym_builtin_function_token22] = ACTIONS(15),
    [aux_sym_builtin_function_token23] = ACTIONS(15),
    [aux_sym_builtin_function_token24] = ACTIONS(15),
    [aux_sym_builtin_function_token25] = ACTIONS(15),
    [aux_sym_builtin_function_token26] = ACTIONS(15),
    [aux_sym_builtin_function_token27] = ACTIONS(15),
    [aux_sym_builtin_function_token28] = ACTIONS(15),
    [aux_sym_builtin_function_token29] = ACTIONS(15),
    [aux_sym_builtin_function_token30] = ACTIONS(15),
    [aux_sym_builtin_function_token31] = ACTIONS(15),
    [aux_sym_builtin_function_token32] = ACTIONS(15),
    [aux_sym_builtin_function_token33] = ACTIONS(15),
    [aux_sym_builtin_function_token34] = ACTIONS(15),
    [aux_sym_builtin_function_token35] = ACTIONS(15),
    [aux_sym_builtin_function_token36] = ACTIONS(15),
    [aux_sym_builtin_function_token37] = ACTIONS(15),
    [aux_sym_builtin_function_token38] = ACTIONS(15),
    [aux_sym_builtin_function_token39] = ACTIONS(15),
    [aux_sym_builtin_function_token40] = ACTIONS(15),
    [aux_sym_builtin_function_token41] = ACTIONS(15),
    [aux_sym_builtin_function_token42] = ACTIONS(15),
    [aux_sym_builtin_function_token43] = ACTIONS(15),
    [aux_sym_builtin_function_token44] = ACTIONS(15),
    [aux_sym_builtin_function_token45] = ACTIONS(15),
    [aux_sym_builtin_function_token46] = ACTIONS(15),
    [aux_sym_builtin_function_token47] = ACTIONS(15),
    [aux_sym_builtin_function_token48] = ACTIONS(15),
    [aux_sym_builtin_function_token49] = ACTIONS(15),
    [aux_sym_builtin_function_token50] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_GT_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(11),
    [anon_sym_BSLASH_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_semicolon] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_string_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_identifier] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_label] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_keyword] = STATE(14),
    [sym_builtin_function] = STATE(14),
    [sym_operator] = STATE(3),
    [sym_paren_open] = STATE(3),
    [sym_paren_close] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keyword_token1] = ACTIONS(13),
    [aux_sym_keyword_token2] = ACTIONS(13),
    [aux_sym_keyword_token3] = ACTIONS(13),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(13),
    [aux_sym_keyword_token9] = ACTIONS(13),
    [aux_sym_keyword_token10] = ACTIONS(13),
    [aux_sym_keyword_token11] = ACTIONS(13),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(13),
    [aux_sym_keyword_token15] = ACTIONS(13),
    [aux_sym_keyword_token16] = ACTIONS(13),
    [aux_sym_keyword_token17] = ACTIONS(13),
    [aux_sym_keyword_token18] = ACTIONS(13),
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(13),
    [aux_sym_keyword_token21] = ACTIONS(13),
    [aux_sym_keyword_token22] = ACTIONS(13),
    [aux_sym_keyword_token23] = ACTIONS(13),
    [aux_sym_keyword_token24] = ACTIONS(13),
    [aux_sym_keyword_token25] = ACTIONS(13),
    [aux_sym_keyword_token26] = ACTIONS(13),
    [aux_sym_keyword_token27] = ACTIONS(13),
    [aux_sym_keyword_token28] = ACTIONS(13),
    [aux_sym_keyword_token29] = ACTIONS(13),
    [aux_sym_keyword_token30] = ACTIONS(13),
    [aux_sym_keyword_token31] = ACTIONS(13),
    [aux_sym_keyword_token32] = ACTIONS(13),
    [aux_sym_keyword_token33] = ACTIONS(13),
    [aux_sym_keyword_token34] = ACTIONS(13),
    [aux_sym_keyword_token35] = ACTIONS(13),
    [aux_sym_keyword_token36] = ACTIONS(13),
    [aux_sym_keyword_token37] = ACTIONS(13),
    [aux_sym_keyword_token38] = ACTIONS(13),
    [aux_sym_keyword_token39] = ACTIONS(13),
    [aux_sym_keyword_token40] = ACTIONS(13),
    [aux_sym_keyword_token41] = ACTIONS(13),
    [aux_sym_keyword_token42] = ACTIONS(13),
    [aux_sym_keyword_token43] = ACTIONS(13),
    [aux_sym_keyword_token44] = ACTIONS(13),
    [aux_sym_keyword_token45] = ACTIONS(13),
    [aux_sym_keyword_token46] = ACTIONS(13),
    [aux_sym_keyword_token47] = ACTIONS(13),
    [aux_sym_keyword_token48] = ACTIONS(13),
    [aux_sym_builtin_function_token1] = ACTIONS(15),
    [aux_sym_builtin_function_token2] = ACTIONS(15),
    [aux_sym_builtin_function_token3] = ACTIONS(15),
    [aux_sym_builtin_function_token4] = ACTIONS(15),
    [aux_sym_builtin_function_token5] = ACTIONS(15),
    [aux_sym_builtin_function_token6] = ACTIONS(15),
    [aux_sym_builtin_function_token7] = ACTIONS(15),
    [aux_sym_builtin_function_token8] = ACTIONS(15),
    [aux_sym_builtin_function_token9] = ACTIONS(15),
    [aux_sym_builtin_function_token10] = ACTIONS(15),
    [aux_sym_builtin_function_token11] = ACTIONS(15),
    [aux_sym_builtin_function_token12] = ACTIONS(15),
    [aux_sym_builtin_function_token13] = ACTIONS(15),
    [aux_sym_builtin_function_token14] = ACTIONS(15),
    [aux_sym_builtin_function_token15] = ACTIONS(15),
    [aux_sym_builtin_function_token16] = ACTIONS(15),
    [aux_sym_builtin_function_token17] = ACTIONS(15),
    [aux_sym_builtin_function_token18] = ACTIONS(15),
    [aux_sym_builtin_function_token19] = ACTIONS(15),
    [aux_sym_builtin_function_token20] = ACTIONS(15),
    [aux_sym_builtin_function_token21] = ACTIONS(15),
    [aux_sym_builtin_function_token22] = ACTIONS(15),
    [aux_sym_builtin_function_token23] = ACTIONS(15),
    [aux_sym_builtin_function_token24] = ACTIONS(15),
    [aux_sym_builtin_function_token25] = ACTIONS(15),
    [aux_sym_builtin_function_token26] = ACTIONS(15),
    [aux_sym_builtin_function_token27] = ACTIONS(15),
    [aux_sym_builtin_function_token28] = ACTIONS(15),
    [aux_sym_builtin_function_token29] = ACTIONS(15),
    [aux_sym_builtin_function_token30] = ACTIONS(15),
    [aux_sym_builtin_function_token31] = ACTIONS(15),
    [aux_sym_builtin_function_token32] = ACTIONS(15),
    [aux_sym_builtin_function_token33] = ACTIONS(15),
    [aux_sym_builtin_function_token34] = ACTIONS(15),
    [aux_sym_builtin_function_token35] = ACTIONS(15),
    [aux_sym_builtin_function_token36] = ACTIONS(15),
    [aux_sym_builtin_function_token37] = ACTIONS(15),
    [aux_sym_builtin_function_token38] = ACTIONS(15),
    [aux_sym_builtin_function_token39] = ACTIONS(15),
    [aux_sym_builtin_function_token40] = ACTIONS(15),
    [aux_sym_builtin_function_token41] = ACTIONS(15),
    [aux_sym_builtin_function_token42] = ACTIONS(15),
    [aux_sym_builtin_function_token43] = ACTIONS(15),
    [aux_sym_builtin_function_token44] = ACTIONS(15),
    [aux_sym_builtin_function_token45] = ACTIONS(15),
    [aux_sym_builtin_function_token46] = ACTIONS(15),
    [aux_sym_builtin_function_token47] = ACTIONS(15),
    [aux_sym_builtin_function_token48] = ACTIONS(15),
    [aux_sym_builtin_function_token49] = ACTIONS(15),
    [aux_sym_builtin_function_token50] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_GT_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(11),
    [anon_sym_BSLASH_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_semicolon] = ACTIONS(27),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_string_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_label] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_keyword] = STATE(14),
    [sym_builtin_function] = STATE(14),
    [sym_operator] = STATE(3),
    [sym_paren_open] = STATE(3),
    [sym_paren_close] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(37),
    [aux_sym_keyword_token1] = ACTIONS(40),
    [aux_sym_keyword_token2] = ACTIONS(40),
    [aux_sym_keyword_token3] = ACTIONS(40),
    [aux_sym_keyword_token4] = ACTIONS(40),
    [aux_sym_keyword_token5] = ACTIONS(40),
    [aux_sym_keyword_token6] = ACTIONS(40),
    [aux_sym_keyword_token7] = ACTIONS(40),
    [aux_sym_keyword_token8] = ACTIONS(40),
    [aux_sym_keyword_token9] = ACTIONS(40),
    [aux_sym_keyword_token10] = ACTIONS(40),
    [aux_sym_keyword_token11] = ACTIONS(40),
    [aux_sym_keyword_token12] = ACTIONS(40),
    [aux_sym_keyword_token13] = ACTIONS(40),
    [aux_sym_keyword_token14] = ACTIONS(40),
    [aux_sym_keyword_token15] = ACTIONS(40),
    [aux_sym_keyword_token16] = ACTIONS(40),
    [aux_sym_keyword_token17] = ACTIONS(40),
    [aux_sym_keyword_token18] = ACTIONS(40),
    [aux_sym_keyword_token19] = ACTIONS(40),
    [aux_sym_keyword_token20] = ACTIONS(40),
    [aux_sym_keyword_token21] = ACTIONS(40),
    [aux_sym_keyword_token22] = ACTIONS(40),
    [aux_sym_keyword_token23] = ACTIONS(40),
    [aux_sym_keyword_token24] = ACTIONS(40),
    [aux_sym_keyword_token25] = ACTIONS(40),
    [aux_sym_keyword_token26] = ACTIONS(40),
    [aux_sym_keyword_token27] = ACTIONS(40),
    [aux_sym_keyword_token28] = ACTIONS(40),
    [aux_sym_keyword_token29] = ACTIONS(40),
    [aux_sym_keyword_token30] = ACTIONS(40),
    [aux_sym_keyword_token31] = ACTIONS(40),
    [aux_sym_keyword_token32] = ACTIONS(40),
    [aux_sym_keyword_token33] = ACTIONS(40),
    [aux_sym_keyword_token34] = ACTIONS(40),
    [aux_sym_keyword_token35] = ACTIONS(40),
    [aux_sym_keyword_token36] = ACTIONS(40),
    [aux_sym_keyword_token37] = ACTIONS(40),
    [aux_sym_keyword_token38] = ACTIONS(40),
    [aux_sym_keyword_token39] = ACTIONS(40),
    [aux_sym_keyword_token40] = ACTIONS(40),
    [aux_sym_keyword_token41] = ACTIONS(40),
    [aux_sym_keyword_token42] = ACTIONS(40),
    [aux_sym_keyword_token43] = ACTIONS(40),
    [aux_sym_keyword_token44] = ACTIONS(40),
    [aux_sym_keyword_token45] = ACTIONS(40),
    [aux_sym_keyword_token46] = ACTIONS(40),
    [aux_sym_keyword_token47] = ACTIONS(40),
    [aux_sym_keyword_token48] = ACTIONS(40),
    [aux_sym_builtin_function_token1] = ACTIONS(43),
    [aux_sym_builtin_function_token2] = ACTIONS(43),
    [aux_sym_builtin_function_token3] = ACTIONS(43),
    [aux_sym_builtin_function_token4] = ACTIONS(43),
    [aux_sym_builtin_function_token5] = ACTIONS(43),
    [aux_sym_builtin_function_token6] = ACTIONS(43),
    [aux_sym_builtin_function_token7] = ACTIONS(43),
    [aux_sym_builtin_function_token8] = ACTIONS(43),
    [aux_sym_builtin_function_token9] = ACTIONS(43),
    [aux_sym_builtin_function_token10] = ACTIONS(43),
    [aux_sym_builtin_function_token11] = ACTIONS(43),
    [aux_sym_builtin_function_token12] = ACTIONS(43),
    [aux_sym_builtin_function_token13] = ACTIONS(43),
    [aux_sym_builtin_function_token14] = ACTIONS(43),
    [aux_sym_builtin_function_token15] = ACTIONS(43),
    [aux_sym_builtin_function_token16] = ACTIONS(43),
    [aux_sym_builtin_function_token17] = ACTIONS(43),
    [aux_sym_builtin_function_token18] = ACTIONS(43),
    [aux_sym_builtin_function_token19] = ACTIONS(43),
    [aux_sym_builtin_function_token20] = ACTIONS(43),
    [aux_sym_builtin_function_token21] = ACTIONS(43),
    [aux_sym_builtin_function_token22] = ACTIONS(43),
    [aux_sym_builtin_function_token23] = ACTIONS(43),
    [aux_sym_builtin_function_token24] = ACTIONS(43),
    [aux_sym_builtin_function_token25] = ACTIONS(43),
    [aux_sym_builtin_function_token26] = ACTIONS(43),
    [aux_sym_builtin_function_token27] = ACTIONS(43),
    [aux_sym_builtin_function_token28] = ACTIONS(43),
    [aux_sym_builtin_function_token29] = ACTIONS(43),
    [aux_sym_builtin_function_token30] = ACTIONS(43),
    [aux_sym_builtin_function_token31] = ACTIONS(43),
    [aux_sym_builtin_function_token32] = ACTIONS(43),
    [aux_sym_builtin_function_token33] = ACTIONS(43),
    [aux_sym_builtin_function_token34] = ACTIONS(43),
    [aux_sym_builtin_function_token35] = ACTIONS(43),
    [aux_sym_builtin_function_token36] = ACTIONS(43),
    [aux_sym_builtin_function_token37] = ACTIONS(43),
    [aux_sym_builtin_function_token38] = ACTIONS(43),
    [aux_sym_builtin_function_token39] = ACTIONS(43),
    [aux_sym_builtin_function_token40] = ACTIONS(43),
    [aux_sym_builtin_function_token41] = ACTIONS(43),
    [aux_sym_builtin_function_token42] = ACTIONS(43),
    [aux_sym_builtin_function_token43] = ACTIONS(43),
    [aux_sym_builtin_function_token44] = ACTIONS(43),
    [aux_sym_builtin_function_token45] = ACTIONS(43),
    [aux_sym_builtin_function_token46] = ACTIONS(43),
    [aux_sym_builtin_function_token47] = ACTIONS(43),
    [aux_sym_builtin_function_token48] = ACTIONS(43),
    [aux_sym_builtin_function_token49] = ACTIONS(43),
    [aux_sym_builtin_function_token50] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(46),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BSLASH_EQ] = ACTIONS(46),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(46),
    [anon_sym_GT] = ACTIONS(46),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(46),
    [anon_sym_GT_GT] = ACTIONS(46),
    [anon_sym_LT_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT_EQ] = ACTIONS(37),
    [anon_sym_BSLASH_LT] = ACTIONS(37),
    [anon_sym_BSLASH_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(46),
    [anon_sym_SLASH] = ACTIONS(46),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(46),
    [anon_sym_BSLASH] = ACTIONS(46),
    [sym_semicolon] = ACTIONS(49),
    [aux_sym_string_token1] = ACTIONS(52),
    [aux_sym_string_token2] = ACTIONS(52),
    [sym_number] = ACTIONS(49),
    [sym_identifier] = ACTIONS(55),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_function_call] = STATE(6),
    [sym__argument_list] = STATE(26),
    [sym__argument] = STATE(21),
    [sym_keyword] = STATE(25),
    [sym_builtin_function] = STATE(25),
    [sym_operator] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym__argument_repeat1] = STATE(6),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keyword_token1] = ACTIONS(13),
    [aux_sym_keyword_token2] = ACTIONS(13),
    [aux_sym_keyword_token3] = ACTIONS(13),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(13),
    [aux_sym_keyword_token9] = ACTIONS(13),
    [aux_sym_keyword_token10] = ACTIONS(13),
    [aux_sym_keyword_token11] = ACTIONS(13),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(13),
    [aux_sym_keyword_token15] = ACTIONS(13),
    [aux_sym_keyword_token16] = ACTIONS(13),
    [aux_sym_keyword_token17] = ACTIONS(13),
    [aux_sym_keyword_token18] = ACTIONS(13),
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(13),
    [aux_sym_keyword_token21] = ACTIONS(13),
    [aux_sym_keyword_token22] = ACTIONS(13),
    [aux_sym_keyword_token23] = ACTIONS(13),
    [aux_sym_keyword_token24] = ACTIONS(13),
    [aux_sym_keyword_token25] = ACTIONS(13),
    [aux_sym_keyword_token26] = ACTIONS(13),
    [aux_sym_keyword_token27] = ACTIONS(13),
    [aux_sym_keyword_token28] = ACTIONS(13),
    [aux_sym_keyword_token29] = ACTIONS(13),
    [aux_sym_keyword_token30] = ACTIONS(13),
    [aux_sym_keyword_token31] = ACTIONS(13),
    [aux_sym_keyword_token32] = ACTIONS(13),
    [aux_sym_keyword_token33] = ACTIONS(13),
    [aux_sym_keyword_token34] = ACTIONS(13),
    [aux_sym_keyword_token35] = ACTIONS(13),
    [aux_sym_keyword_token36] = ACTIONS(13),
    [aux_sym_keyword_token37] = ACTIONS(13),
    [aux_sym_keyword_token38] = ACTIONS(13),
    [aux_sym_keyword_token39] = ACTIONS(13),
    [aux_sym_keyword_token40] = ACTIONS(13),
    [aux_sym_keyword_token41] = ACTIONS(13),
    [aux_sym_keyword_token42] = ACTIONS(13),
    [aux_sym_keyword_token43] = ACTIONS(13),
    [aux_sym_keyword_token44] = ACTIONS(13),
    [aux_sym_keyword_token45] = ACTIONS(13),
    [aux_sym_keyword_token46] = ACTIONS(13),
    [aux_sym_keyword_token47] = ACTIONS(13),
    [aux_sym_keyword_token48] = ACTIONS(13),
    [aux_sym_builtin_function_token1] = ACTIONS(15),
    [aux_sym_builtin_function_token2] = ACTIONS(15),
    [aux_sym_builtin_function_token3] = ACTIONS(15),
    [aux_sym_builtin_function_token4] = ACTIONS(15),
    [aux_sym_builtin_function_token5] = ACTIONS(15),
    [aux_sym_builtin_function_token6] = ACTIONS(15),
    [aux_sym_builtin_function_token7] = ACTIONS(15),
    [aux_sym_builtin_function_token8] = ACTIONS(15),
    [aux_sym_builtin_function_token9] = ACTIONS(15),
    [aux_sym_builtin_function_token10] = ACTIONS(15),
    [aux_sym_builtin_function_token11] = ACTIONS(15),
    [aux_sym_builtin_function_token12] = ACTIONS(15),
    [aux_sym_builtin_function_token13] = ACTIONS(15),
    [aux_sym_builtin_function_token14] = ACTIONS(15),
    [aux_sym_builtin_function_token15] = ACTIONS(15),
    [aux_sym_builtin_function_token16] = ACTIONS(15),
    [aux_sym_builtin_function_token17] = ACTIONS(15),
    [aux_sym_builtin_function_token18] = ACTIONS(15),
    [aux_sym_builtin_function_token19] = ACTIONS(15),
    [aux_sym_builtin_function_token20] = ACTIONS(15),
    [aux_sym_builtin_function_token21] = ACTIONS(15),
    [aux_sym_builtin_function_token22] = ACTIONS(15),
    [aux_sym_builtin_function_token23] = ACTIONS(15),
    [aux_sym_builtin_function_token24] = ACTIONS(15),
    [aux_sym_builtin_function_token25] = ACTIONS(15),
    [aux_sym_builtin_function_token26] = ACTIONS(15),
    [aux_sym_builtin_function_token27] = ACTIONS(15),
    [aux_sym_builtin_function_token28] = ACTIONS(15),
    [aux_sym_builtin_function_token29] = ACTIONS(15),
    [aux_sym_builtin_function_token30] = ACTIONS(15),
    [aux_sym_builtin_function_token31] = ACTIONS(15),
    [aux_sym_builtin_function_token32] = ACTIONS(15),
    [aux_sym_builtin_function_token33] = ACTIONS(15),
    [aux_sym_builtin_function_token34] = ACTIONS(15),
    [aux_sym_builtin_function_token35] = ACTIONS(15),
    [aux_sym_builtin_function_token36] = ACTIONS(15),
    [aux_sym_builtin_function_token37] = ACTIONS(15),
    [aux_sym_builtin_function_token38] = ACTIONS(15),
    [aux_sym_builtin_function_token39] = ACTIONS(15),
    [aux_sym_builtin_function_token40] = ACTIONS(15),
    [aux_sym_builtin_function_token41] = ACTIONS(15),
    [aux_sym_builtin_function_token42] = ACTIONS(15),
    [aux_sym_builtin_function_token43] = ACTIONS(15),
    [aux_sym_builtin_function_token44] = ACTIONS(15),
    [aux_sym_builtin_function_token45] = ACTIONS(15),
    [aux_sym_builtin_function_token46] = ACTIONS(15),
    [aux_sym_builtin_function_token47] = ACTIONS(15),
    [aux_sym_builtin_function_token48] = ACTIONS(15),
    [aux_sym_builtin_function_token49] = ACTIONS(15),
    [aux_sym_builtin_function_token50] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_GT_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(11),
    [anon_sym_BSLASH_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_string_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_function_call] = STATE(6),
    [sym__argument] = STATE(23),
    [sym_keyword] = STATE(25),
    [sym_builtin_function] = STATE(25),
    [sym_operator] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym__argument_repeat1] = STATE(6),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keyword_token1] = ACTIONS(13),
    [aux_sym_keyword_token2] = ACTIONS(13),
    [aux_sym_keyword_token3] = ACTIONS(13),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(13),
    [aux_sym_keyword_token9] = ACTIONS(13),
    [aux_sym_keyword_token10] = ACTIONS(13),
    [aux_sym_keyword_token11] = ACTIONS(13),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(13),
    [aux_sym_keyword_token15] = ACTIONS(13),
    [aux_sym_keyword_token16] = ACTIONS(13),
    [aux_sym_keyword_token17] = ACTIONS(13),
    [aux_sym_keyword_token18] = ACTIONS(13),
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(13),
    [aux_sym_keyword_token21] = ACTIONS(13),
    [aux_sym_keyword_token22] = ACTIONS(13),
    [aux_sym_keyword_token23] = ACTIONS(13),
    [aux_sym_keyword_token24] = ACTIONS(13),
    [aux_sym_keyword_token25] = ACTIONS(13),
    [aux_sym_keyword_token26] = ACTIONS(13),
    [aux_sym_keyword_token27] = ACTIONS(13),
    [aux_sym_keyword_token28] = ACTIONS(13),
    [aux_sym_keyword_token29] = ACTIONS(13),
    [aux_sym_keyword_token30] = ACTIONS(13),
    [aux_sym_keyword_token31] = ACTIONS(13),
    [aux_sym_keyword_token32] = ACTIONS(13),
    [aux_sym_keyword_token33] = ACTIONS(13),
    [aux_sym_keyword_token34] = ACTIONS(13),
    [aux_sym_keyword_token35] = ACTIONS(13),
    [aux_sym_keyword_token36] = ACTIONS(13),
    [aux_sym_keyword_token37] = ACTIONS(13),
    [aux_sym_keyword_token38] = ACTIONS(13),
    [aux_sym_keyword_token39] = ACTIONS(13),
    [aux_sym_keyword_token40] = ACTIONS(13),
    [aux_sym_keyword_token41] = ACTIONS(13),
    [aux_sym_keyword_token42] = ACTIONS(13),
    [aux_sym_keyword_token43] = ACTIONS(13),
    [aux_sym_keyword_token44] = ACTIONS(13),
    [aux_sym_keyword_token45] = ACTIONS(13),
    [aux_sym_keyword_token46] = ACTIONS(13),
    [aux_sym_keyword_token47] = ACTIONS(13),
    [aux_sym_keyword_token48] = ACTIONS(13),
    [aux_sym_builtin_function_token1] = ACTIONS(15),
    [aux_sym_builtin_function_token2] = ACTIONS(15),
    [aux_sym_builtin_function_token3] = ACTIONS(15),
    [aux_sym_builtin_function_token4] = ACTIONS(15),
    [aux_sym_builtin_function_token5] = ACTIONS(15),
    [aux_sym_builtin_function_token6] = ACTIONS(15),
    [aux_sym_builtin_function_token7] = ACTIONS(15),
    [aux_sym_builtin_function_token8] = ACTIONS(15),
    [aux_sym_builtin_function_token9] = ACTIONS(15),
    [aux_sym_builtin_function_token10] = ACTIONS(15),
    [aux_sym_builtin_function_token11] = ACTIONS(15),
    [aux_sym_builtin_function_token12] = ACTIONS(15),
    [aux_sym_builtin_function_token13] = ACTIONS(15),
    [aux_sym_builtin_function_token14] = ACTIONS(15),
    [aux_sym_builtin_function_token15] = ACTIONS(15),
    [aux_sym_builtin_function_token16] = ACTIONS(15),
    [aux_sym_builtin_function_token17] = ACTIONS(15),
    [aux_sym_builtin_function_token18] = ACTIONS(15),
    [aux_sym_builtin_function_token19] = ACTIONS(15),
    [aux_sym_builtin_function_token20] = ACTIONS(15),
    [aux_sym_builtin_function_token21] = ACTIONS(15),
    [aux_sym_builtin_function_token22] = ACTIONS(15),
    [aux_sym_builtin_function_token23] = ACTIONS(15),
    [aux_sym_builtin_function_token24] = ACTIONS(15),
    [aux_sym_builtin_function_token25] = ACTIONS(15),
    [aux_sym_builtin_function_token26] = ACTIONS(15),
    [aux_sym_builtin_function_token27] = ACTIONS(15),
    [aux_sym_builtin_function_token28] = ACTIONS(15),
    [aux_sym_builtin_function_token29] = ACTIONS(15),
    [aux_sym_builtin_function_token30] = ACTIONS(15),
    [aux_sym_builtin_function_token31] = ACTIONS(15),
    [aux_sym_builtin_function_token32] = ACTIONS(15),
    [aux_sym_builtin_function_token33] = ACTIONS(15),
    [aux_sym_builtin_function_token34] = ACTIONS(15),
    [aux_sym_builtin_function_token35] = ACTIONS(15),
    [aux_sym_builtin_function_token36] = ACTIONS(15),
    [aux_sym_builtin_function_token37] = ACTIONS(15),
    [aux_sym_builtin_function_token38] = ACTIONS(15),
    [aux_sym_builtin_function_token39] = ACTIONS(15),
    [aux_sym_builtin_function_token40] = ACTIONS(15),
    [aux_sym_builtin_function_token41] = ACTIONS(15),
    [aux_sym_builtin_function_token42] = ACTIONS(15),
    [aux_sym_builtin_function_token43] = ACTIONS(15),
    [aux_sym_builtin_function_token44] = ACTIONS(15),
    [aux_sym_builtin_function_token45] = ACTIONS(15),
    [aux_sym_builtin_function_token46] = ACTIONS(15),
    [aux_sym_builtin_function_token47] = ACTIONS(15),
    [aux_sym_builtin_function_token48] = ACTIONS(15),
    [aux_sym_builtin_function_token49] = ACTIONS(15),
    [aux_sym_builtin_function_token50] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_GT_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(11),
    [anon_sym_BSLASH_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_string_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_function_call] = STATE(7),
    [sym_keyword] = STATE(25),
    [sym_builtin_function] = STATE(25),
    [sym_operator] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym__argument_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keyword_token1] = ACTIONS(13),
    [aux_sym_keyword_token2] = ACTIONS(13),
    [aux_sym_keyword_token3] = ACTIONS(13),
    [aux_sym_keyword_token4] = ACTIONS(13),
    [aux_sym_keyword_token5] = ACTIONS(13),
    [aux_sym_keyword_token6] = ACTIONS(13),
    [aux_sym_keyword_token7] = ACTIONS(13),
    [aux_sym_keyword_token8] = ACTIONS(13),
    [aux_sym_keyword_token9] = ACTIONS(13),
    [aux_sym_keyword_token10] = ACTIONS(13),
    [aux_sym_keyword_token11] = ACTIONS(13),
    [aux_sym_keyword_token12] = ACTIONS(13),
    [aux_sym_keyword_token13] = ACTIONS(13),
    [aux_sym_keyword_token14] = ACTIONS(13),
    [aux_sym_keyword_token15] = ACTIONS(13),
    [aux_sym_keyword_token16] = ACTIONS(13),
    [aux_sym_keyword_token17] = ACTIONS(13),
    [aux_sym_keyword_token18] = ACTIONS(13),
    [aux_sym_keyword_token19] = ACTIONS(13),
    [aux_sym_keyword_token20] = ACTIONS(13),
    [aux_sym_keyword_token21] = ACTIONS(13),
    [aux_sym_keyword_token22] = ACTIONS(13),
    [aux_sym_keyword_token23] = ACTIONS(13),
    [aux_sym_keyword_token24] = ACTIONS(13),
    [aux_sym_keyword_token25] = ACTIONS(13),
    [aux_sym_keyword_token26] = ACTIONS(13),
    [aux_sym_keyword_token27] = ACTIONS(13),
    [aux_sym_keyword_token28] = ACTIONS(13),
    [aux_sym_keyword_token29] = ACTIONS(13),
    [aux_sym_keyword_token30] = ACTIONS(13),
    [aux_sym_keyword_token31] = ACTIONS(13),
    [aux_sym_keyword_token32] = ACTIONS(13),
    [aux_sym_keyword_token33] = ACTIONS(13),
    [aux_sym_keyword_token34] = ACTIONS(13),
    [aux_sym_keyword_token35] = ACTIONS(13),
    [aux_sym_keyword_token36] = ACTIONS(13),
    [aux_sym_keyword_token37] = ACTIONS(13),
    [aux_sym_keyword_token38] = ACTIONS(13),
    [aux_sym_keyword_token39] = ACTIONS(13),
    [aux_sym_keyword_token40] = ACTIONS(13),
    [aux_sym_keyword_token41] = ACTIONS(13),
    [aux_sym_keyword_token42] = ACTIONS(13),
    [aux_sym_keyword_token43] = ACTIONS(13),
    [aux_sym_keyword_token44] = ACTIONS(13),
    [aux_sym_keyword_token45] = ACTIONS(13),
    [aux_sym_keyword_token46] = ACTIONS(13),
    [aux_sym_keyword_token47] = ACTIONS(13),
    [aux_sym_keyword_token48] = ACTIONS(13),
    [aux_sym_builtin_function_token1] = ACTIONS(15),
    [aux_sym_builtin_function_token2] = ACTIONS(15),
    [aux_sym_builtin_function_token3] = ACTIONS(15),
    [aux_sym_builtin_function_token4] = ACTIONS(15),
    [aux_sym_builtin_function_token5] = ACTIONS(15),
    [aux_sym_builtin_function_token6] = ACTIONS(15),
    [aux_sym_builtin_function_token7] = ACTIONS(15),
    [aux_sym_builtin_function_token8] = ACTIONS(15),
    [aux_sym_builtin_function_token9] = ACTIONS(15),
    [aux_sym_builtin_function_token10] = ACTIONS(15),
    [aux_sym_builtin_function_token11] = ACTIONS(15),
    [aux_sym_builtin_function_token12] = ACTIONS(15),
    [aux_sym_builtin_function_token13] = ACTIONS(15),
    [aux_sym_builtin_function_token14] = ACTIONS(15),
    [aux_sym_builtin_function_token15] = ACTIONS(15),
    [aux_sym_builtin_function_token16] = ACTIONS(15),
    [aux_sym_builtin_function_token17] = ACTIONS(15),
    [aux_sym_builtin_function_token18] = ACTIONS(15),
    [aux_sym_builtin_function_token19] = ACTIONS(15),
    [aux_sym_builtin_function_token20] = ACTIONS(15),
    [aux_sym_builtin_function_token21] = ACTIONS(15),
    [aux_sym_builtin_function_token22] = ACTIONS(15),
    [aux_sym_builtin_function_token23] = ACTIONS(15),
    [aux_sym_builtin_function_token24] = ACTIONS(15),
    [aux_sym_builtin_function_token25] = ACTIONS(15),
    [aux_sym_builtin_function_token26] = ACTIONS(15),
    [aux_sym_builtin_function_token27] = ACTIONS(15),
    [aux_sym_builtin_function_token28] = ACTIONS(15),
    [aux_sym_builtin_function_token29] = ACTIONS(15),
    [aux_sym_builtin_function_token30] = ACTIONS(15),
    [aux_sym_builtin_function_token31] = ACTIONS(15),
    [aux_sym_builtin_function_token32] = ACTIONS(15),
    [aux_sym_builtin_function_token33] = ACTIONS(15),
    [aux_sym_builtin_function_token34] = ACTIONS(15),
    [aux_sym_builtin_function_token35] = ACTIONS(15),
    [aux_sym_builtin_function_token36] = ACTIONS(15),
    [aux_sym_builtin_function_token37] = ACTIONS(15),
    [aux_sym_builtin_function_token38] = ACTIONS(15),
    [aux_sym_builtin_function_token39] = ACTIONS(15),
    [aux_sym_builtin_function_token40] = ACTIONS(15),
    [aux_sym_builtin_function_token41] = ACTIONS(15),
    [aux_sym_builtin_function_token42] = ACTIONS(15),
    [aux_sym_builtin_function_token43] = ACTIONS(15),
    [aux_sym_builtin_function_token44] = ACTIONS(15),
    [aux_sym_builtin_function_token45] = ACTIONS(15),
    [aux_sym_builtin_function_token46] = ACTIONS(15),
    [aux_sym_builtin_function_token47] = ACTIONS(15),
    [aux_sym_builtin_function_token48] = ACTIONS(15),
    [aux_sym_builtin_function_token49] = ACTIONS(15),
    [aux_sym_builtin_function_token50] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_GT_EQ] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(11),
    [anon_sym_BSLASH_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_string_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(66),
    [sym_identifier] = ACTIONS(62),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_function_call] = STATE(7),
    [sym_keyword] = STATE(25),
    [sym_builtin_function] = STATE(25),
    [sym_operator] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym__argument_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(70),
    [aux_sym_keyword_token1] = ACTIONS(73),
    [aux_sym_keyword_token2] = ACTIONS(73),
    [aux_sym_keyword_token3] = ACTIONS(73),
    [aux_sym_keyword_token4] = ACTIONS(73),
    [aux_sym_keyword_token5] = ACTIONS(73),
    [aux_sym_keyword_token6] = ACTIONS(73),
    [aux_sym_keyword_token7] = ACTIONS(73),
    [aux_sym_keyword_token8] = ACTIONS(73),
    [aux_sym_keyword_token9] = ACTIONS(73),
    [aux_sym_keyword_token10] = ACTIONS(73),
    [aux_sym_keyword_token11] = ACTIONS(73),
    [aux_sym_keyword_token12] = ACTIONS(73),
    [aux_sym_keyword_token13] = ACTIONS(73),
    [aux_sym_keyword_token14] = ACTIONS(73),
    [aux_sym_keyword_token15] = ACTIONS(73),
    [aux_sym_keyword_token16] = ACTIONS(73),
    [aux_sym_keyword_token17] = ACTIONS(73),
    [aux_sym_keyword_token18] = ACTIONS(73),
    [aux_sym_keyword_token19] = ACTIONS(73),
    [aux_sym_keyword_token20] = ACTIONS(73),
    [aux_sym_keyword_token21] = ACTIONS(73),
    [aux_sym_keyword_token22] = ACTIONS(73),
    [aux_sym_keyword_token23] = ACTIONS(73),
    [aux_sym_keyword_token24] = ACTIONS(73),
    [aux_sym_keyword_token25] = ACTIONS(73),
    [aux_sym_keyword_token26] = ACTIONS(73),
    [aux_sym_keyword_token27] = ACTIONS(73),
    [aux_sym_keyword_token28] = ACTIONS(73),
    [aux_sym_keyword_token29] = ACTIONS(73),
    [aux_sym_keyword_token30] = ACTIONS(73),
    [aux_sym_keyword_token31] = ACTIONS(73),
    [aux_sym_keyword_token32] = ACTIONS(73),
    [aux_sym_keyword_token33] = ACTIONS(73),
    [aux_sym_keyword_token34] = ACTIONS(73),
    [aux_sym_keyword_token35] = ACTIONS(73),
    [aux_sym_keyword_token36] = ACTIONS(73),
    [aux_sym_keyword_token37] = ACTIONS(73),
    [aux_sym_keyword_token38] = ACTIONS(73),
    [aux_sym_keyword_token39] = ACTIONS(73),
    [aux_sym_keyword_token40] = ACTIONS(73),
    [aux_sym_keyword_token41] = ACTIONS(73),
    [aux_sym_keyword_token42] = ACTIONS(73),
    [aux_sym_keyword_token43] = ACTIONS(73),
    [aux_sym_keyword_token44] = ACTIONS(73),
    [aux_sym_keyword_token45] = ACTIONS(73),
    [aux_sym_keyword_token46] = ACTIONS(73),
    [aux_sym_keyword_token47] = ACTIONS(73),
    [aux_sym_keyword_token48] = ACTIONS(73),
    [aux_sym_builtin_function_token1] = ACTIONS(76),
    [aux_sym_builtin_function_token2] = ACTIONS(76),
    [aux_sym_builtin_function_token3] = ACTIONS(76),
    [aux_sym_builtin_function_token4] = ACTIONS(76),
    [aux_sym_builtin_function_token5] = ACTIONS(76),
    [aux_sym_builtin_function_token6] = ACTIONS(76),
    [aux_sym_builtin_function_token7] = ACTIONS(76),
    [aux_sym_builtin_function_token8] = ACTIONS(76),
    [aux_sym_builtin_function_token9] = ACTIONS(76),
    [aux_sym_builtin_function_token10] = ACTIONS(76),
    [aux_sym_builtin_function_token11] = ACTIONS(76),
    [aux_sym_builtin_function_token12] = ACTIONS(76),
    [aux_sym_builtin_function_token13] = ACTIONS(76),
    [aux_sym_builtin_function_token14] = ACTIONS(76),
    [aux_sym_builtin_function_token15] = ACTIONS(76),
    [aux_sym_builtin_function_token16] = ACTIONS(76),
    [aux_sym_builtin_function_token17] = ACTIONS(76),
    [aux_sym_builtin_function_token18] = ACTIONS(76),
    [aux_sym_builtin_function_token19] = ACTIONS(76),
    [aux_sym_builtin_function_token20] = ACTIONS(76),
    [aux_sym_builtin_function_token21] = ACTIONS(76),
    [aux_sym_builtin_function_token22] = ACTIONS(76),
    [aux_sym_builtin_function_token23] = ACTIONS(76),
    [aux_sym_builtin_function_token24] = ACTIONS(76),
    [aux_sym_builtin_function_token25] = ACTIONS(76),
    [aux_sym_builtin_function_token26] = ACTIONS(76),
    [aux_sym_builtin_function_token27] = ACTIONS(76),
    [aux_sym_builtin_function_token28] = ACTIONS(76),
    [aux_sym_builtin_function_token29] = ACTIONS(76),
    [aux_sym_builtin_function_token30] = ACTIONS(76),
    [aux_sym_builtin_function_token31] = ACTIONS(76),
    [aux_sym_builtin_function_token32] = ACTIONS(76),
    [aux_sym_builtin_function_token33] = ACTIONS(76),
    [aux_sym_builtin_function_token34] = ACTIONS(76),
    [aux_sym_builtin_function_token35] = ACTIONS(76),
    [aux_sym_builtin_function_token36] = ACTIONS(76),
    [aux_sym_builtin_function_token37] = ACTIONS(76),
    [aux_sym_builtin_function_token38] = ACTIONS(76),
    [aux_sym_builtin_function_token39] = ACTIONS(76),
    [aux_sym_builtin_function_token40] = ACTIONS(76),
    [aux_sym_builtin_function_token41] = ACTIONS(76),
    [aux_sym_builtin_function_token42] = ACTIONS(76),
    [aux_sym_builtin_function_token43] = ACTIONS(76),
    [aux_sym_builtin_function_token44] = ACTIONS(76),
    [aux_sym_builtin_function_token45] = ACTIONS(76),
    [aux_sym_builtin_function_token46] = ACTIONS(76),
    [aux_sym_builtin_function_token47] = ACTIONS(76),
    [aux_sym_builtin_function_token48] = ACTIONS(76),
    [aux_sym_builtin_function_token49] = ACTIONS(76),
    [aux_sym_builtin_function_token50] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(70),
    [anon_sym_BSLASH_EQ] = ACTIONS(79),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(70),
    [anon_sym_GT_EQ] = ACTIONS(70),
    [anon_sym_LT_GT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_LT_LT_EQ] = ACTIONS(70),
    [anon_sym_GT_GT_EQ] = ACTIONS(70),
    [anon_sym_BSLASH_LT] = ACTIONS(70),
    [anon_sym_BSLASH_GT] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_SLASH_SLASH] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(79),
    [aux_sym_string_token1] = ACTIONS(82),
    [aux_sym_string_token2] = ACTIONS(82),
    [sym_number] = ACTIONS(85),
    [sym_identifier] = ACTIONS(88),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [aux_sym_keyword_token1] = ACTIONS(97),
    [aux_sym_keyword_token2] = ACTIONS(97),
    [aux_sym_keyword_token3] = ACTIONS(97),
    [aux_sym_keyword_token4] = ACTIONS(97),
    [aux_sym_keyword_token5] = ACTIONS(97),
    [aux_sym_keyword_token6] = ACTIONS(97),
    [aux_sym_keyword_token7] = ACTIONS(97),
    [aux_sym_keyword_token8] = ACTIONS(97),
    [aux_sym_keyword_token9] = ACTIONS(97),
    [aux_sym_keyword_token10] = ACTIONS(97),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(97),
    [aux_sym_keyword_token13] = ACTIONS(97),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(97),
    [aux_sym_keyword_token16] = ACTIONS(97),
    [aux_sym_keyword_token17] = ACTIONS(97),
    [aux_sym_keyword_token18] = ACTIONS(97),
    [aux_sym_keyword_token19] = ACTIONS(97),
    [aux_sym_keyword_token20] = ACTIONS(97),
    [aux_sym_keyword_token21] = ACTIONS(97),
    [aux_sym_keyword_token22] = ACTIONS(97),
    [aux_sym_keyword_token23] = ACTIONS(97),
    [aux_sym_keyword_token24] = ACTIONS(97),
    [aux_sym_keyword_token25] = ACTIONS(97),
    [aux_sym_keyword_token26] = ACTIONS(97),
    [aux_sym_keyword_token27] = ACTIONS(97),
    [aux_sym_keyword_token28] = ACTIONS(97),
    [aux_sym_keyword_token29] = ACTIONS(97),
    [aux_sym_keyword_token30] = ACTIONS(97),
    [aux_sym_keyword_token31] = ACTIONS(97),
    [aux_sym_keyword_token32] = ACTIONS(97),
    [aux_sym_keyword_token33] = ACTIONS(97),
    [aux_sym_keyword_token34] = ACTIONS(97),
    [aux_sym_keyword_token35] = ACTIONS(97),
    [aux_sym_keyword_token36] = ACTIONS(97),
    [aux_sym_keyword_token37] = ACTIONS(97),
    [aux_sym_keyword_token38] = ACTIONS(97),
    [aux_sym_keyword_token39] = ACTIONS(97),
    [aux_sym_keyword_token40] = ACTIONS(97),
    [aux_sym_keyword_token41] = ACTIONS(97),
    [aux_sym_keyword_token42] = ACTIONS(97),
    [aux_sym_keyword_token43] = ACTIONS(97),
    [aux_sym_keyword_token44] = ACTIONS(97),
    [aux_sym_keyword_token45] = ACTIONS(97),
    [aux_sym_keyword_token46] = ACTIONS(97),
    [aux_sym_keyword_token47] = ACTIONS(97),
    [aux_sym_keyword_token48] = ACTIONS(97),
    [aux_sym_builtin_function_token1] = ACTIONS(97),
    [aux_sym_builtin_function_token2] = ACTIONS(97),
    [aux_sym_builtin_function_token3] = ACTIONS(97),
    [aux_sym_builtin_function_token4] = ACTIONS(97),
    [aux_sym_builtin_function_token5] = ACTIONS(97),
    [aux_sym_builtin_function_token6] = ACTIONS(97),
    [aux_sym_builtin_function_token7] = ACTIONS(97),
    [aux_sym_builtin_function_token8] = ACTIONS(97),
    [aux_sym_builtin_function_token9] = ACTIONS(97),
    [aux_sym_builtin_function_token10] = ACTIONS(97),
    [aux_sym_builtin_function_token11] = ACTIONS(97),
    [aux_sym_builtin_function_token12] = ACTIONS(97),
    [aux_sym_builtin_function_token13] = ACTIONS(97),
    [aux_sym_builtin_function_token14] = ACTIONS(97),
    [aux_sym_builtin_function_token15] = ACTIONS(97),
    [aux_sym_builtin_function_token16] = ACTIONS(97),
    [aux_sym_builtin_function_token17] = ACTIONS(97),
    [aux_sym_builtin_function_token18] = ACTIONS(97),
    [aux_sym_builtin_function_token19] = ACTIONS(97),
    [aux_sym_builtin_function_token20] = ACTIONS(97),
    [aux_sym_builtin_function_token21] = ACTIONS(97),
    [aux_sym_builtin_function_token22] = ACTIONS(97),
    [aux_sym_builtin_function_token23] = ACTIONS(97),
    [aux_sym_builtin_function_token24] = ACTIONS(97),
    [aux_sym_builtin_function_token25] = ACTIONS(97),
    [aux_sym_builtin_function_token26] = ACTIONS(97),
    [aux_sym_builtin_function_token27] = ACTIONS(97),
    [aux_sym_builtin_function_token28] = ACTIONS(97),
    [aux_sym_builtin_function_token29] = ACTIONS(97),
    [aux_sym_builtin_function_token30] = ACTIONS(97),
    [aux_sym_builtin_function_token31] = ACTIONS(97),
    [aux_sym_builtin_function_token32] = ACTIONS(97),
    [aux_sym_builtin_function_token33] = ACTIONS(97),
    [aux_sym_builtin_function_token34] = ACTIONS(97),
    [aux_sym_builtin_function_token35] = ACTIONS(97),
    [aux_sym_builtin_function_token36] = ACTIONS(97),
    [aux_sym_builtin_function_token37] = ACTIONS(97),
    [aux_sym_builtin_function_token38] = ACTIONS(97),
    [aux_sym_builtin_function_token39] = ACTIONS(97),
    [aux_sym_builtin_function_token40] = ACTIONS(97),
    [aux_sym_builtin_function_token41] = ACTIONS(97),
    [aux_sym_builtin_function_token42] = ACTIONS(97),
    [aux_sym_builtin_function_token43] = ACTIONS(97),
    [aux_sym_builtin_function_token44] = ACTIONS(97),
    [aux_sym_builtin_function_token45] = ACTIONS(97),
    [aux_sym_builtin_function_token46] = ACTIONS(97),
    [aux_sym_builtin_function_token47] = ACTIONS(97),
    [aux_sym_builtin_function_token48] = ACTIONS(97),
    [aux_sym_builtin_function_token49] = ACTIONS(97),
    [aux_sym_builtin_function_token50] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BSLASH_EQ] = ACTIONS(97),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_LT_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_GT_EQ] = ACTIONS(91),
    [anon_sym_BSLASH_LT] = ACTIONS(91),
    [anon_sym_BSLASH_GT] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_STAR_STAR] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(97),
    [sym_semicolon] = ACTIONS(91),
    [aux_sym_string_token1] = ACTIONS(91),
    [aux_sym_string_token2] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [sym_identifier] = ACTIONS(97),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [aux_sym_keyword_token1] = ACTIONS(101),
    [aux_sym_keyword_token2] = ACTIONS(101),
    [aux_sym_keyword_token3] = ACTIONS(101),
    [aux_sym_keyword_token4] = ACTIONS(101),
    [aux_sym_keyword_token5] = ACTIONS(101),
    [aux_sym_keyword_token6] = ACTIONS(101),
    [aux_sym_keyword_token7] = ACTIONS(101),
    [aux_sym_keyword_token8] = ACTIONS(101),
    [aux_sym_keyword_token9] = ACTIONS(101),
    [aux_sym_keyword_token10] = ACTIONS(101),
    [aux_sym_keyword_token11] = ACTIONS(101),
    [aux_sym_keyword_token12] = ACTIONS(101),
    [aux_sym_keyword_token13] = ACTIONS(101),
    [aux_sym_keyword_token14] = ACTIONS(101),
    [aux_sym_keyword_token15] = ACTIONS(101),
    [aux_sym_keyword_token16] = ACTIONS(101),
    [aux_sym_keyword_token17] = ACTIONS(101),
    [aux_sym_keyword_token18] = ACTIONS(101),
    [aux_sym_keyword_token19] = ACTIONS(101),
    [aux_sym_keyword_token20] = ACTIONS(101),
    [aux_sym_keyword_token21] = ACTIONS(101),
    [aux_sym_keyword_token22] = ACTIONS(101),
    [aux_sym_keyword_token23] = ACTIONS(101),
    [aux_sym_keyword_token24] = ACTIONS(101),
    [aux_sym_keyword_token25] = ACTIONS(101),
    [aux_sym_keyword_token26] = ACTIONS(101),
    [aux_sym_keyword_token27] = ACTIONS(101),
    [aux_sym_keyword_token28] = ACTIONS(101),
    [aux_sym_keyword_token29] = ACTIONS(101),
    [aux_sym_keyword_token30] = ACTIONS(101),
    [aux_sym_keyword_token31] = ACTIONS(101),
    [aux_sym_keyword_token32] = ACTIONS(101),
    [aux_sym_keyword_token33] = ACTIONS(101),
    [aux_sym_keyword_token34] = ACTIONS(101),
    [aux_sym_keyword_token35] = ACTIONS(101),
    [aux_sym_keyword_token36] = ACTIONS(101),
    [aux_sym_keyword_token37] = ACTIONS(101),
    [aux_sym_keyword_token38] = ACTIONS(101),
    [aux_sym_keyword_token39] = ACTIONS(101),
    [aux_sym_keyword_token40] = ACTIONS(101),
    [aux_sym_keyword_token41] = ACTIONS(101),
    [aux_sym_keyword_token42] = ACTIONS(101),
    [aux_sym_keyword_token43] = ACTIONS(101),
    [aux_sym_keyword_token44] = ACTIONS(101),
    [aux_sym_keyword_token45] = ACTIONS(101),
    [aux_sym_keyword_token46] = ACTIONS(101),
    [aux_sym_keyword_token47] = ACTIONS(101),
    [aux_sym_keyword_token48] = ACTIONS(101),
    [aux_sym_builtin_function_token1] = ACTIONS(101),
    [aux_sym_builtin_function_token2] = ACTIONS(101),
    [aux_sym_builtin_function_token3] = ACTIONS(101),
    [aux_sym_builtin_function_token4] = ACTIONS(101),
    [aux_sym_builtin_function_token5] = ACTIONS(101),
    [aux_sym_builtin_function_token6] = ACTIONS(101),
    [aux_sym_builtin_function_token7] = ACTIONS(101),
    [aux_sym_builtin_function_token8] = ACTIONS(101),
    [aux_sym_builtin_function_token9] = ACTIONS(101),
    [aux_sym_builtin_function_token10] = ACTIONS(101),
    [aux_sym_builtin_function_token11] = ACTIONS(101),
    [aux_sym_builtin_function_token12] = ACTIONS(101),
    [aux_sym_builtin_function_token13] = ACTIONS(101),
    [aux_sym_builtin_function_token14] = ACTIONS(101),
    [aux_sym_builtin_function_token15] = ACTIONS(101),
    [aux_sym_builtin_function_token16] = ACTIONS(101),
    [aux_sym_builtin_function_token17] = ACTIONS(101),
    [aux_sym_builtin_function_token18] = ACTIONS(101),
    [aux_sym_builtin_function_token19] = ACTIONS(101),
    [aux_sym_builtin_function_token20] = ACTIONS(101),
    [aux_sym_builtin_function_token21] = ACTIONS(101),
    [aux_sym_builtin_function_token22] = ACTIONS(101),
    [aux_sym_builtin_function_token23] = ACTIONS(101),
    [aux_sym_builtin_function_token24] = ACTIONS(101),
    [aux_sym_builtin_function_token25] = ACTIONS(101),
    [aux_sym_builtin_function_token26] = ACTIONS(101),
    [aux_sym_builtin_function_token27] = ACTIONS(101),
    [aux_sym_builtin_function_token28] = ACTIONS(101),
    [aux_sym_builtin_function_token29] = ACTIONS(101),
    [aux_sym_builtin_function_token30] = ACTIONS(101),
    [aux_sym_builtin_function_token31] = ACTIONS(101),
    [aux_sym_builtin_function_token32] = ACTIONS(101),
    [aux_sym_builtin_function_token33] = ACTIONS(101),
    [aux_sym_builtin_function_token34] = ACTIONS(101),
    [aux_sym_builtin_function_token35] = ACTIONS(101),
    [aux_sym_builtin_function_token36] = ACTIONS(101),
    [aux_sym_builtin_function_token37] = ACTIONS(101),
    [aux_sym_builtin_function_token38] = ACTIONS(101),
    [aux_sym_builtin_function_token39] = ACTIONS(101),
    [aux_sym_builtin_function_token40] = ACTIONS(101),
    [aux_sym_builtin_function_token41] = ACTIONS(101),
    [aux_sym_builtin_function_token42] = ACTIONS(101),
    [aux_sym_builtin_function_token43] = ACTIONS(101),
    [aux_sym_builtin_function_token44] = ACTIONS(101),
    [aux_sym_builtin_function_token45] = ACTIONS(101),
    [aux_sym_builtin_function_token46] = ACTIONS(101),
    [aux_sym_builtin_function_token47] = ACTIONS(101),
    [aux_sym_builtin_function_token48] = ACTIONS(101),
    [aux_sym_builtin_function_token49] = ACTIONS(101),
    [aux_sym_builtin_function_token50] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_BSLASH_EQ] = ACTIONS(101),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [anon_sym_BSLASH_LT] = ACTIONS(99),
    [anon_sym_BSLASH_GT] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_SLASH_SLASH] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_STAR_STAR] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(101),
    [sym_semicolon] = ACTIONS(99),
    [aux_sym_string_token1] = ACTIONS(99),
    [aux_sym_string_token2] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [aux_sym_keyword_token1] = ACTIONS(105),
    [aux_sym_keyword_token2] = ACTIONS(105),
    [aux_sym_keyword_token3] = ACTIONS(105),
    [aux_sym_keyword_token4] = ACTIONS(105),
    [aux_sym_keyword_token5] = ACTIONS(105),
    [aux_sym_keyword_token6] = ACTIONS(105),
    [aux_sym_keyword_token7] = ACTIONS(105),
    [aux_sym_keyword_token8] = ACTIONS(105),
    [aux_sym_keyword_token9] = ACTIONS(105),
    [aux_sym_keyword_token10] = ACTIONS(105),
    [aux_sym_keyword_token11] = ACTIONS(105),
    [aux_sym_keyword_token12] = ACTIONS(105),
    [aux_sym_keyword_token13] = ACTIONS(105),
    [aux_sym_keyword_token14] = ACTIONS(105),
    [aux_sym_keyword_token15] = ACTIONS(105),
    [aux_sym_keyword_token16] = ACTIONS(105),
    [aux_sym_keyword_token17] = ACTIONS(105),
    [aux_sym_keyword_token18] = ACTIONS(105),
    [aux_sym_keyword_token19] = ACTIONS(105),
    [aux_sym_keyword_token20] = ACTIONS(105),
    [aux_sym_keyword_token21] = ACTIONS(105),
    [aux_sym_keyword_token22] = ACTIONS(105),
    [aux_sym_keyword_token23] = ACTIONS(105),
    [aux_sym_keyword_token24] = ACTIONS(105),
    [aux_sym_keyword_token25] = ACTIONS(105),
    [aux_sym_keyword_token26] = ACTIONS(105),
    [aux_sym_keyword_token27] = ACTIONS(105),
    [aux_sym_keyword_token28] = ACTIONS(105),
    [aux_sym_keyword_token29] = ACTIONS(105),
    [aux_sym_keyword_token30] = ACTIONS(105),
    [aux_sym_keyword_token31] = ACTIONS(105),
    [aux_sym_keyword_token32] = ACTIONS(105),
    [aux_sym_keyword_token33] = ACTIONS(105),
    [aux_sym_keyword_token34] = ACTIONS(105),
    [aux_sym_keyword_token35] = ACTIONS(105),
    [aux_sym_keyword_token36] = ACTIONS(105),
    [aux_sym_keyword_token37] = ACTIONS(105),
    [aux_sym_keyword_token38] = ACTIONS(105),
    [aux_sym_keyword_token39] = ACTIONS(105),
    [aux_sym_keyword_token40] = ACTIONS(105),
    [aux_sym_keyword_token41] = ACTIONS(105),
    [aux_sym_keyword_token42] = ACTIONS(105),
    [aux_sym_keyword_token43] = ACTIONS(105),
    [aux_sym_keyword_token44] = ACTIONS(105),
    [aux_sym_keyword_token45] = ACTIONS(105),
    [aux_sym_keyword_token46] = ACTIONS(105),
    [aux_sym_keyword_token47] = ACTIONS(105),
    [aux_sym_keyword_token48] = ACTIONS(105),
    [aux_sym_builtin_function_token1] = ACTIONS(105),
    [aux_sym_builtin_function_token2] = ACTIONS(105),
    [aux_sym_builtin_function_token3] = ACTIONS(105),
    [aux_sym_builtin_function_token4] = ACTIONS(105),
    [aux_sym_builtin_function_token5] = ACTIONS(105),
    [aux_sym_builtin_function_token6] = ACTIONS(105),
    [aux_sym_builtin_function_token7] = ACTIONS(105),
    [aux_sym_builtin_function_token8] = ACTIONS(105),
    [aux_sym_builtin_function_token9] = ACTIONS(105),
    [aux_sym_builtin_function_token10] = ACTIONS(105),
    [aux_sym_builtin_function_token11] = ACTIONS(105),
    [aux_sym_builtin_function_token12] = ACTIONS(105),
    [aux_sym_builtin_function_token13] = ACTIONS(105),
    [aux_sym_builtin_function_token14] = ACTIONS(105),
    [aux_sym_builtin_function_token15] = ACTIONS(105),
    [aux_sym_builtin_function_token16] = ACTIONS(105),
    [aux_sym_builtin_function_token17] = ACTIONS(105),
    [aux_sym_builtin_function_token18] = ACTIONS(105),
    [aux_sym_builtin_function_token19] = ACTIONS(105),
    [aux_sym_builtin_function_token20] = ACTIONS(105),
    [aux_sym_builtin_function_token21] = ACTIONS(105),
    [aux_sym_builtin_function_token22] = ACTIONS(105),
    [aux_sym_builtin_function_token23] = ACTIONS(105),
    [aux_sym_builtin_function_token24] = ACTIONS(105),
    [aux_sym_builtin_function_token25] = ACTIONS(105),
    [aux_sym_builtin_function_token26] = ACTIONS(105),
    [aux_sym_builtin_function_token27] = ACTIONS(105),
    [aux_sym_builtin_function_token28] = ACTIONS(105),
    [aux_sym_builtin_function_token29] = ACTIONS(105),
    [aux_sym_builtin_function_token30] = ACTIONS(105),
    [aux_sym_builtin_function_token31] = ACTIONS(105),
    [aux_sym_builtin_function_token32] = ACTIONS(105),
    [aux_sym_builtin_function_token33] = ACTIONS(105),
    [aux_sym_builtin_function_token34] = ACTIONS(105),
    [aux_sym_builtin_function_token35] = ACTIONS(105),
    [aux_sym_builtin_function_token36] = ACTIONS(105),
    [aux_sym_builtin_function_token37] = ACTIONS(105),
    [aux_sym_builtin_function_token38] = ACTIONS(105),
    [aux_sym_builtin_function_token39] = ACTIONS(105),
    [aux_sym_builtin_function_token40] = ACTIONS(105),
    [aux_sym_builtin_function_token41] = ACTIONS(105),
    [aux_sym_builtin_function_token42] = ACTIONS(105),
    [aux_sym_builtin_function_token43] = ACTIONS(105),
    [aux_sym_builtin_function_token44] = ACTIONS(105),
    [aux_sym_builtin_function_token45] = ACTIONS(105),
    [aux_sym_builtin_function_token46] = ACTIONS(105),
    [aux_sym_builtin_function_token47] = ACTIONS(105),
    [aux_sym_builtin_function_token48] = ACTIONS(105),
    [aux_sym_builtin_function_token49] = ACTIONS(105),
    [aux_sym_builtin_function_token50] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BSLASH_EQ] = ACTIONS(105),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_LT_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_GT_EQ] = ACTIONS(103),
    [anon_sym_BSLASH_LT] = ACTIONS(103),
    [anon_sym_BSLASH_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_STAR_STAR] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym_semicolon] = ACTIONS(103),
    [aux_sym_string_token1] = ACTIONS(103),
    [aux_sym_string_token2] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [aux_sym_keyword_token1] = ACTIONS(109),
    [aux_sym_keyword_token2] = ACTIONS(109),
    [aux_sym_keyword_token3] = ACTIONS(109),
    [aux_sym_keyword_token4] = ACTIONS(109),
    [aux_sym_keyword_token5] = ACTIONS(109),
    [aux_sym_keyword_token6] = ACTIONS(109),
    [aux_sym_keyword_token7] = ACTIONS(109),
    [aux_sym_keyword_token8] = ACTIONS(109),
    [aux_sym_keyword_token9] = ACTIONS(109),
    [aux_sym_keyword_token10] = ACTIONS(109),
    [aux_sym_keyword_token11] = ACTIONS(109),
    [aux_sym_keyword_token12] = ACTIONS(109),
    [aux_sym_keyword_token13] = ACTIONS(109),
    [aux_sym_keyword_token14] = ACTIONS(109),
    [aux_sym_keyword_token15] = ACTIONS(109),
    [aux_sym_keyword_token16] = ACTIONS(109),
    [aux_sym_keyword_token17] = ACTIONS(109),
    [aux_sym_keyword_token18] = ACTIONS(109),
    [aux_sym_keyword_token19] = ACTIONS(109),
    [aux_sym_keyword_token20] = ACTIONS(109),
    [aux_sym_keyword_token21] = ACTIONS(109),
    [aux_sym_keyword_token22] = ACTIONS(109),
    [aux_sym_keyword_token23] = ACTIONS(109),
    [aux_sym_keyword_token24] = ACTIONS(109),
    [aux_sym_keyword_token25] = ACTIONS(109),
    [aux_sym_keyword_token26] = ACTIONS(109),
    [aux_sym_keyword_token27] = ACTIONS(109),
    [aux_sym_keyword_token28] = ACTIONS(109),
    [aux_sym_keyword_token29] = ACTIONS(109),
    [aux_sym_keyword_token30] = ACTIONS(109),
    [aux_sym_keyword_token31] = ACTIONS(109),
    [aux_sym_keyword_token32] = ACTIONS(109),
    [aux_sym_keyword_token33] = ACTIONS(109),
    [aux_sym_keyword_token34] = ACTIONS(109),
    [aux_sym_keyword_token35] = ACTIONS(109),
    [aux_sym_keyword_token36] = ACTIONS(109),
    [aux_sym_keyword_token37] = ACTIONS(109),
    [aux_sym_keyword_token38] = ACTIONS(109),
    [aux_sym_keyword_token39] = ACTIONS(109),
    [aux_sym_keyword_token40] = ACTIONS(109),
    [aux_sym_keyword_token41] = ACTIONS(109),
    [aux_sym_keyword_token42] = ACTIONS(109),
    [aux_sym_keyword_token43] = ACTIONS(109),
    [aux_sym_keyword_token44] = ACTIONS(109),
    [aux_sym_keyword_token45] = ACTIONS(109),
    [aux_sym_keyword_token46] = ACTIONS(109),
    [aux_sym_keyword_token47] = ACTIONS(109),
    [aux_sym_keyword_token48] = ACTIONS(109),
    [aux_sym_builtin_function_token1] = ACTIONS(109),
    [aux_sym_builtin_function_token2] = ACTIONS(109),
    [aux_sym_builtin_function_token3] = ACTIONS(109),
    [aux_sym_builtin_function_token4] = ACTIONS(109),
    [aux_sym_builtin_function_token5] = ACTIONS(109),
    [aux_sym_builtin_function_token6] = ACTIONS(109),
    [aux_sym_builtin_function_token7] = ACTIONS(109),
    [aux_sym_builtin_function_token8] = ACTIONS(109),
    [aux_sym_builtin_function_token9] = ACTIONS(109),
    [aux_sym_builtin_function_token10] = ACTIONS(109),
    [aux_sym_builtin_function_token11] = ACTIONS(109),
    [aux_sym_builtin_function_token12] = ACTIONS(109),
    [aux_sym_builtin_function_token13] = ACTIONS(109),
    [aux_sym_builtin_function_token14] = ACTIONS(109),
    [aux_sym_builtin_function_token15] = ACTIONS(109),
    [aux_sym_builtin_function_token16] = ACTIONS(109),
    [aux_sym_builtin_function_token17] = ACTIONS(109),
    [aux_sym_builtin_function_token18] = ACTIONS(109),
    [aux_sym_builtin_function_token19] = ACTIONS(109),
    [aux_sym_builtin_function_token20] = ACTIONS(109),
    [aux_sym_builtin_function_token21] = ACTIONS(109),
    [aux_sym_builtin_function_token22] = ACTIONS(109),
    [aux_sym_builtin_function_token23] = ACTIONS(109),
    [aux_sym_builtin_function_token24] = ACTIONS(109),
    [aux_sym_builtin_function_token25] = ACTIONS(109),
    [aux_sym_builtin_function_token26] = ACTIONS(109),
    [aux_sym_builtin_function_token27] = ACTIONS(109),
    [aux_sym_builtin_function_token28] = ACTIONS(109),
    [aux_sym_builtin_function_token29] = ACTIONS(109),
    [aux_sym_builtin_function_token30] = ACTIONS(109),
    [aux_sym_builtin_function_token31] = ACTIONS(109),
    [aux_sym_builtin_function_token32] = ACTIONS(109),
    [aux_sym_builtin_function_token33] = ACTIONS(109),
    [aux_sym_builtin_function_token34] = ACTIONS(109),
    [aux_sym_builtin_function_token35] = ACTIONS(109),
    [aux_sym_builtin_function_token36] = ACTIONS(109),
    [aux_sym_builtin_function_token37] = ACTIONS(109),
    [aux_sym_builtin_function_token38] = ACTIONS(109),
    [aux_sym_builtin_function_token39] = ACTIONS(109),
    [aux_sym_builtin_function_token40] = ACTIONS(109),
    [aux_sym_builtin_function_token41] = ACTIONS(109),
    [aux_sym_builtin_function_token42] = ACTIONS(109),
    [aux_sym_builtin_function_token43] = ACTIONS(109),
    [aux_sym_builtin_function_token44] = ACTIONS(109),
    [aux_sym_builtin_function_token45] = ACTIONS(109),
    [aux_sym_builtin_function_token46] = ACTIONS(109),
    [aux_sym_builtin_function_token47] = ACTIONS(109),
    [aux_sym_builtin_function_token48] = ACTIONS(109),
    [aux_sym_builtin_function_token49] = ACTIONS(109),
    [aux_sym_builtin_function_token50] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BSLASH_EQ] = ACTIONS(109),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_LT_LT_EQ] = ACTIONS(107),
    [anon_sym_GT_GT_EQ] = ACTIONS(107),
    [anon_sym_BSLASH_LT] = ACTIONS(107),
    [anon_sym_BSLASH_GT] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_SLASH_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_STAR_STAR] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym_semicolon] = ACTIONS(107),
    [aux_sym_string_token1] = ACTIONS(107),
    [aux_sym_string_token2] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [aux_sym_keyword_token1] = ACTIONS(113),
    [aux_sym_keyword_token2] = ACTIONS(113),
    [aux_sym_keyword_token3] = ACTIONS(113),
    [aux_sym_keyword_token4] = ACTIONS(113),
    [aux_sym_keyword_token5] = ACTIONS(113),
    [aux_sym_keyword_token6] = ACTIONS(113),
    [aux_sym_keyword_token7] = ACTIONS(113),
    [aux_sym_keyword_token8] = ACTIONS(113),
    [aux_sym_keyword_token9] = ACTIONS(113),
    [aux_sym_keyword_token10] = ACTIONS(113),
    [aux_sym_keyword_token11] = ACTIONS(113),
    [aux_sym_keyword_token12] = ACTIONS(113),
    [aux_sym_keyword_token13] = ACTIONS(113),
    [aux_sym_keyword_token14] = ACTIONS(113),
    [aux_sym_keyword_token15] = ACTIONS(113),
    [aux_sym_keyword_token16] = ACTIONS(113),
    [aux_sym_keyword_token17] = ACTIONS(113),
    [aux_sym_keyword_token18] = ACTIONS(113),
    [aux_sym_keyword_token19] = ACTIONS(113),
    [aux_sym_keyword_token20] = ACTIONS(113),
    [aux_sym_keyword_token21] = ACTIONS(113),
    [aux_sym_keyword_token22] = ACTIONS(113),
    [aux_sym_keyword_token23] = ACTIONS(113),
    [aux_sym_keyword_token24] = ACTIONS(113),
    [aux_sym_keyword_token25] = ACTIONS(113),
    [aux_sym_keyword_token26] = ACTIONS(113),
    [aux_sym_keyword_token27] = ACTIONS(113),
    [aux_sym_keyword_token28] = ACTIONS(113),
    [aux_sym_keyword_token29] = ACTIONS(113),
    [aux_sym_keyword_token30] = ACTIONS(113),
    [aux_sym_keyword_token31] = ACTIONS(113),
    [aux_sym_keyword_token32] = ACTIONS(113),
    [aux_sym_keyword_token33] = ACTIONS(113),
    [aux_sym_keyword_token34] = ACTIONS(113),
    [aux_sym_keyword_token35] = ACTIONS(113),
    [aux_sym_keyword_token36] = ACTIONS(113),
    [aux_sym_keyword_token37] = ACTIONS(113),
    [aux_sym_keyword_token38] = ACTIONS(113),
    [aux_sym_keyword_token39] = ACTIONS(113),
    [aux_sym_keyword_token40] = ACTIONS(113),
    [aux_sym_keyword_token41] = ACTIONS(113),
    [aux_sym_keyword_token42] = ACTIONS(113),
    [aux_sym_keyword_token43] = ACTIONS(113),
    [aux_sym_keyword_token44] = ACTIONS(113),
    [aux_sym_keyword_token45] = ACTIONS(113),
    [aux_sym_keyword_token46] = ACTIONS(113),
    [aux_sym_keyword_token47] = ACTIONS(113),
    [aux_sym_keyword_token48] = ACTIONS(113),
    [aux_sym_builtin_function_token1] = ACTIONS(113),
    [aux_sym_builtin_function_token2] = ACTIONS(113),
    [aux_sym_builtin_function_token3] = ACTIONS(113),
    [aux_sym_builtin_function_token4] = ACTIONS(113),
    [aux_sym_builtin_function_token5] = ACTIONS(113),
    [aux_sym_builtin_function_token6] = ACTIONS(113),
    [aux_sym_builtin_function_token7] = ACTIONS(113),
    [aux_sym_builtin_function_token8] = ACTIONS(113),
    [aux_sym_builtin_function_token9] = ACTIONS(113),
    [aux_sym_builtin_function_token10] = ACTIONS(113),
    [aux_sym_builtin_function_token11] = ACTIONS(113),
    [aux_sym_builtin_function_token12] = ACTIONS(113),
    [aux_sym_builtin_function_token13] = ACTIONS(113),
    [aux_sym_builtin_function_token14] = ACTIONS(113),
    [aux_sym_builtin_function_token15] = ACTIONS(113),
    [aux_sym_builtin_function_token16] = ACTIONS(113),
    [aux_sym_builtin_function_token17] = ACTIONS(113),
    [aux_sym_builtin_function_token18] = ACTIONS(113),
    [aux_sym_builtin_function_token19] = ACTIONS(113),
    [aux_sym_builtin_function_token20] = ACTIONS(113),
    [aux_sym_builtin_function_token21] = ACTIONS(113),
    [aux_sym_builtin_function_token22] = ACTIONS(113),
    [aux_sym_builtin_function_token23] = ACTIONS(113),
    [aux_sym_builtin_function_token24] = ACTIONS(113),
    [aux_sym_builtin_function_token25] = ACTIONS(113),
    [aux_sym_builtin_function_token26] = ACTIONS(113),
    [aux_sym_builtin_function_token27] = ACTIONS(113),
    [aux_sym_builtin_function_token28] = ACTIONS(113),
    [aux_sym_builtin_function_token29] = ACTIONS(113),
    [aux_sym_builtin_function_token30] = ACTIONS(113),
    [aux_sym_builtin_function_token31] = ACTIONS(113),
    [aux_sym_builtin_function_token32] = ACTIONS(113),
    [aux_sym_builtin_function_token33] = ACTIONS(113),
    [aux_sym_builtin_function_token34] = ACTIONS(113),
    [aux_sym_builtin_function_token35] = ACTIONS(113),
    [aux_sym_builtin_function_token36] = ACTIONS(113),
    [aux_sym_builtin_function_token37] = ACTIONS(113),
    [aux_sym_builtin_function_token38] = ACTIONS(113),
    [aux_sym_builtin_function_token39] = ACTIONS(113),
    [aux_sym_builtin_function_token40] = ACTIONS(113),
    [aux_sym_builtin_function_token41] = ACTIONS(113),
    [aux_sym_builtin_function_token42] = ACTIONS(113),
    [aux_sym_builtin_function_token43] = ACTIONS(113),
    [aux_sym_builtin_function_token44] = ACTIONS(113),
    [aux_sym_builtin_function_token45] = ACTIONS(113),
    [aux_sym_builtin_function_token46] = ACTIONS(113),
    [aux_sym_builtin_function_token47] = ACTIONS(113),
    [aux_sym_builtin_function_token48] = ACTIONS(113),
    [aux_sym_builtin_function_token49] = ACTIONS(113),
    [aux_sym_builtin_function_token50] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_BSLASH_EQ] = ACTIONS(113),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_LT_GT] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_LT_LT_EQ] = ACTIONS(111),
    [anon_sym_GT_GT_EQ] = ACTIONS(111),
    [anon_sym_BSLASH_LT] = ACTIONS(111),
    [anon_sym_BSLASH_GT] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_SLASH_SLASH] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_STAR_STAR] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(113),
    [sym_semicolon] = ACTIONS(111),
    [aux_sym_string_token1] = ACTIONS(111),
    [aux_sym_string_token2] = ACTIONS(111),
    [sym_number] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [aux_sym_keyword_token1] = ACTIONS(117),
    [aux_sym_keyword_token2] = ACTIONS(117),
    [aux_sym_keyword_token3] = ACTIONS(117),
    [aux_sym_keyword_token4] = ACTIONS(117),
    [aux_sym_keyword_token5] = ACTIONS(117),
    [aux_sym_keyword_token6] = ACTIONS(117),
    [aux_sym_keyword_token7] = ACTIONS(117),
    [aux_sym_keyword_token8] = ACTIONS(117),
    [aux_sym_keyword_token9] = ACTIONS(117),
    [aux_sym_keyword_token10] = ACTIONS(117),
    [aux_sym_keyword_token11] = ACTIONS(117),
    [aux_sym_keyword_token12] = ACTIONS(117),
    [aux_sym_keyword_token13] = ACTIONS(117),
    [aux_sym_keyword_token14] = ACTIONS(117),
    [aux_sym_keyword_token15] = ACTIONS(117),
    [aux_sym_keyword_token16] = ACTIONS(117),
    [aux_sym_keyword_token17] = ACTIONS(117),
    [aux_sym_keyword_token18] = ACTIONS(117),
    [aux_sym_keyword_token19] = ACTIONS(117),
    [aux_sym_keyword_token20] = ACTIONS(117),
    [aux_sym_keyword_token21] = ACTIONS(117),
    [aux_sym_keyword_token22] = ACTIONS(117),
    [aux_sym_keyword_token23] = ACTIONS(117),
    [aux_sym_keyword_token24] = ACTIONS(117),
    [aux_sym_keyword_token25] = ACTIONS(117),
    [aux_sym_keyword_token26] = ACTIONS(117),
    [aux_sym_keyword_token27] = ACTIONS(117),
    [aux_sym_keyword_token28] = ACTIONS(117),
    [aux_sym_keyword_token29] = ACTIONS(117),
    [aux_sym_keyword_token30] = ACTIONS(117),
    [aux_sym_keyword_token31] = ACTIONS(117),
    [aux_sym_keyword_token32] = ACTIONS(117),
    [aux_sym_keyword_token33] = ACTIONS(117),
    [aux_sym_keyword_token34] = ACTIONS(117),
    [aux_sym_keyword_token35] = ACTIONS(117),
    [aux_sym_keyword_token36] = ACTIONS(117),
    [aux_sym_keyword_token37] = ACTIONS(117),
    [aux_sym_keyword_token38] = ACTIONS(117),
    [aux_sym_keyword_token39] = ACTIONS(117),
    [aux_sym_keyword_token40] = ACTIONS(117),
    [aux_sym_keyword_token41] = ACTIONS(117),
    [aux_sym_keyword_token42] = ACTIONS(117),
    [aux_sym_keyword_token43] = ACTIONS(117),
    [aux_sym_keyword_token44] = ACTIONS(117),
    [aux_sym_keyword_token45] = ACTIONS(117),
    [aux_sym_keyword_token46] = ACTIONS(117),
    [aux_sym_keyword_token47] = ACTIONS(117),
    [aux_sym_keyword_token48] = ACTIONS(117),
    [aux_sym_builtin_function_token1] = ACTIONS(117),
    [aux_sym_builtin_function_token2] = ACTIONS(117),
    [aux_sym_builtin_function_token3] = ACTIONS(117),
    [aux_sym_builtin_function_token4] = ACTIONS(117),
    [aux_sym_builtin_function_token5] = ACTIONS(117),
    [aux_sym_builtin_function_token6] = ACTIONS(117),
    [aux_sym_builtin_function_token7] = ACTIONS(117),
    [aux_sym_builtin_function_token8] = ACTIONS(117),
    [aux_sym_builtin_function_token9] = ACTIONS(117),
    [aux_sym_builtin_function_token10] = ACTIONS(117),
    [aux_sym_builtin_function_token11] = ACTIONS(117),
    [aux_sym_builtin_function_token12] = ACTIONS(117),
    [aux_sym_builtin_function_token13] = ACTIONS(117),
    [aux_sym_builtin_function_token14] = ACTIONS(117),
    [aux_sym_builtin_function_token15] = ACTIONS(117),
    [aux_sym_builtin_function_token16] = ACTIONS(117),
    [aux_sym_builtin_function_token17] = ACTIONS(117),
    [aux_sym_builtin_function_token18] = ACTIONS(117),
    [aux_sym_builtin_function_token19] = ACTIONS(117),
    [aux_sym_builtin_function_token20] = ACTIONS(117),
    [aux_sym_builtin_function_token21] = ACTIONS(117),
    [aux_sym_builtin_function_token22] = ACTIONS(117),
    [aux_sym_builtin_function_token23] = ACTIONS(117),
    [aux_sym_builtin_function_token24] = ACTIONS(117),
    [aux_sym_builtin_function_token25] = ACTIONS(117),
    [aux_sym_builtin_function_token26] = ACTIONS(117),
    [aux_sym_builtin_function_token27] = ACTIONS(117),
    [aux_sym_builtin_function_token28] = ACTIONS(117),
    [aux_sym_builtin_function_token29] = ACTIONS(117),
    [aux_sym_builtin_function_token30] = ACTIONS(117),
    [aux_sym_builtin_function_token31] = ACTIONS(117),
    [aux_sym_builtin_function_token32] = ACTIONS(117),
    [aux_sym_builtin_function_token33] = ACTIONS(117),
    [aux_sym_builtin_function_token34] = ACTIONS(117),
    [aux_sym_builtin_function_token35] = ACTIONS(117),
    [aux_sym_builtin_function_token36] = ACTIONS(117),
    [aux_sym_builtin_function_token37] = ACTIONS(117),
    [aux_sym_builtin_function_token38] = ACTIONS(117),
    [aux_sym_builtin_function_token39] = ACTIONS(117),
    [aux_sym_builtin_function_token40] = ACTIONS(117),
    [aux_sym_builtin_function_token41] = ACTIONS(117),
    [aux_sym_builtin_function_token42] = ACTIONS(117),
    [aux_sym_builtin_function_token43] = ACTIONS(117),
    [aux_sym_builtin_function_token44] = ACTIONS(117),
    [aux_sym_builtin_function_token45] = ACTIONS(117),
    [aux_sym_builtin_function_token46] = ACTIONS(117),
    [aux_sym_builtin_function_token47] = ACTIONS(117),
    [aux_sym_builtin_function_token48] = ACTIONS(117),
    [aux_sym_builtin_function_token49] = ACTIONS(117),
    [aux_sym_builtin_function_token50] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BSLASH_EQ] = ACTIONS(117),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_GT_EQ] = ACTIONS(115),
    [anon_sym_BSLASH_LT] = ACTIONS(115),
    [anon_sym_BSLASH_GT] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_STAR_STAR] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_semicolon] = ACTIONS(115),
    [aux_sym_string_token1] = ACTIONS(115),
    [aux_sym_string_token2] = ACTIONS(115),
    [sym_number] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [aux_sym_keyword_token1] = ACTIONS(97),
    [aux_sym_keyword_token2] = ACTIONS(97),
    [aux_sym_keyword_token3] = ACTIONS(97),
    [aux_sym_keyword_token4] = ACTIONS(97),
    [aux_sym_keyword_token5] = ACTIONS(97),
    [aux_sym_keyword_token6] = ACTIONS(97),
    [aux_sym_keyword_token7] = ACTIONS(97),
    [aux_sym_keyword_token8] = ACTIONS(97),
    [aux_sym_keyword_token9] = ACTIONS(97),
    [aux_sym_keyword_token10] = ACTIONS(97),
    [aux_sym_keyword_token11] = ACTIONS(97),
    [aux_sym_keyword_token12] = ACTIONS(97),
    [aux_sym_keyword_token13] = ACTIONS(97),
    [aux_sym_keyword_token14] = ACTIONS(97),
    [aux_sym_keyword_token15] = ACTIONS(97),
    [aux_sym_keyword_token16] = ACTIONS(97),
    [aux_sym_keyword_token17] = ACTIONS(97),
    [aux_sym_keyword_token18] = ACTIONS(97),
    [aux_sym_keyword_token19] = ACTIONS(97),
    [aux_sym_keyword_token20] = ACTIONS(97),
    [aux_sym_keyword_token21] = ACTIONS(97),
    [aux_sym_keyword_token22] = ACTIONS(97),
    [aux_sym_keyword_token23] = ACTIONS(97),
    [aux_sym_keyword_token24] = ACTIONS(97),
    [aux_sym_keyword_token25] = ACTIONS(97),
    [aux_sym_keyword_token26] = ACTIONS(97),
    [aux_sym_keyword_token27] = ACTIONS(97),
    [aux_sym_keyword_token28] = ACTIONS(97),
    [aux_sym_keyword_token29] = ACTIONS(97),
    [aux_sym_keyword_token30] = ACTIONS(97),
    [aux_sym_keyword_token31] = ACTIONS(97),
    [aux_sym_keyword_token32] = ACTIONS(97),
    [aux_sym_keyword_token33] = ACTIONS(97),
    [aux_sym_keyword_token34] = ACTIONS(97),
    [aux_sym_keyword_token35] = ACTIONS(97),
    [aux_sym_keyword_token36] = ACTIONS(97),
    [aux_sym_keyword_token37] = ACTIONS(97),
    [aux_sym_keyword_token38] = ACTIONS(97),
    [aux_sym_keyword_token39] = ACTIONS(97),
    [aux_sym_keyword_token40] = ACTIONS(97),
    [aux_sym_keyword_token41] = ACTIONS(97),
    [aux_sym_keyword_token42] = ACTIONS(97),
    [aux_sym_keyword_token43] = ACTIONS(97),
    [aux_sym_keyword_token44] = ACTIONS(97),
    [aux_sym_keyword_token45] = ACTIONS(97),
    [aux_sym_keyword_token46] = ACTIONS(97),
    [aux_sym_keyword_token47] = ACTIONS(97),
    [aux_sym_keyword_token48] = ACTIONS(97),
    [aux_sym_builtin_function_token1] = ACTIONS(97),
    [aux_sym_builtin_function_token2] = ACTIONS(97),
    [aux_sym_builtin_function_token3] = ACTIONS(97),
    [aux_sym_builtin_function_token4] = ACTIONS(97),
    [aux_sym_builtin_function_token5] = ACTIONS(97),
    [aux_sym_builtin_function_token6] = ACTIONS(97),
    [aux_sym_builtin_function_token7] = ACTIONS(97),
    [aux_sym_builtin_function_token8] = ACTIONS(97),
    [aux_sym_builtin_function_token9] = ACTIONS(97),
    [aux_sym_builtin_function_token10] = ACTIONS(97),
    [aux_sym_builtin_function_token11] = ACTIONS(97),
    [aux_sym_builtin_function_token12] = ACTIONS(97),
    [aux_sym_builtin_function_token13] = ACTIONS(97),
    [aux_sym_builtin_function_token14] = ACTIONS(97),
    [aux_sym_builtin_function_token15] = ACTIONS(97),
    [aux_sym_builtin_function_token16] = ACTIONS(97),
    [aux_sym_builtin_function_token17] = ACTIONS(97),
    [aux_sym_builtin_function_token18] = ACTIONS(97),
    [aux_sym_builtin_function_token19] = ACTIONS(97),
    [aux_sym_builtin_function_token20] = ACTIONS(97),
    [aux_sym_builtin_function_token21] = ACTIONS(97),
    [aux_sym_builtin_function_token22] = ACTIONS(97),
    [aux_sym_builtin_function_token23] = ACTIONS(97),
    [aux_sym_builtin_function_token24] = ACTIONS(97),
    [aux_sym_builtin_function_token25] = ACTIONS(97),
    [aux_sym_builtin_function_token26] = ACTIONS(97),
    [aux_sym_builtin_function_token27] = ACTIONS(97),
    [aux_sym_builtin_function_token28] = ACTIONS(97),
    [aux_sym_builtin_function_token29] = ACTIONS(97),
    [aux_sym_builtin_function_token30] = ACTIONS(97),
    [aux_sym_builtin_function_token31] = ACTIONS(97),
    [aux_sym_builtin_function_token32] = ACTIONS(97),
    [aux_sym_builtin_function_token33] = ACTIONS(97),
    [aux_sym_builtin_function_token34] = ACTIONS(97),
    [aux_sym_builtin_function_token35] = ACTIONS(97),
    [aux_sym_builtin_function_token36] = ACTIONS(97),
    [aux_sym_builtin_function_token37] = ACTIONS(97),
    [aux_sym_builtin_function_token38] = ACTIONS(97),
    [aux_sym_builtin_function_token39] = ACTIONS(97),
    [aux_sym_builtin_function_token40] = ACTIONS(97),
    [aux_sym_builtin_function_token41] = ACTIONS(97),
    [aux_sym_builtin_function_token42] = ACTIONS(97),
    [aux_sym_builtin_function_token43] = ACTIONS(97),
    [aux_sym_builtin_function_token44] = ACTIONS(97),
    [aux_sym_builtin_function_token45] = ACTIONS(97),
    [aux_sym_builtin_function_token46] = ACTIONS(97),
    [aux_sym_builtin_function_token47] = ACTIONS(97),
    [aux_sym_builtin_function_token48] = ACTIONS(97),
    [aux_sym_builtin_function_token49] = ACTIONS(97),
    [aux_sym_builtin_function_token50] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BSLASH_EQ] = ACTIONS(97),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_LT_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_GT_EQ] = ACTIONS(91),
    [anon_sym_BSLASH_LT] = ACTIONS(91),
    [anon_sym_BSLASH_GT] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_STAR_STAR] = ACTIONS(91),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_AMP_AMP] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(97),
    [sym_semicolon] = ACTIONS(91),
    [aux_sym_string_token1] = ACTIONS(91),
    [aux_sym_string_token2] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [sym_identifier] = ACTIONS(97),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [aux_sym_keyword_token1] = ACTIONS(121),
    [aux_sym_keyword_token2] = ACTIONS(121),
    [aux_sym_keyword_token3] = ACTIONS(121),
    [aux_sym_keyword_token4] = ACTIONS(121),
    [aux_sym_keyword_token5] = ACTIONS(121),
    [aux_sym_keyword_token6] = ACTIONS(121),
    [aux_sym_keyword_token7] = ACTIONS(121),
    [aux_sym_keyword_token8] = ACTIONS(121),
    [aux_sym_keyword_token9] = ACTIONS(121),
    [aux_sym_keyword_token10] = ACTIONS(121),
    [aux_sym_keyword_token11] = ACTIONS(121),
    [aux_sym_keyword_token12] = ACTIONS(121),
    [aux_sym_keyword_token13] = ACTIONS(121),
    [aux_sym_keyword_token14] = ACTIONS(121),
    [aux_sym_keyword_token15] = ACTIONS(121),
    [aux_sym_keyword_token16] = ACTIONS(121),
    [aux_sym_keyword_token17] = ACTIONS(121),
    [aux_sym_keyword_token18] = ACTIONS(121),
    [aux_sym_keyword_token19] = ACTIONS(121),
    [aux_sym_keyword_token20] = ACTIONS(121),
    [aux_sym_keyword_token21] = ACTIONS(121),
    [aux_sym_keyword_token22] = ACTIONS(121),
    [aux_sym_keyword_token23] = ACTIONS(121),
    [aux_sym_keyword_token24] = ACTIONS(121),
    [aux_sym_keyword_token25] = ACTIONS(121),
    [aux_sym_keyword_token26] = ACTIONS(121),
    [aux_sym_keyword_token27] = ACTIONS(121),
    [aux_sym_keyword_token28] = ACTIONS(121),
    [aux_sym_keyword_token29] = ACTIONS(121),
    [aux_sym_keyword_token30] = ACTIONS(121),
    [aux_sym_keyword_token31] = ACTIONS(121),
    [aux_sym_keyword_token32] = ACTIONS(121),
    [aux_sym_keyword_token33] = ACTIONS(121),
    [aux_sym_keyword_token34] = ACTIONS(121),
    [aux_sym_keyword_token35] = ACTIONS(121),
    [aux_sym_keyword_token36] = ACTIONS(121),
    [aux_sym_keyword_token37] = ACTIONS(121),
    [aux_sym_keyword_token38] = ACTIONS(121),
    [aux_sym_keyword_token39] = ACTIONS(121),
    [aux_sym_keyword_token40] = ACTIONS(121),
    [aux_sym_keyword_token41] = ACTIONS(121),
    [aux_sym_keyword_token42] = ACTIONS(121),
    [aux_sym_keyword_token43] = ACTIONS(121),
    [aux_sym_keyword_token44] = ACTIONS(121),
    [aux_sym_keyword_token45] = ACTIONS(121),
    [aux_sym_keyword_token46] = ACTIONS(121),
    [aux_sym_keyword_token47] = ACTIONS(121),
    [aux_sym_keyword_token48] = ACTIONS(121),
    [aux_sym_builtin_function_token1] = ACTIONS(121),
    [aux_sym_builtin_function_token2] = ACTIONS(121),
    [aux_sym_builtin_function_token3] = ACTIONS(121),
    [aux_sym_builtin_function_token4] = ACTIONS(121),
    [aux_sym_builtin_function_token5] = ACTIONS(121),
    [aux_sym_builtin_function_token6] = ACTIONS(121),
    [aux_sym_builtin_function_token7] = ACTIONS(121),
    [aux_sym_builtin_function_token8] = ACTIONS(121),
    [aux_sym_builtin_function_token9] = ACTIONS(121),
    [aux_sym_builtin_function_token10] = ACTIONS(121),
    [aux_sym_builtin_function_token11] = ACTIONS(121),
    [aux_sym_builtin_function_token12] = ACTIONS(121),
    [aux_sym_builtin_function_token13] = ACTIONS(121),
    [aux_sym_builtin_function_token14] = ACTIONS(121),
    [aux_sym_builtin_function_token15] = ACTIONS(121),
    [aux_sym_builtin_function_token16] = ACTIONS(121),
    [aux_sym_builtin_function_token17] = ACTIONS(121),
    [aux_sym_builtin_function_token18] = ACTIONS(121),
    [aux_sym_builtin_function_token19] = ACTIONS(121),
    [aux_sym_builtin_function_token20] = ACTIONS(121),
    [aux_sym_builtin_function_token21] = ACTIONS(121),
    [aux_sym_builtin_function_token22] = ACTIONS(121),
    [aux_sym_builtin_function_token23] = ACTIONS(121),
    [aux_sym_builtin_function_token24] = ACTIONS(121),
    [aux_sym_builtin_function_token25] = ACTIONS(121),
    [aux_sym_builtin_function_token26] = ACTIONS(121),
    [aux_sym_builtin_function_token27] = ACTIONS(121),
    [aux_sym_builtin_function_token28] = ACTIONS(121),
    [aux_sym_builtin_function_token29] = ACTIONS(121),
    [aux_sym_builtin_function_token30] = ACTIONS(121),
    [aux_sym_builtin_function_token31] = ACTIONS(121),
    [aux_sym_builtin_function_token32] = ACTIONS(121),
    [aux_sym_builtin_function_token33] = ACTIONS(121),
    [aux_sym_builtin_function_token34] = ACTIONS(121),
    [aux_sym_builtin_function_token35] = ACTIONS(121),
    [aux_sym_builtin_function_token36] = ACTIONS(121),
    [aux_sym_builtin_function_token37] = ACTIONS(121),
    [aux_sym_builtin_function_token38] = ACTIONS(121),
    [aux_sym_builtin_function_token39] = ACTIONS(121),
    [aux_sym_builtin_function_token40] = ACTIONS(121),
    [aux_sym_builtin_function_token41] = ACTIONS(121),
    [aux_sym_builtin_function_token42] = ACTIONS(121),
    [aux_sym_builtin_function_token43] = ACTIONS(121),
    [aux_sym_builtin_function_token44] = ACTIONS(121),
    [aux_sym_builtin_function_token45] = ACTIONS(121),
    [aux_sym_builtin_function_token46] = ACTIONS(121),
    [aux_sym_builtin_function_token47] = ACTIONS(121),
    [aux_sym_builtin_function_token48] = ACTIONS(121),
    [aux_sym_builtin_function_token49] = ACTIONS(121),
    [aux_sym_builtin_function_token50] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BSLASH_EQ] = ACTIONS(121),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(121),
    [anon_sym_LT_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_GT_EQ] = ACTIONS(119),
    [anon_sym_BSLASH_LT] = ACTIONS(119),
    [anon_sym_BSLASH_GT] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_STAR_STAR] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym_semicolon] = ACTIONS(119),
    [aux_sym_string_token1] = ACTIONS(119),
    [aux_sym_string_token2] = ACTIONS(119),
    [sym_number] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [aux_sym_keyword_token1] = ACTIONS(125),
    [aux_sym_keyword_token2] = ACTIONS(125),
    [aux_sym_keyword_token3] = ACTIONS(125),
    [aux_sym_keyword_token4] = ACTIONS(125),
    [aux_sym_keyword_token5] = ACTIONS(125),
    [aux_sym_keyword_token6] = ACTIONS(125),
    [aux_sym_keyword_token7] = ACTIONS(125),
    [aux_sym_keyword_token8] = ACTIONS(125),
    [aux_sym_keyword_token9] = ACTIONS(125),
    [aux_sym_keyword_token10] = ACTIONS(125),
    [aux_sym_keyword_token11] = ACTIONS(125),
    [aux_sym_keyword_token12] = ACTIONS(125),
    [aux_sym_keyword_token13] = ACTIONS(125),
    [aux_sym_keyword_token14] = ACTIONS(125),
    [aux_sym_keyword_token15] = ACTIONS(125),
    [aux_sym_keyword_token16] = ACTIONS(125),
    [aux_sym_keyword_token17] = ACTIONS(125),
    [aux_sym_keyword_token18] = ACTIONS(125),
    [aux_sym_keyword_token19] = ACTIONS(125),
    [aux_sym_keyword_token20] = ACTIONS(125),
    [aux_sym_keyword_token21] = ACTIONS(125),
    [aux_sym_keyword_token22] = ACTIONS(125),
    [aux_sym_keyword_token23] = ACTIONS(125),
    [aux_sym_keyword_token24] = ACTIONS(125),
    [aux_sym_keyword_token25] = ACTIONS(125),
    [aux_sym_keyword_token26] = ACTIONS(125),
    [aux_sym_keyword_token27] = ACTIONS(125),
    [aux_sym_keyword_token28] = ACTIONS(125),
    [aux_sym_keyword_token29] = ACTIONS(125),
    [aux_sym_keyword_token30] = ACTIONS(125),
    [aux_sym_keyword_token31] = ACTIONS(125),
    [aux_sym_keyword_token32] = ACTIONS(125),
    [aux_sym_keyword_token33] = ACTIONS(125),
    [aux_sym_keyword_token34] = ACTIONS(125),
    [aux_sym_keyword_token35] = ACTIONS(125),
    [aux_sym_keyword_token36] = ACTIONS(125),
    [aux_sym_keyword_token37] = ACTIONS(125),
    [aux_sym_keyword_token38] = ACTIONS(125),
    [aux_sym_keyword_token39] = ACTIONS(125),
    [aux_sym_keyword_token40] = ACTIONS(125),
    [aux_sym_keyword_token41] = ACTIONS(125),
    [aux_sym_keyword_token42] = ACTIONS(125),
    [aux_sym_keyword_token43] = ACTIONS(125),
    [aux_sym_keyword_token44] = ACTIONS(125),
    [aux_sym_keyword_token45] = ACTIONS(125),
    [aux_sym_keyword_token46] = ACTIONS(125),
    [aux_sym_keyword_token47] = ACTIONS(125),
    [aux_sym_keyword_token48] = ACTIONS(125),
    [aux_sym_builtin_function_token1] = ACTIONS(125),
    [aux_sym_builtin_function_token2] = ACTIONS(125),
    [aux_sym_builtin_function_token3] = ACTIONS(125),
    [aux_sym_builtin_function_token4] = ACTIONS(125),
    [aux_sym_builtin_function_token5] = ACTIONS(125),
    [aux_sym_builtin_function_token6] = ACTIONS(125),
    [aux_sym_builtin_function_token7] = ACTIONS(125),
    [aux_sym_builtin_function_token8] = ACTIONS(125),
    [aux_sym_builtin_function_token9] = ACTIONS(125),
    [aux_sym_builtin_function_token10] = ACTIONS(125),
    [aux_sym_builtin_function_token11] = ACTIONS(125),
    [aux_sym_builtin_function_token12] = ACTIONS(125),
    [aux_sym_builtin_function_token13] = ACTIONS(125),
    [aux_sym_builtin_function_token14] = ACTIONS(125),
    [aux_sym_builtin_function_token15] = ACTIONS(125),
    [aux_sym_builtin_function_token16] = ACTIONS(125),
    [aux_sym_builtin_function_token17] = ACTIONS(125),
    [aux_sym_builtin_function_token18] = ACTIONS(125),
    [aux_sym_builtin_function_token19] = ACTIONS(125),
    [aux_sym_builtin_function_token20] = ACTIONS(125),
    [aux_sym_builtin_function_token21] = ACTIONS(125),
    [aux_sym_builtin_function_token22] = ACTIONS(125),
    [aux_sym_builtin_function_token23] = ACTIONS(125),
    [aux_sym_builtin_function_token24] = ACTIONS(125),
    [aux_sym_builtin_function_token25] = ACTIONS(125),
    [aux_sym_builtin_function_token26] = ACTIONS(125),
    [aux_sym_builtin_function_token27] = ACTIONS(125),
    [aux_sym_builtin_function_token28] = ACTIONS(125),
    [aux_sym_builtin_function_token29] = ACTIONS(125),
    [aux_sym_builtin_function_token30] = ACTIONS(125),
    [aux_sym_builtin_function_token31] = ACTIONS(125),
    [aux_sym_builtin_function_token32] = ACTIONS(125),
    [aux_sym_builtin_function_token33] = ACTIONS(125),
    [aux_sym_builtin_function_token34] = ACTIONS(125),
    [aux_sym_builtin_function_token35] = ACTIONS(125),
    [aux_sym_builtin_function_token36] = ACTIONS(125),
    [aux_sym_builtin_function_token37] = ACTIONS(125),
    [aux_sym_builtin_function_token38] = ACTIONS(125),
    [aux_sym_builtin_function_token39] = ACTIONS(125),
    [aux_sym_builtin_function_token40] = ACTIONS(125),
    [aux_sym_builtin_function_token41] = ACTIONS(125),
    [aux_sym_builtin_function_token42] = ACTIONS(125),
    [aux_sym_builtin_function_token43] = ACTIONS(125),
    [aux_sym_builtin_function_token44] = ACTIONS(125),
    [aux_sym_builtin_function_token45] = ACTIONS(125),
    [aux_sym_builtin_function_token46] = ACTIONS(125),
    [aux_sym_builtin_function_token47] = ACTIONS(125),
    [aux_sym_builtin_function_token48] = ACTIONS(125),
    [aux_sym_builtin_function_token49] = ACTIONS(125),
    [aux_sym_builtin_function_token50] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BSLASH_EQ] = ACTIONS(125),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_LT_GT] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(125),
    [anon_sym_LT_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_GT_EQ] = ACTIONS(123),
    [anon_sym_BSLASH_LT] = ACTIONS(123),
    [anon_sym_BSLASH_GT] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_SLASH_SLASH] = ACTIONS(123),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_STAR_STAR] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym_semicolon] = ACTIONS(123),
    [aux_sym_string_token1] = ACTIONS(123),
    [aux_sym_string_token2] = ACTIONS(123),
    [sym_number] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [aux_sym_keyword_token1] = ACTIONS(129),
    [aux_sym_keyword_token2] = ACTIONS(129),
    [aux_sym_keyword_token3] = ACTIONS(129),
    [aux_sym_keyword_token4] = ACTIONS(129),
    [aux_sym_keyword_token5] = ACTIONS(129),
    [aux_sym_keyword_token6] = ACTIONS(129),
    [aux_sym_keyword_token7] = ACTIONS(129),
    [aux_sym_keyword_token8] = ACTIONS(129),
    [aux_sym_keyword_token9] = ACTIONS(129),
    [aux_sym_keyword_token10] = ACTIONS(129),
    [aux_sym_keyword_token11] = ACTIONS(129),
    [aux_sym_keyword_token12] = ACTIONS(129),
    [aux_sym_keyword_token13] = ACTIONS(129),
    [aux_sym_keyword_token14] = ACTIONS(129),
    [aux_sym_keyword_token15] = ACTIONS(129),
    [aux_sym_keyword_token16] = ACTIONS(129),
    [aux_sym_keyword_token17] = ACTIONS(129),
    [aux_sym_keyword_token18] = ACTIONS(129),
    [aux_sym_keyword_token19] = ACTIONS(129),
    [aux_sym_keyword_token20] = ACTIONS(129),
    [aux_sym_keyword_token21] = ACTIONS(129),
    [aux_sym_keyword_token22] = ACTIONS(129),
    [aux_sym_keyword_token23] = ACTIONS(129),
    [aux_sym_keyword_token24] = ACTIONS(129),
    [aux_sym_keyword_token25] = ACTIONS(129),
    [aux_sym_keyword_token26] = ACTIONS(129),
    [aux_sym_keyword_token27] = ACTIONS(129),
    [aux_sym_keyword_token28] = ACTIONS(129),
    [aux_sym_keyword_token29] = ACTIONS(129),
    [aux_sym_keyword_token30] = ACTIONS(129),
    [aux_sym_keyword_token31] = ACTIONS(129),
    [aux_sym_keyword_token32] = ACTIONS(129),
    [aux_sym_keyword_token33] = ACTIONS(129),
    [aux_sym_keyword_token34] = ACTIONS(129),
    [aux_sym_keyword_token35] = ACTIONS(129),
    [aux_sym_keyword_token36] = ACTIONS(129),
    [aux_sym_keyword_token37] = ACTIONS(129),
    [aux_sym_keyword_token38] = ACTIONS(129),
    [aux_sym_keyword_token39] = ACTIONS(129),
    [aux_sym_keyword_token40] = ACTIONS(129),
    [aux_sym_keyword_token41] = ACTIONS(129),
    [aux_sym_keyword_token42] = ACTIONS(129),
    [aux_sym_keyword_token43] = ACTIONS(129),
    [aux_sym_keyword_token44] = ACTIONS(129),
    [aux_sym_keyword_token45] = ACTIONS(129),
    [aux_sym_keyword_token46] = ACTIONS(129),
    [aux_sym_keyword_token47] = ACTIONS(129),
    [aux_sym_keyword_token48] = ACTIONS(129),
    [aux_sym_builtin_function_token1] = ACTIONS(129),
    [aux_sym_builtin_function_token2] = ACTIONS(129),
    [aux_sym_builtin_function_token3] = ACTIONS(129),
    [aux_sym_builtin_function_token4] = ACTIONS(129),
    [aux_sym_builtin_function_token5] = ACTIONS(129),
    [aux_sym_builtin_function_token6] = ACTIONS(129),
    [aux_sym_builtin_function_token7] = ACTIONS(129),
    [aux_sym_builtin_function_token8] = ACTIONS(129),
    [aux_sym_builtin_function_token9] = ACTIONS(129),
    [aux_sym_builtin_function_token10] = ACTIONS(129),
    [aux_sym_builtin_function_token11] = ACTIONS(129),
    [aux_sym_builtin_function_token12] = ACTIONS(129),
    [aux_sym_builtin_function_token13] = ACTIONS(129),
    [aux_sym_builtin_function_token14] = ACTIONS(129),
    [aux_sym_builtin_function_token15] = ACTIONS(129),
    [aux_sym_builtin_function_token16] = ACTIONS(129),
    [aux_sym_builtin_function_token17] = ACTIONS(129),
    [aux_sym_builtin_function_token18] = ACTIONS(129),
    [aux_sym_builtin_function_token19] = ACTIONS(129),
    [aux_sym_builtin_function_token20] = ACTIONS(129),
    [aux_sym_builtin_function_token21] = ACTIONS(129),
    [aux_sym_builtin_function_token22] = ACTIONS(129),
    [aux_sym_builtin_function_token23] = ACTIONS(129),
    [aux_sym_builtin_function_token24] = ACTIONS(129),
    [aux_sym_builtin_function_token25] = ACTIONS(129),
    [aux_sym_builtin_function_token26] = ACTIONS(129),
    [aux_sym_builtin_function_token27] = ACTIONS(129),
    [aux_sym_builtin_function_token28] = ACTIONS(129),
    [aux_sym_builtin_function_token29] = ACTIONS(129),
    [aux_sym_builtin_function_token30] = ACTIONS(129),
    [aux_sym_builtin_function_token31] = ACTIONS(129),
    [aux_sym_builtin_function_token32] = ACTIONS(129),
    [aux_sym_builtin_function_token33] = ACTIONS(129),
    [aux_sym_builtin_function_token34] = ACTIONS(129),
    [aux_sym_builtin_function_token35] = ACTIONS(129),
    [aux_sym_builtin_function_token36] = ACTIONS(129),
    [aux_sym_builtin_function_token37] = ACTIONS(129),
    [aux_sym_builtin_function_token38] = ACTIONS(129),
    [aux_sym_builtin_function_token39] = ACTIONS(129),
    [aux_sym_builtin_function_token40] = ACTIONS(129),
    [aux_sym_builtin_function_token41] = ACTIONS(129),
    [aux_sym_builtin_function_token42] = ACTIONS(129),
    [aux_sym_builtin_function_token43] = ACTIONS(129),
    [aux_sym_builtin_function_token44] = ACTIONS(129),
    [aux_sym_builtin_function_token45] = ACTIONS(129),
    [aux_sym_builtin_function_token46] = ACTIONS(129),
    [aux_sym_builtin_function_token47] = ACTIONS(129),
    [aux_sym_builtin_function_token48] = ACTIONS(129),
    [aux_sym_builtin_function_token49] = ACTIONS(129),
    [aux_sym_builtin_function_token50] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BSLASH_EQ] = ACTIONS(129),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_LT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_LT_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_GT_EQ] = ACTIONS(127),
    [anon_sym_BSLASH_LT] = ACTIONS(127),
    [anon_sym_BSLASH_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_STAR_STAR] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(129),
    [sym_semicolon] = ACTIONS(127),
    [aux_sym_string_token1] = ACTIONS(127),
    [aux_sym_string_token2] = ACTIONS(127),
    [sym_number] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [aux_sym_keyword_token1] = ACTIONS(133),
    [aux_sym_keyword_token2] = ACTIONS(133),
    [aux_sym_keyword_token3] = ACTIONS(133),
    [aux_sym_keyword_token4] = ACTIONS(133),
    [aux_sym_keyword_token5] = ACTIONS(133),
    [aux_sym_keyword_token6] = ACTIONS(133),
    [aux_sym_keyword_token7] = ACTIONS(133),
    [aux_sym_keyword_token8] = ACTIONS(133),
    [aux_sym_keyword_token9] = ACTIONS(133),
    [aux_sym_keyword_token10] = ACTIONS(133),
    [aux_sym_keyword_token11] = ACTIONS(133),
    [aux_sym_keyword_token12] = ACTIONS(133),
    [aux_sym_keyword_token13] = ACTIONS(133),
    [aux_sym_keyword_token14] = ACTIONS(133),
    [aux_sym_keyword_token15] = ACTIONS(133),
    [aux_sym_keyword_token16] = ACTIONS(133),
    [aux_sym_keyword_token17] = ACTIONS(133),
    [aux_sym_keyword_token18] = ACTIONS(133),
    [aux_sym_keyword_token19] = ACTIONS(133),
    [aux_sym_keyword_token20] = ACTIONS(133),
    [aux_sym_keyword_token21] = ACTIONS(133),
    [aux_sym_keyword_token22] = ACTIONS(133),
    [aux_sym_keyword_token23] = ACTIONS(133),
    [aux_sym_keyword_token24] = ACTIONS(133),
    [aux_sym_keyword_token25] = ACTIONS(133),
    [aux_sym_keyword_token26] = ACTIONS(133),
    [aux_sym_keyword_token27] = ACTIONS(133),
    [aux_sym_keyword_token28] = ACTIONS(133),
    [aux_sym_keyword_token29] = ACTIONS(133),
    [aux_sym_keyword_token30] = ACTIONS(133),
    [aux_sym_keyword_token31] = ACTIONS(133),
    [aux_sym_keyword_token32] = ACTIONS(133),
    [aux_sym_keyword_token33] = ACTIONS(133),
    [aux_sym_keyword_token34] = ACTIONS(133),
    [aux_sym_keyword_token35] = ACTIONS(133),
    [aux_sym_keyword_token36] = ACTIONS(133),
    [aux_sym_keyword_token37] = ACTIONS(133),
    [aux_sym_keyword_token38] = ACTIONS(133),
    [aux_sym_keyword_token39] = ACTIONS(133),
    [aux_sym_keyword_token40] = ACTIONS(133),
    [aux_sym_keyword_token41] = ACTIONS(133),
    [aux_sym_keyword_token42] = ACTIONS(133),
    [aux_sym_keyword_token43] = ACTIONS(133),
    [aux_sym_keyword_token44] = ACTIONS(133),
    [aux_sym_keyword_token45] = ACTIONS(133),
    [aux_sym_keyword_token46] = ACTIONS(133),
    [aux_sym_keyword_token47] = ACTIONS(133),
    [aux_sym_keyword_token48] = ACTIONS(133),
    [aux_sym_builtin_function_token1] = ACTIONS(133),
    [aux_sym_builtin_function_token2] = ACTIONS(133),
    [aux_sym_builtin_function_token3] = ACTIONS(133),
    [aux_sym_builtin_function_token4] = ACTIONS(133),
    [aux_sym_builtin_function_token5] = ACTIONS(133),
    [aux_sym_builtin_function_token6] = ACTIONS(133),
    [aux_sym_builtin_function_token7] = ACTIONS(133),
    [aux_sym_builtin_function_token8] = ACTIONS(133),
    [aux_sym_builtin_function_token9] = ACTIONS(133),
    [aux_sym_builtin_function_token10] = ACTIONS(133),
    [aux_sym_builtin_function_token11] = ACTIONS(133),
    [aux_sym_builtin_function_token12] = ACTIONS(133),
    [aux_sym_builtin_function_token13] = ACTIONS(133),
    [aux_sym_builtin_function_token14] = ACTIONS(133),
    [aux_sym_builtin_function_token15] = ACTIONS(133),
    [aux_sym_builtin_function_token16] = ACTIONS(133),
    [aux_sym_builtin_function_token17] = ACTIONS(133),
    [aux_sym_builtin_function_token18] = ACTIONS(133),
    [aux_sym_builtin_function_token19] = ACTIONS(133),
    [aux_sym_builtin_function_token20] = ACTIONS(133),
    [aux_sym_builtin_function_token21] = ACTIONS(133),
    [aux_sym_builtin_function_token22] = ACTIONS(133),
    [aux_sym_builtin_function_token23] = ACTIONS(133),
    [aux_sym_builtin_function_token24] = ACTIONS(133),
    [aux_sym_builtin_function_token25] = ACTIONS(133),
    [aux_sym_builtin_function_token26] = ACTIONS(133),
    [aux_sym_builtin_function_token27] = ACTIONS(133),
    [aux_sym_builtin_function_token28] = ACTIONS(133),
    [aux_sym_builtin_function_token29] = ACTIONS(133),
    [aux_sym_builtin_function_token30] = ACTIONS(133),
    [aux_sym_builtin_function_token31] = ACTIONS(133),
    [aux_sym_builtin_function_token32] = ACTIONS(133),
    [aux_sym_builtin_function_token33] = ACTIONS(133),
    [aux_sym_builtin_function_token34] = ACTIONS(133),
    [aux_sym_builtin_function_token35] = ACTIONS(133),
    [aux_sym_builtin_function_token36] = ACTIONS(133),
    [aux_sym_builtin_function_token37] = ACTIONS(133),
    [aux_sym_builtin_function_token38] = ACTIONS(133),
    [aux_sym_builtin_function_token39] = ACTIONS(133),
    [aux_sym_builtin_function_token40] = ACTIONS(133),
    [aux_sym_builtin_function_token41] = ACTIONS(133),
    [aux_sym_builtin_function_token42] = ACTIONS(133),
    [aux_sym_builtin_function_token43] = ACTIONS(133),
    [aux_sym_builtin_function_token44] = ACTIONS(133),
    [aux_sym_builtin_function_token45] = ACTIONS(133),
    [aux_sym_builtin_function_token46] = ACTIONS(133),
    [aux_sym_builtin_function_token47] = ACTIONS(133),
    [aux_sym_builtin_function_token48] = ACTIONS(133),
    [aux_sym_builtin_function_token49] = ACTIONS(133),
    [aux_sym_builtin_function_token50] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_BSLASH_EQ] = ACTIONS(133),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_LT_GT] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(133),
    [anon_sym_LT_LT_EQ] = ACTIONS(131),
    [anon_sym_GT_GT_EQ] = ACTIONS(131),
    [anon_sym_BSLASH_LT] = ACTIONS(131),
    [anon_sym_BSLASH_GT] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_STAR_STAR] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(133),
    [sym_semicolon] = ACTIONS(131),
    [aux_sym_string_token1] = ACTIONS(131),
    [aux_sym_string_token2] = ACTIONS(131),
    [sym_number] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [aux_sym_keyword_token1] = ACTIONS(137),
    [aux_sym_keyword_token2] = ACTIONS(137),
    [aux_sym_keyword_token3] = ACTIONS(137),
    [aux_sym_keyword_token4] = ACTIONS(137),
    [aux_sym_keyword_token5] = ACTIONS(137),
    [aux_sym_keyword_token6] = ACTIONS(137),
    [aux_sym_keyword_token7] = ACTIONS(137),
    [aux_sym_keyword_token8] = ACTIONS(137),
    [aux_sym_keyword_token9] = ACTIONS(137),
    [aux_sym_keyword_token10] = ACTIONS(137),
    [aux_sym_keyword_token11] = ACTIONS(137),
    [aux_sym_keyword_token12] = ACTIONS(137),
    [aux_sym_keyword_token13] = ACTIONS(137),
    [aux_sym_keyword_token14] = ACTIONS(137),
    [aux_sym_keyword_token15] = ACTIONS(137),
    [aux_sym_keyword_token16] = ACTIONS(137),
    [aux_sym_keyword_token17] = ACTIONS(137),
    [aux_sym_keyword_token18] = ACTIONS(137),
    [aux_sym_keyword_token19] = ACTIONS(137),
    [aux_sym_keyword_token20] = ACTIONS(137),
    [aux_sym_keyword_token21] = ACTIONS(137),
    [aux_sym_keyword_token22] = ACTIONS(137),
    [aux_sym_keyword_token23] = ACTIONS(137),
    [aux_sym_keyword_token24] = ACTIONS(137),
    [aux_sym_keyword_token25] = ACTIONS(137),
    [aux_sym_keyword_token26] = ACTIONS(137),
    [aux_sym_keyword_token27] = ACTIONS(137),
    [aux_sym_keyword_token28] = ACTIONS(137),
    [aux_sym_keyword_token29] = ACTIONS(137),
    [aux_sym_keyword_token30] = ACTIONS(137),
    [aux_sym_keyword_token31] = ACTIONS(137),
    [aux_sym_keyword_token32] = ACTIONS(137),
    [aux_sym_keyword_token33] = ACTIONS(137),
    [aux_sym_keyword_token34] = ACTIONS(137),
    [aux_sym_keyword_token35] = ACTIONS(137),
    [aux_sym_keyword_token36] = ACTIONS(137),
    [aux_sym_keyword_token37] = ACTIONS(137),
    [aux_sym_keyword_token38] = ACTIONS(137),
    [aux_sym_keyword_token39] = ACTIONS(137),
    [aux_sym_keyword_token40] = ACTIONS(137),
    [aux_sym_keyword_token41] = ACTIONS(137),
    [aux_sym_keyword_token42] = ACTIONS(137),
    [aux_sym_keyword_token43] = ACTIONS(137),
    [aux_sym_keyword_token44] = ACTIONS(137),
    [aux_sym_keyword_token45] = ACTIONS(137),
    [aux_sym_keyword_token46] = ACTIONS(137),
    [aux_sym_keyword_token47] = ACTIONS(137),
    [aux_sym_keyword_token48] = ACTIONS(137),
    [aux_sym_builtin_function_token1] = ACTIONS(137),
    [aux_sym_builtin_function_token2] = ACTIONS(137),
    [aux_sym_builtin_function_token3] = ACTIONS(137),
    [aux_sym_builtin_function_token4] = ACTIONS(137),
    [aux_sym_builtin_function_token5] = ACTIONS(137),
    [aux_sym_builtin_function_token6] = ACTIONS(137),
    [aux_sym_builtin_function_token7] = ACTIONS(137),
    [aux_sym_builtin_function_token8] = ACTIONS(137),
    [aux_sym_builtin_function_token9] = ACTIONS(137),
    [aux_sym_builtin_function_token10] = ACTIONS(137),
    [aux_sym_builtin_function_token11] = ACTIONS(137),
    [aux_sym_builtin_function_token12] = ACTIONS(137),
    [aux_sym_builtin_function_token13] = ACTIONS(137),
    [aux_sym_builtin_function_token14] = ACTIONS(137),
    [aux_sym_builtin_function_token15] = ACTIONS(137),
    [aux_sym_builtin_function_token16] = ACTIONS(137),
    [aux_sym_builtin_function_token17] = ACTIONS(137),
    [aux_sym_builtin_function_token18] = ACTIONS(137),
    [aux_sym_builtin_function_token19] = ACTIONS(137),
    [aux_sym_builtin_function_token20] = ACTIONS(137),
    [aux_sym_builtin_function_token21] = ACTIONS(137),
    [aux_sym_builtin_function_token22] = ACTIONS(137),
    [aux_sym_builtin_function_token23] = ACTIONS(137),
    [aux_sym_builtin_function_token24] = ACTIONS(137),
    [aux_sym_builtin_function_token25] = ACTIONS(137),
    [aux_sym_builtin_function_token26] = ACTIONS(137),
    [aux_sym_builtin_function_token27] = ACTIONS(137),
    [aux_sym_builtin_function_token28] = ACTIONS(137),
    [aux_sym_builtin_function_token29] = ACTIONS(137),
    [aux_sym_builtin_function_token30] = ACTIONS(137),
    [aux_sym_builtin_function_token31] = ACTIONS(137),
    [aux_sym_builtin_function_token32] = ACTIONS(137),
    [aux_sym_builtin_function_token33] = ACTIONS(137),
    [aux_sym_builtin_function_token34] = ACTIONS(137),
    [aux_sym_builtin_function_token35] = ACTIONS(137),
    [aux_sym_builtin_function_token36] = ACTIONS(137),
    [aux_sym_builtin_function_token37] = ACTIONS(137),
    [aux_sym_builtin_function_token38] = ACTIONS(137),
    [aux_sym_builtin_function_token39] = ACTIONS(137),
    [aux_sym_builtin_function_token40] = ACTIONS(137),
    [aux_sym_builtin_function_token41] = ACTIONS(137),
    [aux_sym_builtin_function_token42] = ACTIONS(137),
    [aux_sym_builtin_function_token43] = ACTIONS(137),
    [aux_sym_builtin_function_token44] = ACTIONS(137),
    [aux_sym_builtin_function_token45] = ACTIONS(137),
    [aux_sym_builtin_function_token46] = ACTIONS(137),
    [aux_sym_builtin_function_token47] = ACTIONS(137),
    [aux_sym_builtin_function_token48] = ACTIONS(137),
    [aux_sym_builtin_function_token49] = ACTIONS(137),
    [aux_sym_builtin_function_token50] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_BSLASH_EQ] = ACTIONS(137),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_GT] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(137),
    [anon_sym_LT_LT_EQ] = ACTIONS(135),
    [anon_sym_GT_GT_EQ] = ACTIONS(135),
    [anon_sym_BSLASH_LT] = ACTIONS(135),
    [anon_sym_BSLASH_GT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_STAR_STAR] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(135),
    [aux_sym_string_token2] = ACTIONS(135),
    [sym_number] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__argument_list_repeat1,
  [13] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym__argument_list_repeat1,
  [26] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__argument_list_repeat1,
  [39] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [47] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [54] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
  [61] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 13,
  [SMALL_STATE(22)] = 26,
  [SMALL_STATE(23)] = 39,
  [SMALL_STATE(24)] = 47,
  [SMALL_STATE(25)] = 54,
  [SMALL_STATE(26)] = 61,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_open, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_open, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_close, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_close, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_list_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rexx_external_scanner_create(void);
void tree_sitter_rexx_external_scanner_destroy(void *);
bool tree_sitter_rexx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rexx_external_scanner_serialize(void *, char *);
void tree_sitter_rexx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rexx(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rexx_external_scanner_create,
      tree_sitter_rexx_external_scanner_destroy,
      tree_sitter_rexx_external_scanner_scan,
      tree_sitter_rexx_external_scanner_serialize,
      tree_sitter_rexx_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
