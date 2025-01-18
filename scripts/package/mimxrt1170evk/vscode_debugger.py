import os
import forge
from forge import print_green

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")
FILE_DIR = os.path.dirname(os.path.abspath(__file__))
TEMPLATES_DIR = os.path.normpath(os.path.join(FILE_DIR, '..', '..', 'templates'))


class VSCodeDebugger():

  def __init__(self):
    pass

  def generate_core0_launch_config(self, executable: os.path):
    launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
    template_fullfile = os.path.join(TEMPLATES_DIR, 'core0_launch_config.jinja2')

    launch_manager = forge.vscode.LaunchManager(launch_fullfile)

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
    template_fullfile = os.path.join(TEMPLATES_DIR, 'core1_launch_config.jinja2')

    launch_manager = forge.vscode.LaunchManager(launch_fullfile)

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
    template_fullfile = os.path.join(TEMPLATES_DIR, 'linkserver_task.jinja2')

    tasks_manager = forge.vscode.TasksManager(tasks_fullfile)

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
