"""arm-none-eabi-gcc cc_toolchain wiring.

Discovers `arm-none-eabi-gcc` on PATH (from nix or apt — same compiler
the cmake build used) and synthesizes a `@arm_gcc` repo with two
cc_toolchain instances, one per core. CPU/FPU flags and the NXP-SDK
defines live in features baked into the toolchain config so building
under `--platforms=//platforms:cm{4,7}` gives the right flags without
needing a separate `--config=cm{4,7}` to set copts.

The actual `toolchain(...)` bindings (target_compatible_with on
//platforms:cm{4,7}_core) live in //bazel/arm_gcc/BUILD.bazel where
main-repo constraint labels are reachable.
"""

def _arm_gcc_repo_impl(repository_ctx):
    gcc = repository_ctx.which("arm-none-eabi-gcc")
    if not gcc:
        fail("arm-none-eabi-gcc not found on PATH. Install gcc-arm-none-eabi " +
             "(apt: `gcc-arm-none-eabi`; nix: `gcc-arm-embedded-13`).")

    # Ask gcc itself where its system headers live.
    probe = repository_ctx.execute(
        [str(gcc), "-E", "-Wp,-v", "-xc++", "/dev/null"],
    )
    builtin_includes = []
    in_search = False
    for line in probe.stderr.split("\n"):
        if "search starts here:" in line:
            in_search = True
            continue
        if "End of search list" in line:
            in_search = False
            continue
        if in_search and line.startswith(" "):
            builtin_includes.append(line.strip())

    bin_dir = str(gcc).rsplit("/", 1)[0]
    tools = {
        "gcc": "{}/arm-none-eabi-gcc".format(bin_dir),
        "ld": "{}/arm-none-eabi-gcc".format(bin_dir),
        "ar": "{}/arm-none-eabi-ar".format(bin_dir),
        "cpp": "{}/arm-none-eabi-cpp".format(bin_dir),
        "gcov": "/bin/false",
        "nm": "{}/arm-none-eabi-nm".format(bin_dir),
        "objdump": "{}/arm-none-eabi-objdump".format(bin_dir),
        "strip": "{}/arm-none-eabi-strip".format(bin_dir),
        "objcopy": "{}/arm-none-eabi-objcopy".format(bin_dir),
    }
    builtin_includes_lit = "[" + ", ".join(['"' + p + '"' for p in builtin_includes]) + "]"

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
        builtin_includes = builtin_includes_lit,
    ))
    repository_ctx.file("toolchain_config.bzl", _CONFIG_BZL)

# Two cc_toolchain instances, one per core. Each carries its own
# CPU/FPU flags and define set as features, baked in via the `core`
# attribute. //bazel/arm_gcc/BUILD.bazel binds each to its platform.
_BUILD_TEMPLATE = """
load("@rules_cc//cc:defs.bzl", "cc_toolchain")
load(":toolchain_config.bzl", "arm_cc_toolchain_config")

package(default_visibility = ["//visibility:public"])

filegroup(name = "empty")

[
    arm_cc_toolchain_config(
        name = core + "_config",
        core = core,
        gcc_path = "{gcc}",
        ld_path = "{ld}",
        ar_path = "{ar}",
        cpp_path = "{cpp}",
        gcov_path = "{gcov}",
        nm_path = "{nm}",
        objdump_path = "{objdump}",
        strip_path = "{strip}",
        objcopy_path = "{objcopy}",
        builtin_include_dirs = {builtin_includes},
    )
    for core in ["cm4", "cm7"]
]

[
    cc_toolchain(
        name = core + "_cc_toolchain",
        toolchain_config = ":" + core + "_config",
        all_files = ":empty",
        compiler_files = ":empty",
        dwp_files = ":empty",
        linker_files = ":empty",
        objcopy_files = ":empty",
        strip_files = ":empty",
        supports_param_files = 0,
    )
    for core in ["cm4", "cm7"]
]
"""

