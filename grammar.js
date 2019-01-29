module.exports = grammar({
  name: "relaxcompact",

  extras: $ => [/[\s\n\t\r]/, $.comment],

  rules: {

    top_level: $ => seq(repeat($.decl), choice($.pattern, repeat($.grammar_content))),

    comment: _ => /#.*/,

    preamble: $ => repeat1($.decl),

    decl: $ => choice(
      seq("namespace", $._id_or_keyword, "=", $.namespace_uri_literal),
      seq("default", "namespace", optional($._id_or_keyword), "=", $.namespace_uri_literal),
      seq("datatypes", $._id_or_keyword, "=", $.literal)
    ),

    _id_or_keyword: $ => choice($.keyword, $.identifier),

    keyword: _ => choice("foo", "bar"),

    identifier: _ => /[a-zA-Z:_]+/,

    namespace_uri_literal: $ => choice("inherit", $.literal),

    literal: $ => seq($.literal_segment, repeat("~", $.literal_segment)),

    literal_segment: _ => choice(
      seq("\"", /[^\"\n]*/, "\""),
      seq("'", /[^\'\n]*/, "'"),
      // TODO: Triple quotes
    ),

    element: _ => "element",

    attribute: _ => "attribute",

    pattern: $ => prec.left(100, choice(
      seq($.element, $.name_class, "{", $.pattern, "}"),
      seq($.attribute, $.name_class, "{", $.pattern, "}"),
      seq($.pattern, repeat1(seq(",", $.pattern))),
      seq($.pattern, repeat1(seq("|", $.pattern))),
      seq($.pattern, repeat1(seq("&", $.pattern))),
      seq($.pattern, "?"),
      seq($.pattern, "*"),
      seq($.pattern, "+"),
      seq("list", "{", $.pattern, "}"),
      seq("mixed", "{", $.pattern, "}"),
      $.identifier,
      $.literal,
      seq("parent", $.identifier),
      "empty",
      "text",
      seq(optional($.datatype_name), $.datatype_value),
      seq($.datatype_name, optional(seq("{", repeat($.param), "}")), optional($.exceptpattern)),
      "notAllowed",
      seq("external", $.any_uri_literal, optional($.inherit)),
      seq("grammar", "{", repeat($.grammar_content), "}"),
      seq("(", $.pattern, ")")
    )),

    any_uri_literal: $ => $.literal,

    inherit: _ => /\w+/, // TODO

    datatype_name: $ => $.identifier,

    param: $ => seq($._id_or_keyword, "=", $.literal),

    datatype_value: _ => prec(8, /\w+/), // TODO

    exceptpattern: $ => seq("-", $.pattern),

    name_class: _ => /\S+/, // TODO

    grammar_content: $ => prec.left(choice(
      $.start,
      $.define,
      seq("div", "{", repeat($.grammar_content), "}"),
      seq("include", $.any_uri_literal, optional($.inherit), optional(seq("{", repeat($.include_content), "}")))
    )),

    include_content: $ => choice(
      $.define,
      seq("div", "{", repeat($.include_content), "}"),
    ),

    start: $ => seq("start", $.assign_method, $.pattern),

    assign_method: _ => choice("=", "|=", "&="),

    define: $ => seq($.identifier, $.assign_method, $.pattern)

  }
});
