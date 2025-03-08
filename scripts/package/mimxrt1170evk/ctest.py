import serial
import os
import re
import mimxrt1170evk
import forge

# Pull in environment variables
SERIAL_DEVICE = os.environ.get("SERIAL_DEVICE")


def do(test_application: mimxrt1170evk.Core0Application):

  if not forge.SerialTerminal.is_serial_device_available(SERIAL_DEVICE):
    forge.error(f"Serial device {SERIAL_DEVICE} is already in use!")

  # Initialize serial port.
  ser = serial.Serial(SERIAL_DEVICE, 115200)

  # Flash the test application.
  test_application.flash()

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
        return
      else:
        forge.error("Unit tests failed.")
