load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

_ARCH = {
    "@forge//bazel/platforms:cm4_core": "cortex_m4",
    "@forge//bazel/platforms:cm7_core": "cortex_m7",
}

_PORT_SRCS = [
    "tx_thread_context_restore.S",
    "tx_thread_context_save.S",
    "tx_thread_interrupt_control.S",
    "tx_thread_schedule.S",
    "tx_thread_stack_build.S",
    "tx_thread_system_return.S",
    "tx_timer_interrupt.S",
]

cc_library(
    name = "threadx",
    srcs = glob(["common/src/*.c"]) + select({
        core: ["ports/{}/gnu/src/{}".format(arch, src) for src in _PORT_SRCS]
        for core, arch in _ARCH.items()
    }),
    hdrs = glob(["common/inc/*.h"]) + select({
        core: ["ports/{}/gnu/inc/tx_port.h".format(arch)]
        for core, arch in _ARCH.items()
    }),
    copts = ["-w"],
    defines = ["TX_INCLUDE_USER_DEFINE_FILE"],
    includes = ["common/inc"] + select({
        core: ["ports/{}/gnu/inc".format(arch)]
        for core, arch in _ARCH.items()
    }),
    deps = ["@mimxrt1170evk//firmware/cm7/rtos/threadx:tx_user"],
)
