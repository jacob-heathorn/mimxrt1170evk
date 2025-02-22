# Setup Instructions

1) Clone this repository: `git clone https://github.com/jacob-heathorn/mimxrt1170evk.git`
2) Install gordion: TODO
3) Update the gordion dependencies: `gordion -u`
4) Install direnv:
  * `sudo apt install direnv`
  * Add the following to your .bashrc: `eval "$(direnv hook bash)"`
  * Open a new terminal and change directory to here.
  * `direnv allow .`
5) Install nix:
  * `sh <(curl -L https://nixos.org/nix/install) --daemon`
  * TODO: enable nix-direnv (I forgot)
6) Install LinkServer from NXP:
  * Download:
    https://www.nxp.com/design/design-center/software/development-software/mcuxpresso-software-and-tools-/linkserver-for-microcontrollers:LINKERSERVER
  * chmod +x and run the download.
7) Install vscode extensions:
  * autopep8
  * Better Jinja
  * C/C++
  * Cortext-Debug
  * Flake8
  * Nix
  * Pylance
  * Python
8) Run the setup script `setup`

# Repository tests
`tox`

# Build
`cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug`

# Run
`rip -f0 cm7-debug:hello-world-cm7`

# Debug
`rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4`

# Full test
```
cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug && \
rip -f0 cm7-debug:hello-world-cm7 && \
rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4
```

# Serial Terminal
device: `/dev/ttyACM0`
baud: `115200`


# Problems Debugging
sudo lsof -i :2400
sudo lsof -i :2401

pkill LinkServer

Unplug/Replug usb

Reboot device

