from unittest import TestCase

import tree_sitter, tree_sitter_dascript


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_dascript.language())
        except Exception:
            self.fail("Error loading Dascript grammar")
