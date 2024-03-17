module.exports = grammar({
  name: "taskpaper",

  extras: ($) => [
    /\s/, // Treat spaces and tabs as non-significant globally
  ],

  rules: {
    source_file: ($) => repeat($._item),

    _item: ($) => choice($.task, $.note), // Define items as either tasks or notes

    task: ($) =>
      seq(
        "- ", // A task starts with '- '
        field("content", /[^\n@]+/),
        optional($.tags), // Tasks may have tags
        "\n", // Tasks end with a newline
      ),

    note: ($) =>
      seq(
        /[^\n-]+/, // A note contains anything except the start of a new task
        "\n", // Notes end with a newline
      ),

    tags: ($) =>
      repeat1(
        seq(
          " ", // Tags are preceded by a space
          "@", // A tag starts with '@'
          field("key", /\w+/), // Tag key: sequence of word characters
          optional(
            seq(
              "(", // Tags may have values enclosed in parentheses
              field("value", /[^)\n]+/), // The tag value: anything except a closing parenthesis or newline
              ")",
            ),
          ),
        ),
      ),
  },
});
