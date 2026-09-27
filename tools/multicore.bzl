"""Packaging for the RT1170's dual-core boot: the cm7 image carries the cm4 image as a C array."""

load("@forge//bazel:firmware.bzl", "to_platform")

def _embedded_image_impl(ctx):
    cc = ctx.toolchains["@bazel_tools//tools/cpp:toolchain_type"].cc
    bin = ctx.actions.declare_file(ctx.attr.name + ".bin")
    ctx.actions.run(
        executable = cc.objcopy_executable,
        arguments = ["-Obinary", ctx.file.image.path, bin.path],
        inputs = [ctx.file.image],
        tools = cc.all_files,
        outputs = [bin],
        mnemonic = "ObjCopy",
    )
    cpp = ctx.actions.declare_file(ctx.attr.name + ".cpp")
    ctx.actions.run(
        executable = ctx.executable._bin_to_cpp,
        arguments = [ctx.attr.symbol, bin.path, cpp.path],
        inputs = [bin],
        outputs = [cpp],
        mnemonic = "BinToCpp",
    )
    return [DefaultInfo(files = depset([cpp]))]

# Emits name.cpp defining `unsigned char <symbol>[]` and `unsigned int <symbol>_len` holding the
# flat binary of `image`. Runs on `platform` so objcopy comes from that core's toolchain.
embedded_image = rule(
    implementation = _embedded_image_impl,
    cfg = to_platform,
    attrs = {
        "image": attr.label(allow_single_file = True, mandatory = True),
        "platform": attr.label(mandatory = True),
        "symbol": attr.string(mandatory = True),
        "_bin_to_cpp": attr.label(
            default = "//tools:bin_to_cpp",
            executable = True,
            cfg = "exec",
        ),
    },
    toolchains = ["@bazel_tools//tools/cpp:toolchain_type"],
)
