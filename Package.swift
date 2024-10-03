// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDascript",
    products: [
        .library(name: "TreeSitterDascript", targets: ["TreeSitterDascript"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDascript",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDascriptTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDascript",
            ],
            path: "bindings/swift/TreeSitterDascriptTests"
        )
    ],
    cLanguageStandard: .c11
)
