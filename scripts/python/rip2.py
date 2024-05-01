#!/usr/bin/env python3
#
# Top-level repository build tool.

# System pythonmodules
import argparse
import os
from typing import List

# Custom imports
from forge.helpers import error, pushd
import mimxrt1170evk
from target import Target
from forge.preset import find_application

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")
BIN_ROOT = os.path.join(PROJECT_ROOT, 'bin')

def resolve_application(preset_application: str):
    # Split the string into two parts at the first colon
    parts = preset_application.split(':', 1)  # '1' is the maxsplit argument

    # Assign the parts to respective variables
    preset = parts[0]  # The part before the colon
    application = parts[1] if len(parts) > 1 else None  # The part after the colon, or None if no colon

    # Resolve
    search_dir = os.path.join(BIN_ROOT, preset)
    application_fullfile = find_application(application, search_dir)
    print(f"Found: {preset}:{application_fullfile}")
    return preset, application_fullfile

def main():
  parser = argparse.ArgumentParser(description="Process some applications.")
  parser.add_argument('-fc0', '--flash_core0', type=str, help='Flash core0')
  parser.add_argument('-dc0', '--debug_core0', type=str, help='Application to debug on core0')
  parser.add_argument('-dc1', '--debug_core1', type=str, help='Application to debug on core1')
  args = parser.parse_args()

  # Do flash
  if args.flash_core0:
    preset, application = resolve_application(args.flash_core0)

    if preset.startswith("cm7"):
      flasher = mimxrt1170evk.Core0Flasher()
      flasher.flash(application)
    else:
      error("You can only flash core0, which is cortex-m7 architecture")

  # Do Debug (core0)
  if args.debug_core0:
    preset, application = resolve_application(args.debug_core0)

    if preset.startswith("cm7"):
      debugger = mimxrt1170evk.VSCodeDebugger()
      debugger.generate_core0(application)
    else:
      error("Core0 is cortex-m7 architecture")
  
  # Do Debug (core1)
  if args.debug_core1:
    preset, application = resolve_application(args.debug_core1)

    if preset.startswith("cm4"):
      debugger = mimxrt1170evk.VSCodeDebugger()
      debugger.generate_core1(application)
    else:
      error("Core0 is cortex-m4 architecture")
  

if __name__ == '__main__':
  main()
