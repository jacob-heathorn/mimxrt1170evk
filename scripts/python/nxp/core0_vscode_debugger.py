import os
from forge.helpers import print_green
from launch_manager import LaunchManager

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

class Core0VscodeDebugger():
  
  def __init__(self):
    pass

  def generate(self, executable: os.path):
    launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
    template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'core0_launch_config.jinja2')

    manager = LaunchManager(launch_fullfile)

    # Define the context for your template rendering
    context = {
      'executable': executable
    }

    manager.update(template_fullfile, context)
    print_green("Open VSCode and hit F5 :)")

