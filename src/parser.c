#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  aux_sym_project_token1 = 1,
  anon_sym_COLON = 2,
  anon_sym_LF = 3,
  anon_sym_DASH = 4,
  sym_note = 5,
  anon_sym_SPACE = 6,
  anon_sym_AT = 7,
  aux_sym_tags_token1 = 8,
  anon_sym_LPAREN = 9,
  aux_sym_tags_token2 = 10,
  anon_sym_RPAREN = 11,
  sym_source_file = 12,
  sym__item = 13,
  sym_project = 14,
  sym_task = 15,
  sym_tags = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_tags_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_project_token1] = "project_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_DASH] = "-",
  [sym_note] = "note",
  [anon_sym_SPACE] = " ",
  [anon_sym_AT] = "@",
  [aux_sym_tags_token1] = "tags_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_tags_token2] = "tags_token2",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_project] = "project",
  [sym_task] = "task",
  [sym_tags] = "tags",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_project_token1] = aux_sym_project_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_note] = sym_note,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_tags_token1] = aux_sym_tags_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_tags_token2] = aux_sym_tags_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_project] = sym_project,
  [sym_task] = sym_task,
  [sym_tags] = sym_tags,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_project_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tags_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tags_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_key = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_content, 1},
  [2] =
    {field_key, 2},
  [3] =
    {field_key, 2},
    {field_value, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '@') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '(') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(23);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '-') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_project_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_project_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '-') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_project_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_project_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_tags_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_tags_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_tags_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_tags_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym__item] = STATE(2),
    [sym_project] = STATE(2),
    [sym_task] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_project_token1] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_note] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      aux_sym_project_token1,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_note,
    STATE(3), 4,
      sym__item,
      sym_project,
      sym_task,
      aux_sym_source_file_repeat1,
  [19] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_project_token1,
    ACTIONS(20), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_note,
    STATE(3), 4,
      sym__item,
      sym_project,
      sym_task,
      aux_sym_source_file_repeat1,
  [38] = 2,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 3,
      aux_sym_project_token1,
      anon_sym_DASH,
      sym_note,
  [47] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 3,
      aux_sym_project_token1,
      anon_sym_DASH,
      sym_note,
  [56] = 4,
    ACTIONS(34), 1,
      anon_sym_LF,
    ACTIONS(36), 1,
      anon_sym_SPACE,
    STATE(12), 1,
      aux_sym_tags_repeat1,
    STATE(18), 1,
      sym_tags,
  [69] = 4,
    ACTIONS(36), 1,
      anon_sym_SPACE,
    ACTIONS(38), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_tags_repeat1,
    STATE(16), 1,
      sym_tags,
  [82] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 3,
      aux_sym_project_token1,
      anon_sym_DASH,
      sym_note,
  [91] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 3,
      aux_sym_project_token1,
      anon_sym_DASH,
      sym_note,
  [100] = 2,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 2,
      anon_sym_LF,
      anon_sym_SPACE,
  [108] = 3,
    ACTIONS(52), 1,
      anon_sym_LF,
    ACTIONS(54), 1,
      anon_sym_SPACE,
    STATE(11), 1,
      aux_sym_tags_repeat1,
  [118] = 3,
    ACTIONS(36), 1,
      anon_sym_SPACE,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_tags_repeat1,
  [128] = 1,
    ACTIONS(59), 2,
      anon_sym_LF,
      anon_sym_SPACE,
  [133] = 1,
    ACTIONS(61), 1,
      anon_sym_AT,
  [137] = 1,
    ACTIONS(63), 1,
      aux_sym_tags_token1,
  [141] = 1,
    ACTIONS(65), 1,
      anon_sym_LF,
  [145] = 1,
    ACTIONS(67), 1,
      anon_sym_COLON,
  [149] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [153] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [157] = 1,
    ACTIONS(73), 1,
      aux_sym_tags_token2,
  [161] = 1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [165] = 1,
    ACTIONS(77), 1,
      aux_sym_project_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 133,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 145,
  [SMALL_STATE(18)] = 149,
  [SMALL_STATE(19)] = 153,
  [SMALL_STATE(20)] = 157,
  [SMALL_STATE(21)] = 161,
  [SMALL_STATE(22)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, .production_id = 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 3, .production_id = 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 3, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 3, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 2), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 6, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_taskpaper(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
