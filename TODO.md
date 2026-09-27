# Bazel migration

Why: register codegen runs in the build (SVD or generator change → headers
regenerate, per-header deps); one `bazel run` builds cm4 + cm7 and flashes
the right target; bzlmod replaces nix for deps; tests are fast and cached.

Done so far: forge on bazel (cmake/nix/nox removed there). Here: both HALs,
startup, platform layers, hello-world-cm4, hello-world-cm7 with a flash
wrapper (`bazel run //test/cm7/hello_world:hello-world-cm7`, no config).

## In priority order

1. **cm7 embeds the real cm4 image.** `hello-world-cm7` links a stub today.
   Give the cm4 `.bin.cpp` dep a `cfg = cm4_transition` in
   `bazel/elf_image.bzl` so one cm7 build produces both cores.

2. **Debug / release configs.** `.bazelrc` hard-codes `-O0 -g`. Add
   `build:dbg` / `build:opt` (as in forge) composable with `cm4` / `cm7`
   to mirror the four cmake presets.

3. **cm4 deploy parity.** `hello-world-cm4` lacks `deploy = True`, so
   building it without `--config=cm4` picks host gcc and fails. Match cm7.

4. **Generate register headers, stop checking them in.** 230 `.hpp` under
   `firmware/*/registers/codegen/` are committed today. Make them
   `genrule`/custom-rule outputs of the SVD + forge generator; consumers
   depend on individual header targets.

5. **Remaining deps.** Unblocks `echo`, `hello-threadx`, `hello-netx`,
   `hello-publisher`, `hello-subscriber`, and the FOC app.
   * threadx, netxduo: vendored `cc_library` with hand-written BUILD files
     (rules_foreign_cc is too much friction for header-heavy SDKs).
   * microcyphal: same pattern as forge — bazel migration in its own
     commit, then `bazel_dep` here and add it to `GORDION_MODULES` in
     `tools/bazel`. Its `bazel` branch exists but has no MODULE.bazel yet.

6. **Remove cmake, nix, nox from this repo.** forge already did.
   * Hermetic ARM toolchain first: `arm-none-eabi-gcc` comes from nix's
     PATH today. Have `bazel/arm_gcc/extension.bzl` `download_and_extract`
     the Arm GNU tarball (or adopt `toolchains_arm_gnu` once it works on
     bazel 9; BCR 1.1.0 fails with `provides=[None]`).
   * Python: rules_python already supplies the interpreter. Check whether
     nox / uv still have a role or go away entirely.
   * Then delete `CMakeLists.txt`, `CMakePresets.json`, `flake.nix`,
     `noxfile.py`, and the nix bits of `.envrc`.

7. **Warnings.** Route application targets through a macro that adds
   forge's `FORGE_COPTS` (`-Werror`); keep `HAL_COPTS` `-Wno-*` scoped to
   vendored NXP code. Audit and drop `-Wno-*` hacks copied from cmake.

8. **compile_commands.json.** Bazel doesn't emit it. Add
   `hedron_compile_commands`; point `.vscode/settings.json` at it instead
   of `.bin/cm7-debug/`.

9. **Debug workflow.** `bazel run //...:flash` and `:debug` targets
   wrapping JLink/LinkServer + gdb, SWO, and a generated
   `.vscode/launch.json` that tracks the built target.

10. **clang + lld, then LTO.** Deferred until the migration is stable.
    gcc + bfd ld can't LTO across bazel's per-library archives (binutils
    12758, won't-fix; `alwayslink` defeats `--gc-sections`, 3.6× bloat).
    lld's `--start-lib/--end-lib` fixes it. Matters for FOC ISR timing
    (10–20 % budget lost to cross-TU calls), not for hello-world.
    Full investigation: commit `9b80ea2`. Alternative if staying on gcc:
    merge the whole HAL into one `cc_library` per core.

## Gordion + bazel

Solved: gordion may place a dep as a sibling or in its private cache, so
`tools/bazel` (picked up by bazelisk from the repo root) resolves each
`GORDION_MODULES` entry via `gordion -f` and writes
`--override_module=<name>=<path>` into the gitignored `user.bazelrc`.

Verify: a real `bazel` binary invoked without bazelisk skips the wrapper
and uses a stale `user.bazelrc`; a dep gordion can't find only warns and
is not overridden. Decide whether either should hard-fail.
