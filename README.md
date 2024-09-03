# Build
`cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug`

# Run
`rip -f0 cm7-debug:hello-world-cm7`

# Debug
`rip -d0 cm7-debug:hello-world-cm7 -d1 cm4-debug:hello-world-cm4`


# Problems Debugging
sudo lsof -i :2400
sudo lsof -i :2401

pkill LinkServer

Unplug/Replug usb

Reboot device