_CONFIG_BZL = '''
"""Per-core cc_toolchain_config for arm-none-eabi-gcc.

CPU/FPU flags and the NXP-SDK define set are encoded as toolchain
features keyed on the `core` attribute, so a build with
--platforms=//platforms:cm{4,7} automatically picks up the right
flags via toolchain resolution. .bazelrc:cm{4,7} only carries
build-mode flags (-O0 -g) and the platform selection — no CPU
specifics.
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
     "CPP_LINK_DYNAMIC_LIBRARY_ACTION_NAME",
     "CPP_LINK_EXECUTABLE_ACTION_NAME",
     "CPP_LINK_NODEPS_DYNAMIC_LIBRARY_ACTION_NAME",
     "LINKSTAMP_COMPILE_ACTION_NAME",
     "PREPROCESS_ASSEMBLE_ACTION_NAME")

_ALL_COMPILE_ACTIONS = [
    C_COMPILE_ACTION_NAME,
    CPP_COMPILE_ACTION_NAME,
    ASSEMBLE_ACTION_NAME,
    PREPROCESS_ASSEMBLE_ACTION_NAME,
    LINKSTAMP_COMPILE_ACTION_NAME,
]

_ALL_LINK_ACTIONS = [
    CPP_LINK_EXECUTABLE_ACTION_NAME,
    CPP_LINK_DYNAMIC_LIBRARY_ACTION_NAME,
    CPP_LINK_NODEPS_DYNAMIC_LIBRARY_ACTION_NAME,
]

# CPU/FPU flag sets per core. -mapcs is in the compile set; the linker
# also needs cpu/fpu/float-abi/thumb but not the rest.
_CORE_CPU_FLAGS = {
    "cm4": [
        "-mcpu=cortex-m4",
        "-mfpu=fpv4-sp-d16",
        "-mfloat-abi=hard",
        "-mthumb",
        "-mapcs",
    ],
    "cm7": [
        "-mcpu=cortex-m7",
        "-mfpu=fpv5-d16",
        "-mfloat-abi=hard",
        "-mthumb",
        "-mapcs",
    ],
}
_CORE_LINK_CPU_FLAGS = {
    "cm4": [
        "-mcpu=cortex-m4",
        "-mfpu=fpv4-sp-d16",
        "-mfloat-abi=hard",
        "-mthumb",
    ],
    "cm7": [
        "-mcpu=cortex-m7",
        "-mfpu=fpv5-d16",
        "-mfloat-abi=hard",
        "-mthumb",
    ],
}

# NXP MCUXpresso SDK defines per core. The cmake build sets these via
# add_platform_flags in cmake/cm{4,7}/platform.cmake.
_CORE_DEFINES = {
    "cm4": [
        "-DCPU_MIMXRT1176DVMAA_cm4",
    ],
    "cm7": [
        "-DCPU_MIMXRT1176DVMAA_cm7",
        "-DXIP_BOOT_HEADER_ENABLE=1",
        "-DXIP_EXTERNAL_FLASH=1",
    ],
}

# Defines + freestanding compile flags that apply to both cores.
_COMMON_DEFINES = [
    "-DMCUXPRESSO_SDK",
    "-DMULTICORE_APP=1",
    "-DMCMGR_HANDLE_EXCEPTIONS=1",
    "-DFLEXSPI_IN_USE",
    "-D__SEMIHOST_HARDFAULT_DISABLE=1",
    "-D__STARTUP_CLEAR_BSS",
    "-D__STARTUP_INITIALIZE_NONCACHEDATA",
    "-DDEBUG",
]

_COMMON_COMPILE_FLAGS = [
    "-ffunction-sections",
    "-fdata-sections",
    "-fno-common",
    "-ffreestanding",
    "-fno-builtin",
]

_COMMON_LINK_FLAGS = [
    "--specs=nano.specs",
    "--specs=nosys.specs",
    "-Wl,--start-group",
    "-lm",
    "-lc",
    "-lgcc",
    "-lnosys",
    "-Wl,--end-group",
    "-Wl,--gc-sections",
    "-Wl,--print-memory-usage",
    "-static",
    "-Xlinker",
    "-z",
    "-Xlinker",
    "muldefs",
]

_CXX_ONLY_FLAGS = [
    "-fno-exceptions",
    "-fno-rtti",
    "-fno-use-cxa-atexit",
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

    core = ctx.attr.core
    if core not in _CORE_CPU_FLAGS:
        fail("Unsupported core: {}".format(core))

    compile_flags = (
        _CORE_CPU_FLAGS[core] +
        _COMMON_COMPILE_FLAGS +
        _CORE_DEFINES[core] +
        _COMMON_DEFINES
    )
    link_flags = _CORE_LINK_CPU_FLAGS[core] + _COMMON_LINK_FLAGS

    default_compile = feature(
        name = "default_compile_flags",
        enabled = True,
        flag_sets = [flag_set(
            actions = _ALL_COMPILE_ACTIONS,
            flag_groups = [flag_group(flags = compile_flags)],
        )],
    )

    cxx_only = feature(
        name = "cxx_only_flags",
        enabled = True,
        flag_sets = [flag_set(
            actions = [CPP_COMPILE_ACTION_NAME],
            flag_groups = [flag_group(flags = _CXX_ONLY_FLAGS)],
        )],
    )

    default_link = feature(
        name = "default_link_flags",
        enabled = True,
        flag_sets = [flag_set(
            actions = _ALL_LINK_ACTIONS,
            flag_groups = [flag_group(flags = link_flags)],
        )],
    )

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = "arm-none-eabi-" + core,
        host_system_name = "local",
        target_system_name = "arm-none-eabi",
        target_cpu = "armv7e-m",
        target_libc = "newlib",
        compiler = "gcc",
        abi_version = "unknown",
        abi_libc_version = "unknown",
        tool_paths = tool_paths,
        features = [default_compile, cxx_only, default_link],
        cxx_builtin_include_directories = ctx.attr.builtin_include_dirs,
    )

arm_cc_toolchain_config = rule(
    implementation = _impl,
    attrs = {
        "core":                 attr.string(mandatory = True, values = ["cm4", "cm7"]),
        "gcc_path":             attr.string(mandatory = True),
        "ld_path":              attr.string(mandatory = True),
        "ar_path":              attr.string(mandatory = True),
        "cpp_path":             attr.string(mandatory = True),
        "gcov_path":            attr.string(mandatory = True),
        "nm_path":              attr.string(mandatory = True),
        "objdump_path":         attr.string(mandatory = True),
        "strip_path":           attr.string(mandatory = True),
        "objcopy_path":         attr.string(mandatory = True),
        "builtin_include_dirs": attr.string_list(),
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
