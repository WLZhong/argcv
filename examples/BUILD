


################## TEST SECTION ##################
# https://bazel.build/versions/master/docs/be/c-cpp.html#cc_test
cc_test(
    name = "example_test",
    # srcs = ["example.cc"],
    # -I is not required here
    # copts = ["-Iexternal/gmock_archive/googletest/include"],
    srcs = glob([
        "test/**/*_test.cc",
        "test/**/*_test.hh",
        "test/**/*_test.h",
    ]),
    includes = [
        # ".",
    ],
    deps = [
        "//external:gtest_main",
    ],
)
