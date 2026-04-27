"""Embedded image post-processing rules.

`elf_to_bin(name = "<name>.bin", elf = ...)` produces a flat binary via
arm-none-eabi-objcopy. The output filename equals the rule name.

`bin_to_cpp(name = "<name>.bin.cpp", bin = ..., symbol = ...)` wraps a
binary as a C++ array via xxd -i, suitable for embedding in a sibling
firmware image (e.g. cm7 image holding the cm4 binary).

`firmware_image(name, srcs, deps)` wraps cc_binary + both post-processors,
producing:
    <name>             cc_binary (.elf)
    <name>.bin         flat binary
    <name>.bin.cpp     C++ source declaring the binary as a const array
"""

load("@rules_cc//cc:defs.bzl", "cc_binary")

def _elf_to_bin_impl(ctx):
    out = ctx.actions.declare_file(ctx.attr.name)
    objcopy = ctx.toolchains["@bazel_tools//tools/cpp:toolchain_type"].cc.objcopy_executable
    ctx.actions.run(
        executable = objcopy,
        arguments = ["-Obinary", ctx.file.elf.path, out.path],
        inputs = [ctx.file.elf],
        outputs = [out],
        mnemonic = "ObjCopy",
        progress_message = "objcopy %{label}",
    )
    return [DefaultInfo(files = depset([out]))]

elf_to_bin = rule(
    implementation = _elf_to_bin_impl,
    attrs = {
        "elf": attr.label(allow_single_file = True, mandatory = True),
    },
    toolchains = ["@bazel_tools//tools/cpp:toolchain_type"],
)

def _bin_to_cpp_impl(ctx):
    out = ctx.actions.declare_file(ctx.attr.name)
    ctx.actions.run_shell(
        outputs = [out],
        inputs = [ctx.file.bin],
        arguments = [ctx.attr.symbol, ctx.file.bin.path, out.path],
        # `xxd -i -n SYMBOL` writes:
        #   unsigned char SYMBOL[] = { ... };
        #   unsigned int SYMBOL_len = ...;
        # Without -n it would derive the symbol from the input path, which
        # bakes bazel-out cache directories into the source.
        command = 'xxd -i -n "$1" "$2" > "$3"',
        mnemonic = "BinToCpp",
        progress_message = "xxd -i %{label}",
    )
    return [DefaultInfo(files = depset([out]))]

bin_to_cpp = rule(
    implementation = _bin_to_cpp_impl,
    attrs = {
        "bin": attr.label(allow_single_file = True, mandatory = True),
        "symbol": attr.string(mandatory = True),
    },
)

def firmware_image(name, srcs, deps = [], copts = [], linkopts = [], visibility = None, **kwargs):
    cc_binary(
        name = name,
        srcs = srcs,
        deps = deps,
        copts = copts,
        linkopts = linkopts,
        visibility = visibility,
        **kwargs
    )
    elf_to_bin(
        name = name + ".bin",
        elf = ":" + name,
        visibility = visibility,
    )
    bin_to_cpp(
        name = name + ".bin.cpp",
        bin = ":" + name + ".bin",
        symbol = name.replace("-", "_"),
        visibility = visibility,
    )
