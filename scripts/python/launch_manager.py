import json5
import os
from jinja2 import Template

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

class LaunchManager:
  def __init__(self, file: os.path):
    self.file = file
    
    with open(self.file, 'r') as file:
      self.data = json5.load(file)

  def update(self, template_fullfile, context):
    # Read the template file
    with open(template_fullfile, 'r') as file:
      template_content = file.read()

    # Create a Template instance
    template = Template(template_content)

    # We assume that the template output will be valid JSON5, parse it as such
    new_config = json5.loads(template.render(context))

    # Replace the existing configuration if it exists
    for idx, config in enumerate(self.data['configurations']):
      print(idx)
      if config['name'] == new_config['name']:
        print(f"Updating launch configuration {config['name']}.")
        self.data['configurations'][idx] = new_config
        break
    else:
      print(f"Adding new launch configuration {new_config['name']}.")
      print(idx)

    # Save
    with open(self.file, 'w', encoding='utf-8') as file:
      json5.dump(self.data, file, indent=2, quote_keys=True, trailing_commas=False)
