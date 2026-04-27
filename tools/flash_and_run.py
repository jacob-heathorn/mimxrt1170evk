"""Flash a built .elf to the MIMXRT1170-EVK and stream serial output.

Mirrors the cmake-era `rip -f0 cm7-debug:<target> -s` workflow. Invoked
by per-target wrappers via the `flash_image` macro in //bazel:flash.bzl.

Steps:
  1. Kill any orphaned LinkServer instance (it locks the probe).
  2. Flash with NXP LinkServer: `LinkServer flash --no-boot
     MIMXRT1176xxxxx:MIMXRT1170-EVK load <elf>`.
  3. Open the board's USB-serial console and stream lines to stdout
     until interrupted (Ctrl-C).
"""

import argparse
import os
import subprocess
import sys
import time

from forge.serial_terminal import SerialTerminal

_LINK_SERVER = os.environ.get("LINK_SERVER", "/usr/local/LinkServer/LinkServer")
_TARGET = "MIMXRT1176xxxxx:MIMXRT1170-EVK"


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--elf",
        required=True,
        help="Path (runfiles-relative) to the .elf to flash.",
    )
    parser.add_argument(
        "--serial-device",
        default=os.environ.get("SERIAL_DEVICE", "/dev/ttyACM0"),
    )
    parser.add_argument("--baud", type=int, default=115200)
    parser.add_argument(
        "--no-flash",
        action="store_true",
        help="Skip flashing; just open the serial terminal.",
    )
    parser.add_argument(
        "--no-serial",
        action="store_true",
        help="Skip the serial terminal after flashing.",
    )
    args = parser.parse_args()

    if not args.no_flash:
        _flash(args.elf)

    if not args.no_serial:
        _serial(args.serial_device, args.baud)


def _flash(elf_path: str) -> None:
    if not os.path.exists(_LINK_SERVER):
        sys.exit(f"LinkServer not found at {_LINK_SERVER}. Set $LINK_SERVER.")

    print("Killing any existing LinkServer...", flush=True)
    subprocess.call(["pkill", "LinkServer"])
    time.sleep(0.3)

    print(f"Flashing {elf_path}...", flush=True)
    subprocess.check_call(
        [_LINK_SERVER, "flash", "--no-boot", _TARGET, "load", elf_path]
    )
    print("Flash complete.", flush=True)


def _serial(device: str, baud: int) -> None:
    print(f"Opening {device} @ {baud} baud (Ctrl-C to exit)...", flush=True)
    terminal = SerialTerminal(device, baud)
    try:
        terminal.read_background()
        # read_background spawns a thread; block on it.
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        print("\nExiting.", flush=True)


if __name__ == "__main__":
    main()
