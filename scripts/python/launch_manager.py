import json5
import os
from jinja2 import Environment, FileSystemLoader

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

class LaunchManager:
  def __init__(self, file: os.path):
    self.file = file
    
    with open(self.file, 'r') as file:
      self.data = json5.load(file)

  def update(self, new_config):
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

  def save(self):
    with open(self.file, 'w', encoding='utf-8') as file:
      json5.dump(self.data, file, indent=2, quote_keys=True, trailing_commas=False)
