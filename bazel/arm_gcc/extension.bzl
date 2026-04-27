"""Module extension that discovers `arm-none-eabi-gcc` and creates a
synthetic `@arm_gcc` repo holding the cc_toolchain wiring Bazel needs.

The compiler binary itself comes from whatever `arm-none-eabi-gcc` is on
PATH — same install the CMake build used. The repository_rule resolves
the install root via `which` and embeds absolute paths into the toolchain
config so Bazel doesn't depend on PATH at execution time.
"""

def _arm_gcc_repo_impl(repository_ctx):
    gcc = repository_ctx.which("arm-none-eabi-gcc")
    if not gcc:
        fail("arm-none-eabi-gcc not found on PATH. Install gcc-arm-none-eabi " +
             "(apt: `gcc-arm-none-eabi`; nix: `gcc-arm-embedded-13`).")

    # Resolve sibling binaries from the same install (gcc, g++, ar, ld, etc.).
    bin_dir = str(gcc).rsplit("/", 1)[0]
    tools = {
        "gcc": "{}/arm-none-eabi-gcc".format(bin_dir),
        "ld": "{}/arm-none-eabi-gcc".format(bin_dir),  # gcc as linker driver
        "ar": "{}/arm-none-eabi-ar".format(bin_dir),
        "cpp": "{}/arm-none-eabi-cpp".format(bin_dir),
        "gcov": "/bin/false",
        "nm": "{}/arm-none-eabi-nm".format(bin_dir),
        "objdump": "{}/arm-none-eabi-objdump".format(bin_dir),
        "strip": "{}/arm-none-eabi-strip".format(bin_dir),
        "objcopy": "{}/arm-none-eabi-objcopy".format(bin_dir),
    }

    repository_ctx.file("BUILD.bazel", _BUILD_TEMPLATE.format(
        gcc = tools["gcc"],
        ld = tools["ld"],
        ar = tools["ar"],
        cpp = tools["cpp"],
        gcov = tools["gcov"],
        nm = tools["nm"],
        objdump = tools["objdump"],
        strip = tools["strip"],
        objcopy = tools["objcopy"],
    ))
    repository_ctx.file("toolchain_config.bzl", _CONFIG_BZL)

_BUILD_TEMPLATE = """
load("@rules_cc//cc:defs.bzl", "cc_toolchain")
load(":toolchain_config.bzl", "arm_cc_toolchain_config")

package(default_visibility = ["//visibility:public"])

filegroup(name = "empty")

arm_cc_toolchain_config(
    name = "cm4_config",
    cpu_flag = "cortex-m4",
    fpu_flag = "fpv4-sp-d16",
    target_cpu = "armv7e-m",
    gcc_path = "{gcc}",
    ld_path = "{ld}",
    ar_path = "{ar}",
    cpp_path = "{cpp}",
    gcov_path = "{gcov}",
    nm_path = "{nm}",
    objdump_path = "{objdump}",
    strip_path = "{strip}",
    objcopy_path = "{objcopy}",
)

cc_toolchain(
    name = "cm4_cc_toolchain",
    toolchain_config = ":cm4_config",
    all_files = ":empty",
    compiler_files = ":empty",
    dwp_files = ":empty",
    linker_files = ":empty",
    objcopy_files = ":empty",
    strip_files = ":empty",
    supports_param_files = 0,
)

toolchain(
    name = "cm4_toolchain",
    toolchain = ":cm4_cc_toolchain",
    toolchain_type = "@bazel_tools//tools/cpp:toolchain_type",
    target_compatible_with = [
        "@platforms//cpu:armv7e-m",
        "@platforms//os:none",
    ],
)
"""

