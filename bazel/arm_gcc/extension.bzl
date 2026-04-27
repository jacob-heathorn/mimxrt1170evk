"""Module extension that discovers `arm-none-eabi-gcc` and creates a
synthetic `@arm_gcc` repo holding the cc_toolchain wiring Bazel needs.

The compiler binary itself comes from whatever `arm-none-eabi-gcc` is on
PATH — same install the CMake build used. The repository_rule resolves
the install root via `which` and embeds absolute paths into the toolchain
config so Bazel doesn't depend on PATH at execution time.

The actual `toolchain(...)` binding (with target_compatible_with on
//platforms:cm4_core etc.) lives in //bazel/arm_gcc:BUILD.bazel where
the main repo's constraint labels are reachable. This file just provides
cc_toolchain targets that //bazel/arm_gcc references.
"""

def _arm_gcc_repo_impl(repository_ctx):
    gcc = repository_ctx.which("arm-none-eabi-gcc")
    if not gcc:
        fail("arm-none-eabi-gcc not found on PATH. Install gcc-arm-none-eabi " +
             "(apt: `gcc-arm-none-eabi`; nix: `gcc-arm-embedded-13`).")

    # Ask gcc itself where it looks for system headers.
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

# Same cc_toolchain for both cm4 and cm7 — only the CPU flags from
# .bazelrc differ. The toolchain-resolution layer (//bazel/arm_gcc) picks
# this single toolchain for either platform.
_BUILD_TEMPLATE = """
load("@rules_cc//cc:defs.bzl", "cc_toolchain")
load(":toolchain_config.bzl", "arm_cc_toolchain_config")

package(default_visibility = ["//visibility:public"])

filegroup(name = "empty")

arm_cc_toolchain_config(
    name = "config",
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
    builtin_include_dirs = {builtin_includes},
)

cc_toolchain(
    name = "cc_toolchain",
    toolchain_config = ":config",
    all_files = ":empty",
    compiler_files = ":empty",
    dwp_files = ":empty",
    linker_files = ":empty",
    objcopy_files = ":empty",
    strip_files = ":empty",
    supports_param_files = 0,
)
"""

_CONFIG_BZL = '''
"""Minimal cc_toolchain_config for arm-none-eabi-gcc.

CPU/FPU/specs/link flags live in .bazelrc per-config (build:cm4 /
build:cm7). This config only carries tool paths and the system include
dirs gcc reports.
"""

load("@rules_cc//cc/common:cc_common.bzl", "cc_common")
load("@rules_cc//cc:cc_toolchain_config_lib.bzl",
     "feature", "flag_group", "flag_set", "tool_path")
load("@rules_cc//cc/toolchains:cc_toolchain_config_info.bzl",
     "CcToolchainConfigInfo")

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
    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = "arm-none-eabi",
        host_system_name = "local",
        target_system_name = "arm-none-eabi",
        target_cpu = ctx.attr.target_cpu,
        target_libc = "newlib",
        compiler = "gcc",
        abi_version = "unknown",
        abi_libc_version = "unknown",
        tool_paths = tool_paths,
        features = [],
        cxx_builtin_include_directories = ctx.attr.builtin_include_dirs,
    )

arm_cc_toolchain_config = rule(
    implementation = _impl,
    attrs = {
        "target_cpu":           attr.string(mandatory = True),
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
