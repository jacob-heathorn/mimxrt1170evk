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
from nxp.cm7_vscode_debugger import Cm7VscodeDebugger
from target import Target

# Pull in environment variables
FORGE_ROOT = os.environ.get("FORGE_ROOT")
PROJECT_ROOT = os.environ.get("PROJECT_ROOT")
ARM_GDB_PATH = os.environ.get("ARM_GDB_PATH")


# Define presets
mimxrt1176 = Target("mimxrt1176", PROJECT_ROOT)

# cortex-m4
cm4 = Preset("cm4", PROJECT_ROOT) # TODO use CMakePresets.json at this level
cm4.cmake_toolchain_file = os.path.join(PROJECT_ROOT, 'cmake','cm4', 'toolchain.cmake')
mimxrt1176.presets.append(cm4)

# cortex-m7
cm7 = Preset("cm7", PROJECT_ROOT) # TODO use CMakePresets.json at this level
cm7.cmake_toolchain_file = os.path.join(PROJECT_ROOT, 'cmake','cm7', 'toolchain.cmake')
mimxrt1176.presets.append(cm7)

mimxrt1176.flasher = Cm7Flasher()
mimxrt1176.debugger = Cm7VscodeDebugger()

# ALL_PRESETS = [mimxrt1176]

def main():
  parser = argparse.ArgumentParser(description='Repository build driver')
  # parser.add_argument('-p', '--presets', dest="presets", required=False, nargs='+', help='CMake build preset(s)')
  parser.add_argument('-c', '--clean', action='store_true', default=False, help='Delete the build folder')
  parser.add_argument('-b', '--build', action='store_true', default=False, help='Compile')
  parser.add_argument('-a', '--application', dest="application", required=False, help='Application binary')
  parser.add_argument('-f', '--flash', action='store_true', default=False, help='Flash the application to the preset target')
  parser.add_argument('-v', '--verbose', action='store_true', default=False, help='Build verbose')
  parser.add_argument('-r', '--release', action='store_true', default=False, help='Build in release mode')
  parser.add_argument('-sd', '--start_debugger', action='store_true', default=False, help="Start the debugger.")
  args = parser.parse_args()

  # # Don't require a preset, default to all presets if one is not specified
  # if args.presets is None:
  #   presets = ALL_PRESETS
  # else:
  #   presets = subset_presets(args.presets, ALL_PRESETS)
  target = mimxrt1176

  # Do clean
  # if args.clean:
  #   if presets == ALL_PRESETS:
  #     if os.path.exists(os.path.join(PROJECT_ROOT, 'bin')):
  #       shutil.rmtree(os.path.join(PROJECT_ROOT, 'bin'))
  if args.clean:
    shutil.rmtree(os.path.join(PROJECT_ROOT, 'bin'))

    # else:
    #   for preset in presets:
    #     preset.clean()
  
  # # # TODO remove this part
  # if args.release:
  #   with pushd('bin/mimxrt1176-release/cm7'):
  #     shutil.copy('/home/jacob/evtol/nxp/examples/evkmimxrt1170_hello_world_cm4/armgcc/debug/core1_image.bin', 
  #               'core1_image.bin')
  # else:
  #   with pushd('bin/mimxrt1176-debug/cm7'):
  #     shutil.copy('/home/jacob/evtol/nxp/examples/evkmimxrt1170_hello_world_cm4/armgcc/debug/core1_image.bin', 
  #               'core1_image.bin')

  # Do build
  if args.build:
    target.build(args.release, args.verbose)

  # Resolve Application
  if args.application:
    args.application = target.resolve_application(args.release, args.application)
  
  # Do flash
  if args.flash:
    if target.flasher:
      target.flasher.flash(args.application)

  # Do Debug
  if target.debugger:
    target.debugger.generate(args.application)
    if args.start_debugger:
      target.debugger.debug()

if __name__ == '__main__':
  main()
