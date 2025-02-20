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
  parser.add_argument('-g', '--generate', action='store_true', help='Generate svd register')
  args = parser.parse_args()

  # Do clean
  if args.clean:
    shutil.rmtree(os.path.join(PROJECT_ROOT, '.bin'), ignore_errors=True)
    forge.remove_file(os.path.join(PROJECT_ROOT, '.vscode', 'launch.json'))
    forge.remove_file(os.path.join(PROJECT_ROOT, '.vscode', 'tasks.json'))

  # Do flash
  if args.flash_core_0:
    mimxrt1170evk.Core0Application(args.flash_core_0).flash()

  # Do debug
  if args.debug_core_0:
    mimxrt1170evk.Core0Application(args.debug_core_0).debug()
  if args.debug_core_1:
    mimxrt1170evk.Core1Application(args.debug_core_1).debug()

  # Do generate registers
  if args.generate:
    # TODO: get mcux-sdk in nix.
    file = '/home/jacob/evtol/nxp/repos/mcux-sdk/svd/MIMXRT1176/MIMXRT1176_cm7.xml'
    output_dir = os.path.join(PROJECT_ROOT, '.bin')
    svd_parser_wrapper = forge.SVDParserWrapper(file, output_dir)
    svd_parser_wrapper.generate_peripheral("LPUART1")
    svd_parser_wrapper.generate_peripheral('GPIO1')


if __name__ == '__main__':
  main()
