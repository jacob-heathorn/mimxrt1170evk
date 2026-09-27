"""Rules for our own code: libraries, images and tests built for one RT1176 core with forge's warnings."""

load("@forge//bazel:copts.bzl", "FORGE_COPTS", "FORGE_CXXOPTS")
load("@rules_cc//cc:defs.bzl", "cc_library")
load("//bazel:firmware.bzl", "firmware_image")
load("//bazel:hal.bzl", "sdk_system_includes")
load("//tools:flash.bzl", "flash")
load("//tools:on_target_test.bzl", "on_target_test")

CORES = ["cm4", "cm7"]

# target_compatible_with values for vendored code that only runs on one core.
CM4 = ["//bazel/platforms:cm4_core"]
CM7 = ["//bazel/platforms:cm7_core"]

def cm4_library(name, **kwargs):
    _library("cm4", name, **kwargs)

def cm7_library(name, **kwargs):
    _library("cm7", name, **kwargs)

# A cm4 image; the cm7 image carries and boots it, so it has no flash target of its own.
def cm4_image(name, **kwargs):
    _image("cm4", name, **kwargs)

# A cm7 image plus name.flash, which programs the board with it and streams the console.
def cm7_image(name, **kwargs):
    _image("cm7", name, **kwargs)
    flash(name = name + ".flash", image = ":" + name)

# Pigweed tests as a cm7 image: `bazel test` flashes name.image and judges the console output.
def cm7_test(name, **kwargs):
    cm7_image(name = name + ".image", **kwargs)
    on_target_test(name = name, image = ":" + name + ".image")

# A cc_library that only builds for the given core, with -Werror and forge's warning set.
def _library(core, name, copts = [], cxxopts = [], **kwargs):
    cc_library(
        name = name,
        copts = FORGE_COPTS + sdk_system_includes(core) + copts,
        cxxopts = FORGE_CXXOPTS + cxxopts,
        target_compatible_with = ["//bazel/platforms:%s_core" % core],
        **kwargs
    )

# A firmware_image for the given core, with -Werror and forge's warning set.
def _image(core, name, copts = [], cxxopts = [], **kwargs):
    firmware_image(
        name = name,
        platform = "//bazel/platforms:" + core,
        copts = FORGE_COPTS + sdk_system_includes(core) + copts,
        cxxopts = FORGE_CXXOPTS + cxxopts,
        **kwargs
    )
