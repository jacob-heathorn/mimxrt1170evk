#!/usr/bin/env python3
#
# Top-level repository build tool.

# System pythonmodules
import argparse
import os
import shutil
from typing import List
import string

# Custom imports
from forge.preset import Preset, subset_presets
from forge.helpers import error, pushd
from nxp.cm7_flasher import Cm7Flasher
from nxp.core0_vscode_debugger import Core0VscodeDebugger
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
  parser.add_argument('-f', '--flash', nargs='+', help='List of applications to flash')
  parser.add_argument('-d', '--debug', nargs='+', help='List of applications to debug')
  args = parser.parse_args()

  # Do flash
  if args.flash:
    for preset_application in args.flash:
      preset, application = resolve_application(preset_application)

      if preset.startswith("cm7"):
        flasher = Cm7Flasher()
        flasher.flash(application)

      # TODO error cm4

  # Do Debug
  if args.debug:
    for preset_application in args.debug:
      preset, application = resolve_application(preset_application)

      if preset.startswith("cm7"):
        debugger = Core0VscodeDebugger()
        debugger.generate(application)

      # if preset.startswith("cm4"):
      #   debugger = Core0VscodeDebugger()
      #   debugger.generate(application)
  

if __name__ == '__main__':
  main()
