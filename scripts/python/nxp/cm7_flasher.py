import os
import subprocess

LINK_SERVER = os.environ.get("LINK_SERVER")

class Cm7Flasher():
  
  def __init__(self):
    pass

  def flash(self, application: os.path):
    args = [LINK_SERVER, "flash", "--no-boot", "MIMXRT1176xxxxx:MIMXRT1170-EVK", "load", application]
    subprocess.check_call(args)
