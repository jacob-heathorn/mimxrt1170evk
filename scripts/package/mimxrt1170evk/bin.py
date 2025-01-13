from forge.preset import find_application
import os

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")
BIN_ROOT = os.path.join(PROJECT_ROOT, 'bin')


def resolve_application(preset_application: str):
  # Split the string into two parts at the first colon
  parts = preset_application.split(':', 1)  # '1' is the maxsplit argument

  # Assign the parts to respective variables
  preset = parts[0]  # The part before the colon
  # The part after the colon, or None if no colon
  application = parts[1] if len(parts) > 1 else None

  # Resolve
  search_dir = os.path.join(BIN_ROOT, preset)
  application_fullfile = find_application(application, search_dir)
  print(f"Found: {preset}:{application_fullfile}")
  return preset, application_fullfile
