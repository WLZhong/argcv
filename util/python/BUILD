licenses(["restricted"])

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "python_headers",
    hdrs = glob([
        "python_include/**/*.h",
    ]),
    data = [":python_checked"],
    includes = ["python_include"],
)

# TODO python_config.sh not finished
genrule(
    name = "python_check",
    srcs = [
        "python_config.sh",
        "configure_files",
    ],
    outs = [
        "python_checked",
    ],
    cmd = "echo '\033[0;36mpython_check\033[0m starting';\
      OUTPUTDIR=\"$(@D)/\"; $(location :python_config.sh) --check && touch $$OUTPUTDIR/python_checked ; \
      echo '\033[0;36mpython_check\033[0m \033[0;32mfinished\033[0m'",
    local = 1,
)

# genrule(
#     name = "python_check",
#     srcs = [
#         "python_config.sh",
#         "configure_files",
#     ],
#     outs = [
#         "python_checked",
#     ],
#     cmd = "OUTPUTDIR=\"$(@D)/\"; touch $$OUTPUTDIR/python_checked",
#     local = 1,
# )

filegroup(
    name = "configure_files",
    data = glob([
        "*",
    ]),
)
