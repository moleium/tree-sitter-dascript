(comment) @comment
(block_comment) @comment

(identifier) @variable

(type) @type
("bool" @type.builtin)
("void" @type.builtin)
("string" @type.builtin)
("auto" @type.builtin)
("int" @type.builtin)
("int2" @type.builtin)
("int3" @type.builtin)
("int4" @type.builtin)
("uint" @type.builtin)
("bitfield" @type.builtin)
("uint2" @type.builtin)
("uint3" @type.builtin)
("uint4" @type.builtin)
("float" @type.builtin)
("float2" @type.builtin)
("float3" @type.builtin)
("float4" @type.builtin)
("range" @type.builtin)
("urange" @type.builtin)
("block" @type.builtin)
("int64" @type.builtin)
("uint64" @type.builtin)
("double" @type.builtin)
("function" @type.builtin)
("lambda" @type.builtin)
("int8" @type.builtin)
("uint8" @type.builtin)
("int16" @type.builtin)
("uint16" @type.builtin)
("tuple" @type.builtin)
("variant" @type.builtin)
("generator" @type.builtin)
("yield" @type.builtin)


(integer_literal) @number
(float_literal) @float
(string_literal) @string
(boolean_literal) @boolean

(function_declaration
  "def" @keyword.function
  (identifier) @function)
(function_call
  (identifier) @function.call)

(struct_declaration
  "struct" @keyword.storage.type
  "class" @keyword.storage.type
  (identifier) @type)
(enum_declaration
  "enum" @keyword.storage.type
  (identifier) @type)

(variable_declaration
  "let" @keyword)

(type_alias
  "typedef" @keyword)

(return_statement
  "return" @keyword.return)

("if" @keyword.control.conditional)
("else" @keyword.control.conditional)
("for" @keyword.control.repeat)
("while" @keyword.control.repeat)

("const" @keyword.storage.modifier)
("abstract" @keyword.storage.modifier)
("override" @keyword.storage.modifier)
("private" @keyword.storage.modifier)
("public" @keyword.storage.modifier)
("shared" @keyword.storage.modifier)
("static" @keyword.storage.modifier)

(parameter_list
  (identifier) @parameter)

(binary_expression
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
  "||" @operator)

(unary_expression
  "+" @operator
  "-" @operator
  "!" @operator)

("." @operator)

(annotation
  (identifier) @attribute)
