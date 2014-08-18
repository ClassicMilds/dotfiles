#!/bin/bash
#
# ~/.xinitrc
#
# Executed by startx (run your window manager from here)

if [ -d /etc/X11/xinit/xinitrc.d ]; then
  for f in /etc/X11/xinit/xinitrc.d/*; do
    [ -x "$f" ] && . "$f"
  done
  unset f
fi


xrdb -merge ~/.Xresources &
~/.term.sh &
xset s off &
compton --config ~/.compton.conf -b &
~/wallpaper.sh &
exec $1
