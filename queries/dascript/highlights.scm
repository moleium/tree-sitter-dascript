; Identifiers
(identifier) @variable

; Keywords
[
  "struct" "class" "let" "def" "while" "if" "static_if" "else"
  "for" "recover" "true" "false" "new" "typeinfo" "type" "in" "is"
  "as" "elif" "static_elif" "array" "return" "null" "break" "try"
  "options" "table" "expect" "const" "require" "operator" "enum"
  "finally" "delete" "deref" "typedef" "with" "cast" "override"
  "abstract" "upcast" "iterator" "var" "addr" "continue" "where"
  "pass" "reinterpret" "module" "public" "label" "goto" "implicit"
  "explicit" "shared" "private" "smart_ptr" "unsafe" "aka" "assume"
  "sealed" "inscope" "static"
] @keyword

; Literals
(true) @constant.builtin
(false) @constant.builtin
(integer) @number
(float) @number.float
(string) @string

; Types
(builtin_type) @type.builtin
(qualified_type) @type.qualified

; Struct Declarations
(struct_declaration) @type.struct
(struct_inheritance) @type.inheritance

; Function Definitions
(function_definition
  identifier: (identifier) @function.definition
) 

; Variable Declarations
(variable_declaration
  identifier: (identifier) @variable.declaration
)

; Function Calls
(call_expression
  function: (identifier) @function.call
)

; Binary Operators
[
  "+" "-" "*" "/" "%" "&&" "||" "==" "!=" "<" "<=" ">" ">=" "<<" ">>"
] @operator

; Unary Operators
["+" "-" "!" "~"] @operator

; Statements
(expression_statement) @statement
(return_statement) @statement
(if_statement) @statement.conditional
(while_statement) @statement.loop
(for_statement) @statement.loop
(break_statement) @statement.control
(continue_statement) @statement.control

; Block
(block) @block

; Parentheses
("(" ")") @punctuation.bracket
"{" "}" @punctuation.bracket

; Comments
(comment) @comment