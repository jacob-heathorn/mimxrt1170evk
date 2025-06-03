# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a dual-core ARM Cortex-M7/M4 embedded project for the NXP MIMXRT1170 EVK board featuring real-time networking with ThreadX/NetX Duo. The project uses modern C++17 with custom register abstractions and sophisticated multi-core communication.

## Build System

The project uses CMake with presets for dual-core configuration:

```bash
# Build both cores (typical workflow)
cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug

# Individual core builds
cmake --workflow --preset cm7-debug  # Primary core (Cortex-M7)
cmake --workflow --preset cm4-debug  # Secondary core (Cortex-M4)

# Release builds
cmake --workflow --preset cm7-release && cmake --workflow --preset cm4-release
```

Build outputs go to `.bin/{preset-name}/` directories.

## Development Commands

### Flash and Run Applications
Use the `rip` tool (custom deployment script):

```bash
# Flash and run on CM7
rip -f0 cm7-debug:hello-world-cm7

# Flash with serial terminal
rip -f0 cm7-debug:hello-world-cm7 -s

# Debug both cores simultaneously
rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4
```

### Testing

```bash
# Full test suite (Python linting + embedded tests)
tox

# Individual test environments
tox -e pytest  # Python package tests
tox -e lint    # Code linting and type checking

# CTest (from build directory)
cd .bin/cm7-debug && ctest -V

# Test specific application via rip
rip -t cm7-debug:application-name
```

### Network Testing

For networking applications (hello-netx), set up local interface:
```bash
# Set up ethernet interface (192.2.2.100/255.255.255.0)
ping 192.2.2.149
socat -v UDP4-RECVFROM:5001,fork EXEC:'/bin/cat' # unicast echo
socat -v UDP4-RECVFROM:5002,reuseaddr,ip-add-membership=224.1.0.2:192.2.2.100,fork EXEC:'/bin/cat' # multicast echo
```

### Maintenance Commands

```bash
# Clean build artifacts
rip -c

# Update dependencies
gordion -u

# Generate register files from SVD
rip -g0  # CM4 registers
rip -g1  # CM7 registers
```

## Architecture

### Multi-Core Setup
- **CM7 (Primary)**: Boots first, handles networking, boots CM4 by copying image to `0x20200000`
- **CM4 (Secondary)**: Auxiliary processing, communicates via MCMGR (Multi-Core Manager)
- **MCMGR**: NXP's inter-core communication using MU (Messaging Unit)

### Key Components
- **RTOS**: ThreadX with custom C++ wrappers (`ftl::tx_thread`)
- **Networking**: NetX Duo with Ethernet and UDP support
- **Memory**: Custom allocators for DTCM, OCRAM1, OCRAM2 regions
- **Registers**: Type-safe C++ headers generated from SVD files (`firmware/*/registers/codegen/`)

### Dependencies (gordion.yaml)
- **forge**: Custom build framework and utilities
- **threadx**: Real-time kernel (Eclipse ThreadX v6.4.2)
- **netxduo**: TCP/IP stack (Eclipse NetX Duo v6.4.2)
- **microcyphal**: Cyphal communication protocol support

## Serial Debug

- **Device**: `/dev/ttyACM0`
- **Baud**: `115200`
- **Command**: `rip -s` (launches terminal)

## Troubleshooting

```bash
# Check LinkServer ports
sudo lsof -i :2400
sudo lsof -i :2401

# Reset debugging environment
pkill LinkServer
# Unplug/replug USB
# Reboot device
```

## Coding Style Guidance

This project follows the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) with these specific modifications:

### Naming Conventions
- **Method names**: Use lowerCamelCase (e.g., `publishMessage()`, `getNodeId()`)
- **Regular/standalone functions**: Use UpperCamelCase (e.g., `WriteU16LE()`, `ReadU32BE()`)
- **Member variables**: Use snake_case (e.g., `node_id_`, `transfer_count_`)
- **Accessors/mutators**: May be named like variables
  - Example: `int count()` and `void set_count(int count)`
- **Indenting**: 2 spaces
- **Standard**: C++17, no exceptions, no RTTI
- **Headers**: Header-only standard library usage
- **Registers**: Use generated register classes instead of raw addresses
- **RTOS**: Prefer C++ wrappers (`ftl::`) over raw ThreadX APIs
- **Memory**: Use appropriate allocators for memory regions

### Comments
- Use `//` for single-line comments instead of `/* */` style comments
- Follow Google style guide recommendations for documentation comments
