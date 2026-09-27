"""Firmware images: a cc_binary built for one core from any configuration."""

load("@rules_cc//cc:defs.bzl", "cc_binary")

def firmware_image(name, platform, visibility = None, **kwargs):
    """Defines a target whose output is name.elf, built for platform whatever the caller's configuration.

    Args:
      name: Image name.
      platform: Platform label the image is built for, e.g. //bazel/platforms:cm7.
      visibility: Visibility of the image.
      **kwargs: Forwarded to the underlying cc_binary.
    """
    binary = "_" + name
    cc_binary(name = binary, tags = ["manual"], **kwargs)
    platform_transition(name = name, target = binary, out = name + ".elf", platform = platform, visibility = visibility)

def _to_platform_impl(_settings, attr):
    return {"//command_line_option:platforms": str(attr.platform)}

# Rule-level transition onto the platform named by the rule's `platform` attribute.
to_platform = transition(
    implementation = _to_platform_impl,
    inputs = [],
    outputs = ["//command_line_option:platforms"],
)

def _platform_transition_impl(ctx):
    ctx.actions.symlink(output = ctx.outputs.out, target_file = ctx.file.target)
    return [DefaultInfo(files = depset([ctx.outputs.out]))]

# Rebuilds a single-file target for the given platform, whatever the consumer's configuration.
platform_transition = rule(
    implementation = _platform_transition_impl,
    attrs = {
        "target": attr.label(cfg = to_platform, allow_single_file = True, mandatory = True),
        "out": attr.output(mandatory = True),
        "platform": attr.label(mandatory = True),
    },
)
