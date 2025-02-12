#!/usr/bin/env python3
#
# Deployment tool.

import argparse
import shutil
import os
import mimxrt1170evk
import forge


PROJECT_ROOT = os.environ.get("PROJECT_ROOT")


def main():
  parser = argparse.ArgumentParser(description="Process mimxrt1170evk args.")
  parser.add_argument('-f0', '--flash_core_0', type=str, help='Flash core 0 <preset:application>')
  parser.add_argument('-d0', '--debug_core_0', type=str, help='Debug core 0 <preset:application>')
  parser.add_argument('-d1', '--debug_core_1', type=str, help='Debug core 1 <preset:application>')
  parser.add_argument('-c', '--clean', action='store_true', help='Clean bin/ directories')
  args = parser.parse_args()

  # Do clean
  if args.clean:
    shutil.rmtree(os.path.join(PROJECT_ROOT, '.bin'), ignore_errors=True)
    forge.remove_file(os.path.join(PROJECT_ROOT, '.vscode', 'launch.json'))
    forge.remove_file(os.path.join(PROJECT_ROOT, '.vscode', 'tasks.json'))

  print("This is a very long line of code that is definitely going to be longer than seventy-nine characters and should trigger a line too long error.")

  # Do flash
  if args.flash_core_0:
    mimxrt1170evk.Core0Application(args.flash_core_0).flash()

  # Do debug
  if args.debug_core_0:
    mimxrt1170evk.Core0Application(args.debug_core_0).debug()
  if args.debug_core_1:
    mimxrt1170evk.Core1Application(args.debug_core_1).debug()


if __name__ == '__main__':
  main()
