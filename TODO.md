# Bazel migration

Why: register codegen runs in the build (SVD or generator change → headers
regenerate, per-header deps); one `bazel run` builds cm4 + cm7 and flashes
the right target; bzlmod replaces nix for deps; tests are fast and cached.

Done: forge and microcyphal are bazel modules with cmake/nix/nox removed;
shared rules, Cortex-M platforms and the arm-none-eabi toolchain live in
`@forge//bazel`, and bazel downloads the Arm GNU Toolchain, ETL, ThreadX,
NetX Duo, the NXP SVDs and the Cyphal DSDL itself. Here: nix and cmake are
gone, register headers and DSDL types are generated in the build, every image
builds for its own core via `firmware_image` (no `--config`), `-c opt` selects
the release build, `hello-world-cm7` embeds the real cm4 image, and each image
has a `.flash` target, verified on the EVK, and the pigweed test images run on
the board via `bazel test`. Gordion checkouts override `git_override` pins via
`tools/bazel` and `gor bazelrc`; `gor commit` bumps both pins.

## In priority order

1. **Network demos end to end.** hello-netx, hello-publisher and
   hello-subscriber boot and bring up the PHY but were checked without a
   cable; run them against a host with `socat` / `yakut` per the README.

2. **compile_commands.json.** Add `hedron_compile_commands` and point
   `.vscode/settings.json` at it.

3. **Debug workflow.** `:debug` targets wrapping LinkServer + gdb, SWO, and
   a generated `.vscode/launch.json`. A cm4 `flash` target once the
   LinkServer core selection for cm4 is known.

4. **Hermetic host toolchain.** forge's native tests use the system gcc.
   `toolchains_llvm` would pin it, and the same clang can later serve the
   Cortex-M targets (item 6). The Arm toolchain download is x86_64 Linux
   only; add macOS/arm64 URLs when needed.

5. **MODULE.bazel.lock.** Gitignored today. Commit it once overrides stop
   churning it, so registry resolution is pinned.

6. **clang + lld, then LTO.** Deferred until the migration is stable.
   gcc + bfd ld can't LTO across bazel's per-library archives (binutils
   12758, won't-fix; `alwayslink` defeats `--gc-sections`, 3.6× bloat).
   lld's `--start-lib/--end-lib` fixes it. Matters for FOC ISR timing,
   not for hello-world. Full investigation: commit `9b80ea2`.
   Alternative on gcc: merge the whole HAL into one `cc_library` per core.
