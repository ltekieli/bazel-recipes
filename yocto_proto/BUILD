load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "echo_proto",
    srcs = ["echo.proto"],
)

cc_proto_library(
    name = "echo_cc_proto",
    deps = [":echo_proto"],
)

cc_library(
    name = "libecho",
    deps = [":echo_cc_proto"],
)

cc_binary(
    name = "echo",
    srcs = ["echo.cpp"],
    deps = [":libecho"],
)
