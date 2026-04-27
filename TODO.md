# Claude

Items captured mid-conversation, to revisit between sessions.

## Build configurations

- [ ] **Debug vs release builds.** Mirror the cmake presets `cm4-debug`,
      `cm4-release`, `cm7-debug`, `cm7-release` as bazel configs. Currently
      `--config=cm4` is one-size-fits-all. Add `build:dbg`/`build:opt` like
      forge has (`-Og -ggdb` vs `-O3 -DNDEBUG`), composable with cm4/cm7 so
      `--config=cm4 --config=dbg` matches the old `cm4-debug` preset.

## Multi-core build orchestration

- [ ] **One-shot cm4 + cm7 build.** cmake's `find_cm4()` reads the cm4
      `.bin.cpp` from `.bin/cm4-debug/` (written by a prior cmake run). The
      bazel-native equivalent is a configuration transition: cm7's dep on the
      cm4 .bin.cpp uses `cfg = cm4_transition` so a single
      `bazel build //test/cm7/hello_world:hello-world-cm7` builds both cores.
      `bazel/elf_image.bzl` will need to grow that transition.

## Debugging

- [ ] **gdb / JLink / SWO workflow.** cmake had `rip -d preset:target`
      generating `.vscode/launch.json` from a jinja template and shelling out
      to JLinkGDBServer. Reproduce as:
        - `bazel run //test/cm7/hello_world:flash` — `sh_binary` wrapping
          JLinkExe with the `.bin` as a runtime dep.
        - `bazel run //test/cm7/hello_world:debug` — gdb-server + gdb on the
          elf.
        - Generate `.vscode/launch.json` from a bazel rule so it tracks the
          actual built target.

## Tooling

- [ ] **clangd / compile_commands.json.** Bazel doesn't emit
      `compile_commands.json` natively. Add `hedron_compile_commands` so IDEs
      see the right per-target include/define set. Becomes important once we
      have multiple platforms (cm4 / cm7 / host) compiling with different
      flags.

## Code quality / parity

- [ ] **`-Werror` reinstated for application code.** I scoped `HAL_COPTS`
      `-Wno-…` to vendored NXP libs only, but haven't wired forge's
      `FORGE_COPTS` (which has `-Werror`) onto application targets. The
      hello-world-cm4 binary currently builds without the strict set. Once
      the dep tree settles, route application targets through a macro that
      adds `FORGE_COPTS`.

- [ ] **Strip leftover `-Wno-*` hacks** copied from cmake (e.g.
      `-Wno-unused-variable # TODO remove` in the old hello-world
      CMakeLists). Audit and drop ones that don't fire.

## Toolchain upgrade: clang + lld to enable LTO

