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

## cm7 hello-world prints incomplete output on hardware

`bazel run //test/cm7/hello_world:hello-world-cm7` deploys to the EVK and
the chip starts running, but only `\r\nHello .\r\n` lands on the serial
console (vs. cmake's full message set: "Hello World from the Primary
Core!\r\n", "Address of main: ...", "Copy Secondary core image...",
"Starting Secondary core.", "The secondary core application has been
started."). Confirmed:

* the bazel `:hello-world-cm7` runnable correctly flashes + opens serial
  end-to-end against the cmake-built ELF (full output captured),
* our ELF runs (chip boots; some chars do come through),
* `_write` in our ELF correctly chains `_write → ConsoleUart::instance()
  → ConsoleUart::write` (was a newlib nosys stub before — fixed by
  `alwayslink = True` on `//firmware/cm7:cm7-platform`),
* `__pre_main_init` exists, calls setvbuf + MCMGR_Init + BOARD_ConfigMPU
  + BoardInitPins + BOARD_BootClockRUN + Singleton::create() chain, and
  is invoked from Reset_Handler,
* cmake's binary works under the same `LinkServer flash` command (no
  `--no-boot`).

Embedding the real cm4 .bin.cpp instead of the stub did not change the
behavior — the truncation happens before the cm4 boot path.

Remaining differences vs cmake to investigate:

* `NonCacheable` section is empty in our ELF (cmake has 1016 B). Comes
  from netxduo's `nx_driver_imxrt.c` and the cm4 uart adapter
  (`fsl_adapter_lpuart.c`) — neither is linked in our build. UART output
  shouldn't need ENET DMA buffers, but worth confirming MPU setup
  doesn't expect that section.
* cmake binary is built with `-flto=auto`; ours isn't. LTO inlining
  could change DMA-config timing inside `ConsoleUart::write`.
* setvbuf line-buffering is configured (verified in disassembly) but
  printf output suggests buffer flushing is misbehaving — possibly a
  DMA TX completion race in `ConsoleUart::write` (it polls `Csr::DONE`
  and `Lpuart1::STAT::TC`).

Next-step plan: write a stripped-down `hello_minimal.cpp` that does
just `printf("ABC\n"); while(1);` with the same firmware deps, deploy,
and see whether ABC comes through. If it does, narrow down which line
of the real hello_world_cm7 trips up. If not, the ConsoleUart DMA
path is broken under our build and we dig there.

## Build flags

- [ ] **Re-enable `-flto=auto`** to match cmake's debug build.

      Investigation summary (so we don't repeat the dead ends):

      * cmake's link line passes each user archive **multiple times** so
        ld's single-pass archive scan iterates across cross-archive
        cycles (e.g. mcmgr's `MU_Init` lives in drivers; mcmgr's archive
        comes earlier in the link order). It does *not* use
        `--start-group`/`--end-group` for user libs, just repetition.
      * bazel passes each archive **once**, in dep-graph order, with
        `--whole-archive` only around `alwayslink = True` libs. Under
        `-flto=auto`, undefined references appear for cross-archive
        callees because ld's LTO plugin walks archives once and gives up.
      * Setting `alwayslink = True` on every HAL lib makes it link, but
        defeats `--gc-sections` (the binary inflates ~3.6× from 18 KB to
        66 KB — `BOARD_BootClockRUN`, `LPUART_Init`, four LTO-private
        copies of `s_clockSourceName`, etc., all retained).

      The clean fix is one of:

      * Add a cc_toolchain feature that emits `-Wl,--start-group` /
        `-Wl,--end-group` around user archives during link. Bazel has no
        stock feature for this (`supports_start_end_lib` is gold-linker
        only). Means writing a `flag_set` for the `cpp_link_executable`
        action that positions group markers around `linker_input`.
      * Or write a wrapper script for the linker that injects start/end
        group markers, registered as the `ld` tool path.
      * Or move HAL libraries to source-list filegroups so cc_binary
        consumes the .o files directly (no archive). This matches how
        cmake handled mcmgr (PUBLIC sources) — would require restructuring
        every HAL cc_library.

      Until one of those lands, `-flto=auto` is off. The non-LTO bazel
      .bin is ~92 bytes off cmake's; `cmp` is non-zero, but `objdump -d`
      shows the same code paths.

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
