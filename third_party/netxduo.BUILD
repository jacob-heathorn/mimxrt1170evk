load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

_ARCH = {
    "@forge//bazel/platforms:cm4_core": "cortex_m4",
    "@forge//bazel/platforms:cm7_core": "cortex_m7",
}

cc_library(
    name = "netxduo",
    srcs = glob(["common/src/*.c"]),
    hdrs = glob(["common/inc/*.h"]) + select({
        core: ["ports/{}/gnu/inc/nx_port.h".format(arch)]
        for core, arch in _ARCH.items()
    }),
    copts = ["-w"],
    defines = ["NX_INCLUDE_USER_DEFINE_FILE"],
    includes = ["common/inc"] + select({
        core: ["ports/{}/gnu/inc".format(arch)]
        for core, arch in _ARCH.items()
    }),
    deps = [
        "@mimxrt1170evk//firmware/cm7/rtos/netxduo:nx_user",
        "@threadx",
    ],
)
