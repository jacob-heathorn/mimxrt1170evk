import os
import subprocess

LINK_SERVER = os.environ.get("LINK_SERVER", "")


class Core0Flasher():

  def __init__(self):
    pass

  def flash(self, application: str):
    # Kill any existing link server
    args = ['pkill', 'LinkServer']
    subprocess.call(args)

    # Use LinkServer to flash core0
    args = [
        LINK_SERVER,
        "flash",
        "--no-boot",
        "MIMXRT1176xxxxx:MIMXRT1170-EVK",
        "load",
        application]
    subprocess.check_call(args)
