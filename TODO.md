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
has a `.flash` target. Gordion checkouts override `git_override` pins via
`tools/bazel` and `gor bazelrc`; `gor commit` bumps both pins.

## In priority order

1. **Hardware check.** Flash each image and confirm the banners: hello-world,
   echo, hello-threadx, hello-netx, hello-publisher, hello-subscriber, foc.
   Everything since the last flash built byte-identical images until
   `--undefined=_sbrk` and `-fno-threadsafe-statics` restored cmake parity.

2. **On-target tests.** `test/cm7/ut_*.cpp` and `rtos/threadx/pw_ut_main.cpp`
   are the cmake-era pigweed tests. Make them `bazel test` targets with a
   runner that flashes and parses the console.

3. **Warnings.** Route application targets through forge's `FORGE_COPTS`
   (`-Werror`); `HAL_COPTS` stays on vendored NXP code. Drop `-Wno-*`
   suppressions that no longer fire.

4. **compile_commands.json.** Add `hedron_compile_commands` and point
   `.vscode/settings.json` at it.

5. **Debug workflow.** `:debug` targets wrapping LinkServer + gdb, SWO, and
   a generated `.vscode/launch.json`. A cm4 `flash` target once the
   LinkServer core selection for cm4 is known.

6. **Hermetic host toolchain.** forge's native tests use the system gcc.
   `toolchains_llvm` would pin it, and the same clang can later serve the
   Cortex-M targets (item 8). The Arm toolchain download is x86_64 Linux
   only; add macOS/arm64 URLs when needed.

7. **MODULE.bazel.lock.** Gitignored today. Commit it once overrides stop
   churning it, so registry resolution is pinned.

8. **clang + lld, then LTO.** Deferred until the migration is stable.
   gcc + bfd ld can't LTO across bazel's per-library archives (binutils
   12758, won't-fix; `alwayslink` defeats `--gc-sections`, 3.6× bloat).
   lld's `--start-lib/--end-lib` fixes it. Matters for FOC ISR timing,
   not for hello-world. Full investigation: commit `9b80ea2`.
   Alternative on gcc: merge the whole HAL into one `cc_library` per core.
