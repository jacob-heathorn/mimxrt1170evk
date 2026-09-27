"""`bazel run` targets that program the EVK over LinkServer and stream its console."""

load("@rules_python//python:defs.bzl", "py_binary")

def flash(name, image):
    """Flashes the .elf of a firmware_image."""
    elf = image + ".elf"
    py_binary(
        name = name,
        srcs = [
            "//tools:console.py",
            "//tools:flash.py",
        ],
        main = "//tools:flash.py",
        args = ["--elf", "$(rootpath {})".format(elf)],
        data = [elf],
        deps = ["@forge//scripts/package:forge"],
    )
