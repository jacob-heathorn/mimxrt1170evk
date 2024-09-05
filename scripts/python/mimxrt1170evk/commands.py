import mimxrt1170evk
from forge.helpers import error


def flash_core_0(preset_application: str):
  """
  Expects a string in the format preset:application, so that the executable can be found in the bin
  directory and flashed to hardware. The preset must be a cm7 variant (e.g. cm7-debug).
  """
  preset, application = mimxrt1170evk.bin.resolve_application(preset_application)

  if preset.startswith("cm7"):
    flasher = mimxrt1170evk.Core0Flasher()
    flasher.flash(application)
  else:
    error("You can only flash core0, which is cortex-m7 architecture")


def debug_core_0(preset_application: str):
  """
  Expects a string in the format preset:application, so that the executable can be found in the bin
  directory and used to setup the debug environment. The preset must be a cm7 variant (e.g.
  cm7-debug).
  """
  preset, application = mimxrt1170evk.bin.resolve_application(preset_application)

  if preset.startswith("cm7"):
    debugger = mimxrt1170evk.VSCodeDebugger()
    debugger.generate_core0(application)
  else:
    error("Core0 is cortex-m7 architecture")


def debug_core_1(preset_application: str):
  """
  Expects a string in the format preset:application, so that the executable can be found in the bin
  directory and used to setup the debug environment. The preset must be a cm4 variant (e.g.
  cm4-debug).
  """
  preset, application = mimxrt1170evk.bin.resolve_application(preset_application)

  if preset.startswith("cm4"):
    debugger = mimxrt1170evk.VSCodeDebugger()
    debugger.generate_core1(application)
  else:
    error("Core0 is cortex-m4 architecture")
