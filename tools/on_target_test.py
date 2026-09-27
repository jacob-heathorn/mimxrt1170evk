"""Flashes a pigweed test image and reports its result from the serial console."""

import argparse
import re
import sys
import time
from typing import Final

import serial

from tools import console, flash

_SUMMARY: Final = re.compile(r"\[\s+(PASSED|FAILED)\s+\]\s+\d+ test\(s\)\.")
_ANSI: Final = re.compile(r"\x1b\[[0-9;]*m")


def main() -> None:
  parser = argparse.ArgumentParser(description=__doc__)
  parser.add_argument("--elf", required=True)
  parser.add_argument("--timeout", type=float, default=120, help="Seconds to wait for the summary.")
  console.add_arguments(parser)
  args = parser.parse_args()

  with serial.Serial(args.device, args.baud, timeout=1) as port:
    flash.flash(args.elf)
    sys.exit(0 if _passed(port, time.monotonic() + args.timeout) else 1)


def _passed(port: serial.Serial, deadline: float) -> bool:
  """Echoes console lines until the test summary and returns whether every test passed."""
  failed = False
  while time.monotonic() < deadline:
    line = _ANSI.sub("", port.readline().decode(errors="replace")).rstrip()
    if not line:
      continue
    print(line, flush=True)
    failed |= "FAILED" in line or "ASSERT ERROR" in line
    if _SUMMARY.search(line):
      return not failed
  print("Timed out waiting for the test summary.", flush=True)
  return False


if __name__ == "__main__":
  main()
