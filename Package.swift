// swift-tools-version:5.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "CNoise",
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "CNoise",
            targets: ["CNoise"]),
    ],
    dependencies: [
         .package(url: "https://github.com/OuterCorner/CSodium.git", from: "0.9.0")
    ],
    targets: [
        .target(
            name: "CNoise",
            dependencies: ["CSodium"],
            path:"noise-c",
            exclude: [
                "src/protocol/rand_os.c",
            ],
            sources: [
                "src/protocol",
            ],
            cSettings: [
                .define("USE_LIBSODIUM")
            ]
        )
    ]
)
