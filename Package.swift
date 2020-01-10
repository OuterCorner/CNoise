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
            path:"./",
            exclude: [
                "noise-c/src/protocol/rand_os.c",
                "noise-c/src/crypto/newhope/randombytes.c",
                "noise-c/src/crypto/newhope/crypto_stream_chacha20.c",
            ],
            sources: [
                "noise-c/src/protocol",
                "noise-c/src/backend/ref/cipher-aesgcm.c",
                "noise-c/src/crypto/aes",
                "noise-c/src/crypto/ghash",
                "noise-c/src/backend/ref/hash-blake2s.c",
                "noise-c/src/crypto/blake2",
                "noise-c/src/backend/ref/dh-curve448.c",
                "noise-c/src/crypto/curve448",
                "noise-c/src/backend/ref/dh-newhope.c",
                "noise-c/src/crypto/newhope",
                "noise-c/src/backend/sodium",
                "compat"
            ],
            cSettings: [
                .define("USE_LIBSODIUM"),
                .headerSearchPath("noise-c/include"),
                .headerSearchPath("noise-c/src"),
                .headerSearchPath("noise-c/src/protocol"),
                .headerSearchPath("noise-c/src/crypto/goldilocks/src/include"),
                .headerSearchPath("noise-c/src/crypto/goldilocks/src/p448"),
                .headerSearchPath("compat"),
            ]
        )
    ]
)
