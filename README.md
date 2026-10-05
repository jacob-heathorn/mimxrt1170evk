# mimxrt1170evk

Modern C++ firmware for the NXP MIMXRT1170-EVK: both cores, ThreadX, NetX Duo and
[Cyphal/UDP](https://github.com/jacob-heathorn/microcyphal), built with bazel.

## Setup

Tested on Ubuntu 24.04.

1. Install bazelisk (`npm i -g @bazel/bazelisk`) and gordion (`pipx install gordion`).
2. Run `gor -u` to check out forge and microcyphal.
3. Install NXP's [LinkServer](https://www.nxp.com/design/design-center/software/development-software/mcuxpresso-software-and-tools-/linkserver-for-microcontrollers:LINKERSERVER) to `/usr/local/LinkServer`.
4. Connect the board's power and debug USB.

## Flash and run a demo

```
bazel run //apps/hello_world:hello_world.flash
```

That flashes the image and streams its console until Ctrl-C. Add `-- --no-console` to only
flash. `bazel run //tools:console` attaches to a board that is already running.

| Demo | Target |
|---|---|
| Hello from both cores | `//apps/hello_world:hello_world.flash` |
| UART echo | `//apps:echo.flash` |
| Two ThreadX threads | `//apps:hello_threadx.flash` |
| UDP over ethernet | `//apps:hello_netx.flash` |
| Cyphal heartbeat publisher | `//apps:hello_publisher.flash` |
| Cyphal heartbeat subscriber | `//apps:hello_subscriber.flash` |
| Motor control with an AS5600 encoder | `//apps:foc.flash` |

For the ethernet demos, give the host's interface `192.168.144.50/24`. The board is
`192.168.144.1`, and `hello_subscriber` is `.2`. The other end of the Cyphal demos is
microcyphal's `bazel run //apps:hello_subscriber` or `//apps:hello_publisher`.

## Test

Tests run on the board, so name the ones you want:

```
bazel test //mimxrt/cm7/platform:mpu_test
bazel test //mimxrt/cm7/utils:utils_test
bazel test //mimxrt/cm7/rtos/threadx:concurrency_test
bazel test //mimxrt/cm7/rtos/threadx:simple_test
```

## Debug and release

Everything is built for debug by default. Add `-c opt` to any command for the release build:

```
bazel build -c opt //...
bazel run -c opt //apps/hello_world:hello_world.flash
bazel test -c opt //mimxrt/cm7/platform:mpu_test
```

## License

Copyright (c) 2025 Jacob Heathorn. Released under the **Academic Use License**, see
[LICENSE](./LICENSE). For commercial licensing contact <jacob.heathorn@gmail.com>.
