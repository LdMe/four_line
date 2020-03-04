#!/bin/bash
filename="prueba.desktop"
if [ $# -ge 1 ];
then
	filename="$1.desktop"
fi
path=$(pwd)
path=$(echo "$path" | sed -e 's/[[:space:]]/\\ /g')


string="username/pool.c"
path_ex="$path/bin/four_line"
line="Exec=gnome-terminal -e \"${path_ex@Q}\""
icon="Icon=$path/icon/icon.png"

echo $filename
touch $filename
echo "[Desktop Entry]" > $filename
echo "Encoding=UTF-8" >> $filename
echo "Type=Application" >> $filename
echo "Version=1.0" >> $filename
echo "Name=Four line for terminal" >> $filename
echo $line >> $filename
echo "Terminal=true" >> $filename
echo $icon >> $filename
echo "alias four_line=\"${path_ex@Q}\"" >> ~/.bash_aliases


