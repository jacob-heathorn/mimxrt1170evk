"""Flashes an ELF to the MIMXRT1170-EVK with LinkServer and streams the board's serial console."""

import argparse
import os
import subprocess
import sys
import time
from typing import Final

from forge.serial_terminal import SerialTerminal

_LINK_SERVER: Final = os.environ.get("LINK_SERVER", "/usr/local/LinkServer/LinkServer")
_TARGET: Final = "MIMXRT1176xxxxx:MIMXRT1170-EVK"


def main() -> None:
  args = _parse_args()
  # Open the console before flashing so the boot-time output is not missed.
  terminal = None if args.no_serial else SerialTerminal(args.serial_device, args.baud)
  if terminal:
    terminal.read_background()
  if not args.no_flash:
    _flash(args.elf)
  while terminal:  # SerialTerminal exits the process on Ctrl-C.
    time.sleep(1)


def _parse_args() -> argparse.Namespace:
  parser = argparse.ArgumentParser(description=__doc__)
  parser.add_argument("--elf", required=True)
  parser.add_argument("--serial-device", default=os.environ.get("SERIAL_DEVICE", "/dev/ttyACM0"))
  parser.add_argument("--baud", type=int, default=115200)
  parser.add_argument("--no-flash", action="store_true", help="Only open the serial console.")
  parser.add_argument("--no-serial", action="store_true", help="Only flash.")
  return parser.parse_args()


def _flash(elf: str) -> None:
  if not os.path.exists(_LINK_SERVER):
    sys.exit(f"LinkServer not found at {_LINK_SERVER}. Set $LINK_SERVER.")
  subprocess.call(["pkill", "LinkServer"])  # An orphaned instance locks the probe.
  time.sleep(0.3)
  print(f"Flashing {elf}...", flush=True)
  # --no-boot skips the probe firmware update, which would reset the target mid-boot.
  subprocess.check_call([_LINK_SERVER, "flash", "--no-boot", _TARGET, "load", elf])
  print("Flash complete.", flush=True)


if __name__ == "__main__":
  main()
