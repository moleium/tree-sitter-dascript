const cpp_keywords = [
    "addr", "aka", "as", "assume", "break", "cast", "const", "continue", "def", "delete", "deref", "elif", "else", "enum", "expect", "explicit", "finally", "for", "goto", "if", "implicit", "in", "inscope", "is", "iterator", "label", "let", "module", "new", "null", "operator", "options", "override", "pass", "private", "public", "recover", "reinterpret", "require", "return", "sealed", "shared", "smart_ptr", "static", "static_elif", "static_if", "struct", "table", "try", "typedef", "typeinfo", "unsafe", "upcast", "var", "where", "while", "with"
];

module.exports = grammar({
    name: 'dascript',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {

        source_file: $ => repeat($.$declaration),

        $declaration: $ => choice(
            $.function_declaration,
            $.struct_declaration,
            $.enum_declaration,
            $.variable_declaration,
            $.type_alias,
        ),

        comment: $ => seq('//', /.*/),
        block_comment: $ => seq('/*', repeat(/./), '*/'),

        identifier: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,

        type: $ => seq(
            optional('const'),
            $.identifier,
            repeat(seq('<', commaSep1($.type), '>')),
            optional($.array_type),
        ),

        array_type: $ => seq('[', optional($.integer_literal), ']'),

        function_declaration: $ => seq(
            'def',
            optional(choice('abstract', 'override')),
            optional(choice('private', 'public', 'shared')),
            optional('static'),
            $.identifier,
            $.parameter_list,
            optional($.return_type),
            $.block,
        ),

        parameter_list: $ => seq(
            '(',
            commaSep(seq(
                optional('var'),
                $.identifier,
                ':',
                $.type,
                optional(seq('=', $.$expression)),
            )),
            ')',
        ),

        return_type: $ => seq(':', $.type),

        struct_declaration: $ => seq(
            choice('struct', 'class'),
            optional(choice('private', 'public', 'sealed')),
            $.identifier,
            optional(seq(':', commaSep1($.identifier))), // inheritance
            $.block,
        ),

        enum_declaration: $ => seq(
            'enum',
            $.identifier,
            $.block,
        ),

        variable_declaration: $ => seq(
            'let',
            $.identifier,
            ':',
            $.type,
            optional(seq('=', $.$expression)),
            ';',
        ),

        type_alias: $ => seq(
            'typedef',
            $.identifier,
            ':',
            $.type,
            ';',
        ),

        block: $ => seq('{', repeat($.$statement), '}'),

        $statement: $ => choice(
          $.variable_declaration, // These already have ;
          $.return_statement,      // This already has ;
          $.if_statement,
          $.for_statement,
          $.while_statement,
          $.block,                 // Blocks don't need ;
          seq($.$expression, ';'), // <--- Require ; for expressions
        ),

        return_statement: $ => seq('return', optional($.$expression), ';'),

        if_statement: $ => seq(
            'if',
            $.$expression,
            $.block,
            optional($.else_clause),
        ),

        else_clause: $ => seq('else', $.block),

        for_statement: $ => seq(
            'for',
            $.identifier,
            'in',
            $.$expression,
            $.block,
        ),

        while_statement: $ => seq(
            'while',
            $.$expression,
            $.block,
        ),

        $expression: $ => choice(
            $.identifier,
            $.integer_literal,
            $.float_literal,
            $.string_literal,
            $.boolean_literal,
            $.function_call,
            $.binary_expression,
            $.unary_expression,
            $.member_access,
            $.array_access,
        ),

        integer_literal: $ => /\d+/,
        float_literal: $ => /\d+\.\d*/,
        string_literal: $ => seq('"', repeat(choice(/[^"\\]+/, /\\./)), '"'),
        boolean_literal: $ => choice('true', 'false'),

        function_call: $ => seq(
            $.identifier,
            '(',
            commaSep($.$expression),
            ')',
        ),

        binary_expression: $ => prec.left(seq($.$expression, choice('+', '-', '*', '/', '%', '==', '!=', '<', '>', '<=', '>=' , '&&', '||'), $.$expression)),

        unary_expression: $ => prec(1, seq(choice('+', '-', '!'), $.$expression)),

        member_access: $ => seq($.$expression, '.', $.identifier),

        array_access: $ => seq($.$expression, '[', $.$expression, ']'),

        annotation: $ => seq(
            '[',
            $.identifier,
            optional(seq('(', commaSep(seq($.identifier, '=', $.$expression)), ')')),
            ']',
        ),
    }
});

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
    return optional(commaSep1(rule));
}
