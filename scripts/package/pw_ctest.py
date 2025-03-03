#!/usr/bin/env python3
#
# Top-level repository build tool.

# System pythonmodules
import argparse
import serial
import os
import re
import sys
import mimxrt1170evk

# Pull in environment variables
SERIAL_DEVICE = os.environ.get("SERIAL_DEVICE")


def main():
  parser = argparse.ArgumentParser(description='Repository build driver')
  parser.add_argument('-f0', '--flash_core_0', type=str, help='Flash core 0 <preset:application>')
  # parser.add_argument('-t', '--test', dest="test", required=True,
  #                     help='Pigweed unit test runnable to run on the target')
  args = parser.parse_args()

  # Initialize serial port
  ser = serial.Serial(SERIAL_DEVICE, 115200)

  # Flash the test program
  if args.flash_core_0:
    mimxrt1170evk.Core0Application(args.flash_core_0).flash()
  # args = ['rip', '-r', args.test]
  # subprocess.check_call(args)

  # Analyze test output
  suite_passed = True
  while True:
    # Read next line form UART output
    line = ser.readline().decode('utf-8').strip('\r\n')

    # Print the line so it is available in ctest output.
    print(line)

    # Check if any test case failed
    if "\033[31mFAILED\033[0m" in line:
      suite_passed = False

    # Use regex to check for the summary line to determine if the test suite has completed. TODO:
    # The summary line always prints PASSED with the number of passed tests (even if it's 0). I feel
    # it should print FAILED if any test case failed, then we can just look at that summary line to
    # determine overall pass/fail. For now, we are looking for FAILED in any of the lines to
    # determine overall suite failure and return status.
    pattern = r"^\[\s+(\033\[32mPASSED\033\[0m|\033\[31mFAILED\033\[0m)\s+\]\s+(\d+)\s+test\(s\)\.$"

    match = re.match(pattern, line)
    if match:
      if suite_passed:
        sys.exit(0)
      else:
        sys.exit(1)


if __name__ == '__main__':
  main()
