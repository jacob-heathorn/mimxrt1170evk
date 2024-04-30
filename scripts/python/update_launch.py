import json5
import os
from jinja2 import Environment, FileSystemLoader
from launch_manager import LaunchManager

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")


# Function to generate new configuration from a Jinja2 template
def generate_new_config(template_path, template_name, context):
    env = Environment(loader=FileSystemLoader(template_path))
    template = env.get_template(template_name)
    # We assume that the template output will be valid JSON5, parse it as such
    new_config = json5.loads(template.render(context))
    return new_config

def test_generate():
  launch_fullfile = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
  template_fullfile = os.path.join(PROJECT_ROOT, 'scripts', 'templates', 'core0_launch_config.jinja2')

  manager = LaunchManager(launch_fullfile)

  # Define the context for your template rendering
  context = {
    'executable': '/home/jacob/embedded/nxp/mimxrt1170evk/bin/cm7-debug/test/cm7/hello_world/hello-world-cm7.elf'
  }

  manager.update(template_fullfile, context)
