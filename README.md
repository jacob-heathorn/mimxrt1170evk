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
  * CMake Language Support
  * CMake Tools
  * Cortext-Debug
  * Flake8
  * Nix
  * direnv (cab404)
  * Pylance
  * Python
8) Run the setup script `setup`
9) Connect mimxrt1170evk to power, and USB to your computer.


# Build
`cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug`

# Run
`rip -f0 cm7-debug:hello-world-cm7`

# Debug
`rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4`

# ctest
`cd .bin/cm7-debug`
`ctest -V`

# Hello World Test
```
cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4 && \
rip -f0 cm7-debug:hello-world-cm7 -s
```

# Echo test
```
cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:echo && \
rip -f0 cm7-debug:echo
```

# Threadx test
```
cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-threadx && \
rip -f0 cm7-debug:hello-threadx -s
```

# Netx test
```
cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug && \
rip -d0 cm7-debug:hello-netx && \
rip -f0 cm7-debug:hello-netx -s

# Set up local ethernet interface (192.2.2.100) and mask (255.255.255.0)
ping 192.2.2.149
socat -v UDP4-RECVFROM:5001,fork EXEC:'/bin/cat' # echo unicast
socat -v UDP4-RECVFROM:5002,reuseaddr,ip-add-membership=224.1.0.2:192.2.2.100,fork EXEC:'/bin/cat' # echo multicast
```

# Full Repository test suite
`tox`

# Serial Terminal
device: `/dev/ttyACM0`
baud: `115200`


# Problems Debugging
sudo lsof -i :2400
sudo lsof -i :2401

pkill LinkServer

Unplug/Replug usb

Reboot device

