import os
from forge.helpers import print_green
from launch_manager import LaunchManager

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

class VSCodeDebugger():
  
  def __init__(self):
    pass

  def generate_core0(self, executable: os.path):
    launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
    template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'core0_launch_config.jinja2')

    manager = LaunchManager(launch_fullfile)

    # Define the context for your template rendering
    context = {
      'executable': executable
    }

    manager.update(template_fullfile, context)
    print_green("Dude, where's my car")

  def generate_core1(self, executable: os.path):
    launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
    template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'core1_launch_config.jinja2')

    manager = LaunchManager(launch_fullfile)

    # Define the context for your template rendering
    context = {
      'executable': executable
    }

    manager.update(template_fullfile, context)
