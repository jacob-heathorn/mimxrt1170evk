# Bazel migration

Why: register codegen runs in the build (SVD or generator change → headers
regenerate, per-header deps); one `bazel run` builds cm4 + cm7 and flashes
the right target; bzlmod replaces nix for deps; tests are fast and cached.

Done: forge on bazel with cmake/nix/nox removed; shared rules, Cortex-M
platforms and the arm-none-eabi toolchain live in `@forge//bazel`, and bazel
downloads the Arm GNU Toolchain and ETL itself. Here: nix is gone, register
headers are generated from NXP's pinned SVDs by forge's `svd_cc_library`, both
HALs, startup and platform layers build for their own core via `firmware_image`
(no `--config`), `hello-world-cm7` embeds the real cm4 image, and
`bazel run //test/cm7/hello_world:flash` programs the board; `-c opt` selects the
release build. Gordion
checkouts override `git_override` pins via `tools/bazel` and `gor bazelrc`;
`gor commit` bumps both pins.

## In priority order

1. **Remaining deps.** Unblocks `echo`, `hello-threadx`, `hello-netx`,
   `hello-publisher`, `hello-subscriber`, and the FOC app.
   * threadx, netxduo: `http_archive` in forge with hand-written BUILD
     files, like ETL. Drop them from `gordion.yaml` once done.
   * microcyphal: add a MODULE.bazel on its `bazel` branch, then
     `bazel_dep` + `git_override` here.

2. **Delete the last cmake files.** The dead cmake build is gone except the
   `CMakeLists.txt` kept as porting references for FOC, `network`, `rtos/`
   and `test/cm7`. Delete each with the target it describes (item 1).

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
