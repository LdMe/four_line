#!/bin/bash

path=$(pwd)
path=$(echo "$path" | sed -e 's/[[:space:]]/\\ /g')



string="username/pool.c"
path_ex="$path/bin/four_line"
line="Exec=gnome-terminal -e \"${path_ex@Q}\""
icon="Icon=$path/icon/icon.png"

sed -i "8s#.*#$icon#" four_line.desktop
sed -i "6s#.*#$line#" four_line.desktop

cp four_line.desktop ~/.local/share/applications/
