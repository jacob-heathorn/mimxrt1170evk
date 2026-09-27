"""Flashes an ELF to the MIMXRT1170-EVK with LinkServer, then streams its console."""

import argparse
import os
import subprocess
import sys
import time
from typing import Final

from tools import console

_LINK_SERVER: Final = os.environ.get("LINK_SERVER", "/usr/local/LinkServer/LinkServer")
_TARGET: Final = "MIMXRT1176xxxxx:MIMXRT1170-EVK"


def main() -> None:
  parser = argparse.ArgumentParser(description=__doc__)
  parser.add_argument("--elf", required=True)
  parser.add_argument("--no-console", action="store_true", help="Exit after flashing.")
  console.add_arguments(parser)
  args = parser.parse_args()

  # Open the console before flashing so the boot-time output is not missed.
  if not args.no_console:
    console.open_console(args.device, args.baud)
  _flash(args.elf)
  if not args.no_console:
    console.wait()


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
