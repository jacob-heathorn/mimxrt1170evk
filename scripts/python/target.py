import os
import shutil
from forge.preset import find_application

from forge.helpers import error, pushd

def cmake_build_type(debug: bool):
  if debug:
    return "Debug"
  else:
    return "Release"

# =================================================================================================
# Target - A hardware target, essentially a grouping of build presets

class Target:
  def __init__(self, name: str, project_root: os.path):
    self.name = name
    self.presets = []
    self.project_root = project_root
    self.top_build_root = os.path.join(project_root, 'bin')
    # These are optionally assigned.
    self.debugger = None
    self.flasher = None

    # CMake generator (-G)
    self.generator = "Ninja"
    
    # Cache variables (-D)
    self.cmake_toolchain_file = None
    self.cmake_export_compile_commands = "YES"

  # def clean(self):
  #   # Remove the release build directory if it exists
  #   if os.path.exists(self.bin_dir(release=True)):
  #     shutil.rmtree(self.bin_dir(release=True))

  #   # Remove the debug build directory if it exists
  #   if os.path.exists(self.bin_dir(release=False)):
  #     shutil.rmtree(self.bin_dir(release=False))

  def build(self, release: bool, verbose: bool):
    with pushd(self.bin_dir(release)):
      for preset in self.presets:
        
        if preset.name == "cm4":
          preset.build(release, verbose)
          # TODO remove this part
          if release:
            with pushd("cm7"):
              shutil.copy('/home/jacob/evtol/nxp/mimxrt1170evk-platform/bin/mimxrt1176-debug/cm4/test/cm4/hello_world/hello-world-cm4.bin', 
                        'core1_image.bin')
          else:
            with pushd("cm7"):
              shutil.copy('/home/jacob/evtol/nxp/mimxrt1170evk-platform/bin/mimxrt1176-debug/cm4/test/cm4/hello_world/hello-world-cm4.bin', 
                        'core1_image.bin')
        else:
          preset.build(release, verbose)


      # # Configure
      # args = ['cmake', '-G', self.generator, self.project_root
      #         , f'-DCMAKE_TOOLCHAIN_FILE={self.cmake_toolchain_file}'
      #         , f'-DCMAKE_BUILD_TYPE={cmake_build_type(release)}'
      #         , f'-DCMAKE_EXPORT_COMPILE_COMMANDS={self.cmake_export_compile_commands}'
      #        ]
      
      # if verbose:
      #   args.append('-DCMAKE_VERBOSE_MAKEFILE=ON')
      
      # subprocess.check_call(args)

      # # Build
      # args = ['cmake', '--build', self.bin_dir(release)]
      # subprocess.check_call(args)

  def bin_dir(self, release: bool):
    if release:
      return os.path.join(self.top_build_root, f"{self.name}-release")
    else:
      return os.path.join(self.top_build_root, f"{self.name}-debug")
    
  def resolve_application(self, release: bool, preset_application: str):
    # Split the string into two parts at the first colon
    parts = preset_application.split(':', 1)  # '1' is the maxsplit argument

    # Assign the parts to respective variables
    preset = parts[0]  # The part before the colon
    application = parts[1] if len(parts) > 1 else None  # The part after the colon, or None if no colon

    search_dir = os.path.join(self.bin_dir(release), preset)
    return find_application(application, search_dir)
  