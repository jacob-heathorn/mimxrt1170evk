#!/usr/bin/env python3
#
# Top-level repository build tool.

# System pythonmodules
import argparse
import mimxrt1170evk


def main():
  parser = argparse.ArgumentParser(description='Repository build driver')
  parser.add_argument('-f0', '--flash_core_0', type=str, help='Flash core 0 <preset:application>')
  # parser.add_argument('-t', '--test', dest="test", required=True,
  #                     help='Pigweed unit test runnable to run on the target')
  args = parser.parse_args()

  test_application = mimxrt1170evk.Core0Application(args.flash_core_0)
  mimxrt1170evk.ctest.do(test_application=test_application)


if __name__ == '__main__':
  main()
