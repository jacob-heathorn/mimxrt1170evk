"""Streams the EVK's serial console until Ctrl-C."""

import argparse
import os
import time
from typing import Final

from forge.serial_terminal import SerialTerminal

_DEVICE: Final = os.environ.get("SERIAL_DEVICE", "/dev/ttyACM0")
_BAUD: Final = 115200


def main() -> None:
  parser = argparse.ArgumentParser(description=__doc__)
  add_arguments(parser)
  args = parser.parse_args()
  open_console(args.device, args.baud)
  wait()


def add_arguments(parser: argparse.ArgumentParser) -> None:
  parser.add_argument("--device", default=_DEVICE)
  parser.add_argument("--baud", type=int, default=_BAUD)


def open_console(device: str, baud: int) -> SerialTerminal:
  """Starts printing console output in the background."""
  terminal = SerialTerminal(device, baud)
  terminal.read_background()
  return terminal


def wait() -> None:
  """Blocks until Ctrl-C, which SerialTerminal turns into a clean exit."""
  while True:
    time.sleep(1)


if __name__ == "__main__":
  main()
