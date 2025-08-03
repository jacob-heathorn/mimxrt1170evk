"""Nox configuration for running tests and linting."""
import nox
import os

# Configure nox to use uv
nox.options.default_venv_backend = "uv"

# Set environment variables that need to be passed through
ENV_VARS = [
    "PROJECT_ROOT",
    "MIMXRT1170EVK_ROOT",
    "FORGE_ROOT",
    "ETL_ROOT",
    "THREADX_ROOT",
    "NETXDUO_ROOT",
    "ARM_GCC_TOOLCHAIN_PATH",
    "CMAKE_PREFIX_PATH",
    "GTEST_INCLUDE_DIR",
    "PYTHONPYCACHEPREFIX",
    "LINK_SERVER",
    "SERIAL_DEVICE",
]


def common_install(session):
  """Common installation steps for all sessions."""
  # Pass through environment variables
  for var in ENV_VARS:
    if var in os.environ:
      session.env[var] = os.environ[var]

  # Change to package directory
  session.chdir("scripts/package")

  # Install forge from FORGE_ROOT
  forge_root = os.environ.get("FORGE_ROOT")
  if not forge_root:
    session.error("FORGE_ROOT environment variable must be set")
  forge_package_path = os.path.join(forge_root, "scripts", "package")
  session.install("-e", forge_package_path)

  # Install the package in editable mode
  session.install("-e", ".")


@nox.session
def dev(session):
  """Create a development environment with all dependencies."""
  common_install(session)

  # Install all development dependencies
  session.install("pytest", "pytest-cov", "flake8", "mypy", "autopep8")

  session.log(f"Development environment created at: {session.bin}")


@nox.session
def tests(session):
  """Run the pytest test suite."""
  common_install(session)

  # Install test dependencies
  session.install("pytest", "pytest-cov")

  # Set coverage file location
  session.env["COVERAGE_FILE"] = "../../.pycache/.coverage"

  # Run pytest with cache in .pycache
  session.run(
      "pytest",
      "../../test/pytest/",
      "--cov=mimxrt1170evk",
      "-o", f"cache_dir={os.environ.get('PROJECT_ROOT', '../..')}/.pycache",
      *session.posargs
  )


@nox.session
def lint(session):
  """Run flake8 and mypy linting."""
  common_install(session)

  # Install lint dependencies
  session.install("flake8", "mypy")

  # Run flake8 with configuration
  session.run(
      "flake8",
      "--ignore=E126",
      "--max-line-length=100",
      "--indent-size=2",
      "."
  )

  # Run mypy with configuration
  session.run(
      "mypy",
      "--ignore-missing-imports",
      "--check-untyped-defs",
      "--cache-dir=../../.pycache",
      "--package=mimxrt1170evk"
  )
