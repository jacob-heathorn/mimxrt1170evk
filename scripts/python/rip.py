#!/usr/bin/env python3
#
# Top-level repository build tool.

import argparse
import shutil
import os
import mimxrt1170evk


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
    shutil.rmtree(os.path.join(PROJECT_ROOT, 'bin'), ignore_errors=True)

  # Do flash
  if args.flash_core_0:
    mimxrt1170evk.flash_core_0(args.flash_core_0)

  # Do debug
  if args.debug_core_0:
    mimxrt1170evk.debug_core_0(args.debug_core_0)
  if args.debug_core_1:
    mimxrt1170evk.debug_core_1(args.debug_core_1)


if __name__ == '__main__':
  main()
