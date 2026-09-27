"""Rules for our own code: a cc_library or image built for one RT1176 core with forge's warnings."""

load("@forge//bazel:copts.bzl", "FORGE_COPTS", "FORGE_CXXOPTS")
load("@rules_cc//cc:defs.bzl", "cc_library")
load("//bazel:firmware.bzl", "firmware_image")

CORES = ["cm4", "cm7"]

# target_compatible_with values for vendored code that only runs on one core.
CM4 = ["//bazel/platforms:cm4_core"]
CM7 = ["//bazel/platforms:cm7_core"]

def cm4_library(name, **kwargs):
    _library("cm4", name, **kwargs)

def cm7_library(name, **kwargs):
    _library("cm7", name, **kwargs)

def cm4_image(name, **kwargs):
    _image("cm4", name, **kwargs)

def cm7_image(name, **kwargs):
    _image("cm7", name, **kwargs)

# A cc_library that only builds for the given core, with -Werror and forge's warning set.
def _library(core, name, copts = [], cxxopts = [], **kwargs):
    cc_library(
        name = name,
        copts = FORGE_COPTS + copts,
        cxxopts = FORGE_CXXOPTS + cxxopts,
        target_compatible_with = ["//bazel/platforms:%s_core" % core],
        **kwargs
    )

# A firmware_image for the given core, with -Werror and forge's warning set.
def _image(core, name, copts = [], cxxopts = [], **kwargs):
    firmware_image(
        name = name,
        platform = "//bazel/platforms:" + core,
        copts = FORGE_COPTS + copts,
        cxxopts = FORGE_CXXOPTS + cxxopts,
        **kwargs
    )
