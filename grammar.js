module.exports = grammar({
  name: "taskpaper",

  rules: {
    source_file: ($) => repeat($._element),

    _element: ($) => choice($.project, $.task, $.note),

    project: ($) =>
      seq(
        field("name", /[^:\n]+/),
        ":",
        optional(seq("\n", repeat($._project_content))),
      ),

    _project_content: ($) => choice($.task, $.note),

    task: ($) => seq("- ", field("content", /[^\n@]+/), optional($.tags), "\n"),

    note: ($) => /[^\n]+\n/,

    tags: ($) =>
      repeat1(
        seq(
          " ",
          "@",
          field("key", /\w+/),
          optional(seq("(", field("value", /[^)\n]+/), ")")),
        ),
      ),
  },
});
