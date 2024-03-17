#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_DASH = 1,
  aux_sym_task_token1 = 2,
  anon_sym_LF = 3,
  aux_sym_note_token1 = 4,
  anon_sym_SPACE = 5,
  anon_sym_AT = 6,
  aux_sym_tags_token1 = 7,
  anon_sym_LPAREN = 8,
  aux_sym_tags_token2 = 9,
  anon_sym_RPAREN = 10,
  sym_source_file = 11,
  sym__item = 12,
  sym_task = 13,
  sym_note = 14,
  sym_tags = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_tags_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "- ",
  [aux_sym_task_token1] = "task_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_SPACE] = " ",
  [anon_sym_AT] = "@",
  [aux_sym_tags_token1] = "tags_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_tags_token2] = "tags_token2",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_task] = "task",
  [sym_note] = "note",
  [sym_tags] = "tags",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_task_token1] = aux_sym_task_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_tags_token1] = aux_sym_tags_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_tags_token2] = aux_sym_tags_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_task] = sym_task,
  [sym_note] = sym_note,
  [sym_tags] = sym_tags,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_task_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
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
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
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
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_key, 2},
  [2] =
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
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '@') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '(') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_task_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_task_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_tags_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_tags_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_tags_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_tags_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__item] = STATE(3),
    [sym_task] = STATE(3),
    [sym_note] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [aux_sym_note_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(14), 1,
      aux_sym_note_token1,
    STATE(2), 4,
      sym__item,
      sym_task,
      sym_note,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(5), 1,
      anon_sym_DASH,
    ACTIONS(7), 1,
      aux_sym_note_token1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 4,
      sym__item,
      sym_task,
      sym_note,
      aux_sym_source_file_repeat1,
  [32] = 5,
    ACTIONS(19), 1,
      aux_sym_task_token1,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      anon_sym_SPACE,
    STATE(6), 1,
      aux_sym_tags_repeat1,
    STATE(16), 1,
      sym_tags,
  [48] = 4,
    ACTIONS(23), 1,
      anon_sym_SPACE,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_tags_repeat1,
    STATE(19), 1,
      sym_tags,
  [61] = 3,
    ACTIONS(23), 1,
      anon_sym_SPACE,
    ACTIONS(27), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_tags_repeat1,
  [71] = 2,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym_note_token1,
  [79] = 2,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym_note_token1,
  [87] = 2,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      aux_sym_note_token1,
  [95] = 2,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_note_token1,
  [103] = 3,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_SPACE,
    STATE(11), 1,
      aux_sym_tags_repeat1,
  [113] = 2,
    ACTIONS(52), 1,
      anon_sym_DASH,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      aux_sym_note_token1,
  [121] = 2,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 2,
      anon_sym_LF,
      anon_sym_SPACE,
  [129] = 1,
    ACTIONS(58), 2,
      anon_sym_LF,
      anon_sym_SPACE,
  [134] = 1,
    ACTIONS(60), 1,
      anon_sym_AT,
  [138] = 1,
    ACTIONS(62), 1,
      anon_sym_LF,
  [142] = 1,
    ACTIONS(64), 1,
      anon_sym_LF,
  [146] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [150] = 1,
    ACTIONS(68), 1,
      anon_sym_LF,
  [154] = 1,
    ACTIONS(70), 1,
      aux_sym_tags_token1,
  [158] = 1,
    ACTIONS(72), 1,
      aux_sym_tags_token2,
  [162] = 1,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 150,
  [SMALL_STATE(20)] = 154,
  [SMALL_STATE(21)] = 158,
  [SMALL_STATE(22)] = 162,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 3, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 6, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
