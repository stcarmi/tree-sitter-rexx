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
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 137
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_LPAREN2 = 130,
  sym_semicolon = 131,
  aux_sym_string_token1 = 132,
  aux_sym_string_token2 = 133,
  sym_number = 134,
  sym_identifier = 135,
  sym_block_comment = 136,
  sym_program = 137,
  sym__token = 138,
  sym_label = 139,
  sym_function_call = 140,
  sym__argument_list = 141,
  sym__argument = 142,
  sym_keyword = 143,
  sym_builtin_function = 144,
  sym_operator = 145,
  sym_string = 146,
  aux_sym_program_repeat1 = 147,
  aux_sym__argument_list_repeat1 = 148,
  aux_sym__argument_repeat1 = 149,
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
  [anon_sym_LPAREN2] = "(",
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
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__argument_list_repeat1] = "_argument_list_repeat1",
  [aux_sym__argument_repeat1] = "_argument_repeat1",
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
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
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
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__argument_list_repeat1] = aux_sym__argument_list_repeat1,
  [aux_sym__argument_repeat1] = aux_sym__argument_repeat1,
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
  [anon_sym_LPAREN2] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 11,
  [19] = 9,
  [20] = 10,
  [21] = 5,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 3,
        '%', 132,
        '&', 136,
        '\'', 4,
        '(', 11,
        ')', 12,
        '*', 129,
        '+', 127,
        ',', 13,
        '-', 128,
        '/', 130,
        ':', 10,
        ';', 140,
        '<', 116,
        '=', 112,
        '>', 117,
        '\\', 138,
        '|', 137,
        'A', 167,
        'a', 167,
        'B', 146,
        'b', 146,
        'C', 149,
        'c', 149,
        'D', 147,
        'd', 147,
        'E', 264,
        'e', 264,
        'F', 303,
        'f', 303,
        'I', 233,
        'i', 233,
        'J', 398,
        'j', 398,
        'L', 163,
        'l', 163,
        'N', 301,
        'n', 301,
        'O', 234,
        'o', 234,
        'P', 155,
        'p', 155,
        'Q', 399,
        'q', 399,
        'R', 154,
        'r', 154,
        'S', 150,
        's', 150,
        'T', 249,
        't', 249,
        'U', 294,
        'u', 294,
        'V', 151,
        'v', 151,
        'W', 244,
        'w', 244,
        'X', 148,
        'x', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '%', 132,
        '&', 136,
        '\'', 4,
        '(', 11,
        ')', 12,
        '*', 129,
        '+', 127,
        ',', 13,
        '-', 128,
        '/', 130,
        '<', 116,
        '=', 112,
        '>', 117,
        '\\', 138,
        '|', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '%', 132,
        '&', 136,
        '\'', 4,
        '(', 139,
        ')', 12,
        '*', 129,
        '+', 127,
        ',', 13,
        '-', 128,
        '/', 130,
        '<', 116,
        '=', 112,
        '>', 117,
        '\\', 138,
        '|', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 3,
        '%', 132,
        '&', 136,
        '\'', 4,
        '(', 139,
        ')', 12,
        '*', 129,
        '+', 127,
        ',', 13,
        '-', 128,
        '/', 130,
        ';', 140,
        '<', 116,
        '=', 112,
        '>', 117,
        '\\', 138,
        '|', 137,
        'A', 167,
        'a', 167,
        'B', 146,
        'b', 146,
        'C', 149,
        'c', 149,
        'D', 147,
        'd', 147,
        'E', 264,
        'e', 264,
        'F', 303,
        'f', 303,
        'I', 233,
        'i', 233,
        'J', 398,
        'j', 398,
        'L', 163,
        'l', 163,
        'N', 301,
        'n', 301,
        'O', 234,
        'o', 234,
        'P', 155,
        'p', 155,
        'Q', 399,
        'q', 399,
        'R', 154,
        'r', 154,
        'S', 150,
        's', 150,
        'T', 249,
        't', 249,
        'U', 294,
        'u', 294,
        'V', 151,
        'v', 151,
        'W', 244,
        'w', 244,
        'X', 148,
        'x', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_keyword_token20);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_keyword_token21);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_keyword_token22);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_keyword_token23);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_keyword_token24);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_keyword_token25);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_keyword_token26);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_keyword_token27);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_keyword_token28);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_keyword_token29);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_keyword_token30);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_keyword_token31);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_keyword_token32);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_keyword_token33);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_keyword_token34);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_keyword_token35);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_keyword_token36);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_keyword_token37);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_keyword_token38);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_keyword_token39);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_keyword_token40);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_keyword_token41);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_keyword_token42);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_keyword_token43);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_keyword_token44);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_keyword_token45);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_keyword_token46);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_keyword_token47);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_keyword_token48);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_builtin_function_token1);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_builtin_function_token2);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_builtin_function_token3);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_builtin_function_token4);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_builtin_function_token5);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_builtin_function_token6);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_builtin_function_token7);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_builtin_function_token8);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_builtin_function_token9);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_builtin_function_token10);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_builtin_function_token11);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_builtin_function_token12);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_builtin_function_token13);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_builtin_function_token14);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_builtin_function_token15);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_builtin_function_token16);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_builtin_function_token17);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_builtin_function_token18);
      ADVANCE_MAP(
        'I', 297,
        'i', 297,
        'L', 224,
        'l', 224,
        'P', 308,
        'p', 308,
        'S', 83,
        's', 83,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_builtin_function_token19);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_builtin_function_token20);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_builtin_function_token21);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_builtin_function_token22);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_builtin_function_token23);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_builtin_function_token24);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_builtin_function_token25);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_builtin_function_token26);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_builtin_function_token27);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_builtin_function_token28);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_builtin_function_token29);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_builtin_function_token30);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_builtin_function_token31);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_builtin_function_token32);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_builtin_function_token33);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_builtin_function_token34);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_builtin_function_token35);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_builtin_function_token36);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_builtin_function_token37);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_builtin_function_token38);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_builtin_function_token39);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_builtin_function_token40);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_builtin_function_token41);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_builtin_function_token42);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_builtin_function_token43);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_builtin_function_token44);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_builtin_function_token45);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_builtin_function_token46);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_builtin_function_token47);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_builtin_function_token48);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_builtin_function_token49);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_builtin_function_token50);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASH_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(126);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '2', 168,
        'A', 382,
        'a', 382,
        'E', 265,
        'e', 265,
        'I', 239,
        'i', 239,
        'O', 17,
        'o', 17,
        'R', 305,
        'r', 305,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '2', 180,
        'A', 271,
        'a', 271,
        'E', 296,
        'e', 296,
        'H', 160,
        'h', 160,
        'O', 281,
        'o', 281,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 414,
        'a', 414,
        'E', 274,
        'e', 274,
        'I', 240,
        'i', 240,
        'O', 400,
        'o', 400,
        'T', 336,
        't', 336,
        'U', 171,
        'u', 171,
        'Y', 280,
        'y', 280,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 351,
        'a', 351,
        'O', 355,
        'o', 355,
        'R', 302,
        'r', 302,
        'U', 272,
        'u', 272,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(312);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 365,
        'a', 365,
        'E', 152,
        'e', 152,
        'I', 295,
        'i', 295,
        'O', 411,
        'o', 411,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(170);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(96);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 180:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(345);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(14);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'F', 235,
        'f', 235,
        'N', 59,
        'n', 59,
        'P', 384,
        'p', 384,
        'T', 250,
        't', 250,
        'V', 221,
        'v', 221,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(259);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(385);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(388);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(214);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'L', 362,
        'l', 362,
        'N', 181,
        'n', 181,
        'R', 337,
        'r', 337,
        'X', 255,
        'x', 255,
      );
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(313);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(378);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(346);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(350);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(379);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(419);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 8, .external_lex_state = 1},
  [2] = {.lex_state = 8, .external_lex_state = 1},
  [3] = {.lex_state = 8, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 8, .external_lex_state = 1},
  [6] = {.lex_state = 8, .external_lex_state = 1},
  [7] = {.lex_state = 8, .external_lex_state = 1},
  [8] = {.lex_state = 8, .external_lex_state = 1},
  [9] = {.lex_state = 8, .external_lex_state = 1},
  [10] = {.lex_state = 8, .external_lex_state = 1},
  [11] = {.lex_state = 8, .external_lex_state = 1},
  [12] = {.lex_state = 2, .external_lex_state = 1},
  [13] = {.lex_state = 2, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 1},
  [16] = {.lex_state = 2, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 2, .external_lex_state = 1},
  [19] = {.lex_state = 2, .external_lex_state = 1},
  [20] = {.lex_state = 2, .external_lex_state = 1},
  [21] = {.lex_state = 2, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
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
    [anon_sym_LPAREN2] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(26),
    [sym__token] = STATE(3),
    [sym_label] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_builtin_function] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(9),
    [aux_sym_keyword_token4] = ACTIONS(9),
    [aux_sym_keyword_token5] = ACTIONS(9),
    [aux_sym_keyword_token6] = ACTIONS(9),
    [aux_sym_keyword_token7] = ACTIONS(9),
    [aux_sym_keyword_token8] = ACTIONS(9),
    [aux_sym_keyword_token9] = ACTIONS(9),
    [aux_sym_keyword_token10] = ACTIONS(9),
    [aux_sym_keyword_token11] = ACTIONS(9),
    [aux_sym_keyword_token12] = ACTIONS(9),
    [aux_sym_keyword_token13] = ACTIONS(9),
    [aux_sym_keyword_token14] = ACTIONS(9),
    [aux_sym_keyword_token15] = ACTIONS(9),
    [aux_sym_keyword_token16] = ACTIONS(9),
    [aux_sym_keyword_token17] = ACTIONS(9),
    [aux_sym_keyword_token18] = ACTIONS(9),
    [aux_sym_keyword_token19] = ACTIONS(9),
    [aux_sym_keyword_token20] = ACTIONS(9),
    [aux_sym_keyword_token21] = ACTIONS(9),
    [aux_sym_keyword_token22] = ACTIONS(9),
    [aux_sym_keyword_token23] = ACTIONS(9),
    [aux_sym_keyword_token24] = ACTIONS(9),
    [aux_sym_keyword_token25] = ACTIONS(9),
    [aux_sym_keyword_token26] = ACTIONS(9),
    [aux_sym_keyword_token27] = ACTIONS(9),
    [aux_sym_keyword_token28] = ACTIONS(9),
    [aux_sym_keyword_token29] = ACTIONS(9),
    [aux_sym_keyword_token30] = ACTIONS(9),
    [aux_sym_keyword_token31] = ACTIONS(9),
    [aux_sym_keyword_token32] = ACTIONS(9),
    [aux_sym_keyword_token33] = ACTIONS(9),
    [aux_sym_keyword_token34] = ACTIONS(9),
    [aux_sym_keyword_token35] = ACTIONS(9),
    [aux_sym_keyword_token36] = ACTIONS(9),
    [aux_sym_keyword_token37] = ACTIONS(9),
    [aux_sym_keyword_token38] = ACTIONS(9),
    [aux_sym_keyword_token39] = ACTIONS(9),
    [aux_sym_keyword_token40] = ACTIONS(9),
    [aux_sym_keyword_token41] = ACTIONS(9),
    [aux_sym_keyword_token42] = ACTIONS(9),
    [aux_sym_keyword_token43] = ACTIONS(9),
    [aux_sym_keyword_token44] = ACTIONS(9),
    [aux_sym_keyword_token45] = ACTIONS(9),
    [aux_sym_keyword_token46] = ACTIONS(9),
    [aux_sym_keyword_token47] = ACTIONS(9),
    [aux_sym_keyword_token48] = ACTIONS(9),
    [aux_sym_builtin_function_token1] = ACTIONS(11),
    [aux_sym_builtin_function_token2] = ACTIONS(11),
    [aux_sym_builtin_function_token3] = ACTIONS(11),
    [aux_sym_builtin_function_token4] = ACTIONS(11),
    [aux_sym_builtin_function_token5] = ACTIONS(11),
    [aux_sym_builtin_function_token6] = ACTIONS(11),
    [aux_sym_builtin_function_token7] = ACTIONS(11),
    [aux_sym_builtin_function_token8] = ACTIONS(11),
    [aux_sym_builtin_function_token9] = ACTIONS(11),
    [aux_sym_builtin_function_token10] = ACTIONS(11),
    [aux_sym_builtin_function_token11] = ACTIONS(11),
    [aux_sym_builtin_function_token12] = ACTIONS(11),
    [aux_sym_builtin_function_token13] = ACTIONS(11),
    [aux_sym_builtin_function_token14] = ACTIONS(11),
    [aux_sym_builtin_function_token15] = ACTIONS(11),
    [aux_sym_builtin_function_token16] = ACTIONS(11),
    [aux_sym_builtin_function_token17] = ACTIONS(11),
    [aux_sym_builtin_function_token18] = ACTIONS(11),
    [aux_sym_builtin_function_token19] = ACTIONS(11),
    [aux_sym_builtin_function_token20] = ACTIONS(11),
    [aux_sym_builtin_function_token21] = ACTIONS(11),
    [aux_sym_builtin_function_token22] = ACTIONS(11),
    [aux_sym_builtin_function_token23] = ACTIONS(11),
    [aux_sym_builtin_function_token24] = ACTIONS(11),
    [aux_sym_builtin_function_token25] = ACTIONS(11),
    [aux_sym_builtin_function_token26] = ACTIONS(11),
    [aux_sym_builtin_function_token27] = ACTIONS(11),
    [aux_sym_builtin_function_token28] = ACTIONS(11),
    [aux_sym_builtin_function_token29] = ACTIONS(11),
    [aux_sym_builtin_function_token30] = ACTIONS(11),
    [aux_sym_builtin_function_token31] = ACTIONS(11),
    [aux_sym_builtin_function_token32] = ACTIONS(11),
    [aux_sym_builtin_function_token33] = ACTIONS(11),
    [aux_sym_builtin_function_token34] = ACTIONS(11),
    [aux_sym_builtin_function_token35] = ACTIONS(11),
    [aux_sym_builtin_function_token36] = ACTIONS(11),
    [aux_sym_builtin_function_token37] = ACTIONS(11),
    [aux_sym_builtin_function_token38] = ACTIONS(11),
    [aux_sym_builtin_function_token39] = ACTIONS(11),
    [aux_sym_builtin_function_token40] = ACTIONS(11),
    [aux_sym_builtin_function_token41] = ACTIONS(11),
    [aux_sym_builtin_function_token42] = ACTIONS(11),
    [aux_sym_builtin_function_token43] = ACTIONS(11),
    [aux_sym_builtin_function_token44] = ACTIONS(11),
    [aux_sym_builtin_function_token45] = ACTIONS(11),
    [aux_sym_builtin_function_token46] = ACTIONS(11),
    [aux_sym_builtin_function_token47] = ACTIONS(11),
    [aux_sym_builtin_function_token48] = ACTIONS(11),
    [aux_sym_builtin_function_token49] = ACTIONS(11),
    [aux_sym_builtin_function_token50] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BSLASH_EQ] = ACTIONS(13),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(7),
    [anon_sym_GT_EQ] = ACTIONS(7),
    [anon_sym_LT_GT] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_EQ] = ACTIONS(7),
    [anon_sym_GT_GT_EQ] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(7),
    [anon_sym_BSLASH_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_STAR_STAR] = ACTIONS(7),
    [anon_sym_PIPE_PIPE] = ACTIONS(7),
    [anon_sym_AMP_AMP] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_LPAREN2] = ACTIONS(7),
    [sym_semicolon] = ACTIONS(15),
    [aux_sym_string_token1] = ACTIONS(17),
    [aux_sym_string_token2] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_identifier] = ACTIONS(19),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_label] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_builtin_function] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [aux_sym_keyword_token1] = ACTIONS(26),
    [aux_sym_keyword_token2] = ACTIONS(26),
    [aux_sym_keyword_token3] = ACTIONS(26),
    [aux_sym_keyword_token4] = ACTIONS(26),
    [aux_sym_keyword_token5] = ACTIONS(26),
    [aux_sym_keyword_token6] = ACTIONS(26),
    [aux_sym_keyword_token7] = ACTIONS(26),
    [aux_sym_keyword_token8] = ACTIONS(26),
    [aux_sym_keyword_token9] = ACTIONS(26),
    [aux_sym_keyword_token10] = ACTIONS(26),
    [aux_sym_keyword_token11] = ACTIONS(26),
    [aux_sym_keyword_token12] = ACTIONS(26),
    [aux_sym_keyword_token13] = ACTIONS(26),
    [aux_sym_keyword_token14] = ACTIONS(26),
    [aux_sym_keyword_token15] = ACTIONS(26),
    [aux_sym_keyword_token16] = ACTIONS(26),
    [aux_sym_keyword_token17] = ACTIONS(26),
    [aux_sym_keyword_token18] = ACTIONS(26),
    [aux_sym_keyword_token19] = ACTIONS(26),
    [aux_sym_keyword_token20] = ACTIONS(26),
    [aux_sym_keyword_token21] = ACTIONS(26),
    [aux_sym_keyword_token22] = ACTIONS(26),
    [aux_sym_keyword_token23] = ACTIONS(26),
    [aux_sym_keyword_token24] = ACTIONS(26),
    [aux_sym_keyword_token25] = ACTIONS(26),
    [aux_sym_keyword_token26] = ACTIONS(26),
    [aux_sym_keyword_token27] = ACTIONS(26),
    [aux_sym_keyword_token28] = ACTIONS(26),
    [aux_sym_keyword_token29] = ACTIONS(26),
    [aux_sym_keyword_token30] = ACTIONS(26),
    [aux_sym_keyword_token31] = ACTIONS(26),
    [aux_sym_keyword_token32] = ACTIONS(26),
    [aux_sym_keyword_token33] = ACTIONS(26),
    [aux_sym_keyword_token34] = ACTIONS(26),
    [aux_sym_keyword_token35] = ACTIONS(26),
    [aux_sym_keyword_token36] = ACTIONS(26),
    [aux_sym_keyword_token37] = ACTIONS(26),
    [aux_sym_keyword_token38] = ACTIONS(26),
    [aux_sym_keyword_token39] = ACTIONS(26),
    [aux_sym_keyword_token40] = ACTIONS(26),
    [aux_sym_keyword_token41] = ACTIONS(26),
    [aux_sym_keyword_token42] = ACTIONS(26),
    [aux_sym_keyword_token43] = ACTIONS(26),
    [aux_sym_keyword_token44] = ACTIONS(26),
    [aux_sym_keyword_token45] = ACTIONS(26),
    [aux_sym_keyword_token46] = ACTIONS(26),
    [aux_sym_keyword_token47] = ACTIONS(26),
    [aux_sym_keyword_token48] = ACTIONS(26),
    [aux_sym_builtin_function_token1] = ACTIONS(29),
    [aux_sym_builtin_function_token2] = ACTIONS(29),
    [aux_sym_builtin_function_token3] = ACTIONS(29),
    [aux_sym_builtin_function_token4] = ACTIONS(29),
    [aux_sym_builtin_function_token5] = ACTIONS(29),
    [aux_sym_builtin_function_token6] = ACTIONS(29),
    [aux_sym_builtin_function_token7] = ACTIONS(29),
    [aux_sym_builtin_function_token8] = ACTIONS(29),
    [aux_sym_builtin_function_token9] = ACTIONS(29),
    [aux_sym_builtin_function_token10] = ACTIONS(29),
    [aux_sym_builtin_function_token11] = ACTIONS(29),
    [aux_sym_builtin_function_token12] = ACTIONS(29),
    [aux_sym_builtin_function_token13] = ACTIONS(29),
    [aux_sym_builtin_function_token14] = ACTIONS(29),
    [aux_sym_builtin_function_token15] = ACTIONS(29),
    [aux_sym_builtin_function_token16] = ACTIONS(29),
    [aux_sym_builtin_function_token17] = ACTIONS(29),
    [aux_sym_builtin_function_token18] = ACTIONS(29),
    [aux_sym_builtin_function_token19] = ACTIONS(29),
    [aux_sym_builtin_function_token20] = ACTIONS(29),
    [aux_sym_builtin_function_token21] = ACTIONS(29),
    [aux_sym_builtin_function_token22] = ACTIONS(29),
    [aux_sym_builtin_function_token23] = ACTIONS(29),
    [aux_sym_builtin_function_token24] = ACTIONS(29),
    [aux_sym_builtin_function_token25] = ACTIONS(29),
    [aux_sym_builtin_function_token26] = ACTIONS(29),
    [aux_sym_builtin_function_token27] = ACTIONS(29),
    [aux_sym_builtin_function_token28] = ACTIONS(29),
    [aux_sym_builtin_function_token29] = ACTIONS(29),
    [aux_sym_builtin_function_token30] = ACTIONS(29),
    [aux_sym_builtin_function_token31] = ACTIONS(29),
    [aux_sym_builtin_function_token32] = ACTIONS(29),
    [aux_sym_builtin_function_token33] = ACTIONS(29),
    [aux_sym_builtin_function_token34] = ACTIONS(29),
    [aux_sym_builtin_function_token35] = ACTIONS(29),
    [aux_sym_builtin_function_token36] = ACTIONS(29),
    [aux_sym_builtin_function_token37] = ACTIONS(29),
    [aux_sym_builtin_function_token38] = ACTIONS(29),
    [aux_sym_builtin_function_token39] = ACTIONS(29),
    [aux_sym_builtin_function_token40] = ACTIONS(29),
    [aux_sym_builtin_function_token41] = ACTIONS(29),
    [aux_sym_builtin_function_token42] = ACTIONS(29),
    [aux_sym_builtin_function_token43] = ACTIONS(29),
    [aux_sym_builtin_function_token44] = ACTIONS(29),
    [aux_sym_builtin_function_token45] = ACTIONS(29),
    [aux_sym_builtin_function_token46] = ACTIONS(29),
    [aux_sym_builtin_function_token47] = ACTIONS(29),
    [aux_sym_builtin_function_token48] = ACTIONS(29),
    [aux_sym_builtin_function_token49] = ACTIONS(29),
    [aux_sym_builtin_function_token50] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(32),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BSLASH_EQ] = ACTIONS(32),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(32),
    [anon_sym_GT] = ACTIONS(32),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(32),
    [anon_sym_GT_GT] = ACTIONS(32),
    [anon_sym_LT_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_GT_EQ] = ACTIONS(23),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(32),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(32),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [sym_semicolon] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(38),
    [aux_sym_string_token2] = ACTIONS(38),
    [sym_number] = ACTIONS(35),
    [sym_identifier] = ACTIONS(41),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_label] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_builtin_function] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_keyword_token1] = ACTIONS(9),
    [aux_sym_keyword_token2] = ACTIONS(9),
    [aux_sym_keyword_token3] = ACTIONS(9),
    [aux_sym_keyword_token4] = ACTIONS(9),
    [aux_sym_keyword_token5] = ACTIONS(9),
    [aux_sym_keyword_token6] = ACTIONS(9),
    [aux_sym_keyword_token7] = ACTIONS(9),
    [aux_sym_keyword_token8] = ACTIONS(9),
    [aux_sym_keyword_token9] = ACTIONS(9),
    [aux_sym_keyword_token10] = ACTIONS(9),
    [aux_sym_keyword_token11] = ACTIONS(9),
    [aux_sym_keyword_token12] = ACTIONS(9),
    [aux_sym_keyword_token13] = ACTIONS(9),
    [aux_sym_keyword_token14] = ACTIONS(9),
    [aux_sym_keyword_token15] = ACTIONS(9),
    [aux_sym_keyword_token16] = ACTIONS(9),
    [aux_sym_keyword_token17] = ACTIONS(9),
    [aux_sym_keyword_token18] = ACTIONS(9),
    [aux_sym_keyword_token19] = ACTIONS(9),
    [aux_sym_keyword_token20] = ACTIONS(9),
    [aux_sym_keyword_token21] = ACTIONS(9),
    [aux_sym_keyword_token22] = ACTIONS(9),
    [aux_sym_keyword_token23] = ACTIONS(9),
    [aux_sym_keyword_token24] = ACTIONS(9),
    [aux_sym_keyword_token25] = ACTIONS(9),
    [aux_sym_keyword_token26] = ACTIONS(9),
    [aux_sym_keyword_token27] = ACTIONS(9),
    [aux_sym_keyword_token28] = ACTIONS(9),
    [aux_sym_keyword_token29] = ACTIONS(9),
    [aux_sym_keyword_token30] = ACTIONS(9),
    [aux_sym_keyword_token31] = ACTIONS(9),
    [aux_sym_keyword_token32] = ACTIONS(9),
    [aux_sym_keyword_token33] = ACTIONS(9),
    [aux_sym_keyword_token34] = ACTIONS(9),
    [aux_sym_keyword_token35] = ACTIONS(9),
    [aux_sym_keyword_token36] = ACTIONS(9),
    [aux_sym_keyword_token37] = ACTIONS(9),
    [aux_sym_keyword_token38] = ACTIONS(9),
    [aux_sym_keyword_token39] = ACTIONS(9),
    [aux_sym_keyword_token40] = ACTIONS(9),
    [aux_sym_keyword_token41] = ACTIONS(9),
    [aux_sym_keyword_token42] = ACTIONS(9),
    [aux_sym_keyword_token43] = ACTIONS(9),
    [aux_sym_keyword_token44] = ACTIONS(9),
    [aux_sym_keyword_token45] = ACTIONS(9),
    [aux_sym_keyword_token46] = ACTIONS(9),
    [aux_sym_keyword_token47] = ACTIONS(9),
    [aux_sym_keyword_token48] = ACTIONS(9),
    [aux_sym_builtin_function_token1] = ACTIONS(11),
    [aux_sym_builtin_function_token2] = ACTIONS(11),
    [aux_sym_builtin_function_token3] = ACTIONS(11),
    [aux_sym_builtin_function_token4] = ACTIONS(11),
    [aux_sym_builtin_function_token5] = ACTIONS(11),
    [aux_sym_builtin_function_token6] = ACTIONS(11),
    [aux_sym_builtin_function_token7] = ACTIONS(11),
    [aux_sym_builtin_function_token8] = ACTIONS(11),
    [aux_sym_builtin_function_token9] = ACTIONS(11),
    [aux_sym_builtin_function_token10] = ACTIONS(11),
    [aux_sym_builtin_function_token11] = ACTIONS(11),
    [aux_sym_builtin_function_token12] = ACTIONS(11),
    [aux_sym_builtin_function_token13] = ACTIONS(11),
    [aux_sym_builtin_function_token14] = ACTIONS(11),
    [aux_sym_builtin_function_token15] = ACTIONS(11),
    [aux_sym_builtin_function_token16] = ACTIONS(11),
    [aux_sym_builtin_function_token17] = ACTIONS(11),
    [aux_sym_builtin_function_token18] = ACTIONS(11),
    [aux_sym_builtin_function_token19] = ACTIONS(11),
    [aux_sym_builtin_function_token20] = ACTIONS(11),
    [aux_sym_builtin_function_token21] = ACTIONS(11),
    [aux_sym_builtin_function_token22] = ACTIONS(11),
    [aux_sym_builtin_function_token23] = ACTIONS(11),
    [aux_sym_builtin_function_token24] = ACTIONS(11),
    [aux_sym_builtin_function_token25] = ACTIONS(11),
    [aux_sym_builtin_function_token26] = ACTIONS(11),
    [aux_sym_builtin_function_token27] = ACTIONS(11),
    [aux_sym_builtin_function_token28] = ACTIONS(11),
    [aux_sym_builtin_function_token29] = ACTIONS(11),
    [aux_sym_builtin_function_token30] = ACTIONS(11),
    [aux_sym_builtin_function_token31] = ACTIONS(11),
    [aux_sym_builtin_function_token32] = ACTIONS(11),
    [aux_sym_builtin_function_token33] = ACTIONS(11),
    [aux_sym_builtin_function_token34] = ACTIONS(11),
    [aux_sym_builtin_function_token35] = ACTIONS(11),
    [aux_sym_builtin_function_token36] = ACTIONS(11),
    [aux_sym_builtin_function_token37] = ACTIONS(11),
    [aux_sym_builtin_function_token38] = ACTIONS(11),
    [aux_sym_builtin_function_token39] = ACTIONS(11),
    [aux_sym_builtin_function_token40] = ACTIONS(11),
    [aux_sym_builtin_function_token41] = ACTIONS(11),
    [aux_sym_builtin_function_token42] = ACTIONS(11),
    [aux_sym_builtin_function_token43] = ACTIONS(11),
    [aux_sym_builtin_function_token44] = ACTIONS(11),
    [aux_sym_builtin_function_token45] = ACTIONS(11),
    [aux_sym_builtin_function_token46] = ACTIONS(11),
    [aux_sym_builtin_function_token47] = ACTIONS(11),
    [aux_sym_builtin_function_token48] = ACTIONS(11),
    [aux_sym_builtin_function_token49] = ACTIONS(11),
    [aux_sym_builtin_function_token50] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BSLASH_EQ] = ACTIONS(13),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(7),
    [anon_sym_GT_EQ] = ACTIONS(7),
    [anon_sym_LT_GT] = ACTIONS(7),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_GT_GT] = ACTIONS(13),
    [anon_sym_LT_LT_EQ] = ACTIONS(7),
    [anon_sym_GT_GT_EQ] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(7),
    [anon_sym_BSLASH_GT] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_STAR_STAR] = ACTIONS(7),
    [anon_sym_PIPE_PIPE] = ACTIONS(7),
    [anon_sym_AMP_AMP] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_LPAREN2] = ACTIONS(7),
    [sym_semicolon] = ACTIONS(46),
    [aux_sym_string_token1] = ACTIONS(17),
    [aux_sym_string_token2] = ACTIONS(17),
    [sym_number] = ACTIONS(46),
    [sym_identifier] = ACTIONS(19),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [aux_sym_keyword_token1] = ACTIONS(54),
    [aux_sym_keyword_token2] = ACTIONS(54),
    [aux_sym_keyword_token3] = ACTIONS(54),
    [aux_sym_keyword_token4] = ACTIONS(54),
    [aux_sym_keyword_token5] = ACTIONS(54),
    [aux_sym_keyword_token6] = ACTIONS(54),
    [aux_sym_keyword_token7] = ACTIONS(54),
    [aux_sym_keyword_token8] = ACTIONS(54),
    [aux_sym_keyword_token9] = ACTIONS(54),
    [aux_sym_keyword_token10] = ACTIONS(54),
    [aux_sym_keyword_token11] = ACTIONS(54),
    [aux_sym_keyword_token12] = ACTIONS(54),
    [aux_sym_keyword_token13] = ACTIONS(54),
    [aux_sym_keyword_token14] = ACTIONS(54),
    [aux_sym_keyword_token15] = ACTIONS(54),
    [aux_sym_keyword_token16] = ACTIONS(54),
    [aux_sym_keyword_token17] = ACTIONS(54),
    [aux_sym_keyword_token18] = ACTIONS(54),
    [aux_sym_keyword_token19] = ACTIONS(54),
    [aux_sym_keyword_token20] = ACTIONS(54),
    [aux_sym_keyword_token21] = ACTIONS(54),
    [aux_sym_keyword_token22] = ACTIONS(54),
    [aux_sym_keyword_token23] = ACTIONS(54),
    [aux_sym_keyword_token24] = ACTIONS(54),
    [aux_sym_keyword_token25] = ACTIONS(54),
    [aux_sym_keyword_token26] = ACTIONS(54),
    [aux_sym_keyword_token27] = ACTIONS(54),
    [aux_sym_keyword_token28] = ACTIONS(54),
    [aux_sym_keyword_token29] = ACTIONS(54),
    [aux_sym_keyword_token30] = ACTIONS(54),
    [aux_sym_keyword_token31] = ACTIONS(54),
    [aux_sym_keyword_token32] = ACTIONS(54),
    [aux_sym_keyword_token33] = ACTIONS(54),
    [aux_sym_keyword_token34] = ACTIONS(54),
    [aux_sym_keyword_token35] = ACTIONS(54),
    [aux_sym_keyword_token36] = ACTIONS(54),
    [aux_sym_keyword_token37] = ACTIONS(54),
    [aux_sym_keyword_token38] = ACTIONS(54),
    [aux_sym_keyword_token39] = ACTIONS(54),
    [aux_sym_keyword_token40] = ACTIONS(54),
    [aux_sym_keyword_token41] = ACTIONS(54),
    [aux_sym_keyword_token42] = ACTIONS(54),
    [aux_sym_keyword_token43] = ACTIONS(54),
    [aux_sym_keyword_token44] = ACTIONS(54),
    [aux_sym_keyword_token45] = ACTIONS(54),
    [aux_sym_keyword_token46] = ACTIONS(54),
    [aux_sym_keyword_token47] = ACTIONS(54),
    [aux_sym_keyword_token48] = ACTIONS(54),
    [aux_sym_builtin_function_token1] = ACTIONS(54),
    [aux_sym_builtin_function_token2] = ACTIONS(54),
    [aux_sym_builtin_function_token3] = ACTIONS(54),
    [aux_sym_builtin_function_token4] = ACTIONS(54),
    [aux_sym_builtin_function_token5] = ACTIONS(54),
    [aux_sym_builtin_function_token6] = ACTIONS(54),
    [aux_sym_builtin_function_token7] = ACTIONS(54),
    [aux_sym_builtin_function_token8] = ACTIONS(54),
    [aux_sym_builtin_function_token9] = ACTIONS(54),
    [aux_sym_builtin_function_token10] = ACTIONS(54),
    [aux_sym_builtin_function_token11] = ACTIONS(54),
    [aux_sym_builtin_function_token12] = ACTIONS(54),
    [aux_sym_builtin_function_token13] = ACTIONS(54),
    [aux_sym_builtin_function_token14] = ACTIONS(54),
    [aux_sym_builtin_function_token15] = ACTIONS(54),
    [aux_sym_builtin_function_token16] = ACTIONS(54),
    [aux_sym_builtin_function_token17] = ACTIONS(54),
    [aux_sym_builtin_function_token18] = ACTIONS(54),
    [aux_sym_builtin_function_token19] = ACTIONS(54),
    [aux_sym_builtin_function_token20] = ACTIONS(54),
    [aux_sym_builtin_function_token21] = ACTIONS(54),
    [aux_sym_builtin_function_token22] = ACTIONS(54),
    [aux_sym_builtin_function_token23] = ACTIONS(54),
    [aux_sym_builtin_function_token24] = ACTIONS(54),
    [aux_sym_builtin_function_token25] = ACTIONS(54),
    [aux_sym_builtin_function_token26] = ACTIONS(54),
    [aux_sym_builtin_function_token27] = ACTIONS(54),
    [aux_sym_builtin_function_token28] = ACTIONS(54),
    [aux_sym_builtin_function_token29] = ACTIONS(54),
    [aux_sym_builtin_function_token30] = ACTIONS(54),
    [aux_sym_builtin_function_token31] = ACTIONS(54),
    [aux_sym_builtin_function_token32] = ACTIONS(54),
    [aux_sym_builtin_function_token33] = ACTIONS(54),
    [aux_sym_builtin_function_token34] = ACTIONS(54),
    [aux_sym_builtin_function_token35] = ACTIONS(54),
    [aux_sym_builtin_function_token36] = ACTIONS(54),
    [aux_sym_builtin_function_token37] = ACTIONS(54),
    [aux_sym_builtin_function_token38] = ACTIONS(54),
    [aux_sym_builtin_function_token39] = ACTIONS(54),
    [aux_sym_builtin_function_token40] = ACTIONS(54),
    [aux_sym_builtin_function_token41] = ACTIONS(54),
    [aux_sym_builtin_function_token42] = ACTIONS(54),
    [aux_sym_builtin_function_token43] = ACTIONS(54),
    [aux_sym_builtin_function_token44] = ACTIONS(54),
    [aux_sym_builtin_function_token45] = ACTIONS(54),
    [aux_sym_builtin_function_token46] = ACTIONS(54),
    [aux_sym_builtin_function_token47] = ACTIONS(54),
    [aux_sym_builtin_function_token48] = ACTIONS(54),
    [aux_sym_builtin_function_token49] = ACTIONS(54),
    [aux_sym_builtin_function_token50] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(48),
    [anon_sym_BSLASH_EQ] = ACTIONS(54),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(48),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT_EQ] = ACTIONS(48),
    [anon_sym_GT_EQ] = ACTIONS(48),
    [anon_sym_LT_GT] = ACTIONS(48),
    [anon_sym_LT_LT] = ACTIONS(54),
    [anon_sym_GT_GT] = ACTIONS(54),
    [anon_sym_LT_LT_EQ] = ACTIONS(48),
    [anon_sym_GT_GT_EQ] = ACTIONS(48),
    [anon_sym_BSLASH_LT] = ACTIONS(48),
    [anon_sym_BSLASH_GT] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_SLASH_SLASH] = ACTIONS(48),
    [anon_sym_PERCENT] = ACTIONS(48),
    [anon_sym_STAR_STAR] = ACTIONS(48),
    [anon_sym_PIPE_PIPE] = ACTIONS(48),
    [anon_sym_AMP_AMP] = ACTIONS(48),
    [anon_sym_AMP] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(54),
    [anon_sym_LPAREN2] = ACTIONS(54),
    [sym_semicolon] = ACTIONS(48),
    [aux_sym_string_token1] = ACTIONS(48),
    [aux_sym_string_token2] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_identifier] = ACTIONS(54),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [aux_sym_keyword_token1] = ACTIONS(58),
    [aux_sym_keyword_token2] = ACTIONS(58),
    [aux_sym_keyword_token3] = ACTIONS(58),
    [aux_sym_keyword_token4] = ACTIONS(58),
    [aux_sym_keyword_token5] = ACTIONS(58),
    [aux_sym_keyword_token6] = ACTIONS(58),
    [aux_sym_keyword_token7] = ACTIONS(58),
    [aux_sym_keyword_token8] = ACTIONS(58),
    [aux_sym_keyword_token9] = ACTIONS(58),
    [aux_sym_keyword_token10] = ACTIONS(58),
    [aux_sym_keyword_token11] = ACTIONS(58),
    [aux_sym_keyword_token12] = ACTIONS(58),
    [aux_sym_keyword_token13] = ACTIONS(58),
    [aux_sym_keyword_token14] = ACTIONS(58),
    [aux_sym_keyword_token15] = ACTIONS(58),
    [aux_sym_keyword_token16] = ACTIONS(58),
    [aux_sym_keyword_token17] = ACTIONS(58),
    [aux_sym_keyword_token18] = ACTIONS(58),
    [aux_sym_keyword_token19] = ACTIONS(58),
    [aux_sym_keyword_token20] = ACTIONS(58),
    [aux_sym_keyword_token21] = ACTIONS(58),
    [aux_sym_keyword_token22] = ACTIONS(58),
    [aux_sym_keyword_token23] = ACTIONS(58),
    [aux_sym_keyword_token24] = ACTIONS(58),
    [aux_sym_keyword_token25] = ACTIONS(58),
    [aux_sym_keyword_token26] = ACTIONS(58),
    [aux_sym_keyword_token27] = ACTIONS(58),
    [aux_sym_keyword_token28] = ACTIONS(58),
    [aux_sym_keyword_token29] = ACTIONS(58),
    [aux_sym_keyword_token30] = ACTIONS(58),
    [aux_sym_keyword_token31] = ACTIONS(58),
    [aux_sym_keyword_token32] = ACTIONS(58),
    [aux_sym_keyword_token33] = ACTIONS(58),
    [aux_sym_keyword_token34] = ACTIONS(58),
    [aux_sym_keyword_token35] = ACTIONS(58),
    [aux_sym_keyword_token36] = ACTIONS(58),
    [aux_sym_keyword_token37] = ACTIONS(58),
    [aux_sym_keyword_token38] = ACTIONS(58),
    [aux_sym_keyword_token39] = ACTIONS(58),
    [aux_sym_keyword_token40] = ACTIONS(58),
    [aux_sym_keyword_token41] = ACTIONS(58),
    [aux_sym_keyword_token42] = ACTIONS(58),
    [aux_sym_keyword_token43] = ACTIONS(58),
    [aux_sym_keyword_token44] = ACTIONS(58),
    [aux_sym_keyword_token45] = ACTIONS(58),
    [aux_sym_keyword_token46] = ACTIONS(58),
    [aux_sym_keyword_token47] = ACTIONS(58),
    [aux_sym_keyword_token48] = ACTIONS(58),
    [aux_sym_builtin_function_token1] = ACTIONS(58),
    [aux_sym_builtin_function_token2] = ACTIONS(58),
    [aux_sym_builtin_function_token3] = ACTIONS(58),
    [aux_sym_builtin_function_token4] = ACTIONS(58),
    [aux_sym_builtin_function_token5] = ACTIONS(58),
    [aux_sym_builtin_function_token6] = ACTIONS(58),
    [aux_sym_builtin_function_token7] = ACTIONS(58),
    [aux_sym_builtin_function_token8] = ACTIONS(58),
    [aux_sym_builtin_function_token9] = ACTIONS(58),
    [aux_sym_builtin_function_token10] = ACTIONS(58),
    [aux_sym_builtin_function_token11] = ACTIONS(58),
    [aux_sym_builtin_function_token12] = ACTIONS(58),
    [aux_sym_builtin_function_token13] = ACTIONS(58),
    [aux_sym_builtin_function_token14] = ACTIONS(58),
    [aux_sym_builtin_function_token15] = ACTIONS(58),
    [aux_sym_builtin_function_token16] = ACTIONS(58),
    [aux_sym_builtin_function_token17] = ACTIONS(58),
    [aux_sym_builtin_function_token18] = ACTIONS(58),
    [aux_sym_builtin_function_token19] = ACTIONS(58),
    [aux_sym_builtin_function_token20] = ACTIONS(58),
    [aux_sym_builtin_function_token21] = ACTIONS(58),
    [aux_sym_builtin_function_token22] = ACTIONS(58),
    [aux_sym_builtin_function_token23] = ACTIONS(58),
    [aux_sym_builtin_function_token24] = ACTIONS(58),
    [aux_sym_builtin_function_token25] = ACTIONS(58),
    [aux_sym_builtin_function_token26] = ACTIONS(58),
    [aux_sym_builtin_function_token27] = ACTIONS(58),
    [aux_sym_builtin_function_token28] = ACTIONS(58),
    [aux_sym_builtin_function_token29] = ACTIONS(58),
    [aux_sym_builtin_function_token30] = ACTIONS(58),
    [aux_sym_builtin_function_token31] = ACTIONS(58),
    [aux_sym_builtin_function_token32] = ACTIONS(58),
    [aux_sym_builtin_function_token33] = ACTIONS(58),
    [aux_sym_builtin_function_token34] = ACTIONS(58),
    [aux_sym_builtin_function_token35] = ACTIONS(58),
    [aux_sym_builtin_function_token36] = ACTIONS(58),
    [aux_sym_builtin_function_token37] = ACTIONS(58),
    [aux_sym_builtin_function_token38] = ACTIONS(58),
    [aux_sym_builtin_function_token39] = ACTIONS(58),
    [aux_sym_builtin_function_token40] = ACTIONS(58),
    [aux_sym_builtin_function_token41] = ACTIONS(58),
    [aux_sym_builtin_function_token42] = ACTIONS(58),
    [aux_sym_builtin_function_token43] = ACTIONS(58),
    [aux_sym_builtin_function_token44] = ACTIONS(58),
    [aux_sym_builtin_function_token45] = ACTIONS(58),
    [aux_sym_builtin_function_token46] = ACTIONS(58),
    [aux_sym_builtin_function_token47] = ACTIONS(58),
    [aux_sym_builtin_function_token48] = ACTIONS(58),
    [aux_sym_builtin_function_token49] = ACTIONS(58),
    [aux_sym_builtin_function_token50] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_BSLASH_EQ] = ACTIONS(58),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(56),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_GT] = ACTIONS(56),
    [anon_sym_LT_LT] = ACTIONS(58),
    [anon_sym_GT_GT] = ACTIONS(58),
    [anon_sym_LT_LT_EQ] = ACTIONS(56),
    [anon_sym_GT_GT_EQ] = ACTIONS(56),
    [anon_sym_BSLASH_LT] = ACTIONS(56),
    [anon_sym_BSLASH_GT] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(56),
    [anon_sym_DASH] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_SLASH_SLASH] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(56),
    [anon_sym_STAR_STAR] = ACTIONS(56),
    [anon_sym_PIPE_PIPE] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
    [anon_sym_LPAREN2] = ACTIONS(56),
    [sym_semicolon] = ACTIONS(56),
    [aux_sym_string_token1] = ACTIONS(56),
    [aux_sym_string_token2] = ACTIONS(56),
    [sym_number] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [aux_sym_keyword_token1] = ACTIONS(62),
    [aux_sym_keyword_token2] = ACTIONS(62),
    [aux_sym_keyword_token3] = ACTIONS(62),
    [aux_sym_keyword_token4] = ACTIONS(62),
    [aux_sym_keyword_token5] = ACTIONS(62),
    [aux_sym_keyword_token6] = ACTIONS(62),
    [aux_sym_keyword_token7] = ACTIONS(62),
    [aux_sym_keyword_token8] = ACTIONS(62),
    [aux_sym_keyword_token9] = ACTIONS(62),
    [aux_sym_keyword_token10] = ACTIONS(62),
    [aux_sym_keyword_token11] = ACTIONS(62),
    [aux_sym_keyword_token12] = ACTIONS(62),
    [aux_sym_keyword_token13] = ACTIONS(62),
    [aux_sym_keyword_token14] = ACTIONS(62),
    [aux_sym_keyword_token15] = ACTIONS(62),
    [aux_sym_keyword_token16] = ACTIONS(62),
    [aux_sym_keyword_token17] = ACTIONS(62),
    [aux_sym_keyword_token18] = ACTIONS(62),
    [aux_sym_keyword_token19] = ACTIONS(62),
    [aux_sym_keyword_token20] = ACTIONS(62),
    [aux_sym_keyword_token21] = ACTIONS(62),
    [aux_sym_keyword_token22] = ACTIONS(62),
    [aux_sym_keyword_token23] = ACTIONS(62),
    [aux_sym_keyword_token24] = ACTIONS(62),
    [aux_sym_keyword_token25] = ACTIONS(62),
    [aux_sym_keyword_token26] = ACTIONS(62),
    [aux_sym_keyword_token27] = ACTIONS(62),
    [aux_sym_keyword_token28] = ACTIONS(62),
    [aux_sym_keyword_token29] = ACTIONS(62),
    [aux_sym_keyword_token30] = ACTIONS(62),
    [aux_sym_keyword_token31] = ACTIONS(62),
    [aux_sym_keyword_token32] = ACTIONS(62),
    [aux_sym_keyword_token33] = ACTIONS(62),
    [aux_sym_keyword_token34] = ACTIONS(62),
    [aux_sym_keyword_token35] = ACTIONS(62),
    [aux_sym_keyword_token36] = ACTIONS(62),
    [aux_sym_keyword_token37] = ACTIONS(62),
    [aux_sym_keyword_token38] = ACTIONS(62),
    [aux_sym_keyword_token39] = ACTIONS(62),
    [aux_sym_keyword_token40] = ACTIONS(62),
    [aux_sym_keyword_token41] = ACTIONS(62),
    [aux_sym_keyword_token42] = ACTIONS(62),
    [aux_sym_keyword_token43] = ACTIONS(62),
    [aux_sym_keyword_token44] = ACTIONS(62),
    [aux_sym_keyword_token45] = ACTIONS(62),
    [aux_sym_keyword_token46] = ACTIONS(62),
    [aux_sym_keyword_token47] = ACTIONS(62),
    [aux_sym_keyword_token48] = ACTIONS(62),
    [aux_sym_builtin_function_token1] = ACTIONS(62),
    [aux_sym_builtin_function_token2] = ACTIONS(62),
    [aux_sym_builtin_function_token3] = ACTIONS(62),
    [aux_sym_builtin_function_token4] = ACTIONS(62),
    [aux_sym_builtin_function_token5] = ACTIONS(62),
    [aux_sym_builtin_function_token6] = ACTIONS(62),
    [aux_sym_builtin_function_token7] = ACTIONS(62),
    [aux_sym_builtin_function_token8] = ACTIONS(62),
    [aux_sym_builtin_function_token9] = ACTIONS(62),
    [aux_sym_builtin_function_token10] = ACTIONS(62),
    [aux_sym_builtin_function_token11] = ACTIONS(62),
    [aux_sym_builtin_function_token12] = ACTIONS(62),
    [aux_sym_builtin_function_token13] = ACTIONS(62),
    [aux_sym_builtin_function_token14] = ACTIONS(62),
    [aux_sym_builtin_function_token15] = ACTIONS(62),
    [aux_sym_builtin_function_token16] = ACTIONS(62),
    [aux_sym_builtin_function_token17] = ACTIONS(62),
    [aux_sym_builtin_function_token18] = ACTIONS(62),
    [aux_sym_builtin_function_token19] = ACTIONS(62),
    [aux_sym_builtin_function_token20] = ACTIONS(62),
    [aux_sym_builtin_function_token21] = ACTIONS(62),
    [aux_sym_builtin_function_token22] = ACTIONS(62),
    [aux_sym_builtin_function_token23] = ACTIONS(62),
    [aux_sym_builtin_function_token24] = ACTIONS(62),
    [aux_sym_builtin_function_token25] = ACTIONS(62),
    [aux_sym_builtin_function_token26] = ACTIONS(62),
    [aux_sym_builtin_function_token27] = ACTIONS(62),
    [aux_sym_builtin_function_token28] = ACTIONS(62),
    [aux_sym_builtin_function_token29] = ACTIONS(62),
    [aux_sym_builtin_function_token30] = ACTIONS(62),
    [aux_sym_builtin_function_token31] = ACTIONS(62),
    [aux_sym_builtin_function_token32] = ACTIONS(62),
    [aux_sym_builtin_function_token33] = ACTIONS(62),
    [aux_sym_builtin_function_token34] = ACTIONS(62),
    [aux_sym_builtin_function_token35] = ACTIONS(62),
    [aux_sym_builtin_function_token36] = ACTIONS(62),
    [aux_sym_builtin_function_token37] = ACTIONS(62),
    [aux_sym_builtin_function_token38] = ACTIONS(62),
    [aux_sym_builtin_function_token39] = ACTIONS(62),
    [aux_sym_builtin_function_token40] = ACTIONS(62),
    [aux_sym_builtin_function_token41] = ACTIONS(62),
    [aux_sym_builtin_function_token42] = ACTIONS(62),
    [aux_sym_builtin_function_token43] = ACTIONS(62),
    [aux_sym_builtin_function_token44] = ACTIONS(62),
    [aux_sym_builtin_function_token45] = ACTIONS(62),
    [aux_sym_builtin_function_token46] = ACTIONS(62),
    [aux_sym_builtin_function_token47] = ACTIONS(62),
    [aux_sym_builtin_function_token48] = ACTIONS(62),
    [aux_sym_builtin_function_token49] = ACTIONS(62),
    [aux_sym_builtin_function_token50] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_EQ_EQ] = ACTIONS(60),
    [anon_sym_BSLASH_EQ] = ACTIONS(62),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_LT_EQ] = ACTIONS(60),
    [anon_sym_GT_EQ] = ACTIONS(60),
    [anon_sym_LT_GT] = ACTIONS(60),
    [anon_sym_LT_LT] = ACTIONS(62),
    [anon_sym_GT_GT] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(60),
    [anon_sym_GT_GT_EQ] = ACTIONS(60),
    [anon_sym_BSLASH_LT] = ACTIONS(60),
    [anon_sym_BSLASH_GT] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
    [anon_sym_SLASH_SLASH] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_STAR_STAR] = ACTIONS(60),
    [anon_sym_PIPE_PIPE] = ACTIONS(60),
    [anon_sym_AMP_AMP] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_BSLASH] = ACTIONS(62),
    [anon_sym_LPAREN2] = ACTIONS(60),
    [sym_semicolon] = ACTIONS(60),
    [aux_sym_string_token1] = ACTIONS(60),
    [aux_sym_string_token2] = ACTIONS(60),
    [sym_number] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [aux_sym_keyword_token1] = ACTIONS(66),
    [aux_sym_keyword_token2] = ACTIONS(66),
    [aux_sym_keyword_token3] = ACTIONS(66),
    [aux_sym_keyword_token4] = ACTIONS(66),
    [aux_sym_keyword_token5] = ACTIONS(66),
    [aux_sym_keyword_token6] = ACTIONS(66),
    [aux_sym_keyword_token7] = ACTIONS(66),
    [aux_sym_keyword_token8] = ACTIONS(66),
    [aux_sym_keyword_token9] = ACTIONS(66),
    [aux_sym_keyword_token10] = ACTIONS(66),
    [aux_sym_keyword_token11] = ACTIONS(66),
    [aux_sym_keyword_token12] = ACTIONS(66),
    [aux_sym_keyword_token13] = ACTIONS(66),
    [aux_sym_keyword_token14] = ACTIONS(66),
    [aux_sym_keyword_token15] = ACTIONS(66),
    [aux_sym_keyword_token16] = ACTIONS(66),
    [aux_sym_keyword_token17] = ACTIONS(66),
    [aux_sym_keyword_token18] = ACTIONS(66),
    [aux_sym_keyword_token19] = ACTIONS(66),
    [aux_sym_keyword_token20] = ACTIONS(66),
    [aux_sym_keyword_token21] = ACTIONS(66),
    [aux_sym_keyword_token22] = ACTIONS(66),
    [aux_sym_keyword_token23] = ACTIONS(66),
    [aux_sym_keyword_token24] = ACTIONS(66),
    [aux_sym_keyword_token25] = ACTIONS(66),
    [aux_sym_keyword_token26] = ACTIONS(66),
    [aux_sym_keyword_token27] = ACTIONS(66),
    [aux_sym_keyword_token28] = ACTIONS(66),
    [aux_sym_keyword_token29] = ACTIONS(66),
    [aux_sym_keyword_token30] = ACTIONS(66),
    [aux_sym_keyword_token31] = ACTIONS(66),
    [aux_sym_keyword_token32] = ACTIONS(66),
    [aux_sym_keyword_token33] = ACTIONS(66),
    [aux_sym_keyword_token34] = ACTIONS(66),
    [aux_sym_keyword_token35] = ACTIONS(66),
    [aux_sym_keyword_token36] = ACTIONS(66),
    [aux_sym_keyword_token37] = ACTIONS(66),
    [aux_sym_keyword_token38] = ACTIONS(66),
    [aux_sym_keyword_token39] = ACTIONS(66),
    [aux_sym_keyword_token40] = ACTIONS(66),
    [aux_sym_keyword_token41] = ACTIONS(66),
    [aux_sym_keyword_token42] = ACTIONS(66),
    [aux_sym_keyword_token43] = ACTIONS(66),
    [aux_sym_keyword_token44] = ACTIONS(66),
    [aux_sym_keyword_token45] = ACTIONS(66),
    [aux_sym_keyword_token46] = ACTIONS(66),
    [aux_sym_keyword_token47] = ACTIONS(66),
    [aux_sym_keyword_token48] = ACTIONS(66),
    [aux_sym_builtin_function_token1] = ACTIONS(66),
    [aux_sym_builtin_function_token2] = ACTIONS(66),
    [aux_sym_builtin_function_token3] = ACTIONS(66),
    [aux_sym_builtin_function_token4] = ACTIONS(66),
    [aux_sym_builtin_function_token5] = ACTIONS(66),
    [aux_sym_builtin_function_token6] = ACTIONS(66),
    [aux_sym_builtin_function_token7] = ACTIONS(66),
    [aux_sym_builtin_function_token8] = ACTIONS(66),
    [aux_sym_builtin_function_token9] = ACTIONS(66),
    [aux_sym_builtin_function_token10] = ACTIONS(66),
    [aux_sym_builtin_function_token11] = ACTIONS(66),
    [aux_sym_builtin_function_token12] = ACTIONS(66),
    [aux_sym_builtin_function_token13] = ACTIONS(66),
    [aux_sym_builtin_function_token14] = ACTIONS(66),
    [aux_sym_builtin_function_token15] = ACTIONS(66),
    [aux_sym_builtin_function_token16] = ACTIONS(66),
    [aux_sym_builtin_function_token17] = ACTIONS(66),
    [aux_sym_builtin_function_token18] = ACTIONS(66),
    [aux_sym_builtin_function_token19] = ACTIONS(66),
    [aux_sym_builtin_function_token20] = ACTIONS(66),
    [aux_sym_builtin_function_token21] = ACTIONS(66),
    [aux_sym_builtin_function_token22] = ACTIONS(66),
    [aux_sym_builtin_function_token23] = ACTIONS(66),
    [aux_sym_builtin_function_token24] = ACTIONS(66),
    [aux_sym_builtin_function_token25] = ACTIONS(66),
    [aux_sym_builtin_function_token26] = ACTIONS(66),
    [aux_sym_builtin_function_token27] = ACTIONS(66),
    [aux_sym_builtin_function_token28] = ACTIONS(66),
    [aux_sym_builtin_function_token29] = ACTIONS(66),
    [aux_sym_builtin_function_token30] = ACTIONS(66),
    [aux_sym_builtin_function_token31] = ACTIONS(66),
    [aux_sym_builtin_function_token32] = ACTIONS(66),
    [aux_sym_builtin_function_token33] = ACTIONS(66),
    [aux_sym_builtin_function_token34] = ACTIONS(66),
    [aux_sym_builtin_function_token35] = ACTIONS(66),
    [aux_sym_builtin_function_token36] = ACTIONS(66),
    [aux_sym_builtin_function_token37] = ACTIONS(66),
    [aux_sym_builtin_function_token38] = ACTIONS(66),
    [aux_sym_builtin_function_token39] = ACTIONS(66),
    [aux_sym_builtin_function_token40] = ACTIONS(66),
    [aux_sym_builtin_function_token41] = ACTIONS(66),
    [aux_sym_builtin_function_token42] = ACTIONS(66),
    [aux_sym_builtin_function_token43] = ACTIONS(66),
    [aux_sym_builtin_function_token44] = ACTIONS(66),
    [aux_sym_builtin_function_token45] = ACTIONS(66),
    [aux_sym_builtin_function_token46] = ACTIONS(66),
    [aux_sym_builtin_function_token47] = ACTIONS(66),
    [aux_sym_builtin_function_token48] = ACTIONS(66),
    [aux_sym_builtin_function_token49] = ACTIONS(66),
    [aux_sym_builtin_function_token50] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(64),
    [anon_sym_BSLASH_EQ] = ACTIONS(66),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(64),
    [anon_sym_GT_EQ] = ACTIONS(64),
    [anon_sym_LT_GT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(66),
    [anon_sym_GT_GT] = ACTIONS(66),
    [anon_sym_LT_LT_EQ] = ACTIONS(64),
    [anon_sym_GT_GT_EQ] = ACTIONS(64),
    [anon_sym_BSLASH_LT] = ACTIONS(64),
    [anon_sym_BSLASH_GT] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_STAR] = ACTIONS(66),
    [anon_sym_SLASH] = ACTIONS(66),
    [anon_sym_SLASH_SLASH] = ACTIONS(64),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_STAR_STAR] = ACTIONS(64),
    [anon_sym_PIPE_PIPE] = ACTIONS(64),
    [anon_sym_AMP_AMP] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_BSLASH] = ACTIONS(66),
    [anon_sym_LPAREN2] = ACTIONS(64),
    [sym_semicolon] = ACTIONS(64),
    [aux_sym_string_token1] = ACTIONS(64),
    [aux_sym_string_token2] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [aux_sym_keyword_token1] = ACTIONS(70),
    [aux_sym_keyword_token2] = ACTIONS(70),
    [aux_sym_keyword_token3] = ACTIONS(70),
    [aux_sym_keyword_token4] = ACTIONS(70),
    [aux_sym_keyword_token5] = ACTIONS(70),
    [aux_sym_keyword_token6] = ACTIONS(70),
    [aux_sym_keyword_token7] = ACTIONS(70),
    [aux_sym_keyword_token8] = ACTIONS(70),
    [aux_sym_keyword_token9] = ACTIONS(70),
    [aux_sym_keyword_token10] = ACTIONS(70),
    [aux_sym_keyword_token11] = ACTIONS(70),
    [aux_sym_keyword_token12] = ACTIONS(70),
    [aux_sym_keyword_token13] = ACTIONS(70),
    [aux_sym_keyword_token14] = ACTIONS(70),
    [aux_sym_keyword_token15] = ACTIONS(70),
    [aux_sym_keyword_token16] = ACTIONS(70),
    [aux_sym_keyword_token17] = ACTIONS(70),
    [aux_sym_keyword_token18] = ACTIONS(70),
    [aux_sym_keyword_token19] = ACTIONS(70),
    [aux_sym_keyword_token20] = ACTIONS(70),
    [aux_sym_keyword_token21] = ACTIONS(70),
    [aux_sym_keyword_token22] = ACTIONS(70),
    [aux_sym_keyword_token23] = ACTIONS(70),
    [aux_sym_keyword_token24] = ACTIONS(70),
    [aux_sym_keyword_token25] = ACTIONS(70),
    [aux_sym_keyword_token26] = ACTIONS(70),
    [aux_sym_keyword_token27] = ACTIONS(70),
    [aux_sym_keyword_token28] = ACTIONS(70),
    [aux_sym_keyword_token29] = ACTIONS(70),
    [aux_sym_keyword_token30] = ACTIONS(70),
    [aux_sym_keyword_token31] = ACTIONS(70),
    [aux_sym_keyword_token32] = ACTIONS(70),
    [aux_sym_keyword_token33] = ACTIONS(70),
    [aux_sym_keyword_token34] = ACTIONS(70),
    [aux_sym_keyword_token35] = ACTIONS(70),
    [aux_sym_keyword_token36] = ACTIONS(70),
    [aux_sym_keyword_token37] = ACTIONS(70),
    [aux_sym_keyword_token38] = ACTIONS(70),
    [aux_sym_keyword_token39] = ACTIONS(70),
    [aux_sym_keyword_token40] = ACTIONS(70),
    [aux_sym_keyword_token41] = ACTIONS(70),
    [aux_sym_keyword_token42] = ACTIONS(70),
    [aux_sym_keyword_token43] = ACTIONS(70),
    [aux_sym_keyword_token44] = ACTIONS(70),
    [aux_sym_keyword_token45] = ACTIONS(70),
    [aux_sym_keyword_token46] = ACTIONS(70),
    [aux_sym_keyword_token47] = ACTIONS(70),
    [aux_sym_keyword_token48] = ACTIONS(70),
    [aux_sym_builtin_function_token1] = ACTIONS(70),
    [aux_sym_builtin_function_token2] = ACTIONS(70),
    [aux_sym_builtin_function_token3] = ACTIONS(70),
    [aux_sym_builtin_function_token4] = ACTIONS(70),
    [aux_sym_builtin_function_token5] = ACTIONS(70),
    [aux_sym_builtin_function_token6] = ACTIONS(70),
    [aux_sym_builtin_function_token7] = ACTIONS(70),
    [aux_sym_builtin_function_token8] = ACTIONS(70),
    [aux_sym_builtin_function_token9] = ACTIONS(70),
    [aux_sym_builtin_function_token10] = ACTIONS(70),
    [aux_sym_builtin_function_token11] = ACTIONS(70),
    [aux_sym_builtin_function_token12] = ACTIONS(70),
    [aux_sym_builtin_function_token13] = ACTIONS(70),
    [aux_sym_builtin_function_token14] = ACTIONS(70),
    [aux_sym_builtin_function_token15] = ACTIONS(70),
    [aux_sym_builtin_function_token16] = ACTIONS(70),
    [aux_sym_builtin_function_token17] = ACTIONS(70),
    [aux_sym_builtin_function_token18] = ACTIONS(70),
    [aux_sym_builtin_function_token19] = ACTIONS(70),
    [aux_sym_builtin_function_token20] = ACTIONS(70),
    [aux_sym_builtin_function_token21] = ACTIONS(70),
    [aux_sym_builtin_function_token22] = ACTIONS(70),
    [aux_sym_builtin_function_token23] = ACTIONS(70),
    [aux_sym_builtin_function_token24] = ACTIONS(70),
    [aux_sym_builtin_function_token25] = ACTIONS(70),
    [aux_sym_builtin_function_token26] = ACTIONS(70),
    [aux_sym_builtin_function_token27] = ACTIONS(70),
    [aux_sym_builtin_function_token28] = ACTIONS(70),
    [aux_sym_builtin_function_token29] = ACTIONS(70),
    [aux_sym_builtin_function_token30] = ACTIONS(70),
    [aux_sym_builtin_function_token31] = ACTIONS(70),
    [aux_sym_builtin_function_token32] = ACTIONS(70),
    [aux_sym_builtin_function_token33] = ACTIONS(70),
    [aux_sym_builtin_function_token34] = ACTIONS(70),
    [aux_sym_builtin_function_token35] = ACTIONS(70),
    [aux_sym_builtin_function_token36] = ACTIONS(70),
    [aux_sym_builtin_function_token37] = ACTIONS(70),
    [aux_sym_builtin_function_token38] = ACTIONS(70),
    [aux_sym_builtin_function_token39] = ACTIONS(70),
    [aux_sym_builtin_function_token40] = ACTIONS(70),
    [aux_sym_builtin_function_token41] = ACTIONS(70),
    [aux_sym_builtin_function_token42] = ACTIONS(70),
    [aux_sym_builtin_function_token43] = ACTIONS(70),
    [aux_sym_builtin_function_token44] = ACTIONS(70),
    [aux_sym_builtin_function_token45] = ACTIONS(70),
    [aux_sym_builtin_function_token46] = ACTIONS(70),
    [aux_sym_builtin_function_token47] = ACTIONS(70),
    [aux_sym_builtin_function_token48] = ACTIONS(70),
    [aux_sym_builtin_function_token49] = ACTIONS(70),
    [aux_sym_builtin_function_token50] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_BSLASH_EQ] = ACTIONS(70),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_GT] = ACTIONS(68),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_LT_LT_EQ] = ACTIONS(68),
    [anon_sym_GT_GT_EQ] = ACTIONS(68),
    [anon_sym_BSLASH_LT] = ACTIONS(68),
    [anon_sym_BSLASH_GT] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_SLASH_SLASH] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_STAR_STAR] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [anon_sym_LPAREN2] = ACTIONS(68),
    [sym_semicolon] = ACTIONS(68),
    [aux_sym_string_token1] = ACTIONS(68),
    [aux_sym_string_token2] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_identifier] = ACTIONS(70),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [aux_sym_keyword_token1] = ACTIONS(74),
    [aux_sym_keyword_token2] = ACTIONS(74),
    [aux_sym_keyword_token3] = ACTIONS(74),
    [aux_sym_keyword_token4] = ACTIONS(74),
    [aux_sym_keyword_token5] = ACTIONS(74),
    [aux_sym_keyword_token6] = ACTIONS(74),
    [aux_sym_keyword_token7] = ACTIONS(74),
    [aux_sym_keyword_token8] = ACTIONS(74),
    [aux_sym_keyword_token9] = ACTIONS(74),
    [aux_sym_keyword_token10] = ACTIONS(74),
    [aux_sym_keyword_token11] = ACTIONS(74),
    [aux_sym_keyword_token12] = ACTIONS(74),
    [aux_sym_keyword_token13] = ACTIONS(74),
    [aux_sym_keyword_token14] = ACTIONS(74),
    [aux_sym_keyword_token15] = ACTIONS(74),
    [aux_sym_keyword_token16] = ACTIONS(74),
    [aux_sym_keyword_token17] = ACTIONS(74),
    [aux_sym_keyword_token18] = ACTIONS(74),
    [aux_sym_keyword_token19] = ACTIONS(74),
    [aux_sym_keyword_token20] = ACTIONS(74),
    [aux_sym_keyword_token21] = ACTIONS(74),
    [aux_sym_keyword_token22] = ACTIONS(74),
    [aux_sym_keyword_token23] = ACTIONS(74),
    [aux_sym_keyword_token24] = ACTIONS(74),
    [aux_sym_keyword_token25] = ACTIONS(74),
    [aux_sym_keyword_token26] = ACTIONS(74),
    [aux_sym_keyword_token27] = ACTIONS(74),
    [aux_sym_keyword_token28] = ACTIONS(74),
    [aux_sym_keyword_token29] = ACTIONS(74),
    [aux_sym_keyword_token30] = ACTIONS(74),
    [aux_sym_keyword_token31] = ACTIONS(74),
    [aux_sym_keyword_token32] = ACTIONS(74),
    [aux_sym_keyword_token33] = ACTIONS(74),
    [aux_sym_keyword_token34] = ACTIONS(74),
    [aux_sym_keyword_token35] = ACTIONS(74),
    [aux_sym_keyword_token36] = ACTIONS(74),
    [aux_sym_keyword_token37] = ACTIONS(74),
    [aux_sym_keyword_token38] = ACTIONS(74),
    [aux_sym_keyword_token39] = ACTIONS(74),
    [aux_sym_keyword_token40] = ACTIONS(74),
    [aux_sym_keyword_token41] = ACTIONS(74),
    [aux_sym_keyword_token42] = ACTIONS(74),
    [aux_sym_keyword_token43] = ACTIONS(74),
    [aux_sym_keyword_token44] = ACTIONS(74),
    [aux_sym_keyword_token45] = ACTIONS(74),
    [aux_sym_keyword_token46] = ACTIONS(74),
    [aux_sym_keyword_token47] = ACTIONS(74),
    [aux_sym_keyword_token48] = ACTIONS(74),
    [aux_sym_builtin_function_token1] = ACTIONS(74),
    [aux_sym_builtin_function_token2] = ACTIONS(74),
    [aux_sym_builtin_function_token3] = ACTIONS(74),
    [aux_sym_builtin_function_token4] = ACTIONS(74),
    [aux_sym_builtin_function_token5] = ACTIONS(74),
    [aux_sym_builtin_function_token6] = ACTIONS(74),
    [aux_sym_builtin_function_token7] = ACTIONS(74),
    [aux_sym_builtin_function_token8] = ACTIONS(74),
    [aux_sym_builtin_function_token9] = ACTIONS(74),
    [aux_sym_builtin_function_token10] = ACTIONS(74),
    [aux_sym_builtin_function_token11] = ACTIONS(74),
    [aux_sym_builtin_function_token12] = ACTIONS(74),
    [aux_sym_builtin_function_token13] = ACTIONS(74),
    [aux_sym_builtin_function_token14] = ACTIONS(74),
    [aux_sym_builtin_function_token15] = ACTIONS(74),
    [aux_sym_builtin_function_token16] = ACTIONS(74),
    [aux_sym_builtin_function_token17] = ACTIONS(74),
    [aux_sym_builtin_function_token18] = ACTIONS(74),
    [aux_sym_builtin_function_token19] = ACTIONS(74),
    [aux_sym_builtin_function_token20] = ACTIONS(74),
    [aux_sym_builtin_function_token21] = ACTIONS(74),
    [aux_sym_builtin_function_token22] = ACTIONS(74),
    [aux_sym_builtin_function_token23] = ACTIONS(74),
    [aux_sym_builtin_function_token24] = ACTIONS(74),
    [aux_sym_builtin_function_token25] = ACTIONS(74),
    [aux_sym_builtin_function_token26] = ACTIONS(74),
    [aux_sym_builtin_function_token27] = ACTIONS(74),
    [aux_sym_builtin_function_token28] = ACTIONS(74),
    [aux_sym_builtin_function_token29] = ACTIONS(74),
    [aux_sym_builtin_function_token30] = ACTIONS(74),
    [aux_sym_builtin_function_token31] = ACTIONS(74),
    [aux_sym_builtin_function_token32] = ACTIONS(74),
    [aux_sym_builtin_function_token33] = ACTIONS(74),
    [aux_sym_builtin_function_token34] = ACTIONS(74),
    [aux_sym_builtin_function_token35] = ACTIONS(74),
    [aux_sym_builtin_function_token36] = ACTIONS(74),
    [aux_sym_builtin_function_token37] = ACTIONS(74),
    [aux_sym_builtin_function_token38] = ACTIONS(74),
    [aux_sym_builtin_function_token39] = ACTIONS(74),
    [aux_sym_builtin_function_token40] = ACTIONS(74),
    [aux_sym_builtin_function_token41] = ACTIONS(74),
    [aux_sym_builtin_function_token42] = ACTIONS(74),
    [aux_sym_builtin_function_token43] = ACTIONS(74),
    [aux_sym_builtin_function_token44] = ACTIONS(74),
    [aux_sym_builtin_function_token45] = ACTIONS(74),
    [aux_sym_builtin_function_token46] = ACTIONS(74),
    [aux_sym_builtin_function_token47] = ACTIONS(74),
    [aux_sym_builtin_function_token48] = ACTIONS(74),
    [aux_sym_builtin_function_token49] = ACTIONS(74),
    [aux_sym_builtin_function_token50] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(72),
    [anon_sym_BSLASH_EQ] = ACTIONS(74),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(72),
    [anon_sym_GT_EQ] = ACTIONS(72),
    [anon_sym_LT_GT] = ACTIONS(72),
    [anon_sym_LT_LT] = ACTIONS(74),
    [anon_sym_GT_GT] = ACTIONS(74),
    [anon_sym_LT_LT_EQ] = ACTIONS(72),
    [anon_sym_GT_GT_EQ] = ACTIONS(72),
    [anon_sym_BSLASH_LT] = ACTIONS(72),
    [anon_sym_BSLASH_GT] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_STAR_STAR] = ACTIONS(72),
    [anon_sym_PIPE_PIPE] = ACTIONS(72),
    [anon_sym_AMP_AMP] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(74),
    [anon_sym_LPAREN2] = ACTIONS(72),
    [sym_semicolon] = ACTIONS(72),
    [aux_sym_string_token1] = ACTIONS(72),
    [aux_sym_string_token2] = ACTIONS(72),
    [sym_number] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [aux_sym_keyword_token1] = ACTIONS(78),
    [aux_sym_keyword_token2] = ACTIONS(78),
    [aux_sym_keyword_token3] = ACTIONS(78),
    [aux_sym_keyword_token4] = ACTIONS(78),
    [aux_sym_keyword_token5] = ACTIONS(78),
    [aux_sym_keyword_token6] = ACTIONS(78),
    [aux_sym_keyword_token7] = ACTIONS(78),
    [aux_sym_keyword_token8] = ACTIONS(78),
    [aux_sym_keyword_token9] = ACTIONS(78),
    [aux_sym_keyword_token10] = ACTIONS(78),
    [aux_sym_keyword_token11] = ACTIONS(78),
    [aux_sym_keyword_token12] = ACTIONS(78),
    [aux_sym_keyword_token13] = ACTIONS(78),
    [aux_sym_keyword_token14] = ACTIONS(78),
    [aux_sym_keyword_token15] = ACTIONS(78),
    [aux_sym_keyword_token16] = ACTIONS(78),
    [aux_sym_keyword_token17] = ACTIONS(78),
    [aux_sym_keyword_token18] = ACTIONS(78),
    [aux_sym_keyword_token19] = ACTIONS(78),
    [aux_sym_keyword_token20] = ACTIONS(78),
    [aux_sym_keyword_token21] = ACTIONS(78),
    [aux_sym_keyword_token22] = ACTIONS(78),
    [aux_sym_keyword_token23] = ACTIONS(78),
    [aux_sym_keyword_token24] = ACTIONS(78),
    [aux_sym_keyword_token25] = ACTIONS(78),
    [aux_sym_keyword_token26] = ACTIONS(78),
    [aux_sym_keyword_token27] = ACTIONS(78),
    [aux_sym_keyword_token28] = ACTIONS(78),
    [aux_sym_keyword_token29] = ACTIONS(78),
    [aux_sym_keyword_token30] = ACTIONS(78),
    [aux_sym_keyword_token31] = ACTIONS(78),
    [aux_sym_keyword_token32] = ACTIONS(78),
    [aux_sym_keyword_token33] = ACTIONS(78),
    [aux_sym_keyword_token34] = ACTIONS(78),
    [aux_sym_keyword_token35] = ACTIONS(78),
    [aux_sym_keyword_token36] = ACTIONS(78),
    [aux_sym_keyword_token37] = ACTIONS(78),
    [aux_sym_keyword_token38] = ACTIONS(78),
    [aux_sym_keyword_token39] = ACTIONS(78),
    [aux_sym_keyword_token40] = ACTIONS(78),
    [aux_sym_keyword_token41] = ACTIONS(78),
    [aux_sym_keyword_token42] = ACTIONS(78),
    [aux_sym_keyword_token43] = ACTIONS(78),
    [aux_sym_keyword_token44] = ACTIONS(78),
    [aux_sym_keyword_token45] = ACTIONS(78),
    [aux_sym_keyword_token46] = ACTIONS(78),
    [aux_sym_keyword_token47] = ACTIONS(78),
    [aux_sym_keyword_token48] = ACTIONS(78),
    [aux_sym_builtin_function_token1] = ACTIONS(78),
    [aux_sym_builtin_function_token2] = ACTIONS(78),
    [aux_sym_builtin_function_token3] = ACTIONS(78),
    [aux_sym_builtin_function_token4] = ACTIONS(78),
    [aux_sym_builtin_function_token5] = ACTIONS(78),
    [aux_sym_builtin_function_token6] = ACTIONS(78),
    [aux_sym_builtin_function_token7] = ACTIONS(78),
    [aux_sym_builtin_function_token8] = ACTIONS(78),
    [aux_sym_builtin_function_token9] = ACTIONS(78),
    [aux_sym_builtin_function_token10] = ACTIONS(78),
    [aux_sym_builtin_function_token11] = ACTIONS(78),
    [aux_sym_builtin_function_token12] = ACTIONS(78),
    [aux_sym_builtin_function_token13] = ACTIONS(78),
    [aux_sym_builtin_function_token14] = ACTIONS(78),
    [aux_sym_builtin_function_token15] = ACTIONS(78),
    [aux_sym_builtin_function_token16] = ACTIONS(78),
    [aux_sym_builtin_function_token17] = ACTIONS(78),
    [aux_sym_builtin_function_token18] = ACTIONS(78),
    [aux_sym_builtin_function_token19] = ACTIONS(78),
    [aux_sym_builtin_function_token20] = ACTIONS(78),
    [aux_sym_builtin_function_token21] = ACTIONS(78),
    [aux_sym_builtin_function_token22] = ACTIONS(78),
    [aux_sym_builtin_function_token23] = ACTIONS(78),
    [aux_sym_builtin_function_token24] = ACTIONS(78),
    [aux_sym_builtin_function_token25] = ACTIONS(78),
    [aux_sym_builtin_function_token26] = ACTIONS(78),
    [aux_sym_builtin_function_token27] = ACTIONS(78),
    [aux_sym_builtin_function_token28] = ACTIONS(78),
    [aux_sym_builtin_function_token29] = ACTIONS(78),
    [aux_sym_builtin_function_token30] = ACTIONS(78),
    [aux_sym_builtin_function_token31] = ACTIONS(78),
    [aux_sym_builtin_function_token32] = ACTIONS(78),
    [aux_sym_builtin_function_token33] = ACTIONS(78),
    [aux_sym_builtin_function_token34] = ACTIONS(78),
    [aux_sym_builtin_function_token35] = ACTIONS(78),
    [aux_sym_builtin_function_token36] = ACTIONS(78),
    [aux_sym_builtin_function_token37] = ACTIONS(78),
    [aux_sym_builtin_function_token38] = ACTIONS(78),
    [aux_sym_builtin_function_token39] = ACTIONS(78),
    [aux_sym_builtin_function_token40] = ACTIONS(78),
    [aux_sym_builtin_function_token41] = ACTIONS(78),
    [aux_sym_builtin_function_token42] = ACTIONS(78),
    [aux_sym_builtin_function_token43] = ACTIONS(78),
    [aux_sym_builtin_function_token44] = ACTIONS(78),
    [aux_sym_builtin_function_token45] = ACTIONS(78),
    [aux_sym_builtin_function_token46] = ACTIONS(78),
    [aux_sym_builtin_function_token47] = ACTIONS(78),
    [aux_sym_builtin_function_token48] = ACTIONS(78),
    [aux_sym_builtin_function_token49] = ACTIONS(78),
    [aux_sym_builtin_function_token50] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [anon_sym_BSLASH_EQ] = ACTIONS(78),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [anon_sym_LT_GT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(78),
    [anon_sym_GT_GT] = ACTIONS(78),
    [anon_sym_LT_LT_EQ] = ACTIONS(76),
    [anon_sym_GT_GT_EQ] = ACTIONS(76),
    [anon_sym_BSLASH_LT] = ACTIONS(76),
    [anon_sym_BSLASH_GT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(76),
    [anon_sym_AMP_AMP] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
    [anon_sym_LPAREN2] = ACTIONS(76),
    [sym_semicolon] = ACTIONS(76),
    [aux_sym_string_token1] = ACTIONS(76),
    [aux_sym_string_token2] = ACTIONS(76),
    [sym_number] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [aux_sym_keyword_token1] = ACTIONS(82),
    [aux_sym_keyword_token2] = ACTIONS(82),
    [aux_sym_keyword_token3] = ACTIONS(82),
    [aux_sym_keyword_token4] = ACTIONS(82),
    [aux_sym_keyword_token5] = ACTIONS(82),
    [aux_sym_keyword_token6] = ACTIONS(82),
    [aux_sym_keyword_token7] = ACTIONS(82),
    [aux_sym_keyword_token8] = ACTIONS(82),
    [aux_sym_keyword_token9] = ACTIONS(82),
    [aux_sym_keyword_token10] = ACTIONS(82),
    [aux_sym_keyword_token11] = ACTIONS(82),
    [aux_sym_keyword_token12] = ACTIONS(82),
    [aux_sym_keyword_token13] = ACTIONS(82),
    [aux_sym_keyword_token14] = ACTIONS(82),
    [aux_sym_keyword_token15] = ACTIONS(82),
    [aux_sym_keyword_token16] = ACTIONS(82),
    [aux_sym_keyword_token17] = ACTIONS(82),
    [aux_sym_keyword_token18] = ACTIONS(82),
    [aux_sym_keyword_token19] = ACTIONS(82),
    [aux_sym_keyword_token20] = ACTIONS(82),
    [aux_sym_keyword_token21] = ACTIONS(82),
    [aux_sym_keyword_token22] = ACTIONS(82),
    [aux_sym_keyword_token23] = ACTIONS(82),
    [aux_sym_keyword_token24] = ACTIONS(82),
    [aux_sym_keyword_token25] = ACTIONS(82),
    [aux_sym_keyword_token26] = ACTIONS(82),
    [aux_sym_keyword_token27] = ACTIONS(82),
    [aux_sym_keyword_token28] = ACTIONS(82),
    [aux_sym_keyword_token29] = ACTIONS(82),
    [aux_sym_keyword_token30] = ACTIONS(82),
    [aux_sym_keyword_token31] = ACTIONS(82),
    [aux_sym_keyword_token32] = ACTIONS(82),
    [aux_sym_keyword_token33] = ACTIONS(82),
    [aux_sym_keyword_token34] = ACTIONS(82),
    [aux_sym_keyword_token35] = ACTIONS(82),
    [aux_sym_keyword_token36] = ACTIONS(82),
    [aux_sym_keyword_token37] = ACTIONS(82),
    [aux_sym_keyword_token38] = ACTIONS(82),
    [aux_sym_keyword_token39] = ACTIONS(82),
    [aux_sym_keyword_token40] = ACTIONS(82),
    [aux_sym_keyword_token41] = ACTIONS(82),
    [aux_sym_keyword_token42] = ACTIONS(82),
    [aux_sym_keyword_token43] = ACTIONS(82),
    [aux_sym_keyword_token44] = ACTIONS(82),
    [aux_sym_keyword_token45] = ACTIONS(82),
    [aux_sym_keyword_token46] = ACTIONS(82),
    [aux_sym_keyword_token47] = ACTIONS(82),
    [aux_sym_keyword_token48] = ACTIONS(82),
    [aux_sym_builtin_function_token1] = ACTIONS(82),
    [aux_sym_builtin_function_token2] = ACTIONS(82),
    [aux_sym_builtin_function_token3] = ACTIONS(82),
    [aux_sym_builtin_function_token4] = ACTIONS(82),
    [aux_sym_builtin_function_token5] = ACTIONS(82),
    [aux_sym_builtin_function_token6] = ACTIONS(82),
    [aux_sym_builtin_function_token7] = ACTIONS(82),
    [aux_sym_builtin_function_token8] = ACTIONS(82),
    [aux_sym_builtin_function_token9] = ACTIONS(82),
    [aux_sym_builtin_function_token10] = ACTIONS(82),
    [aux_sym_builtin_function_token11] = ACTIONS(82),
    [aux_sym_builtin_function_token12] = ACTIONS(82),
    [aux_sym_builtin_function_token13] = ACTIONS(82),
    [aux_sym_builtin_function_token14] = ACTIONS(82),
    [aux_sym_builtin_function_token15] = ACTIONS(82),
    [aux_sym_builtin_function_token16] = ACTIONS(82),
    [aux_sym_builtin_function_token17] = ACTIONS(82),
    [aux_sym_builtin_function_token18] = ACTIONS(82),
    [aux_sym_builtin_function_token19] = ACTIONS(82),
    [aux_sym_builtin_function_token20] = ACTIONS(82),
    [aux_sym_builtin_function_token21] = ACTIONS(82),
    [aux_sym_builtin_function_token22] = ACTIONS(82),
    [aux_sym_builtin_function_token23] = ACTIONS(82),
    [aux_sym_builtin_function_token24] = ACTIONS(82),
    [aux_sym_builtin_function_token25] = ACTIONS(82),
    [aux_sym_builtin_function_token26] = ACTIONS(82),
    [aux_sym_builtin_function_token27] = ACTIONS(82),
    [aux_sym_builtin_function_token28] = ACTIONS(82),
    [aux_sym_builtin_function_token29] = ACTIONS(82),
    [aux_sym_builtin_function_token30] = ACTIONS(82),
    [aux_sym_builtin_function_token31] = ACTIONS(82),
    [aux_sym_builtin_function_token32] = ACTIONS(82),
    [aux_sym_builtin_function_token33] = ACTIONS(82),
    [aux_sym_builtin_function_token34] = ACTIONS(82),
    [aux_sym_builtin_function_token35] = ACTIONS(82),
    [aux_sym_builtin_function_token36] = ACTIONS(82),
    [aux_sym_builtin_function_token37] = ACTIONS(82),
    [aux_sym_builtin_function_token38] = ACTIONS(82),
    [aux_sym_builtin_function_token39] = ACTIONS(82),
    [aux_sym_builtin_function_token40] = ACTIONS(82),
    [aux_sym_builtin_function_token41] = ACTIONS(82),
    [aux_sym_builtin_function_token42] = ACTIONS(82),
    [aux_sym_builtin_function_token43] = ACTIONS(82),
    [aux_sym_builtin_function_token44] = ACTIONS(82),
    [aux_sym_builtin_function_token45] = ACTIONS(82),
    [aux_sym_builtin_function_token46] = ACTIONS(82),
    [aux_sym_builtin_function_token47] = ACTIONS(82),
    [aux_sym_builtin_function_token48] = ACTIONS(82),
    [aux_sym_builtin_function_token49] = ACTIONS(82),
    [aux_sym_builtin_function_token50] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [anon_sym_BSLASH_EQ] = ACTIONS(82),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [anon_sym_LT_GT] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(82),
    [anon_sym_GT_GT] = ACTIONS(82),
    [anon_sym_LT_LT_EQ] = ACTIONS(80),
    [anon_sym_GT_GT_EQ] = ACTIONS(80),
    [anon_sym_BSLASH_LT] = ACTIONS(80),
    [anon_sym_BSLASH_GT] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(82),
    [anon_sym_LPAREN2] = ACTIONS(80),
    [sym_semicolon] = ACTIONS(80),
    [aux_sym_string_token1] = ACTIONS(80),
    [aux_sym_string_token2] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [sym_identifier] = ACTIONS(82),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(23), 1,
      sym__argument,
    STATE(27), 1,
      sym__argument_list,
    ACTIONS(90), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(16), 4,
      sym_function_call,
      sym_operator,
      sym_string,
      aux_sym__argument_repeat1,
    ACTIONS(88), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(86), 18,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
  [62] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__argument,
    STATE(28), 1,
      sym__argument_list,
    ACTIONS(90), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(16), 4,
      sym_function_call,
      sym_operator,
      sym_string,
      aux_sym__argument_repeat1,
    ACTIONS(88), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(86), 18,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
  [124] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(25), 1,
      sym__argument,
    ACTIONS(90), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(16), 4,
      sym_function_call,
      sym_operator,
      sym_string,
      aux_sym__argument_repeat1,
    ACTIONS(88), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(86), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
  [181] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(104), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(15), 4,
      sym_function_call,
      sym_operator,
      sym_string,
      aux_sym__argument_repeat1,
    ACTIONS(101), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(98), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
  [235] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_number,
    ACTIONS(90), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(15), 4,
      sym_function_call,
      sym_operator,
      sym_string,
      aux_sym__argument_repeat1,
    ACTIONS(88), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(86), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
  [289] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 12,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN2,
    ACTIONS(117), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      sym_identifier,
  [334] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(82), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(80), 23,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      sym_identifier,
  [376] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(74), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(72), 23,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      sym_identifier,
  [418] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(78), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(76), 23,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      sym_identifier,
  [460] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(58), 11,
      anon_sym_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(56), 23,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LPAREN2,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      sym_identifier,
  [502] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__argument_list_repeat1,
  [515] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym__argument_list_repeat1,
  [528] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym__argument_list_repeat1,
  [541] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [549] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [556] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
  [563] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 62,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 289,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 376,
  [SMALL_STATE(20)] = 418,
  [SMALL_STATE(21)] = 460,
  [SMALL_STATE(22)] = 502,
  [SMALL_STATE(23)] = 515,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 541,
  [SMALL_STATE(26)] = 549,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_repeat1, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__argument_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_list_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
