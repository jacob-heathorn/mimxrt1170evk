import json
import os
from jinja2 import Environment, FileSystemLoader

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

# Function to load the launch configuration
def load_launch_config(file_path):
    with open(file_path, 'r') as file:
        return json.load(file)

# Function to save the launch configuration
def save_launch_config(file_path, config):
    with open(file_path, 'w', encoding='utf-8') as file:
        json.dump(config, file, indent=4)

# Function to generate new configuration from a Jinja2 template
def generate_new_config(template_path, template_name, context):
    env = Environment(loader=FileSystemLoader(template_path))
    template = env.get_template(template_name)
    new_config = json.loads(template.render(context))
    return new_config

def test_generate():
  # Load the existing launch.json
  launch_file_path = os.path.join(PROJECT_ROOT, '.vscode', 'launch.json')
  launch_config = load_launch_config(launch_file_path)

  # Define the name of the configuration you want to replace
  config_name_to_replace = 'core0 (cortex m7)'

  # Define the context for your template rendering
  context = {
      'program': '${file}',
      'console': 'integratedTerminal'
  }

  # Generate the new configuration from the Jinja template
  new_config = generate_new_config(os.path.join(PROJECT_ROOT, 'scripts', 'templates'), 'core0_launch_config.jinja', context)

  # Replace the existing configuration if it exists
  for idx, config in enumerate(launch_config['configurations']):
      if config['name'] == config_name_to_replace:
          launch_config['configurations'][idx] = new_config
          break
  else:
      print(f"No configuration found with the name '{config_name_to_replace}'.")

  # Save the updated launch.json
  save_launch_config(launch_file_path, launch_config)