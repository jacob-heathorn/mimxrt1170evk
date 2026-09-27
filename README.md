# Mimxrt1170evk

A modern C++ embedded software development platform on the NXP MIMXRT1170-EVK hardware.

This platform demonstrates cyphal (https://github.com/jacob-heathorn/microcyphal) on ThreadX.

NOTE: This is not yet ready for safety-critical applications
* Some of the HAL still needs to be handwritten.
* We need to implement proper error handling to replace asserts.
* Bump pools can be replaced by fixed pools for safety-critical memory management.

# Setup Instructions
This has only been tested in Ubuntu 24.04.

1) Clone this repository: `git clone https://github.com/jacob-heathorn/mimxrt1170evk.git`
2) Install bazelisk: `npm i -g @bazel/bazelisk` (or `apt install bazelisk`).
   It fetches the bazel version pinned in `.bazelversion`.
3) Install gordion: `pipx install gordion`
4) Materialize the gordion dependencies: `gor -u`
5) Optional, for the dev shell (`.envrc`): `sudo apt install direnv`, add
   `eval "$(direnv hook bash)"` to your .bashrc, then `direnv allow .` here.
6) Install LinkServer from NXP:
  * Download:
    https://www.nxp.com/design/design-center/software/development-software/mcuxpresso-software-and-tools-/linkserver-for-microcontrollers:LINKERSERVER
  * chmod +x and run the download.
  * Confirm install location: `ls /usr/local/LinkServer/LinkServer`
7) Connect mimxrt1170evk to power, and USB to your computer.

# Build
`bazel build //...`

Bazel fetches the compiler, Python and every dependency itself. Each firmware
image is built for its own core; there is no per-core config to select.
`hello-world-cm7` embeds the cm4 image, so one command builds both. Builds are
debug by default; `bazel build -c opt //...` is the release build.

# Run
`bazel run //test/cm7/hello_world:hello-world-cm7.flash`

Flashes the cm7 image (with the cm4 image inside it) and streams the serial
console until Ctrl-C. Add `-- --no-console` to only flash, `-c opt` to flash
the release build. `bazel run //tools:console` attaches to a running board.
Every image has a `.flash` target: `bazel query 'kind(py_binary, //...)'`
lists them, including `//test/cm7:echo.flash`, `:hello-threadx.flash`,
`:hello-netx.flash`, `:hello-publisher.flash`, `:hello-subscriber.flash` and
`//firmware/cm7/application/foc:foc.flash`.

# Test
`bazel test //test/cm7:ut-simple //test/cm7:ut-memory //test/cm7:ut-threadx`

Each test flashes a pigweed test image to the connected board and passes or
fails on its console summary. They are excluded from `bazel test //...` because
they need the hardware.

# Serial Terminal
device: `/dev/ttyACM0`
baud: `115200`

# Build files
Our code uses `cm7_library`, `cm4_library`, `cm7_image` and `cm4_image` from `bazel/cores.bzl`:
a `cc_library` or firmware image that builds for one core with forge's warnings and `-Werror`.
Vendored code is a plain `cc_library`: NXP's SDK under `firmware/*/legacy` with `HAL_COPTS`, and
ThreadX and NetX Duo fetched by bazel with BUILD files in `3p/`. Our code sees the SDK's
headers as system headers, so its warnings do not fire inside them.

# Dependencies
Repositories under development (forge, microcyphal) are managed by gordion and
pinned in `gordion.yaml`; ThreadX, NetX Duo and NXP's SVDs are fetched by bazel; `tools/bazel` points bazel at whichever of them are
checked out in the workspace, and bazel fetches the rest from the
`git_override` pins in `MODULE.bazel`. `gor commit` keeps both pins in step.

# Host setup for the network demos

## NetX host setup
```bash
# Set up local ethernet interface (192.0.2.1) and mask (255.255.255.0)
ping 192.0.2.149
socat -v UDP4-RECVFROM:5001,fork EXEC:'/bin/cat' # echo unicast
socat -v UDP4-RECVFROM:5002,reuseaddr,ip-add-membership=224.1.0.2:192.0.2.1,fork EXEC:'/bin/cat' # echo multicast
```

## Cyphal tools and wireshark
```bash
sudo apt update
sudo apt install wireshark

# Copy lua script
# from: https://github.com/OpenCyphal/wireshark_plugins/tree/main
# to: /usr/lib/x86_64-linux-gnu/wireshark/plugins

# Install yakut
pipx install 'yakut[transport-udp]'

# Add to .bashrc
export CYPHAL_PATH="$HOME/path/to/public_regulated_data_types:$CYPHAL_PATH"
export UAVCAN__UDP__IFACE="192.0.2.2"
export UAVCAN__NODE__ID=42

# Connect ethernet from computer to dev board
# Set the local ethernet interface to 192.0.2.1 and netmask 255.255.255.0

# Monitor all Cyphal/UDP traffic
yakut mon

# Subscribe to heartbeat messages
export UAVCAN__UDP__IFACE=192.0.2.100
export UAVCAN__NODE__ID=1000
yakut sub uavcan.node.heartbeat
```

# Copyright & Licensing

Copyright (c) 2025 Jacob Heathorn

This project is released under the **Academic Use License** (see [LICENSE](./LICENSE)).
For **commercial licensing**, please contact: <jacob.heathorn@gmail.com>.

TODO: Handwrite ethernet, and other drivers to replace the NXP provided HAL.
