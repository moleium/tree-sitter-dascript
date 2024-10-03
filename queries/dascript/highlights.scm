; Basic elements
(comment) @comment
(identifier) @variable

; Types
(type) @type

; Literals
(integer_literal) @number
(float_literal) @float
(double_literal) @float
(string_literal) @string
(boolean_literal) @boolean

; Functions
(function_definition
  "def" @keyword.function
  name: (identifier) @function)
(function_call
  function: (identifier) @function.call)

; Structs and Enums
(struct_definition
  "struct" @keyword.storage.type
  name: (identifier) @type)
(struct_definition
  "class" @keyword.storage.type
  name: (identifier) @type)

; Variable declarations
(variable_declaration
  "let" @keyword
  name: (identifier) @variable)
(variable_declaration
  "var" @keyword
  name: (identifier) @variable)

; Control flow
"return" @keyword.return
"if" @keyword.control.conditional
"else" @keyword.control.conditional
"for" @keyword.control.repeat
"while" @keyword.control.repeat

; Modifiers
"const" @keyword.storage.modifier
"abstract" @keyword.storage.modifier
"override" @keyword.storage.modifier
"private" @keyword.storage.modifier
"public" @keyword.storage.modifier
"shared" @keyword.storage.modifier
"static" @keyword.storage.modifier

; Parameters
(parameter
  name: (identifier) @parameter)

; Operators
"+" @operator
"-" @operator
"*" @operator
"/" @operator
"%" @operator
"==" @operator
"!=" @operator
"<" @operator
">" @operator
"<=" @operator
">=" @operator
"&&" @operator
"||" @operator
"!" @operator
"." @operator

((identifier) @type.builtin
 (#match? @type.builtin "^(bool|void|string|auto|int|int2|int3|int4|uint|bitfield|uint2|uint3|uint4|float|float2|float3|float4|range|urange|block|int64|uint64|double|function|lambda|int8|uint8|int16|uint16|tuple|variant|generator|yield)$"))

(annotation
  name: (identifier) @attribute)
