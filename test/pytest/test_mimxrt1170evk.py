import os
import subprocess
import forge

PROJECT_ROOT = os.environ.get("PROJECT_ROOT")

# =================================================================================================
# Tests


def test_clean():
  "Clean the .bin directory"
  args = ['rip', '--clean']
  subprocess.check_call(args)
  assert not os.path.exists(os.path.join(PROJECT_ROOT, '.bin'))
  assert not os.path.exists(os.path.join(PROJECT_ROOT, '.vscode', 'launch.json'))
  assert not os.path.exists(os.path.join(PROJECT_ROOT, '.vscode', 'tasks.json'))


def test_build_cm4_debug():
  """
  Build cm4 in DEBUG mode.
  """
  with forge.pushd(PROJECT_ROOT):
    args = ['cmake', '--workflow', '--preset', 'cm4-debug']
    subprocess.run(args, capture_output=True, text=True)
    assert os.path.exists(
        os.path.join(
            PROJECT_ROOT,
            '.bin',
            'cm4-debug',
            'mimxrt1170evk',
            'test',
            'hello_world',
            'hello-world-cm4.bin.c'))


def test_build_cm4_release():
  """
  Build cm4 in RELEASE mode.
  """
  with forge.pushd(PROJECT_ROOT):
    args = ['cmake', '--workflow', '--preset', 'cm4-release']
    subprocess.run(args, capture_output=True, text=True)
    assert os.path.exists(
        os.path.join(
            PROJECT_ROOT,
            '.bin',
            'cm4-release',
            'mimxrt1170evk',
            'test',
            'hello_world',
            'hello-world-cm4.bin.c'))


def test_build_cm7_debug():
  """
  Build cm7 in DEBUG mode.
  """
  with forge.pushd(PROJECT_ROOT):
    args = ['cmake', '--workflow', '--preset', 'cm7-debug']
    subprocess.run(args, capture_output=True, text=True)
    assert os.path.exists(
        os.path.join(
            PROJECT_ROOT,
            '.bin',
            'cm7-debug',
            'mimxrt1170evk',
            'test',
            'hello_world',
            'hello-world-cm7.elf'))


def test_build_cm7_release():
  """
  Build cm7 in RELEASE mode.
  """
  with forge.pushd(PROJECT_ROOT):
    args = ['cmake', '--workflow', '--preset', 'cm7-release']
    subprocess.run(args, capture_output=True, text=True)
    assert os.path.exists(
        os.path.join(
            PROJECT_ROOT,
            '.bin',
            'cm7-release',
            'mimxrt1170evk',
            'test',
            'hello_world',
            'hello-world-cm7.elf'))
