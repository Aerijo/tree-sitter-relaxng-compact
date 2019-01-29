#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 321
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_namespace = 2,
  anon_sym_EQ = 3,
  anon_sym_default = 4,
  anon_sym_datatypes = 5,
  anon_sym_foo = 6,
  anon_sym_bar = 7,
  sym_identifier = 8,
  anon_sym_inherit = 9,
  anon_sym_TILDE = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH = 14,
  sym_element = 15,
  sym_attribute = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_COMMA = 19,
  anon_sym_PIPE = 20,
  anon_sym_AMP = 21,
  anon_sym_QMARK = 22,
  anon_sym_STAR = 23,
  anon_sym_PLUS = 24,
  anon_sym_list = 25,
  anon_sym_mixed = 26,
  anon_sym_parent = 27,
  anon_sym_empty = 28,
  anon_sym_text = 29,
  anon_sym_notAllowed = 30,
  anon_sym_external = 31,
  anon_sym_grammar = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 35,
  anon_sym_DASH = 36,
  sym_name_class = 37,
  anon_sym_div = 38,
  anon_sym_include = 39,
  anon_sym_start = 40,
  anon_sym_PIPE_EQ = 41,
  anon_sym_AMP_EQ = 42,
  sym_top_level = 43,
  sym_decl = 44,
  sym__id_or_keyword = 45,
  sym_keyword = 46,
  sym_namespace_uri_literal = 47,
  sym_literal = 48,
  sym_literal_segment = 49,
  sym_pattern = 50,
  sym_any_uri_literal = 51,
  sym_inherit = 52,
  sym_datatype_name = 53,
  sym_param = 54,
  sym_datatype_value = 55,
  sym_exceptpattern = 56,
  sym_grammar_content = 57,
  sym_include_content = 58,
  sym_start = 59,
  sym_assign_method = 60,
  sym_define = 61,
  aux_sym_top_level_repeat1 = 62,
  aux_sym_top_level_repeat2 = 63,
  aux_sym_literal_repeat1 = 64,
  aux_sym_pattern_repeat1 = 65,
  aux_sym_pattern_repeat2 = 66,
  aux_sym_pattern_repeat3 = 67,
  aux_sym_pattern_repeat4 = 68,
  aux_sym_grammar_content_repeat1 = 69,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_namespace] = "namespace",
  [anon_sym_EQ] = "=",
  [anon_sym_default] = "default",
  [anon_sym_datatypes] = "datatypes",
  [anon_sym_foo] = "foo",
  [anon_sym_bar] = "bar",
  [sym_identifier] = "identifier",
  [anon_sym_inherit] = "inherit",
  [anon_sym_TILDE] = "~",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = "/[^\\\"\\n]*/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = "/[^\\'\\n]*/",
  [sym_element] = "element",
  [sym_attribute] = "attribute",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_list] = "list",
  [anon_sym_mixed] = "mixed",
  [anon_sym_parent] = "parent",
  [anon_sym_empty] = "empty",
  [anon_sym_text] = "text",
  [anon_sym_notAllowed] = "notAllowed",
  [anon_sym_external] = "external",
  [anon_sym_grammar] = "grammar",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = "/\\w+/",
  [anon_sym_DASH] = "-",
  [sym_name_class] = "name_class",
  [anon_sym_div] = "div",
  [anon_sym_include] = "include",
  [anon_sym_start] = "start",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_AMP_EQ] = "&=",
  [sym_top_level] = "top_level",
  [sym_decl] = "decl",
  [sym__id_or_keyword] = "_id_or_keyword",
  [sym_keyword] = "keyword",
  [sym_namespace_uri_literal] = "namespace_uri_literal",
  [sym_literal] = "literal",
  [sym_literal_segment] = "literal_segment",
  [sym_pattern] = "pattern",
  [sym_any_uri_literal] = "any_uri_literal",
  [sym_inherit] = "inherit",
  [sym_datatype_name] = "datatype_name",
  [sym_param] = "param",
  [sym_datatype_value] = "datatype_value",
  [sym_exceptpattern] = "exceptpattern",
  [sym_grammar_content] = "grammar_content",
  [sym_include_content] = "include_content",
  [sym_start] = "start",
  [sym_assign_method] = "assign_method",
  [sym_define] = "define",
  [aux_sym_top_level_repeat1] = "top_level_repeat1",
  [aux_sym_top_level_repeat2] = "top_level_repeat2",
  [aux_sym_literal_repeat1] = "literal_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_pattern_repeat2] = "pattern_repeat2",
  [aux_sym_pattern_repeat3] = "pattern_repeat3",
  [aux_sym_pattern_repeat4] = "pattern_repeat4",
  [aux_sym_grammar_content_repeat1] = "grammar_content_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bar] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notAllowed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grammar] = {
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
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_name_class] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_top_level] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__id_or_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_uri_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_any_uri_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_name] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_value] = {
    .visible = true,
    .named = true,
  },
  [sym_exceptpattern] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_content] = {
    .visible = true,
    .named = true,
  },
  [sym_include_content] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_method] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_top_level_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_level_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(62);
      if (lookahead == 'g')
        ADVANCE(65);
      if (lookahead == 'i')
        ADVANCE(72);
      if (lookahead == 'l')
        ADVANCE(84);
      if (lookahead == 'm')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(93);
      if (lookahead == 'p')
        ADVANCE(111);
      if (lookahead == 's')
        ADVANCE(117);
      if (lookahead == 't')
        ADVANCE(122);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 't')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'r')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'i')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'b')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'u')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 't')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'e')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attribute);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'r')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_bar);
      END_STATE();
    case 27:
      if (lookahead == 'a')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(36);
      if (lookahead == 'i')
        ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'a')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 't')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'y')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'p')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 's')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_datatypes);
      END_STATE();
    case 36:
      if (lookahead == 'f')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'a')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'u')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 42:
      if (lookahead == 'v')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 44:
      if (lookahead == 'l')
        ADVANCE(45);
      if (lookahead == 'm')
        ADVANCE(51);
      if (lookahead == 'x')
        ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'm')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_element);
      END_STATE();
    case 51:
      if (lookahead == 'p')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'y')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 55:
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'r')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'l')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 62:
      if (lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'o')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_foo);
      END_STATE();
    case 65:
      if (lookahead == 'r')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'a')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'm')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'm')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'r')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'h')
        ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'l')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'u')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'd')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 79:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'i')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 84:
      if (lookahead == 'i')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 's')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 88:
      if (lookahead == 'i')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'x')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'd')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 93:
      if (lookahead == 'a')
        ADVANCE(94);
      if (lookahead == 'o')
        ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'm')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'e')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'p')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'c')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'A')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'l')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'w')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'd')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_notAllowed);
      END_STATE();
    case 111:
      if (lookahead == 'a')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'r')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'e')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'n')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 't')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 117:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'a')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 122:
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'x')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 131:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(133);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == 'g')
        ADVANCE(179);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead == 'm')
        ADVANCE(197);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead == 'p')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'i')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'b')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'u')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(145);
      if (lookahead == 'e')
        ADVANCE(153);
      if (lookahead == 'i')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'y')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'p')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_datatypes);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'f')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'u')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'v')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(162);
      if (lookahead == 'm')
        ADVANCE(168);
      if (lookahead == 'x')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'm')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'n')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_element);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'p')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'y')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_empty);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'n')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'm')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'm')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'n')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'c')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'u')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'd')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'i')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'i')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'x')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'd')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'o')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'm')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'p')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'c')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'A')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'o')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'w')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'd')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_notAllowed);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'n')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'x')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == ':')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == 'b')
        ADVANCE(236);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(238);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bar);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(240);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(241);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_foo);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 242:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      END_STATE();
    case 243:
      if (lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 244:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(245);
      if (lookahead == '#')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"')
        ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(249);
      if (lookahead == '#')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\'')
        ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'')
        ADVANCE(252);
      END_STATE();
    case 253:
      if (lookahead == '#')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      if (lookahead != 0)
        ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name_class);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(255);
      END_STATE();
    case 256:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(256);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 259:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(261);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(262);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(264);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(266);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(267);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(268);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(271);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(272);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(273);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 275:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(133);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == 'g')
        ADVANCE(179);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead == 'm')
        ADVANCE(197);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 'p')
        ADVANCE(220);
      if (lookahead == 't')
        ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'o')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 277:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      END_STATE();
    case 278:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(278);
      END_STATE();
    case 279:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      END_STATE();
    case 280:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 281:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 282:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 283:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 284:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 285:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 286:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 287:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 288:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'i')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 290:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 291:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(291);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 292:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'b')
        ADVANCE(236);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(292);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 293:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      END_STATE();
    case 294:
      if (lookahead == 'n')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'h')
        ADVANCE(79);
      END_STATE();
    case 296:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(296);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 297:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(297);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 298:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 299:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 300:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 301:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 302:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(302);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 303:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 304:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 305:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(305);
      END_STATE();
    case 306:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == 'a')
        ADVANCE(133);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == 'g')
        ADVANCE(179);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead == 'm')
        ADVANCE(197);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead == 'p')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(231);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(306);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 307:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 308:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 309:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      END_STATE();
    case 310:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 311:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(311);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 312:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(312);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 313:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 314:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(270);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(314);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 315:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(132);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(315);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(143);
      END_STATE();
    case 316:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 131},
  [2] = {.lex_state = 235},
  [3] = {.lex_state = 242},
  [4] = {.lex_state = 235},
  [5] = {.lex_state = 244},
  [6] = {.lex_state = 245},
  [7] = {.lex_state = 249},
  [8] = {.lex_state = 253},
  [9] = {.lex_state = 244},
  [10] = {.lex_state = 256},
  [11] = {.lex_state = 259},
  [12] = {.lex_state = 131},
  [13] = {.lex_state = 244},
  [14] = {.lex_state = 275},
  [15] = {.lex_state = 259},
  [16] = {.lex_state = 244},
  [17] = {.lex_state = 131},
  [18] = {.lex_state = 244},
  [19] = {.lex_state = 277},
  [20] = {.lex_state = 278},
  [21] = {.lex_state = 279},
  [22] = {.lex_state = 280},
  [23] = {.lex_state = 281},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 282},
  [26] = {.lex_state = 235},
  [27] = {.lex_state = 235},
  [28] = {.lex_state = 235},
  [29] = {.lex_state = 235},
  [30] = {.lex_state = 275},
  [31] = {.lex_state = 275},
  [32] = {.lex_state = 131},
  [33] = {.lex_state = 131},
  [34] = {.lex_state = 244},
  [35] = {.lex_state = 275},
  [36] = {.lex_state = 259},
  [37] = {.lex_state = 283},
  [38] = {.lex_state = 284},
  [39] = {.lex_state = 283},
  [40] = {.lex_state = 281},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 286},
  [44] = {.lex_state = 286},
  [45] = {.lex_state = 287},
  [46] = {.lex_state = 281},
  [47] = {.lex_state = 245},
  [48] = {.lex_state = 249},
  [49] = {.lex_state = 288},
  [50] = {.lex_state = 290},
  [51] = {.lex_state = 291},
  [52] = {.lex_state = 275},
  [53] = {.lex_state = 278},
  [54] = {.lex_state = 275},
  [55] = {.lex_state = 275},
  [56] = {.lex_state = 275},
  [57] = {.lex_state = 279},
  [58] = {.lex_state = 279},
  [59] = {.lex_state = 279},
  [60] = {.lex_state = 292},
  [61] = {.lex_state = 275},
  [62] = {.lex_state = 279},
  [63] = {.lex_state = 131},
  [64] = {.lex_state = 282},
  [65] = {.lex_state = 244},
  [66] = {.lex_state = 282},
  [67] = {.lex_state = 293},
  [68] = {.lex_state = 235},
  [69] = {.lex_state = 131},
  [70] = {.lex_state = 296},
  [71] = {.lex_state = 245},
  [72] = {.lex_state = 249},
  [73] = {.lex_state = 131},
  [74] = {.lex_state = 297},
  [75] = {.lex_state = 298},
  [76] = {.lex_state = 299},
  [77] = {.lex_state = 300},
  [78] = {.lex_state = 275},
  [79] = {.lex_state = 131},
  [80] = {.lex_state = 256},
  [81] = {.lex_state = 256},
  [82] = {.lex_state = 301},
  [83] = {.lex_state = 284},
  [84] = {.lex_state = 302},
  [85] = {.lex_state = 259},
  [86] = {.lex_state = 244},
  [87] = {.lex_state = 131},
  [88] = {.lex_state = 244},
  [89] = {.lex_state = 281},
  [90] = {.lex_state = 286},
  [91] = {.lex_state = 286},
  [92] = {.lex_state = 275},
  [93] = {.lex_state = 275},
  [94] = {.lex_state = 275},
  [95] = {.lex_state = 286},
  [96] = {.lex_state = 286},
  [97] = {.lex_state = 286},
  [98] = {.lex_state = 292},
  [99] = {.lex_state = 275},
  [100] = {.lex_state = 281},
  [101] = {.lex_state = 281},
  [102] = {.lex_state = 131},
  [103] = {.lex_state = 131},
  [104] = {.lex_state = 290},
  [105] = {.lex_state = 303},
  [106] = {.lex_state = 304},
  [107] = {.lex_state = 298},
  [108] = {.lex_state = 278},
  [109] = {.lex_state = 279},
  [110] = {.lex_state = 279},
  [111] = {.lex_state = 279},
  [112] = {.lex_state = 279},
  [113] = {.lex_state = 279},
  [114] = {.lex_state = 279},
  [115] = {.lex_state = 305},
  [116] = {.lex_state = 235},
  [117] = {.lex_state = 292},
  [118] = {.lex_state = 279},
  [119] = {.lex_state = 131},
  [120] = {.lex_state = 245},
  [121] = {.lex_state = 249},
  [122] = {.lex_state = 131},
  [123] = {.lex_state = 306},
  [124] = {.lex_state = 293},
  [125] = {.lex_state = 131},
  [126] = {.lex_state = 131},
  [127] = {.lex_state = 307},
  [128] = {.lex_state = 308},
  [129] = {.lex_state = 297},
  [130] = {.lex_state = 275},
  [131] = {.lex_state = 275},
  [132] = {.lex_state = 275},
  [133] = {.lex_state = 298},
  [134] = {.lex_state = 298},
  [135] = {.lex_state = 298},
  [136] = {.lex_state = 292},
  [137] = {.lex_state = 275},
  [138] = {.lex_state = 256},
  [139] = {.lex_state = 309},
  [140] = {.lex_state = 256},
  [141] = {.lex_state = 259},
  [142] = {.lex_state = 275},
  [143] = {.lex_state = 275},
  [144] = {.lex_state = 275},
  [145] = {.lex_state = 256},
  [146] = {.lex_state = 256},
  [147] = {.lex_state = 256},
  [148] = {.lex_state = 292},
  [149] = {.lex_state = 275},
  [150] = {.lex_state = 284},
  [151] = {.lex_state = 275},
  [152] = {.lex_state = 310},
  [153] = {.lex_state = 275},
  [154] = {.lex_state = 281},
  [155] = {.lex_state = 286},
  [156] = {.lex_state = 286},
  [157] = {.lex_state = 286},
  [158] = {.lex_state = 286},
  [159] = {.lex_state = 286},
  [160] = {.lex_state = 286},
  [161] = {.lex_state = 286},
  [162] = {.lex_state = 286},
  [163] = {.lex_state = 287},
  [164] = {.lex_state = 292},
  [165] = {.lex_state = 286},
  [166] = {.lex_state = 281},
  [167] = {.lex_state = 310},
  [168] = {.lex_state = 290},
  [169] = {.lex_state = 244},
  [170] = {.lex_state = 244},
  [171] = {.lex_state = 303},
  [172] = {.lex_state = 303},
  [173] = {.lex_state = 303},
  [174] = {.lex_state = 131},
  [175] = {.lex_state = 305},
  [176] = {.lex_state = 292},
  [177] = {.lex_state = 131},
  [178] = {.lex_state = 131},
  [179] = {.lex_state = 306},
  [180] = {.lex_state = 131},
  [181] = {.lex_state = 311},
  [182] = {.lex_state = 307},
  [183] = {.lex_state = 297},
  [184] = {.lex_state = 298},
  [185] = {.lex_state = 298},
  [186] = {.lex_state = 298},
  [187] = {.lex_state = 298},
  [188] = {.lex_state = 298},
  [189] = {.lex_state = 298},
  [190] = {.lex_state = 312},
  [191] = {.lex_state = 292},
  [192] = {.lex_state = 298},
  [193] = {.lex_state = 259},
  [194] = {.lex_state = 309},
  [195] = {.lex_state = 256},
  [196] = {.lex_state = 256},
  [197] = {.lex_state = 256},
  [198] = {.lex_state = 256},
  [199] = {.lex_state = 256},
  [200] = {.lex_state = 256},
  [201] = {.lex_state = 256},
  [202] = {.lex_state = 296},
  [203] = {.lex_state = 292},
  [204] = {.lex_state = 256},
  [205] = {.lex_state = 131},
  [206] = {.lex_state = 311},
  [207] = {.lex_state = 311},
  [208] = {.lex_state = 296},
  [209] = {.lex_state = 310},
  [210] = {.lex_state = 311},
  [211] = {.lex_state = 286},
  [212] = {.lex_state = 287},
  [213] = {.lex_state = 275},
  [214] = {.lex_state = 303},
  [215] = {.lex_state = 281},
  [216] = {.lex_state = 303},
  [217] = {.lex_state = 303},
  [218] = {.lex_state = 245},
  [219] = {.lex_state = 249},
  [220] = {.lex_state = 292},
  [221] = {.lex_state = 292},
  [222] = {.lex_state = 306},
  [223] = {.lex_state = 306},
  [224] = {.lex_state = 307},
  [225] = {.lex_state = 312},
  [226] = {.lex_state = 309},
  [227] = {.lex_state = 296},
  [228] = {.lex_state = 310},
  [229] = {.lex_state = 311},
  [230] = {.lex_state = 275},
  [231] = {.lex_state = 275},
  [232] = {.lex_state = 275},
  [233] = {.lex_state = 311},
  [234] = {.lex_state = 311},
  [235] = {.lex_state = 311},
  [236] = {.lex_state = 292},
  [237] = {.lex_state = 275},
  [238] = {.lex_state = 310},
  [239] = {.lex_state = 313},
  [240] = {.lex_state = 245},
  [241] = {.lex_state = 249},
  [242] = {.lex_state = 253},
  [243] = {.lex_state = 244},
  [244] = {.lex_state = 256},
  [245] = {.lex_state = 303},
  [246] = {.lex_state = 131},
  [247] = {.lex_state = 244},
  [248] = {.lex_state = 275},
  [249] = {.lex_state = 303},
  [250] = {.lex_state = 303},
  [251] = {.lex_state = 303},
  [252] = {.lex_state = 313},
  [253] = {.lex_state = 303},
  [254] = {.lex_state = 303},
  [255] = {.lex_state = 281},
  [256] = {.lex_state = 131},
  [257] = {.lex_state = 131},
  [258] = {.lex_state = 292},
  [259] = {.lex_state = 310},
  [260] = {.lex_state = 311},
  [261] = {.lex_state = 311},
  [262] = {.lex_state = 311},
  [263] = {.lex_state = 311},
  [264] = {.lex_state = 311},
  [265] = {.lex_state = 311},
  [266] = {.lex_state = 311},
  [267] = {.lex_state = 314},
  [268] = {.lex_state = 292},
  [269] = {.lex_state = 311},
  [270] = {.lex_state = 131},
  [271] = {.lex_state = 131},
  [272] = {.lex_state = 244},
  [273] = {.lex_state = 275},
  [274] = {.lex_state = 303},
  [275] = {.lex_state = 245},
  [276] = {.lex_state = 249},
  [277] = {.lex_state = 313},
  [278] = {.lex_state = 315},
  [279] = {.lex_state = 313},
  [280] = {.lex_state = 281},
  [281] = {.lex_state = 286},
  [282] = {.lex_state = 303},
  [283] = {.lex_state = 275},
  [284] = {.lex_state = 275},
  [285] = {.lex_state = 275},
  [286] = {.lex_state = 303},
  [287] = {.lex_state = 303},
  [288] = {.lex_state = 303},
  [289] = {.lex_state = 292},
  [290] = {.lex_state = 275},
  [291] = {.lex_state = 303},
  [292] = {.lex_state = 292},
  [293] = {.lex_state = 292},
  [294] = {.lex_state = 310},
  [295] = {.lex_state = 314},
  [296] = {.lex_state = 303},
  [297] = {.lex_state = 275},
  [298] = {.lex_state = 256},
  [299] = {.lex_state = 131},
  [300] = {.lex_state = 131},
  [301] = {.lex_state = 315},
  [302] = {.lex_state = 303},
  [303] = {.lex_state = 303},
  [304] = {.lex_state = 281},
  [305] = {.lex_state = 303},
  [306] = {.lex_state = 303},
  [307] = {.lex_state = 303},
  [308] = {.lex_state = 303},
  [309] = {.lex_state = 303},
  [310] = {.lex_state = 303},
  [311] = {.lex_state = 303},
  [312] = {.lex_state = 316},
  [313] = {.lex_state = 292},
  [314] = {.lex_state = 303},
  [315] = {.lex_state = 256},
  [316] = {.lex_state = 303},
  [317] = {.lex_state = 315},
  [318] = {.lex_state = 315},
  [319] = {.lex_state = 316},
  [320] = {.lex_state = 303},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_datatypes] = ACTIONS(1),
    [anon_sym_foo] = ACTIONS(1),
    [anon_sym_bar] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_element] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_notAllowed] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_top_level] = STATE(19),
    [sym_decl] = STATE(24),
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(20),
    [sym_pattern] = STATE(21),
    [sym_datatype_name] = STATE(22),
    [sym_datatype_value] = STATE(11),
    [sym_grammar_content] = STATE(25),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat1] = STATE(24),
    [aux_sym_top_level_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_datatypes] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(29),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(39),
    [anon_sym_start] = ACTIONS(41),
  },
  [2] = {
    [sym__id_or_keyword] = STATE(27),
    [sym_keyword] = STATE(27),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
  },
  [3] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(47),
  },
  [4] = {
    [sym__id_or_keyword] = STATE(29),
    [sym_keyword] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(49),
  },
  [5] = {
    [sym_assign_method] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
  },
  [6] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(61),
  },
  [7] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(63),
  },
  [8] = {
    [sym_comment] = ACTIONS(7),
    [sym_name_class] = ACTIONS(65),
  },
  [9] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [10] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(69),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_start] = ACTIONS(57),
  },
  [12] = {
    [sym_literal] = STATE(37),
    [sym_literal_segment] = STATE(38),
    [sym_any_uri_literal] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
  },
  [13] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(71),
  },
  [14] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(43),
    [sym_pattern] = STATE(44),
    [sym_datatype_name] = STATE(45),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_div] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_start] = ACTIONS(79),
  },
  [16] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(81),
  },
  [17] = {
    [sym_literal] = STATE(49),
    [sym_literal_segment] = STATE(50),
    [sym_any_uri_literal] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [18] = {
    [sym_assign_method] = STATE(52),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(7),
  },
  [20] = {
    [aux_sym_literal_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
  },
  [21] = {
    [aux_sym_pattern_repeat1] = STATE(57),
    [aux_sym_pattern_repeat2] = STATE(58),
    [aux_sym_pattern_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [22] = {
    [sym_datatype_value] = STATE(36),
    [sym_exceptpattern] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_include] = ACTIONS(109),
    [anon_sym_start] = ACTIONS(109),
  },
  [24] = {
    [sym_decl] = STATE(63),
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(20),
    [sym_pattern] = STATE(62),
    [sym_datatype_name] = STATE(22),
    [sym_datatype_value] = STATE(11),
    [sym_grammar_content] = STATE(64),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat1] = STATE(63),
    [aux_sym_top_level_repeat2] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_datatypes] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(29),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(39),
    [anon_sym_start] = ACTIONS(41),
  },
  [25] = {
    [sym_grammar_content] = STATE(66),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(39),
    [anon_sym_start] = ACTIONS(41),
  },
  [26] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(113),
  },
  [27] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(115),
  },
  [28] = {
    [sym__id_or_keyword] = STATE(68),
    [sym_keyword] = STATE(68),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(117),
  },
  [29] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(119),
  },
  [30] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [sym_element] = ACTIONS(121),
    [sym_attribute] = ACTIONS(121),
    [anon_sym_list] = ACTIONS(121),
    [anon_sym_mixed] = ACTIONS(121),
    [anon_sym_parent] = ACTIONS(121),
    [anon_sym_empty] = ACTIONS(121),
    [anon_sym_text] = ACTIONS(121),
    [anon_sym_notAllowed] = ACTIONS(121),
    [anon_sym_external] = ACTIONS(121),
    [anon_sym_grammar] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(121),
  },
  [31] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(74),
    [sym_pattern] = STATE(75),
    [sym_datatype_name] = STATE(76),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(131),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [32] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(133),
  },
  [33] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(133),
  },
  [34] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(135),
  },
  [35] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(81),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(143),
  },
  [38] = {
    [aux_sym_literal_repeat1] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
  },
  [39] = {
    [sym_inherit] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(147),
  },
  [40] = {
    [sym_grammar_content] = STATE(89),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(89),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(155),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
  },
  [42] = {
    [sym_literal] = STATE(37),
    [sym_literal_segment] = STATE(90),
    [sym_any_uri_literal] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
  },
  [43] = {
    [aux_sym_literal_repeat1] = STATE(91),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [44] = {
    [aux_sym_pattern_repeat1] = STATE(95),
    [aux_sym_pattern_repeat2] = STATE(96),
    [aux_sym_pattern_repeat3] = STATE(97),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(151),
  },
  [45] = {
    [sym_datatype_value] = STATE(36),
    [sym_exceptpattern] = STATE(36),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(167),
  },
  [46] = {
    [sym_grammar_content] = STATE(101),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(101),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(155),
  },
  [47] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(171),
  },
  [48] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(173),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [anon_sym_div] = ACTIONS(175),
    [anon_sym_include] = ACTIONS(175),
    [anon_sym_start] = ACTIONS(175),
  },
  [50] = {
    [aux_sym_literal_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [51] = {
    [sym_inherit] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(181),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(183),
    [anon_sym_include] = ACTIONS(183),
    [anon_sym_start] = ACTIONS(183),
  },
  [52] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(74),
    [sym_pattern] = STATE(107),
    [sym_datatype_name] = STATE(76),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(131),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [53] = {
    [aux_sym_literal_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
  },
  [54] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(20),
    [sym_pattern] = STATE(109),
    [sym_datatype_name] = STATE(22),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(29),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [55] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(20),
    [sym_pattern] = STATE(110),
    [sym_datatype_name] = STATE(22),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(29),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [56] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(20),
    [sym_pattern] = STATE(111),
    [sym_datatype_name] = STATE(22),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(29),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [57] = {
    [aux_sym_pattern_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
  },
  [58] = {
    [aux_sym_pattern_repeat2] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
  },
  [59] = {
    [aux_sym_pattern_repeat3] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
  },
  [60] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(117),
    [aux_sym_pattern_repeat4] = STATE(117),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [61] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(20),
    [sym_pattern] = STATE(118),
    [sym_datatype_name] = STATE(22),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(29),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [62] = {
    [aux_sym_pattern_repeat1] = STATE(57),
    [aux_sym_pattern_repeat2] = STATE(58),
    [aux_sym_pattern_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [63] = {
    [sym_decl] = STATE(63),
    [aux_sym_top_level_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(204),
    [anon_sym_datatypes] = ACTIONS(207),
    [sym_identifier] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [sym_element] = ACTIONS(210),
    [sym_attribute] = ACTIONS(210),
    [anon_sym_list] = ACTIONS(210),
    [anon_sym_mixed] = ACTIONS(210),
    [anon_sym_parent] = ACTIONS(210),
    [anon_sym_empty] = ACTIONS(210),
    [anon_sym_text] = ACTIONS(210),
    [anon_sym_notAllowed] = ACTIONS(210),
    [anon_sym_external] = ACTIONS(210),
    [anon_sym_grammar] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(199),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(210),
    [anon_sym_div] = ACTIONS(210),
    [anon_sym_include] = ACTIONS(210),
    [anon_sym_start] = ACTIONS(210),
  },
  [64] = {
    [sym_grammar_content] = STATE(66),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(39),
    [anon_sym_start] = ACTIONS(41),
  },
  [65] = {
    [sym_assign_method] = STATE(31),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
  },
  [66] = {
    [sym_grammar_content] = STATE(66),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(214),
    [anon_sym_div] = ACTIONS(217),
    [anon_sym_include] = ACTIONS(220),
    [anon_sym_start] = ACTIONS(223),
  },
  [67] = {
    [sym_namespace_uri_literal] = STATE(122),
    [sym_literal] = STATE(119),
    [sym_literal_segment] = STATE(123),
    [sym_comment] = ACTIONS(7),
    [anon_sym_inherit] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(230),
  },
  [68] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(232),
  },
  [69] = {
    [sym_literal] = STATE(122),
    [sym_literal_segment] = STATE(123),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(230),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_start] = ACTIONS(57),
  },
  [71] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(236),
  },
  [72] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(238),
  },
  [73] = {
    [sym_literal] = STATE(49),
    [sym_literal_segment] = STATE(127),
    [sym_any_uri_literal] = STATE(128),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [74] = {
    [aux_sym_literal_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [75] = {
    [aux_sym_pattern_repeat1] = STATE(133),
    [aux_sym_pattern_repeat2] = STATE(134),
    [aux_sym_pattern_repeat3] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(244),
    [anon_sym_include] = ACTIONS(244),
    [anon_sym_start] = ACTIONS(244),
  },
  [76] = {
    [sym_datatype_value] = STATE(36),
    [sym_exceptpattern] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_start] = ACTIONS(57),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(256),
  },
  [78] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(138),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [79] = {
    [sym_literal] = STATE(37),
    [sym_literal_segment] = STATE(139),
    [sym_any_uri_literal] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
  },
  [80] = {
    [aux_sym_literal_repeat1] = STATE(140),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
  },
  [81] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [82] = {
    [sym_datatype_value] = STATE(36),
    [sym_exceptpattern] = STATE(36),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(270),
  },
  [83] = {
    [aux_sym_literal_repeat1] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_div] = ACTIONS(276),
    [anon_sym_include] = ACTIONS(276),
    [anon_sym_start] = ACTIONS(276),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_div] = ACTIONS(280),
    [anon_sym_include] = ACTIONS(280),
    [anon_sym_start] = ACTIONS(280),
  },
  [86] = {
    [sym_assign_method] = STATE(151),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
  },
  [87] = {
    [sym_literal] = STATE(49),
    [sym_literal_segment] = STATE(152),
    [sym_any_uri_literal] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [88] = {
    [sym_assign_method] = STATE(153),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
  },
  [89] = {
    [sym_grammar_content] = STATE(154),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(154),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(155),
  },
  [90] = {
    [aux_sym_literal_repeat1] = STATE(155),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
  },
  [91] = {
    [aux_sym_literal_repeat1] = STATE(156),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
  },
  [92] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(43),
    [sym_pattern] = STATE(157),
    [sym_datatype_name] = STATE(45),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [93] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(43),
    [sym_pattern] = STATE(158),
    [sym_datatype_name] = STATE(45),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [94] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(43),
    [sym_pattern] = STATE(159),
    [sym_datatype_name] = STATE(45),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [95] = {
    [aux_sym_pattern_repeat1] = STATE(160),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
  },
  [96] = {
    [aux_sym_pattern_repeat2] = STATE(161),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
  },
  [97] = {
    [aux_sym_pattern_repeat3] = STATE(162),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
  },
  [98] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(164),
    [aux_sym_pattern_repeat4] = STATE(164),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(286),
  },
  [99] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(43),
    [sym_pattern] = STATE(165),
    [sym_datatype_name] = STATE(45),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_div] = ACTIONS(290),
    [anon_sym_include] = ACTIONS(290),
    [anon_sym_start] = ACTIONS(290),
  },
  [101] = {
    [sym_grammar_content] = STATE(154),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(154),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(155),
  },
  [102] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(294),
  },
  [103] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(294),
  },
  [104] = {
    [aux_sym_literal_repeat1] = STATE(168),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(296),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [105] = {
    [sym_include_content] = STATE(172),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(172),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_div] = ACTIONS(302),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_div] = ACTIONS(290),
    [anon_sym_include] = ACTIONS(290),
    [anon_sym_start] = ACTIONS(290),
  },
  [107] = {
    [aux_sym_pattern_repeat1] = STATE(133),
    [aux_sym_pattern_repeat2] = STATE(134),
    [aux_sym_pattern_repeat3] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(308),
    [anon_sym_include] = ACTIONS(308),
    [anon_sym_start] = ACTIONS(308),
  },
  [108] = {
    [aux_sym_literal_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
  },
  [109] = {
    [aux_sym_pattern_repeat1] = STATE(57),
    [aux_sym_pattern_repeat2] = STATE(58),
    [aux_sym_pattern_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [110] = {
    [aux_sym_pattern_repeat1] = STATE(57),
    [aux_sym_pattern_repeat2] = STATE(58),
    [aux_sym_pattern_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [111] = {
    [aux_sym_pattern_repeat1] = STATE(57),
    [aux_sym_pattern_repeat2] = STATE(58),
    [aux_sym_pattern_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [112] = {
    [aux_sym_pattern_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
  },
  [113] = {
    [aux_sym_pattern_repeat2] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
  },
  [114] = {
    [aux_sym_pattern_repeat3] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
  },
  [115] = {
    [sym_exceptpattern] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(105),
  },
  [116] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(330),
  },
  [117] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(332),
  },
  [118] = {
    [aux_sym_pattern_repeat1] = STATE(57),
    [aux_sym_pattern_repeat2] = STATE(58),
    [aux_sym_pattern_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(338),
    [anon_sym_default] = ACTIONS(338),
    [anon_sym_datatypes] = ACTIONS(338),
    [sym_identifier] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [sym_element] = ACTIONS(338),
    [sym_attribute] = ACTIONS(338),
    [anon_sym_list] = ACTIONS(338),
    [anon_sym_mixed] = ACTIONS(338),
    [anon_sym_parent] = ACTIONS(338),
    [anon_sym_empty] = ACTIONS(338),
    [anon_sym_text] = ACTIONS(338),
    [anon_sym_notAllowed] = ACTIONS(338),
    [anon_sym_external] = ACTIONS(338),
    [anon_sym_grammar] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(336),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(338),
    [anon_sym_div] = ACTIONS(338),
    [anon_sym_include] = ACTIONS(338),
    [anon_sym_start] = ACTIONS(338),
  },
  [120] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(340),
  },
  [121] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(342),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(346),
    [anon_sym_default] = ACTIONS(346),
    [anon_sym_datatypes] = ACTIONS(346),
    [sym_identifier] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [sym_element] = ACTIONS(346),
    [sym_attribute] = ACTIONS(346),
    [anon_sym_list] = ACTIONS(346),
    [anon_sym_mixed] = ACTIONS(346),
    [anon_sym_parent] = ACTIONS(346),
    [anon_sym_empty] = ACTIONS(346),
    [anon_sym_text] = ACTIONS(346),
    [anon_sym_notAllowed] = ACTIONS(346),
    [anon_sym_external] = ACTIONS(346),
    [anon_sym_grammar] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(344),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(346),
    [anon_sym_div] = ACTIONS(346),
    [anon_sym_include] = ACTIONS(346),
    [anon_sym_start] = ACTIONS(346),
  },
  [123] = {
    [aux_sym_literal_repeat1] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
    [anon_sym_datatypes] = ACTIONS(177),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [sym_element] = ACTIONS(177),
    [sym_attribute] = ACTIONS(177),
    [anon_sym_list] = ACTIONS(177),
    [anon_sym_mixed] = ACTIONS(177),
    [anon_sym_parent] = ACTIONS(177),
    [anon_sym_empty] = ACTIONS(177),
    [anon_sym_text] = ACTIONS(177),
    [anon_sym_notAllowed] = ACTIONS(177),
    [anon_sym_external] = ACTIONS(177),
    [anon_sym_grammar] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [124] = {
    [sym_namespace_uri_literal] = STATE(180),
    [sym_literal] = STATE(119),
    [sym_literal_segment] = STATE(123),
    [sym_comment] = ACTIONS(7),
    [anon_sym_inherit] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(230),
  },
  [125] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(350),
  },
  [126] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(350),
  },
  [127] = {
    [aux_sym_literal_repeat1] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [128] = {
    [sym_inherit] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [129] = {
    [aux_sym_literal_repeat1] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [130] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(74),
    [sym_pattern] = STATE(184),
    [sym_datatype_name] = STATE(76),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(131),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [131] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(74),
    [sym_pattern] = STATE(185),
    [sym_datatype_name] = STATE(76),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(131),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [132] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(74),
    [sym_pattern] = STATE(186),
    [sym_datatype_name] = STATE(76),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(131),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [133] = {
    [aux_sym_pattern_repeat1] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [134] = {
    [aux_sym_pattern_repeat2] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [135] = {
    [aux_sym_pattern_repeat3] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [136] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(191),
    [aux_sym_pattern_repeat4] = STATE(191),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(356),
  },
  [137] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(74),
    [sym_pattern] = STATE(192),
    [sym_datatype_name] = STATE(76),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(131),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [138] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [139] = {
    [aux_sym_literal_repeat1] = STATE(194),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
  },
  [140] = {
    [aux_sym_literal_repeat1] = STATE(195),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_div] = ACTIONS(366),
    [anon_sym_include] = ACTIONS(366),
    [anon_sym_start] = ACTIONS(366),
  },
  [142] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(196),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [143] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(197),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [144] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(198),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [145] = {
    [aux_sym_pattern_repeat1] = STATE(199),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
  },
  [146] = {
    [aux_sym_pattern_repeat2] = STATE(200),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
  },
  [147] = {
    [aux_sym_pattern_repeat3] = STATE(201),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
  },
  [148] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(203),
    [aux_sym_pattern_repeat4] = STATE(203),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(368),
  },
  [149] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(204),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [150] = {
    [aux_sym_literal_repeat1] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(310),
  },
  [151] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(206),
    [sym_pattern] = STATE(207),
    [sym_datatype_name] = STATE(208),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(373),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [152] = {
    [aux_sym_literal_repeat1] = STATE(209),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [153] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(206),
    [sym_pattern] = STATE(210),
    [sym_datatype_name] = STATE(208),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(373),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [154] = {
    [sym_grammar_content] = STATE(154),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(154),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_div] = ACTIONS(217),
    [anon_sym_include] = ACTIONS(380),
    [anon_sym_start] = ACTIONS(383),
  },
  [155] = {
    [aux_sym_literal_repeat1] = STATE(211),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
  },
  [156] = {
    [aux_sym_literal_repeat1] = STATE(156),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
  },
  [157] = {
    [aux_sym_pattern_repeat1] = STATE(95),
    [aux_sym_pattern_repeat2] = STATE(96),
    [aux_sym_pattern_repeat3] = STATE(97),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(315),
  },
  [158] = {
    [aux_sym_pattern_repeat1] = STATE(95),
    [aux_sym_pattern_repeat2] = STATE(96),
    [aux_sym_pattern_repeat3] = STATE(97),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [159] = {
    [aux_sym_pattern_repeat1] = STATE(95),
    [aux_sym_pattern_repeat2] = STATE(96),
    [aux_sym_pattern_repeat3] = STATE(97),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [160] = {
    [aux_sym_pattern_repeat1] = STATE(160),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
  },
  [161] = {
    [aux_sym_pattern_repeat2] = STATE(161),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [162] = {
    [aux_sym_pattern_repeat3] = STATE(162),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [163] = {
    [sym_exceptpattern] = STATE(141),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(167),
  },
  [164] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(400),
  },
  [165] = {
    [aux_sym_pattern_repeat1] = STATE(95),
    [aux_sym_pattern_repeat2] = STATE(96),
    [aux_sym_pattern_repeat3] = STATE(97),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(334),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_div] = ACTIONS(404),
    [anon_sym_include] = ACTIONS(404),
    [anon_sym_start] = ACTIONS(404),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [anon_sym_div] = ACTIONS(406),
    [anon_sym_include] = ACTIONS(406),
    [anon_sym_start] = ACTIONS(406),
  },
  [168] = {
    [aux_sym_literal_repeat1] = STATE(168),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(408),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [169] = {
    [sym_assign_method] = STATE(213),
    [sym_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
  },
  [170] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(413),
  },
  [171] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_div] = ACTIONS(415),
  },
  [172] = {
    [sym_include_content] = STATE(216),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(216),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_div] = ACTIONS(302),
  },
  [173] = {
    [sym_include_content] = STATE(217),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(217),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_div] = ACTIONS(302),
  },
  [174] = {
    [sym_literal] = STATE(220),
    [sym_literal_segment] = STATE(221),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(423),
  },
  [175] = {
    [sym_exceptpattern] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(105),
  },
  [176] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(425),
    [anon_sym_bar] = ACTIONS(425),
    [sym_identifier] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(431),
  },
  [177] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(433),
  },
  [178] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(433),
  },
  [179] = {
    [aux_sym_literal_repeat1] = STATE(223),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(296),
    [anon_sym_default] = ACTIONS(296),
    [anon_sym_datatypes] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [sym_element] = ACTIONS(296),
    [sym_attribute] = ACTIONS(296),
    [anon_sym_list] = ACTIONS(296),
    [anon_sym_mixed] = ACTIONS(296),
    [anon_sym_parent] = ACTIONS(296),
    [anon_sym_empty] = ACTIONS(296),
    [anon_sym_text] = ACTIONS(296),
    [anon_sym_notAllowed] = ACTIONS(296),
    [anon_sym_external] = ACTIONS(296),
    [anon_sym_grammar] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(296),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(439),
    [anon_sym_default] = ACTIONS(439),
    [anon_sym_datatypes] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_element] = ACTIONS(439),
    [sym_attribute] = ACTIONS(439),
    [anon_sym_list] = ACTIONS(439),
    [anon_sym_mixed] = ACTIONS(439),
    [anon_sym_parent] = ACTIONS(439),
    [anon_sym_empty] = ACTIONS(439),
    [anon_sym_text] = ACTIONS(439),
    [anon_sym_notAllowed] = ACTIONS(439),
    [anon_sym_external] = ACTIONS(439),
    [anon_sym_grammar] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(437),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(439),
    [anon_sym_div] = ACTIONS(439),
    [anon_sym_include] = ACTIONS(439),
    [anon_sym_start] = ACTIONS(439),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_div] = ACTIONS(406),
    [anon_sym_include] = ACTIONS(406),
    [anon_sym_start] = ACTIONS(406),
  },
  [182] = {
    [aux_sym_literal_repeat1] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(296),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [183] = {
    [aux_sym_literal_repeat1] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [184] = {
    [aux_sym_pattern_repeat1] = STATE(133),
    [aux_sym_pattern_repeat2] = STATE(134),
    [aux_sym_pattern_repeat3] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(446),
    [anon_sym_include] = ACTIONS(446),
    [anon_sym_start] = ACTIONS(446),
  },
  [185] = {
    [aux_sym_pattern_repeat1] = STATE(133),
    [aux_sym_pattern_repeat2] = STATE(134),
    [aux_sym_pattern_repeat3] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(448),
    [anon_sym_include] = ACTIONS(448),
    [anon_sym_start] = ACTIONS(448),
  },
  [186] = {
    [aux_sym_pattern_repeat1] = STATE(133),
    [aux_sym_pattern_repeat2] = STATE(134),
    [aux_sym_pattern_repeat3] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(450),
    [anon_sym_include] = ACTIONS(450),
    [anon_sym_start] = ACTIONS(450),
  },
  [187] = {
    [aux_sym_pattern_repeat1] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_div] = ACTIONS(446),
    [anon_sym_include] = ACTIONS(446),
    [anon_sym_start] = ACTIONS(446),
  },
  [188] = {
    [aux_sym_pattern_repeat2] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_div] = ACTIONS(448),
    [anon_sym_include] = ACTIONS(448),
    [anon_sym_start] = ACTIONS(448),
  },
  [189] = {
    [aux_sym_pattern_repeat3] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(458),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_div] = ACTIONS(450),
    [anon_sym_include] = ACTIONS(450),
    [anon_sym_start] = ACTIONS(450),
  },
  [190] = {
    [sym_exceptpattern] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_div] = ACTIONS(280),
    [anon_sym_include] = ACTIONS(280),
    [anon_sym_start] = ACTIONS(280),
  },
  [191] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(461),
  },
  [192] = {
    [aux_sym_pattern_repeat1] = STATE(133),
    [aux_sym_pattern_repeat2] = STATE(134),
    [aux_sym_pattern_repeat3] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(463),
    [anon_sym_include] = ACTIONS(463),
    [anon_sym_start] = ACTIONS(463),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_div] = ACTIONS(467),
    [anon_sym_include] = ACTIONS(467),
    [anon_sym_start] = ACTIONS(467),
  },
  [194] = {
    [aux_sym_literal_repeat1] = STATE(226),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
  },
  [195] = {
    [aux_sym_literal_repeat1] = STATE(195),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
  },
  [196] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [197] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [198] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [199] = {
    [aux_sym_pattern_repeat1] = STATE(199),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
  },
  [200] = {
    [aux_sym_pattern_repeat2] = STATE(200),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
  },
  [201] = {
    [aux_sym_pattern_repeat3] = STATE(201),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(480),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
  },
  [202] = {
    [sym_exceptpattern] = STATE(141),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(270),
  },
  [203] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(483),
  },
  [204] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [205] = {
    [sym_literal] = STATE(49),
    [sym_literal_segment] = STATE(228),
    [sym_any_uri_literal] = STATE(128),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [206] = {
    [aux_sym_literal_repeat1] = STATE(229),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [207] = {
    [aux_sym_pattern_repeat1] = STATE(233),
    [aux_sym_pattern_repeat2] = STATE(234),
    [aux_sym_pattern_repeat3] = STATE(235),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(244),
    [anon_sym_include] = ACTIONS(244),
    [anon_sym_start] = ACTIONS(244),
  },
  [208] = {
    [sym_datatype_value] = STATE(36),
    [sym_exceptpattern] = STATE(36),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_start] = ACTIONS(57),
  },
  [209] = {
    [aux_sym_literal_repeat1] = STATE(238),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(296),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [210] = {
    [aux_sym_pattern_repeat1] = STATE(233),
    [aux_sym_pattern_repeat2] = STATE(234),
    [aux_sym_pattern_repeat3] = STATE(235),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(308),
    [anon_sym_include] = ACTIONS(308),
    [anon_sym_start] = ACTIONS(308),
  },
  [211] = {
    [aux_sym_literal_repeat1] = STATE(211),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(310),
  },
  [212] = {
    [sym_exceptpattern] = STATE(193),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(167),
  },
  [213] = {
    [sym_literal] = STATE(245),
    [sym_literal_segment] = STATE(250),
    [sym_pattern] = STATE(251),
    [sym_datatype_name] = STATE(252),
    [sym_datatype_value] = STATE(245),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_element] = ACTIONS(508),
    [sym_attribute] = ACTIONS(508),
    [anon_sym_list] = ACTIONS(510),
    [anon_sym_mixed] = ACTIONS(510),
    [anon_sym_parent] = ACTIONS(512),
    [anon_sym_empty] = ACTIONS(514),
    [anon_sym_text] = ACTIONS(514),
    [anon_sym_notAllowed] = ACTIONS(514),
    [anon_sym_external] = ACTIONS(516),
    [anon_sym_grammar] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(520),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(522),
  },
  [214] = {
    [sym_include_content] = STATE(254),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(254),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_div] = ACTIONS(302),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_div] = ACTIONS(528),
    [anon_sym_include] = ACTIONS(528),
    [anon_sym_start] = ACTIONS(528),
  },
  [216] = {
    [sym_include_content] = STATE(216),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(216),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_div] = ACTIONS(535),
  },
  [217] = {
    [sym_include_content] = STATE(216),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(216),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(538),
    [anon_sym_div] = ACTIONS(302),
  },
  [218] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(540),
  },
  [219] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(542),
  },
  [220] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(544),
    [anon_sym_bar] = ACTIONS(544),
    [sym_identifier] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(546),
  },
  [221] = {
    [aux_sym_literal_repeat1] = STATE(258),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(177),
    [anon_sym_bar] = ACTIONS(177),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(89),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(406),
    [anon_sym_default] = ACTIONS(406),
    [anon_sym_datatypes] = ACTIONS(406),
    [sym_identifier] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [sym_element] = ACTIONS(406),
    [sym_attribute] = ACTIONS(406),
    [anon_sym_list] = ACTIONS(406),
    [anon_sym_mixed] = ACTIONS(406),
    [anon_sym_parent] = ACTIONS(406),
    [anon_sym_empty] = ACTIONS(406),
    [anon_sym_text] = ACTIONS(406),
    [anon_sym_notAllowed] = ACTIONS(406),
    [anon_sym_external] = ACTIONS(406),
    [anon_sym_grammar] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(256),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [anon_sym_div] = ACTIONS(406),
    [anon_sym_include] = ACTIONS(406),
    [anon_sym_start] = ACTIONS(406),
  },
  [223] = {
    [aux_sym_literal_repeat1] = STATE(223),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(408),
    [anon_sym_default] = ACTIONS(408),
    [anon_sym_datatypes] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(550),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [sym_element] = ACTIONS(408),
    [sym_attribute] = ACTIONS(408),
    [anon_sym_list] = ACTIONS(408),
    [anon_sym_mixed] = ACTIONS(408),
    [anon_sym_parent] = ACTIONS(408),
    [anon_sym_empty] = ACTIONS(408),
    [anon_sym_text] = ACTIONS(408),
    [anon_sym_notAllowed] = ACTIONS(408),
    [anon_sym_external] = ACTIONS(408),
    [anon_sym_grammar] = ACTIONS(408),
    [anon_sym_LPAREN] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(408),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [224] = {
    [aux_sym_literal_repeat1] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(408),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [225] = {
    [sym_exceptpattern] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_div] = ACTIONS(366),
    [anon_sym_include] = ACTIONS(366),
    [anon_sym_start] = ACTIONS(366),
  },
  [226] = {
    [aux_sym_literal_repeat1] = STATE(226),
    [sym_comment] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(310),
  },
  [227] = {
    [sym_exceptpattern] = STATE(193),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(270),
  },
  [228] = {
    [aux_sym_literal_repeat1] = STATE(259),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(559),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_start] = ACTIONS(177),
  },
  [229] = {
    [aux_sym_literal_repeat1] = STATE(260),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [230] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(206),
    [sym_pattern] = STATE(261),
    [sym_datatype_name] = STATE(208),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(373),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [231] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(206),
    [sym_pattern] = STATE(262),
    [sym_datatype_name] = STATE(208),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(373),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [232] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(206),
    [sym_pattern] = STATE(263),
    [sym_datatype_name] = STATE(208),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(373),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [233] = {
    [aux_sym_pattern_repeat1] = STATE(264),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [234] = {
    [aux_sym_pattern_repeat2] = STATE(265),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [235] = {
    [aux_sym_pattern_repeat3] = STATE(266),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
  },
  [236] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(268),
    [aux_sym_pattern_repeat4] = STATE(268),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(563),
  },
  [237] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(206),
    [sym_pattern] = STATE(269),
    [sym_datatype_name] = STATE(208),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(373),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [238] = {
    [aux_sym_literal_repeat1] = STATE(238),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(408),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [239] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_div] = ACTIONS(57),
  },
  [240] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(568),
  },
  [241] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(570),
  },
  [242] = {
    [sym_comment] = ACTIONS(7),
    [sym_name_class] = ACTIONS(572),
  },
  [243] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(574),
  },
  [244] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(576),
  },
  [245] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_div] = ACTIONS(57),
  },
  [246] = {
    [sym_literal] = STATE(277),
    [sym_literal_segment] = STATE(278),
    [sym_any_uri_literal] = STATE(279),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [anon_sym_SQUOTE] = ACTIONS(580),
  },
  [247] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(582),
  },
  [248] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(43),
    [sym_pattern] = STATE(281),
    [sym_datatype_name] = STATE(45),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [249] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_div] = ACTIONS(79),
  },
  [250] = {
    [aux_sym_literal_repeat1] = STATE(282),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(584),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_div] = ACTIONS(177),
  },
  [251] = {
    [aux_sym_pattern_repeat1] = STATE(286),
    [aux_sym_pattern_repeat2] = STATE(287),
    [aux_sym_pattern_repeat3] = STATE(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(588),
    [anon_sym_AMP] = ACTIONS(590),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_div] = ACTIONS(244),
  },
  [252] = {
    [sym_datatype_value] = STATE(274),
    [sym_exceptpattern] = STATE(274),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_div] = ACTIONS(57),
  },
  [253] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(598),
    [anon_sym_div] = ACTIONS(596),
  },
  [254] = {
    [sym_include_content] = STATE(216),
    [sym_define] = STATE(171),
    [aux_sym_grammar_content_repeat1] = STATE(216),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_div] = ACTIONS(302),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(604),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_div] = ACTIONS(604),
    [anon_sym_include] = ACTIONS(604),
    [anon_sym_start] = ACTIONS(604),
  },
  [256] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(606),
  },
  [257] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(606),
  },
  [258] = {
    [aux_sym_literal_repeat1] = STATE(293),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(296),
    [anon_sym_bar] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(608),
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [259] = {
    [aux_sym_literal_repeat1] = STATE(294),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(610),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(296),
    [anon_sym_div] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(296),
    [anon_sym_start] = ACTIONS(296),
  },
  [260] = {
    [aux_sym_literal_repeat1] = STATE(260),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(612),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [261] = {
    [aux_sym_pattern_repeat1] = STATE(233),
    [aux_sym_pattern_repeat2] = STATE(234),
    [aux_sym_pattern_repeat3] = STATE(235),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(446),
    [anon_sym_include] = ACTIONS(446),
    [anon_sym_start] = ACTIONS(446),
  },
  [262] = {
    [aux_sym_pattern_repeat1] = STATE(233),
    [aux_sym_pattern_repeat2] = STATE(234),
    [aux_sym_pattern_repeat3] = STATE(235),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(448),
    [anon_sym_include] = ACTIONS(448),
    [anon_sym_start] = ACTIONS(448),
  },
  [263] = {
    [aux_sym_pattern_repeat1] = STATE(233),
    [aux_sym_pattern_repeat2] = STATE(234),
    [aux_sym_pattern_repeat3] = STATE(235),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(450),
    [anon_sym_include] = ACTIONS(450),
    [anon_sym_start] = ACTIONS(450),
  },
  [264] = {
    [aux_sym_pattern_repeat1] = STATE(264),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_div] = ACTIONS(446),
    [anon_sym_include] = ACTIONS(446),
    [anon_sym_start] = ACTIONS(446),
  },
  [265] = {
    [aux_sym_pattern_repeat2] = STATE(265),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(618),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_div] = ACTIONS(448),
    [anon_sym_include] = ACTIONS(448),
    [anon_sym_start] = ACTIONS(448),
  },
  [266] = {
    [aux_sym_pattern_repeat3] = STATE(266),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(621),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_div] = ACTIONS(450),
    [anon_sym_include] = ACTIONS(450),
    [anon_sym_start] = ACTIONS(450),
  },
  [267] = {
    [sym_exceptpattern] = STATE(141),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_div] = ACTIONS(280),
    [anon_sym_include] = ACTIONS(280),
    [anon_sym_start] = ACTIONS(280),
  },
  [268] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(624),
  },
  [269] = {
    [aux_sym_pattern_repeat1] = STATE(233),
    [aux_sym_pattern_repeat2] = STATE(234),
    [aux_sym_pattern_repeat3] = STATE(235),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(463),
    [anon_sym_include] = ACTIONS(463),
    [anon_sym_start] = ACTIONS(463),
  },
  [270] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(626),
  },
  [271] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(626),
  },
  [272] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(628),
  },
  [273] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(298),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [274] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
  },
  [275] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(630),
  },
  [276] = {
    [sym_comment] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(632),
  },
  [277] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [anon_sym_div] = ACTIONS(175),
  },
  [278] = {
    [aux_sym_literal_repeat1] = STATE(301),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(634),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
  },
  [279] = {
    [sym_inherit] = STATE(303),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(636),
    [anon_sym_div] = ACTIONS(141),
  },
  [280] = {
    [sym_grammar_content] = STATE(304),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(304),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(155),
  },
  [281] = {
    [aux_sym_pattern_repeat1] = STATE(95),
    [aux_sym_pattern_repeat2] = STATE(96),
    [aux_sym_pattern_repeat3] = STATE(97),
    [sym_comment] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(638),
  },
  [282] = {
    [aux_sym_literal_repeat1] = STATE(305),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_div] = ACTIONS(296),
  },
  [283] = {
    [sym_literal] = STATE(245),
    [sym_literal_segment] = STATE(250),
    [sym_pattern] = STATE(306),
    [sym_datatype_name] = STATE(252),
    [sym_datatype_value] = STATE(245),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_element] = ACTIONS(508),
    [sym_attribute] = ACTIONS(508),
    [anon_sym_list] = ACTIONS(510),
    [anon_sym_mixed] = ACTIONS(510),
    [anon_sym_parent] = ACTIONS(512),
    [anon_sym_empty] = ACTIONS(514),
    [anon_sym_text] = ACTIONS(514),
    [anon_sym_notAllowed] = ACTIONS(514),
    [anon_sym_external] = ACTIONS(516),
    [anon_sym_grammar] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(520),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(522),
  },
  [284] = {
    [sym_literal] = STATE(245),
    [sym_literal_segment] = STATE(250),
    [sym_pattern] = STATE(307),
    [sym_datatype_name] = STATE(252),
    [sym_datatype_value] = STATE(245),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_element] = ACTIONS(508),
    [sym_attribute] = ACTIONS(508),
    [anon_sym_list] = ACTIONS(510),
    [anon_sym_mixed] = ACTIONS(510),
    [anon_sym_parent] = ACTIONS(512),
    [anon_sym_empty] = ACTIONS(514),
    [anon_sym_text] = ACTIONS(514),
    [anon_sym_notAllowed] = ACTIONS(514),
    [anon_sym_external] = ACTIONS(516),
    [anon_sym_grammar] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(520),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(522),
  },
  [285] = {
    [sym_literal] = STATE(245),
    [sym_literal_segment] = STATE(250),
    [sym_pattern] = STATE(308),
    [sym_datatype_name] = STATE(252),
    [sym_datatype_value] = STATE(245),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_element] = ACTIONS(508),
    [sym_attribute] = ACTIONS(508),
    [anon_sym_list] = ACTIONS(510),
    [anon_sym_mixed] = ACTIONS(510),
    [anon_sym_parent] = ACTIONS(512),
    [anon_sym_empty] = ACTIONS(514),
    [anon_sym_text] = ACTIONS(514),
    [anon_sym_notAllowed] = ACTIONS(514),
    [anon_sym_external] = ACTIONS(516),
    [anon_sym_grammar] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(520),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(522),
  },
  [286] = {
    [aux_sym_pattern_repeat1] = STATE(309),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
  },
  [287] = {
    [aux_sym_pattern_repeat2] = STATE(310),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
  },
  [288] = {
    [aux_sym_pattern_repeat3] = STATE(311),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_div] = ACTIONS(141),
  },
  [289] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(313),
    [aux_sym_pattern_repeat4] = STATE(313),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(642),
  },
  [290] = {
    [sym_literal] = STATE(245),
    [sym_literal_segment] = STATE(250),
    [sym_pattern] = STATE(314),
    [sym_datatype_name] = STATE(252),
    [sym_datatype_value] = STATE(245),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(506),
    [sym_element] = ACTIONS(508),
    [sym_attribute] = ACTIONS(508),
    [anon_sym_list] = ACTIONS(510),
    [anon_sym_mixed] = ACTIONS(510),
    [anon_sym_parent] = ACTIONS(512),
    [anon_sym_empty] = ACTIONS(514),
    [anon_sym_text] = ACTIONS(514),
    [anon_sym_notAllowed] = ACTIONS(514),
    [anon_sym_external] = ACTIONS(516),
    [anon_sym_grammar] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(520),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(522),
  },
  [291] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(644),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_div] = ACTIONS(644),
  },
  [292] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(406),
    [anon_sym_bar] = ACTIONS(406),
    [sym_identifier] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
  },
  [293] = {
    [aux_sym_literal_repeat1] = STATE(293),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(408),
    [anon_sym_bar] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(648),
    [anon_sym_RBRACE] = ACTIONS(310),
  },
  [294] = {
    [aux_sym_literal_repeat1] = STATE(294),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(408),
    [anon_sym_div] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_start] = ACTIONS(408),
  },
  [295] = {
    [sym_exceptpattern] = STATE(193),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_div] = ACTIONS(366),
    [anon_sym_include] = ACTIONS(366),
    [anon_sym_start] = ACTIONS(366),
  },
  [296] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_div] = ACTIONS(406),
  },
  [297] = {
    [sym_literal] = STATE(11),
    [sym_literal_segment] = STATE(80),
    [sym_pattern] = STATE(315),
    [sym_datatype_name] = STATE(82),
    [sym_datatype_value] = STATE(11),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_element] = ACTIONS(21),
    [sym_attribute] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_mixed] = ACTIONS(23),
    [anon_sym_parent] = ACTIONS(25),
    [anon_sym_empty] = ACTIONS(27),
    [anon_sym_text] = ACTIONS(27),
    [anon_sym_notAllowed] = ACTIONS(27),
    [anon_sym_external] = ACTIONS(137),
    [anon_sym_grammar] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(35),
  },
  [298] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [299] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(656),
  },
  [300] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(656),
  },
  [301] = {
    [aux_sym_literal_repeat1] = STATE(318),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(658),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(296),
    [anon_sym_div] = ACTIONS(296),
  },
  [302] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_div] = ACTIONS(276),
  },
  [303] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_div] = ACTIONS(280),
  },
  [304] = {
    [sym_grammar_content] = STATE(154),
    [sym_start] = STATE(23),
    [sym_define] = STATE(23),
    [aux_sym_top_level_repeat2] = STATE(154),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(654),
    [anon_sym_div] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(155),
  },
  [305] = {
    [aux_sym_literal_repeat1] = STATE(305),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(660),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_div] = ACTIONS(408),
  },
  [306] = {
    [aux_sym_pattern_repeat1] = STATE(286),
    [aux_sym_pattern_repeat2] = STATE(287),
    [aux_sym_pattern_repeat3] = STATE(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(588),
    [anon_sym_AMP] = ACTIONS(590),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_div] = ACTIONS(446),
  },
  [307] = {
    [aux_sym_pattern_repeat1] = STATE(286),
    [aux_sym_pattern_repeat2] = STATE(287),
    [aux_sym_pattern_repeat3] = STATE(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(588),
    [anon_sym_AMP] = ACTIONS(590),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_div] = ACTIONS(448),
  },
  [308] = {
    [aux_sym_pattern_repeat1] = STATE(286),
    [aux_sym_pattern_repeat2] = STATE(287),
    [aux_sym_pattern_repeat3] = STATE(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(588),
    [anon_sym_AMP] = ACTIONS(590),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_div] = ACTIONS(450),
  },
  [309] = {
    [aux_sym_pattern_repeat1] = STATE(309),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_div] = ACTIONS(446),
  },
  [310] = {
    [aux_sym_pattern_repeat2] = STATE(310),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(666),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_div] = ACTIONS(448),
  },
  [311] = {
    [aux_sym_pattern_repeat3] = STATE(311),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(669),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_div] = ACTIONS(450),
  },
  [312] = {
    [sym_exceptpattern] = STATE(316),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_div] = ACTIONS(280),
  },
  [313] = {
    [sym__id_or_keyword] = STATE(116),
    [sym_keyword] = STATE(116),
    [sym_param] = STATE(176),
    [aux_sym_pattern_repeat4] = STATE(176),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(43),
    [anon_sym_bar] = ACTIONS(43),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(672),
  },
  [314] = {
    [aux_sym_pattern_repeat1] = STATE(286),
    [aux_sym_pattern_repeat2] = STATE(287),
    [aux_sym_pattern_repeat3] = STATE(288),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(588),
    [anon_sym_AMP] = ACTIONS(590),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_div] = ACTIONS(463),
  },
  [315] = {
    [aux_sym_pattern_repeat1] = STATE(145),
    [aux_sym_pattern_repeat2] = STATE(146),
    [aux_sym_pattern_repeat3] = STATE(147),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(674),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [316] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_div] = ACTIONS(366),
  },
  [317] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [anon_sym_div] = ACTIONS(406),
  },
  [318] = {
    [aux_sym_literal_repeat1] = STATE(318),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(676),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(408),
    [anon_sym_div] = ACTIONS(408),
  },
  [319] = {
    [sym_exceptpattern] = STATE(320),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_div] = ACTIONS(366),
  },
  [320] = {
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_div] = ACTIONS(467),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = false}, SHIFT(18),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = false}, SHIFT(29),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(30),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_datatype_name, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_pattern, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [61] = {.count = 1, .reusable = false}, SHIFT(32),
  [63] = {.count = 1, .reusable = false}, SHIFT(33),
  [65] = {.count = 1, .reusable = false}, SHIFT(34),
  [67] = {.count = 1, .reusable = true}, SHIFT(35),
  [69] = {.count = 1, .reusable = true}, SHIFT(36),
  [71] = {.count = 1, .reusable = true}, SHIFT(40),
  [73] = {.count = 1, .reusable = false}, SHIFT(41),
  [75] = {.count = 1, .reusable = false}, SHIFT(42),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_datatype_value, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_datatype_value, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(46),
  [83] = {.count = 1, .reusable = true}, SHIFT(47),
  [85] = {.count = 1, .reusable = true}, SHIFT(48),
  [87] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(53),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, SHIFT(55),
  [99] = {.count = 1, .reusable = true}, SHIFT(56),
  [101] = {.count = 1, .reusable = true}, SHIFT(60),
  [103] = {.count = 1, .reusable = true}, SHIFT(15),
  [105] = {.count = 1, .reusable = true}, SHIFT(61),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_content, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_grammar_content, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(65),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(67),
  [117] = {.count = 1, .reusable = false}, SHIFT(68),
  [119] = {.count = 1, .reusable = true}, SHIFT(69),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_assign_method, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_assign_method, 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(70),
  [127] = {.count = 1, .reusable = true}, SHIFT(71),
  [129] = {.count = 1, .reusable = true}, SHIFT(72),
  [131] = {.count = 1, .reusable = false}, SHIFT(73),
  [133] = {.count = 1, .reusable = true}, SHIFT(77),
  [135] = {.count = 1, .reusable = true}, SHIFT(78),
  [137] = {.count = 1, .reusable = false}, SHIFT(79),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_pattern, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_any_uri_literal, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(83),
  [147] = {.count = 1, .reusable = true}, SHIFT(84),
  [149] = {.count = 1, .reusable = false}, SHIFT(86),
  [151] = {.count = 1, .reusable = true}, SHIFT(85),
  [153] = {.count = 1, .reusable = false}, SHIFT(87),
  [155] = {.count = 1, .reusable = false}, SHIFT(88),
  [157] = {.count = 1, .reusable = true}, SHIFT(91),
  [159] = {.count = 1, .reusable = true}, SHIFT(92),
  [161] = {.count = 1, .reusable = true}, SHIFT(93),
  [163] = {.count = 1, .reusable = true}, SHIFT(94),
  [165] = {.count = 1, .reusable = true}, SHIFT(98),
  [167] = {.count = 1, .reusable = true}, SHIFT(99),
  [169] = {.count = 1, .reusable = true}, SHIFT(100),
  [171] = {.count = 1, .reusable = false}, SHIFT(102),
  [173] = {.count = 1, .reusable = false}, SHIFT(103),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_any_uri_literal, 1),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 1),
  [179] = {.count = 1, .reusable = true}, SHIFT(104),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_content, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_grammar_content, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(105),
  [187] = {.count = 1, .reusable = false}, SHIFT(84),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(108),
  [193] = {.count = 1, .reusable = false}, SHIFT(116),
  [195] = {.count = 1, .reusable = true}, SHIFT(115),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(2),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(3),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(4),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat2, 2),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(65),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(16),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(17),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(18),
  [226] = {.count = 1, .reusable = true}, SHIFT(119),
  [228] = {.count = 1, .reusable = true}, SHIFT(120),
  [230] = {.count = 1, .reusable = true}, SHIFT(121),
  [232] = {.count = 1, .reusable = true}, SHIFT(124),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_datatype_name, 1),
  [236] = {.count = 1, .reusable = false}, SHIFT(125),
  [238] = {.count = 1, .reusable = false}, SHIFT(126),
  [240] = {.count = 1, .reusable = true}, SHIFT(129),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_define, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_define, 3),
  [246] = {.count = 1, .reusable = true}, SHIFT(130),
  [248] = {.count = 1, .reusable = true}, SHIFT(131),
  [250] = {.count = 1, .reusable = true}, SHIFT(132),
  [252] = {.count = 1, .reusable = true}, SHIFT(136),
  [254] = {.count = 1, .reusable = true}, SHIFT(137),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_literal_segment, 3),
  [258] = {.count = 1, .reusable = true}, SHIFT(140),
  [260] = {.count = 1, .reusable = true}, SHIFT(141),
  [262] = {.count = 1, .reusable = true}, SHIFT(142),
  [264] = {.count = 1, .reusable = true}, SHIFT(143),
  [266] = {.count = 1, .reusable = true}, SHIFT(144),
  [268] = {.count = 1, .reusable = true}, SHIFT(148),
  [270] = {.count = 1, .reusable = true}, SHIFT(149),
  [272] = {.count = 1, .reusable = true}, SHIFT(150),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_inherit, 1),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_inherit, 1),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 3),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_pattern, 3),
  [282] = {.count = 1, .reusable = true}, SHIFT(155),
  [284] = {.count = 1, .reusable = true}, SHIFT(156),
  [286] = {.count = 1, .reusable = true}, SHIFT(163),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_content, 3),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_grammar_content, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(166),
  [294] = {.count = 1, .reusable = true}, SHIFT(167),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 2),
  [298] = {.count = 1, .reusable = true}, SHIFT(168),
  [300] = {.count = 1, .reusable = false}, SHIFT(169),
  [302] = {.count = 1, .reusable = false}, SHIFT(170),
  [304] = {.count = 1, .reusable = true}, SHIFT(173),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_start, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_start, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(108),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(54),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(55),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2), SHIFT_REPEAT(56),
  [330] = {.count = 1, .reusable = true}, SHIFT(174),
  [332] = {.count = 1, .reusable = true}, SHIFT(175),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_exceptpattern, 2),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_uri_literal, 1),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_uri_literal, 1),
  [340] = {.count = 1, .reusable = false}, SHIFT(177),
  [342] = {.count = 1, .reusable = false}, SHIFT(178),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_decl, 4),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_decl, 4),
  [348] = {.count = 1, .reusable = true}, SHIFT(179),
  [350] = {.count = 1, .reusable = true}, SHIFT(181),
  [352] = {.count = 1, .reusable = true}, SHIFT(182),
  [354] = {.count = 1, .reusable = true}, SHIFT(183),
  [356] = {.count = 1, .reusable = true}, SHIFT(190),
  [358] = {.count = 1, .reusable = true}, SHIFT(193),
  [360] = {.count = 1, .reusable = true}, SHIFT(194),
  [362] = {.count = 1, .reusable = true}, SHIFT(195),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 4),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_pattern, 4),
  [368] = {.count = 1, .reusable = true}, SHIFT(202),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(150),
  [373] = {.count = 1, .reusable = false}, SHIFT(205),
  [375] = {.count = 1, .reusable = true}, SHIFT(209),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(86),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(87),
  [383] = {.count = 2, .reusable = false}, REDUCE(aux_sym_top_level_repeat2, 2), SHIFT_REPEAT(88),
  [386] = {.count = 1, .reusable = true}, SHIFT(211),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(156),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(92),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(93),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2), SHIFT_REPEAT(94),
  [400] = {.count = 1, .reusable = true}, SHIFT(212),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_content, 4),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_grammar_content, 4),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_literal_segment, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(aux_sym_literal_repeat1, 2),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(168),
  [413] = {.count = 1, .reusable = true}, SHIFT(214),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_include_content, 1),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_include_content, 1),
  [419] = {.count = 1, .reusable = true}, SHIFT(215),
  [421] = {.count = 1, .reusable = true}, SHIFT(218),
  [423] = {.count = 1, .reusable = true}, SHIFT(219),
  [425] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pattern_repeat4, 2), SHIFT_REPEAT(26),
  [428] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pattern_repeat4, 2), SHIFT_REPEAT(116),
  [431] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat4, 2),
  [433] = {.count = 1, .reusable = true}, SHIFT(222),
  [435] = {.count = 1, .reusable = true}, SHIFT(223),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_decl, 5),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_decl, 5),
  [441] = {.count = 1, .reusable = true}, SHIFT(224),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(183),
  [446] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pattern_repeat1, 2),
  [448] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pattern_repeat2, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pattern_repeat3, 2),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(130),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(131),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2), SHIFT_REPEAT(132),
  [461] = {.count = 1, .reusable = true}, SHIFT(225),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_exceptpattern, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 5),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_pattern, 5),
  [469] = {.count = 1, .reusable = true}, SHIFT(226),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(195),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(142),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(143),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2), SHIFT_REPEAT(144),
  [483] = {.count = 1, .reusable = true}, SHIFT(227),
  [485] = {.count = 1, .reusable = true}, SHIFT(229),
  [487] = {.count = 1, .reusable = true}, SHIFT(230),
  [489] = {.count = 1, .reusable = true}, SHIFT(231),
  [491] = {.count = 1, .reusable = true}, SHIFT(232),
  [493] = {.count = 1, .reusable = true}, SHIFT(236),
  [495] = {.count = 1, .reusable = true}, SHIFT(237),
  [497] = {.count = 1, .reusable = true}, SHIFT(238),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(211),
  [502] = {.count = 1, .reusable = false}, SHIFT(239),
  [504] = {.count = 1, .reusable = true}, SHIFT(240),
  [506] = {.count = 1, .reusable = true}, SHIFT(241),
  [508] = {.count = 1, .reusable = false}, SHIFT(242),
  [510] = {.count = 1, .reusable = false}, SHIFT(243),
  [512] = {.count = 1, .reusable = false}, SHIFT(244),
  [514] = {.count = 1, .reusable = false}, SHIFT(245),
  [516] = {.count = 1, .reusable = false}, SHIFT(246),
  [518] = {.count = 1, .reusable = false}, SHIFT(247),
  [520] = {.count = 1, .reusable = true}, SHIFT(248),
  [522] = {.count = 1, .reusable = false}, SHIFT(249),
  [524] = {.count = 1, .reusable = true}, SHIFT(253),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_content, 5),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_grammar_content, 5),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_content_repeat1, 2), SHIFT_REPEAT(169),
  [533] = {.count = 1, .reusable = true}, REDUCE(aux_sym_grammar_content_repeat1, 2),
  [535] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_content_repeat1, 2), SHIFT_REPEAT(170),
  [538] = {.count = 1, .reusable = true}, SHIFT(255),
  [540] = {.count = 1, .reusable = false}, SHIFT(256),
  [542] = {.count = 1, .reusable = false}, SHIFT(257),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_param, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_param, 3),
  [548] = {.count = 1, .reusable = true}, SHIFT(258),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(223),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(224),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(226),
  [559] = {.count = 1, .reusable = true}, SHIFT(259),
  [561] = {.count = 1, .reusable = true}, SHIFT(260),
  [563] = {.count = 1, .reusable = true}, SHIFT(267),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(238),
  [568] = {.count = 1, .reusable = false}, SHIFT(270),
  [570] = {.count = 1, .reusable = false}, SHIFT(271),
  [572] = {.count = 1, .reusable = false}, SHIFT(272),
  [574] = {.count = 1, .reusable = true}, SHIFT(273),
  [576] = {.count = 1, .reusable = true}, SHIFT(274),
  [578] = {.count = 1, .reusable = true}, SHIFT(275),
  [580] = {.count = 1, .reusable = true}, SHIFT(276),
  [582] = {.count = 1, .reusable = true}, SHIFT(280),
  [584] = {.count = 1, .reusable = true}, SHIFT(282),
  [586] = {.count = 1, .reusable = true}, SHIFT(283),
  [588] = {.count = 1, .reusable = true}, SHIFT(284),
  [590] = {.count = 1, .reusable = true}, SHIFT(285),
  [592] = {.count = 1, .reusable = true}, SHIFT(289),
  [594] = {.count = 1, .reusable = true}, SHIFT(290),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_include_content, 3),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_include_content, 3),
  [600] = {.count = 1, .reusable = true}, SHIFT(291),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_content, 6),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_grammar_content, 6),
  [606] = {.count = 1, .reusable = true}, SHIFT(292),
  [608] = {.count = 1, .reusable = true}, SHIFT(293),
  [610] = {.count = 1, .reusable = true}, SHIFT(294),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(260),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(230),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(231),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2), SHIFT_REPEAT(232),
  [624] = {.count = 1, .reusable = true}, SHIFT(295),
  [626] = {.count = 1, .reusable = true}, SHIFT(296),
  [628] = {.count = 1, .reusable = true}, SHIFT(297),
  [630] = {.count = 1, .reusable = false}, SHIFT(299),
  [632] = {.count = 1, .reusable = false}, SHIFT(300),
  [634] = {.count = 1, .reusable = true}, SHIFT(301),
  [636] = {.count = 1, .reusable = false}, SHIFT(302),
  [638] = {.count = 1, .reusable = true}, SHIFT(303),
  [640] = {.count = 1, .reusable = true}, SHIFT(305),
  [642] = {.count = 1, .reusable = true}, SHIFT(312),
  [644] = {.count = 1, .reusable = false}, REDUCE(sym_include_content, 4),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_include_content, 4),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(293),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(294),
  [654] = {.count = 1, .reusable = true}, SHIFT(316),
  [656] = {.count = 1, .reusable = true}, SHIFT(317),
  [658] = {.count = 1, .reusable = true}, SHIFT(318),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(305),
  [663] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(283),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat2, 2), SHIFT_REPEAT(284),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat3, 2), SHIFT_REPEAT(285),
  [672] = {.count = 1, .reusable = true}, SHIFT(319),
  [674] = {.count = 1, .reusable = true}, SHIFT(320),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_literal_repeat1, 2), SHIFT_REPEAT(318),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_relaxcompact() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
