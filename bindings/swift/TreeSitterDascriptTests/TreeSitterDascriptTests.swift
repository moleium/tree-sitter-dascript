import XCTest
import SwiftTreeSitter
import TreeSitterDascript

final class TreeSitterDascriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dascript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dascript grammar")
    }
}
