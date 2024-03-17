module.exports = grammar({
  name: "taskpaper",

  rules: {
    source_file: ($) => repeat($._item),

    _item: ($) => choice($.project, $.task, $.note),

    project: ($) => seq(field("name", /.+/), ":", optional($.tags), "\n"),

    task: ($) => seq("-", field("content", /.+/), optional($.tags), "\n"),

    note: ($) => /[^\n]+\n/,

    tags: ($) =>
      repeat1(
        seq(
          " ",
          "@",
          field("key", /\w+/),
          optional(seq("(", field("value", /[^)]+/), ")")),
        ),
      ),
  },
});
