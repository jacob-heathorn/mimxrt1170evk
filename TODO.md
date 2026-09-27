# Bazel migration

Why: register codegen runs in the build (SVD or generator change → headers
regenerate, per-header deps); one `bazel run` builds cm4 + cm7 and flashes
the right target; bzlmod replaces nix for deps; tests are fast and cached.

Done: forge on bazel with cmake/nix/nox removed; shared rules, Cortex-M
platforms and the arm-none-eabi toolchain live in `@forge//bazel`; ETL is an
`http_archive`. Here: both HALs, startup and platform layers build for their
own core via `firmware_image` (no `--config`), `hello-world-cm7` embeds the
real cm4 image, and `bazel run //test/cm7/hello_world:flash` programs the
board. Gordion checkouts override `git_override` pins via `tools/bazel` and
`gor bazelrc`; `gor commit` bumps both pins.

## In priority order

1. **Hermetic ARM toolchain.** `@forge//bazel/toolchains/arm_gcc` still
   finds `arm-none-eabi-gcc` on PATH (nix today). Have the extension
   `download_and_extract` the Arm GNU 13.3.rel1 tarball and point
   `cc_toolchain` file groups at it. Last thing nix provides to the build.

2. **Debug / release configs.** `.bazelrc` hard-codes `-O0 -g -DDEBUG`. Add
   `build:dbg` / `build:opt` (as in forge) to mirror the cmake presets.

3. **Generate register headers, stop checking them in.** 230 `.hpp` under
   `firmware/*/registers/codegen/` are committed. Use forge's
   `svd_cc_library`; consumers depend on the generated target.

4. **Remaining deps.** Unblocks `echo`, `hello-threadx`, `hello-netx`,
   `hello-publisher`, `hello-subscriber`, and the FOC app.
   * threadx, netxduo: `http_archive` in forge with hand-written BUILD
     files, like ETL. Drop them from `gordion.yaml` once done.
   * microcyphal: add a MODULE.bazel on its `bazel` branch, then
     `bazel_dep` + `git_override` here.

5. **Remove cmake, nix, nox from this repo.** The cmake build is already
   dead (forge has no cmake). Delete `CMakeLists.txt`, `CMakePresets.json`,
   `cmake/`, `flake.nix`, `noxfile.py`, `scripts/`, the nix and cmake parts
   of `.envrc` and `.vscode/settings.json`. Needs item 1 first for the
   toolchain and item 4 so no build definition is lost.

6. **Warnings.** Route application targets through forge's `FORGE_COPTS`
   (`-Werror`); `HAL_COPTS` stays on vendored NXP code. Drop `-Wno-*`
   suppressions that no longer fire.

7. **compile_commands.json.** Add `hedron_compile_commands` and point
   `.vscode/settings.json` at it.

8. **Debug workflow.** `:debug` targets wrapping LinkServer + gdb, SWO, and
   a generated `.vscode/launch.json`. A cm4 `flash` target once the
   LinkServer core selection for cm4 is known.

9. **MODULE.bazel.lock.** Gitignored today. Commit it once overrides stop
   churning it, so registry resolution is pinned.

10. **clang + lld, then LTO.** Deferred until the migration is stable.
    gcc + bfd ld can't LTO across bazel's per-library archives (binutils
    12758, won't-fix; `alwayslink` defeats `--gc-sections`, 3.6× bloat).
    lld's `--start-lib/--end-lib` fixes it. Matters for FOC ISR timing,
    not for hello-world. Full investigation: commit `9b80ea2`.
    Alternative on gcc: merge the whole HAL into one `cc_library` per core.
