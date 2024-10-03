local M = {}

function M.setup()
  local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
  parser_config.dascript = {
    install_info = {
      url = "https://github.com/moleium/tree-sitter-dascript",
      files = {"src/parser.c"},
      branch = "master",
    },
    filetype = "das",
  }
end

return M
