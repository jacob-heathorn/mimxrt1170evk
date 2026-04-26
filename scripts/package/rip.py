#!/usr/bin/env python3
#
# Deployment tool.

import argparse
import shutil
import os
import mimxrt1170evk
import forge


PROJECT_ROOT = os.environ.get("PROJECT_ROOT", "")
MCUX_SOC_SVD_ROOT = os.environ.get("MCUX_SOC_SVD_ROOT", "")
SERIAL_DEVICE = os.environ.get("SERIAL_DEVICE", "")


def main():
  parser = argparse.ArgumentParser(description="Process mimxrt1170evk args.")
  parser.add_argument('-t', '--ctest', type=str, help='Run ctest with <preset:application>')
  parser.add_argument('-f0', '--flash_core_0', type=str, help='Flash core 0 <preset:application>')
  parser.add_argument('-d0', '--debug_core_0', type=str, help='Debug core 0 <preset:application>')
  parser.add_argument('-d1', '--debug_core_1', type=str, help='Debug core 1 <preset:application>')
  parser.add_argument('-c', '--clean', action='store_true', help='Clean bin/ directories')
  parser.add_argument('-s', '--serial', action='store_true', help='Launch serial terminal')
  subparsers = parser.add_subparsers(dest='command')
  gen_parser = subparsers.add_parser(
      'generate',
      help='Generate SVD register headers for a core (optionally a single peripheral).')
  gen_parser.add_argument('core', choices=['cm4', 'cm7'], help='Target core.')
  gen_parser.add_argument(
      'peripheral',
      nargs='?',
      default=None,
      help='Optional peripheral name (e.g. DMA0). Omit to regenerate all.')
  args = parser.parse_args()

  # Do serial terminal.
  if args.serial:
    serial_terminal = forge.SerialTerminal(SERIAL_DEVICE, 115200)
    serial_terminal.read_background()

  # Do clean
  if args.clean:
    shutil.rmtree(os.path.join(PROJECT_ROOT, '.bin'), ignore_errors=True)
    forge.remove_file(os.path.join(PROJECT_ROOT, '.vscode', 'launch.json'))
    forge.remove_file(os.path.join(PROJECT_ROOT, '.vscode', 'tasks.json'))

  # Do flash (Core 0 only)
  if args.flash_core_0:
    mimxrt1170evk.Core0Application(args.flash_core_0).flash()

  # Do ctest (Core 0 only)
  if args.ctest:
    mimxrt1170evk.ctest.do(mimxrt1170evk.Core0Application(args.ctest))

  # Do debug
  if args.debug_core_0:
    mimxrt1170evk.Core0Application(args.debug_core_0).debug()
  if args.debug_core_1:
    mimxrt1170evk.Core1Application(args.debug_core_1).debug()

  # Do generate (whole core or single peripheral).
  if args.command == 'generate':
    svd_name = {'cm4': 'MIMXRT1176_cm4.xml', 'cm7': 'MIMXRT1176_cm7.xml'}[args.core]
    svd_file = os.path.join(MCUX_SOC_SVD_ROOT, 'MIMXRT1176', svd_name)
    output_dir = os.path.join(PROJECT_ROOT, 'firmware', args.core, 'registers', 'codegen')
    wrapper = forge.RegisterGenerator(svd_file, output_dir)
    if args.peripheral:
      wrapper.generate_peripheral(args.peripheral)
    else:
      wrapper.generate()


if __name__ == '__main__':
  main()
