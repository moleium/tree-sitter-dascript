(module indents
  (block)
  (function_declaration body: (block))
  (struct_declaration body: (block))
  (enum_declaration body: (block))
  (if_statement consequence: (block) alternative: (else_clause (block)))
  (for_statement body: (block))
  (while_statement body: (block))
)
