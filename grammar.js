const PREC = {
    PAREN_DECLARATOR: -10,
    ASSIGNMENT: -1,
    CONDITIONAL: -2,
    DEFAULT: 0,
    LOGICAL_OR: 1,
    LOGICAL_AND: 2,
    INCLUSIVE_OR: 3,
    EXCLUSIVE_OR: 4,
    BITWISE_AND: 5,
    EQUALITY: 6,
    RELATIONAL: 7,
    SHIFT: 8,
    ADDITIVE: 9,
    MULTIPLICATIVE: 10,
    UNARY: 11,
    CAST: 12,
    POSTFIX: 13,
    CALL: 14,
    MEMBER: 15,
    SUBSCRIPT: 16
};

module.exports = grammar({
    name: 'dascript',

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    conflicts: $ => [
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ => choice(
            $.annotation,
            $.struct_declaration,
            $.function_definition,
            $.variable_declaration,
            $.expression_statement,
            $.return_statement,
            $.if_statement,
            $.while_statement,
            $.for_statement,
            $.break_statement,
            $.continue_statement,
            $.block,
        ),


        // Keywords
        keyword: $ => choice(
            '$', 'struct', 'class', 'let', 'def', 'while', 'if', 'static_if', 'else',
            'for', 'recover', 'true', 'false', 'new', 'typeinfo', 'type', 'in', 'is',
            'as', 'elif', 'static_elif', 'array', 'return', 'null', 'break', 'try',
            'options', 'table', 'expect', 'const', 'require', 'operator', 'enum',
            'finally', 'delete', 'deref', 'typedef', 'with', 'cast', 'override',
            'abstract', 'upcast', 'iterator', 'var', 'addr', 'continue', 'where',
            'pass', 'reinterpret', 'module', 'public', 'label', 'goto', 'implicit',
            'explicit', 'shared', 'private', 'smart_ptr', 'unsafe', 'aka', 'assume',
            'sealed', 'inscope', 'static'
        ),

        // Literals
        true: $ => 'true',
        false: $ => 'false',
        integer: $ => token(seq(
            optional(choice('-', '+')),
            choice(
                /0x[\da-fA-F]+(L|u)?/,
                /0b[01]+(L|u)?/,
                /0o[0-7]+(L|u)?/,
                /[1-9]\d*(L|u)?/,
                /0(L|u)?/
            )
        )),
        float: $ => token(seq(
            optional(choice('-', '+')),
            choice(
                /\d+\.\d*(e[+-]?\d+)?(F)?/,
                /\d+e[+-]?\d+(F)?/,
                /\.\d+(e[+-]?\d+)?(F)?/
            )
        )),
        string: $ => choice(
            seq('"', repeat(choice(/[^\\"\n]/, /\\./, /\\\{[^{}]*\}/)), '"'),
            seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'"),
            seq('@"', repeat(choice(/[^\\"\n]/, /\\./)), '"')
        ),

        // Comments
        comment: $ => choice(
            seq('//', /.*/),
            seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
        ),

        // Identifiers
        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        // Types
        type: $ => choice(
            $.builtin_type,
            $.identifier,
            $.qualified_type,
        ),

        builtin_type: $ => choice(
            'bool', 'void', 'string', 'auto', 'int', 'int2', 'int3', 'int4', 'uint',
            'bitfield', 'uint2', 'uint3', 'uint4', 'float', 'float2', 'float3',
            'float4', 'range', 'urange', 'block', 'int64', 'uint64', 'double',
            'function', 'lambda', 'int8', 'uint8', 'int16', 'uint16', 'tuple',
            'variant', 'generator', 'yield'
        ),

        qualified_type: $ => seq($.type, '.', $.identifier),

        // Annotations
        annotation: $ => seq(
            '[', $.identifier, optional(seq('(', repeat(choice($.annotation_argument)), ')')), ']'
        ),

        annotation_argument: $ => seq($.identifier, '=', $._expression),


        // Struct Declarations
        struct_declaration: $ => seq(
            choice('struct', 'class'),
            optional(choice('private', 'public', 'sealed')),
            $.identifier,
            optional($.struct_inheritance),
        ),

        struct_inheritance: $ => prec.left(seq(':', commaSep1($.identifier))),

        // Function Definitions
        function_definition: $ => seq(
            'def',
            optional(seq(choice('abstract', 'override'), choice('private', 'public'), optional('static'))),
            $._identifier,
            '(',
            optional($.parameter_list),
            ')',
            optional($.block),
            prec.right($.block),
          ),

        parameter_list: $ => commaSep1($.parameter),

        parameter: $ => seq(
            optional('var'),
            $.identifier,
            ':',
            $.type,
            optional(seq('=', $._expression)),
        ),

        // Variable Declarations
        variable_declaration: $ => seq(
            choice('let', 'var'), $.identifier, ':', $.type, optional(seq('=', $._expression)),
        ),

        // Expressions
        _expression: $ => choice(
            $.identifier,
            $.integer,
            $.float,
            $.string,
            $.true,
            $.false,
            $.call_expression,
            $.field_expression,
            $.parenthesized_expression,
            $.binary_expression,
            $.unary_expression,
        ),

        parenthesized_expression: $ => seq('(', $._expression, ')'),

        call_expression: $ => prec(PREC.CALL, seq(
            $._expression, '(', optional($.argument_list), ')'
        )),

        argument_list: $ => commaSep1($._expression),

        field_expression: $ => prec(PREC.MEMBER, seq($._expression, '.', $.identifier)),

        binary_expression: $ => choice(
            ...[
                ['||', PREC.LOGICAL_OR],
                ['&&', PREC.LOGICAL_AND],
                ['|', PREC.INCLUSIVE_OR],
                ['^', PREC.EXCLUSIVE_OR],
                ['&', PREC.BITWISE_AND],
                ['==', PREC.EQUALITY],
                ['!=', PREC.EQUALITY],
                ['<', PREC.RELATIONAL],
                ['>', PREC.RELATIONAL],
                ['<=', PREC.RELATIONAL],
                ['>=', PREC.RELATIONAL],
                ['<<', PREC.SHIFT],
                ['>>', PREC.SHIFT],
                ['+', PREC.ADDITIVE],
                ['-', PREC.ADDITIVE],
                ['*', PREC.MULTIPLICATIVE],
                ['/', PREC.MULTIPLICATIVE],
                ['%', PREC.MULTIPLICATIVE],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq($._expression, operator, $._expression))
            )
        ),

        unary_expression: $ => prec.left(PREC.UNARY, seq(
            choice('+', '-', '!', '~'), $._expression
        )),


        // Statements
        expression_statement: $ => $._expression,

        return_statement: $ => prec.right(seq('return', optional($._expression))),

        if_statement: $ => seq(
            'if', $._expression, $.block,
            repeat(seq('elif', $._expression, $.block)),
            optional(seq('else', $.block))
        ),

        while_statement: $ => seq('while', $._expression, $.block),

        for_statement: $ => seq('for', $.identifier, 'in', $._expression, $.block),

        break_statement: $ => 'break',

        continue_statement: $ => 'continue',

        block: $ => seq('{', repeat($._statement), '}'),

        _identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    }
});


function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)));
}