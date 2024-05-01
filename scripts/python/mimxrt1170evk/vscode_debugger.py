import os
from forge.helpers import print_green
import vscode

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

class VSCodeDebugger():
  
  def __init__(self):
    pass

  def generate_core0_launch_config(self, executable: os.path):
    launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
    template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'core0_launch_config.jinja2')

    launch_manager = vscode.LaunchManager(launch_fullfile)

    # Define the context for your template rendering
    name = 'core0 (cortex m7)'
    context = {
      'name': name,
      'executable': executable
    }

    launch_manager.update(template_fullfile, context)
    return name
  
  def generate_core1_launch_config(self, executable: os.path):
    launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
    template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'core1_launch_config.jinja2')

    launch_manager = vscode.LaunchManager(launch_fullfile)

    # Define the context for your template rendering
    name = 'core1 (cortex m4)'
    context = {
      'name': name,
      'executable': executable
    }

    launch_manager.update(template_fullfile, context)
    return name

  def generate_linkserver_task(self):
    tasks_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'tasks.json')
    template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'linkserver_task.jinja2')

    tasks_manager = vscode.TasksManager(tasks_fullfile)

    # Define the context for your template rendering
    context = {}
    tasks_manager.update(template_fullfile, context)

  def generate_core0(self, executable: os.path):
    self.generate_linkserver_task()
    name = self.generate_core0_launch_config(executable)
    print_green(f"In VSCode use run config: {name}")


  def generate_core1(self, executable: os.path):
    self.generate_linkserver_task()
    name = self.generate_core1_launch_config(executable)
    print_green(f"In VSCode use run config: {name}")
