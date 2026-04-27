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

    # Open serial first so we don't miss the boot-time printf burst — the
    # chip auto-runs as soon as LinkServer releases it after flash, which
    # is faster than we can re-open the port. Then start flashing.
    serial_handle = None
    if not args.no_serial:
        serial_handle = SerialTerminal(args.serial_device, args.baud)
        serial_handle.read_background()

    if not args.no_flash:
        _flash(args.elf)

    if serial_handle is not None:
        # read_background spawns a daemon thread; block here so the main
        # thread stays alive to keep stdout flushing until Ctrl-C.
        try:
            while True:
                time.sleep(1)
        except KeyboardInterrupt:
            print("\nExiting.", flush=True)


def _flash(elf_path: str) -> None:
    if not os.path.exists(_LINK_SERVER):
        sys.exit(f"LinkServer not found at {_LINK_SERVER}. Set $LINK_SERVER.")

    print("Killing any existing LinkServer...", flush=True)
    subprocess.call(["pkill", "LinkServer"])
    time.sleep(0.3)

    print(f"Flashing {elf_path}...", flush=True)
    # `--no-boot` here means "don't update/boot the LPC-Link2 probe
    # firmware" — not "don't run the target". Skipping the probe-firmware
    # check lets the target start cleanly so the printf burst lands on
    # serial without the resets that otherwise corrupt early output.
    subprocess.check_call(
        [_LINK_SERVER, "flash", "--no-boot", _TARGET, "load", elf_path]
    )
    print("Flash complete.", flush=True)


if __name__ == "__main__":
    main()
