"""Configuration transitions for cross-platform builds.

The build orchestration problem: a `bazel run :hello-world-cm7` command
needs to (a) build the cm7 firmware ELF for the target platform and
(b) run a host-platform py_binary wrapper that flashes it. Without a
transition, the py_binary's data deps inherit the command-line platform
and you get either "no python toolchain for cm7" (if --platforms=cm7)
or "no arm toolchain for host" (if not).

`platform_transition_filegroup(name, srcs, target_platform)` rebuilds
`srcs` under `target_platform` regardless of the consumer's platform.
The output is a filegroup whose files are the cm7 ELF (or whatever),
ready to be referenced from a host-built py_binary's `data` attr.
"""

def _platform_transition_impl(_settings, attr):
    return {"//command_line_option:platforms": str(attr.target_platform)}

_platform_transition = transition(
    implementation = _platform_transition_impl,
    inputs = [],
    outputs = ["//command_line_option:platforms"],
)

def _platform_transition_filegroup_impl(ctx):
    files = []
    for src in ctx.attr.srcs:
        files.extend(src[DefaultInfo].files.to_list())
    return [DefaultInfo(
        files = depset(files),
        runfiles = ctx.runfiles(files = files),
    )]

platform_transition_filegroup = rule(
    implementation = _platform_transition_filegroup_impl,
    attrs = {
        "srcs": attr.label_list(
            cfg = _platform_transition,
            allow_files = True,
            mandatory = True,
        ),
        "target_platform": attr.label(mandatory = True),
    },
)