_CONFIG_BZL = '''
"""Minimal cc_toolchain_config for arm-none-eabi-gcc.

We don't pre-bake CPU flags here — those come from `.bazelrc`'s
`build:cm4` config so the same toolchain can serve cortex-m4 / cortex-m7
variants once we add them. This config just tells Bazel where the tools
live and provides a baseline feature set.
"""

load("@rules_cc//cc/common:cc_common.bzl", "cc_common")
load("@rules_cc//cc:cc_toolchain_config_lib.bzl",
     "feature", "flag_group", "flag_set", "tool_path")
load("@rules_cc//cc/toolchains:cc_toolchain_config_info.bzl",
     "CcToolchainConfigInfo")
load("@rules_cc//cc:action_names.bzl",
     "ASSEMBLE_ACTION_NAME",
     "C_COMPILE_ACTION_NAME",
     "CPP_COMPILE_ACTION_NAME",
     "CPP_LINK_EXECUTABLE_ACTION_NAME",
     "CPP_LINK_DYNAMIC_LIBRARY_ACTION_NAME",
     "CPP_LINK_NODEPS_DYNAMIC_LIBRARY_ACTION_NAME",
     "CPP_LINK_STATIC_LIBRARY_ACTION_NAME",
     "LINKSTAMP_COMPILE_ACTION_NAME",
     "PREPROCESS_ASSEMBLE_ACTION_NAME")

ALL_COMPILE_ACTIONS = [
    C_COMPILE_ACTION_NAME,
    CPP_COMPILE_ACTION_NAME,
    ASSEMBLE_ACTION_NAME,
    PREPROCESS_ASSEMBLE_ACTION_NAME,
    LINKSTAMP_COMPILE_ACTION_NAME,
]

ALL_LINK_ACTIONS = [
    CPP_LINK_EXECUTABLE_ACTION_NAME,
    CPP_LINK_DYNAMIC_LIBRARY_ACTION_NAME,
    CPP_LINK_NODEPS_DYNAMIC_LIBRARY_ACTION_NAME,
]

def _impl(ctx):
    tool_paths = [
        tool_path(name = "gcc",     path = ctx.attr.gcc_path),
        tool_path(name = "ld",      path = ctx.attr.ld_path),
        tool_path(name = "ar",      path = ctx.attr.ar_path),
        tool_path(name = "cpp",     path = ctx.attr.cpp_path),
        tool_path(name = "gcov",    path = ctx.attr.gcov_path),
        tool_path(name = "nm",      path = ctx.attr.nm_path),
        tool_path(name = "objdump", path = ctx.attr.objdump_path),
        tool_path(name = "strip",   path = ctx.attr.strip_path),
        tool_path(name = "objcopy", path = ctx.attr.objcopy_path),
    ]

    # Default flags applied to every compile/link. CPU-specific flags
    # (-mcpu, -mfpu, -mthumb, -mfloat-abi) come from .bazelrc's per-config
    # --copt/--linkopt so the toolchain itself stays CPU-neutral.
    default_compile_flags = feature(
        name = "default_compile_flags",
        enabled = True,
        flag_sets = [flag_set(
            actions = ALL_COMPILE_ACTIONS,
            flag_groups = [flag_group(flags = [
                "-ffunction-sections",
                "-fdata-sections",
                "-fno-common",
            ])],
        )],
    )

    default_link_flags = feature(
        name = "default_link_flags",
        enabled = True,
        flag_sets = [flag_set(
            actions = ALL_LINK_ACTIONS,
            flag_groups = [flag_group(flags = [
                "--specs=nano.specs",
                "--specs=nosys.specs",
                "-Wl,--gc-sections",
                "-Wl,--print-memory-usage",
            ])],
        )],
    )

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = "arm-none-eabi-" + ctx.attr.cpu_flag,
        host_system_name = "local",
        target_system_name = "arm-none-eabi",
        target_cpu = ctx.attr.target_cpu,
        target_libc = "newlib",
        compiler = "gcc",
        abi_version = "unknown",
        abi_libc_version = "unknown",
        tool_paths = tool_paths,
        features = [default_compile_flags, default_link_flags],
    )

arm_cc_toolchain_config = rule(
    implementation = _impl,
    attrs = {
        "cpu_flag":     attr.string(mandatory = True),
        "fpu_flag":     attr.string(mandatory = True),
        "target_cpu":   attr.string(mandatory = True),
        "gcc_path":     attr.string(mandatory = True),
        "ld_path":      attr.string(mandatory = True),
        "ar_path":      attr.string(mandatory = True),
        "cpp_path":     attr.string(mandatory = True),
        "gcov_path":    attr.string(mandatory = True),
        "nm_path":      attr.string(mandatory = True),
        "objdump_path": attr.string(mandatory = True),
        "strip_path":   attr.string(mandatory = True),
        "objcopy_path": attr.string(mandatory = True),
    },
    provides = [CcToolchainConfigInfo],
)
'''

arm_gcc_repo = repository_rule(
    implementation = _arm_gcc_repo_impl,
    local = True,
)

def _arm_gcc_impl(_module_ctx):
    arm_gcc_repo(name = "arm_gcc")

arm_gcc = module_extension(
    implementation = _arm_gcc_impl,
)
