load("@mimxrt1170evk//firmware:hal.bzl", "DEBUG_DEFINES", "HAL_COPTS", "SDK_DEFINES")
load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

_CM4 = ["@mimxrt1170evk//bazel/platforms:cm4_core"]

# ARM CMSIS core headers.
cc_library(
    name = "cmsis",
    hdrs = glob(["cmsis/*.h"]),
    includes = ["cmsis"],
    target_compatible_with = _CM4,
)

# Device headers and system init; carries the SDK configuration for everything above it.
cc_library(
    name = "device",
    srcs = glob(["device/*.c"]),
    hdrs = glob(["device/*.h"]),
    copts = HAL_COPTS,
    defines = ["CPU_MIMXRT1176DVMAA_cm4"] + SDK_DEFINES + DEBUG_DEFINES,
    includes = ["device"],
    target_compatible_with = _CM4,
    deps = [":cmsis"],
)

# Peripheral drivers (fsl_*).
cc_library(
    name = "drivers",
    srcs = glob(["drivers/*.c"]),
    hdrs = glob(["drivers/*.h"]),
    copts = HAL_COPTS,
    includes = ["drivers"],
    target_compatible_with = _CM4,
    deps = [":device"],
)

# UART adapter used by the debug console.
cc_library(
    name = "uart",
    srcs = glob(["component/uart/*.c"]),
    hdrs = glob(["component/uart/*.h"]),
    copts = HAL_COPTS,
    includes = ["component/uart"],
    target_compatible_with = _CM4,
    deps = [
        ":device",
        ":drivers",
    ],
)

# Debug console, asserts and the _sbrk heap hook.
cc_library(
    name = "utilities",
    srcs = glob([
        "utilities/*.c",
        "utilities/*.S",
    ]),
    hdrs = glob(["utilities/*.h"]),
    copts = HAL_COPTS,
    includes = ["utilities"],
    # Resolve _sbrk from fsl_sbrk.c rather than the nosys stub, so malloc has a heap.
    linkopts = ["-Wl,--undefined=_sbrk"],
    target_compatible_with = _CM4,
    deps = [
        ":device",
        ":drivers",
        ":uart",
    ],
)

# Board support: clocks and pin mux for the EVK.
cc_library(
    name = "board",
    srcs = glob(["board/*.c"]),
    hdrs = glob(["board/*.h"]),
    copts = HAL_COPTS,
    includes = ["board"],
    target_compatible_with = _CM4,
    deps = [
        ":drivers",
        ":utilities",
    ],
)

# Multicore manager. Its interrupt handlers are reached only through the vector table, so keep them
# linked.
cc_library(
    name = "mcmgr",
    srcs = glob(["mcmgr/*.c"]),
    hdrs = glob(["mcmgr/*.h"]),
    copts = HAL_COPTS + ["-Wno-cast-align"],
    includes = ["mcmgr"],
    target_compatible_with = _CM4,
    alwayslink = True,
    deps = [
        ":device",
        ":drivers",
    ],
)