- [ ] **Migrate the embedded toolchain from `arm-none-eabi-gcc` + GNU
      bfd ld to `clang --target=arm-none-eabi` + lld** (LLVM Embedded
      Toolchain for ARM). This unlocks `-flto=auto` (and ThinLTO),
      which currently can't be enabled under our setup.

      **Why this is more than cosmetic.** The FOC application
      (`firmware/cm7/application/foc/`) runs control loops at 10–100 kHz.
      Without LTO every Park / Clarke / SVPWM step is a separate function
      call across translation units, costing 10–20 % of the ISR budget.
      With LTO the math chain inlines into one ISR — fewer cycles, more
      deterministic timing. Hello-world doesn't care; motor control does.

      **Why we can't just toggle `-flto=auto` under gcc.** Documented
      architectural mismatch:

      * GNU bfd ld + GCC's LTO plugin: plugin runs once over claimed
        objects; ld's `--start-group` archive iteration can't re-feed
        it. binutils bug 12758 (filed 2011) — won't-fix.
      * Bazel passes each `cc_library` archive once in dep-graph order.
        NXP MCUXpresso HAL has cross-module symbol cycles
        (mcmgr → drivers/MU_Init, mcmgr → utilities/SDK_DelayAtLeastUs);
        cmake worked around it by listing each archive 2–3× in the link
        line (no `--start-group`).
      * `alwayslink = True` everywhere "fixes" the link but defeats
        `--gc-sections` under LTO (binary inflates 3.6× — every clock-
        config function and four LTO-private clones of `s_clockSourceName`
        stick because `--whole-archive` semantically forbids dropping).
      * GCC 14 / 15 release notes: no plan to fix the plugin model.
        `-fuse-ld=lld` doesn't help because lld can't read GCC's GIMPLE
        bitcode (LLVM #41791).

      **Why clang + lld solves it.** lld supports `--start-lib` /
      `--end-lib` (Bazel's `supports_start_end_lib` toolchain feature),
      which gives `cc_library` outputs archive-like semantics *without*
      bfd-ld's archive-scanning quirk. Bazel auto-emits these around
      `cc_library` outputs and ThinLTO works cleanly out of the box.
      It's the path Pigweed recommends for new Bazel embedded projects
      and what the LLVM Embedded Toolchain for ARM is designed for.

      **Plan when ready:**

      1. Add `bazel/arm_clang/extension.bzl`, mirror of `bazel/arm_gcc/`
         but pointing at LLVM Embedded Toolchain for ARM. Either pull
         the upstream tarball via `repository_ctx.download_and_extract`
         or `repository_ctx.which("clang")` from a system install.
      2. Toolchain features set `--target=arm-none-eabi`,
         `-mcpu=cortex-m{4,7}`, `-mfpu=...`, the same NXP defines.
      3. Keep newlib-nano via `--specs=nano.specs --specs=nosys.specs`
         (lld respects them when invoked through clang as the driver).
      4. Enable `supports_start_end_lib` feature in the cc_toolchain.
      5. Re-enable `-flto=auto` (or step up to `-flto=thin`) in
         `.bazelrc`.
      6. Validate: NXP MCUXpresso HAL builds (a few `fsl_*.c` may need
         `-Wno-...` for clang-only diagnostics on inline asm), the
         hello-world-cm7 banner still prints, FOC still runs and meets
         timing.
      7. Confirm by disasm of the FOC ISR with/without LTO that the
         math chain actually inlined.

      **Trade-off.** Migrating to clang touches every compile and may
      surface clang-vs-gcc diagnostic differences in vendored NXP code.
      It's a contained project — best done after the bazel migration
      stabilizes, not as part of it. Until then the cm4/cm7 `.bin`s are
      ~92 bytes off cmake's (`objdump -d` shows equivalent code paths).

      **Alternative if we want to stay on gcc:** merge the entire HAL
      (drivers / board / mcmgr / utilities / cmsis / device) into a
      single `cc_library` per core (Pigweed's `pw_build_mcuxpresso`
      pattern). All TUs in one library = no archive cycles = LTO
      works under gcc. Loses per-module visibility but vendor HAL is a
      single conceptual unit anyway. Less invasive than swapping the
      compiler.

## Toolchain

- [ ] **Hermetic ARM toolchain (managed by bazel, not nix).** Currently
      `arm-none-eabi-gcc` is system-resolved from PATH (nix-supplied today).
      Goal: bazel owns the compiler so removing nix is a no-op for builds.
      Best path: watch upstream `toolchains_arm_gnu` for a Bazel-9-compatible
      release, then swap `bazel/arm_gcc/extension.bzl` to use it. (BCR 1.1.0
      fails on bazel 9 due to `provides=[None]`.) Alternative: have the
      module extension `download_and_extract` the Arm GNU toolchain tarball
      directly (the URL pattern is stable per release) and point tool_paths
      at the extracted tree — fewer moving parts than a third-party module.

## Downstream

- [ ] **microcyphal repo.** Skipped per user direction. When ready: same
      pattern as forge — bazel migration in its own commit, gordion sibling
      layout, register as a `bazel_dep` from mimxrt's MODULE.bazel.

- [ ] **threadx, netxduo.** Larger pieces. Likely vendored as `cc_library`
      with hand-written BUILD files (rules_foreign_cc adds too much friction
      for header-heavy SDKs). Postpone until cm7 hello-world is solid.
