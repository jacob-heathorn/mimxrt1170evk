# Setup Instructions

1) Clone this repository: `git clone https://github.com/jacob-heathorn/mimxrt1170evk.git`
2) Install gordion: `pipx install gordion`
3) Update the gordion dependencies: `gor -u`
4) Install direnv:
  * `sudo apt install direnv`
  * Add the following to your .bashrc: `eval "$(direnv hook bash)"`
  * Open a new terminal and change directory to here.
  * `direnv allow .`
5) Install nix:
  * `sh <(curl -L https://nixos.org/nix/install) --daemon`
6) Install LinkServer from NXP:
  * Download:
    https://www.nxp.com/design/design-center/software/development-software/mcuxpresso-software-and-tools-/linkserver-for-microcontrollers:LINKERSERVER
  * chmod +x and run the download.
  * Confirm install location: `ls /usr/local/LinkServer/LinkServer`
7) Install the workspace recommended VSCode extensions.
8) Create the dev environment: `nox -s dev`
9) Connect mimxrt1170evk to power, and USB to your computer.

# Build
`cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug`

# Run
`rip -f0 cm7-debug:hello-world-cm7`

# Debug
`rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4`

# ctest
`cd .bin/cm7-debug`
`ctest -V`

# Full Repository test suite
`nox`

# Hello World Test
```bash
cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4 && \
rip -f0 cm7-debug:hello-world-cm7 -s
```

# Echo test
```bash
cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:echo && \
rip -f0 cm7-debug:echo
```

# Threadx test
```bash
cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-threadx && \
rip -f0 cm7-debug:hello-threadx -s
```

# Netx test
```bash
cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-netx && \
rip -f0 cm7-debug:hello-netx -s

# Set up local ethernet interface (192.2.2.1) and mask (255.255.255.0)
ping 192.2.2.149
socat -v UDP4-RECVFROM:5001,fork EXEC:'/bin/cat' # echo unicast
socat -v UDP4-RECVFROM:5002,reuseaddr,ip-add-membership=224.1.0.2:192.2.2.1,fork EXEC:'/bin/cat' # echo multicast
```

# Setup cyphal tools and wireshark
```bash
sudo apt update
sudo apt install wireshark

# Copy lua script 
# from: https://github.com/OpenCyphal/wireshark_plugins/tree/main
# to: /usr/lib/x86_64-linux-gnu/wireshark/plugins

# Instal yakut
pipx install 'yakut[transport-udp]'

# Add to .bashrc
export CYPHAL_PATH="$HOME/path/to/public_regulated_data_types:$CYPHAL_PATH"
export UAVCAN__UDP__IFACE="192.2.2.2"
export UAVCAN__NODE__ID=42

# Connect ethernet from computer to dev board
# Set the local ethernet interface to 192.2.2.1 and netmask 255.255.255.0

```

# Cyphal publisher test
```bash

# See previous section for setup.

# Monitor all Cyphal/UDP traffic
yakut mon

cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-publisher && \
rip -f0 cm7-debug:hello-publisher -s

# Or subscribe specifically to heartbeat messages
export UAVCAN__UDP__IFACE=192.2.2.100
export UAVCAN__NODE__ID=1000
yakut sub uavcan.node.heartbeat
```

# Serial Terminal
device: `/dev/ttyACM0`
baud: `115200`

# Development commands

```bash
# Generate register files from SVD
rip -g0  # CM4 registers
rip -g1  # CM7 registers
```

# Problems Debugging
```bash
sudo lsof -i :2400
sudo lsof -i :2401

pkill LinkServer

Unplug/Replug usb

Reboot device
```
