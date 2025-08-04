import os
import subprocess
import forge

MIMXRT1170EVK_ROOT = os.environ.get("MIMXRT1170EVK_ROOT", "")
LINK_SERVER = os.environ.get("LINK_SERVER", "")
ARM_GDB = os.path.join(os.environ.get("ARM_GCC_TOOLCHAIN_PATH", ""), 'arm-none-eabi-gdb')


class Core0Flasher():
  """
  Flashes core 0.
  """

  def __init__(self):
    pass

  def flash(self, application: str):
    print("Killing any existing LinkServers... ", end="", flush=True)
    args = ['pkill', 'LinkServer']
    subprocess.call(args)
    print(f"{forge.helpers.GREEN_CHECK}", flush=True)

    # Now use LinkServer to flash core0.
    print("Flashing... ", flush=True)
    args = [
        LINK_SERVER,
        "flash",
        "--no-boot",
        "MIMXRT1176xxxxx:MIMXRT1170-EVK",
        "load",
        application]
    subprocess.check_call(args)
    print(f"Flash complete {forge.helpers.GREEN_CHECK}", flush=True)
