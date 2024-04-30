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
  # Load the existing launch.json
  launch_file_path = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')

  manager = LaunchManager(launch_file_path)

  # Define the context for your template rendering
  context = {
      'program': '${file}',
      'console': 'integratedTerminal'
  }

  # Generate the new configuration from the Jinja template
  new_config = generate_new_config(os.path.join(PROJECT_ROOT, 'scripts', 'templates'), 'core0_launch_config.jinja2', context)

  manager.update(new_config)
  manager.save()
