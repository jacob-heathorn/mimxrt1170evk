# Description
TODO


`rip -b -a cm7:hello-world-cm7 -sd`
`rip -b -a cm7:hello-world-cm7 -f`


# New
`cmake --workflow --preset cm4-debug && cmake --workflow --preset cm7-debug`

`rip2 -f cm7-debug:hello-world-cm7`

`rip2 -d cm7-debug:hello-world-cm7`


# Problems Debugging
sudo lsof -i :2400
sudo lsof -i :2401

pkill LinkServer

Unplug/Replug usb

Reboot device
