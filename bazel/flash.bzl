"""flash_wrapper: a `bazel run`-able py_binary that flashes an ELF and
streams serial output. Used by firmware_image(deploy = True).

The py_binary itself targets the host (so python toolchain resolution
works); the elf data dep transitions to the embedded platform via
//bazel:transitions.bzl.
"""

load("@rules_python//python:defs.bzl", "py_binary")
load("//bazel:transitions.bzl", "platform_transition_filegroup")

def flash_wrapper(name, elf, target_platform, visibility = None):
    transitioned_elf = "_" + name + "_elf"
    platform_transition_filegroup(
        name = transitioned_elf,
        srcs = [elf],
        target_platform = target_platform,
    )
    py_binary(
        name = name,
        main = "@@//tools:flash_and_run.py",
        srcs = ["@@//tools:flash_and_run.py"],
        args = [
            "--elf",
            "$(rootpath :{})".format(transitioned_elf),
        ],
        data = [":" + transitioned_elf],
        deps = ["//tools:flash_and_run_lib"],
        visibility = visibility,
    )
