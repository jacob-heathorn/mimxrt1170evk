"""`bazel test` targets that flash a pigweed test image and judge it by its console output."""

load("@rules_python//python:defs.bzl", "py_test")

def on_target_test(name, image):
    """Runs the pigweed tests in a firmware_image on the connected EVK.

    Excluded from wildcards; run it by name with the board attached.
    """
    py_test(
        name = name,
        srcs = [
            "//tools:console.py",
            "//tools:flash.py",
            "//tools:on_target_test.py",
        ],
        main = "//tools:on_target_test.py",
        args = ["--elf", "$(rootpath {})".format(image)],
        data = [image],
        # exclusive: one board, one test at a time. external: never cache a result from hardware.
        # local: the serial port is not in the sandbox. manual: wildcards must not flash the board.
        tags = [
            "exclusive",
            "external",
            "local",
            "manual",
        ],
        size = "small",
        deps = ["@forge//scripts/package:forge"],
    )
