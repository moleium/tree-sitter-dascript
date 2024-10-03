; Basic elements
(comment) @comment
(identifier) @variable

; Types
(type) @type

; Literals
(integer_literal) @number
(float_literal) @float
(string_literal) @string
(boolean_literal) @boolean

; Functions
(function_declaration "def" @keyword.function (identifier) @function)
(function_call (identifier) @function.call)

; Structs and Enums
(struct_declaration "struct" @keyword.storage.type (identifier) @type)
(struct_declaration "class" @keyword.storage.type (identifier) @type)
(enum_declaration "enum" @keyword.storage.type)

; Variable declarations
(variable_declaration "let" @keyword (identifier) @variable)
(parameter "var" @keyword (identifier) @parameter)

; Control flow
"return" @keyword.return
"if" @keyword.control.conditional
"else" @keyword.control.conditional
"for" @keyword.control.repeat
"while" @keyword.control.repeat
"in" @keyword.control.repeat

; Modifiers
"const" @keyword.storage.modifier
"abstract" @keyword.storage.modifier
"override" @keyword.storage.modifier
"private" @keyword.storage.modifier
"public" @keyword.storage.modifier
"shared" @keyword.storage.modifier
"static" @keyword.storage.modifier
"sealed" @keyword.storage.modifier

; Parameters
(parameter (identifier) @parameter)

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
"=" @operator
":" @operator
"[" @operator
"]" @operator
"(" @operator
")"
"<" @operator
">"
"," @operator
";" @operator


((identifier) @type.builtin
 (#match? @type.builtin "^(bool|void|string|auto|int|int2|int3|int4|uint|bitfield|uint2|uint3|uint4|float|float2|float3|float4|range|urange|block|int64|uint64|double|function|lambda|int8|uint8|int16|uint16|tuple|variant|generator|yield)$"))

(annotation (identifier) @attribute)
"typedef" @keyword