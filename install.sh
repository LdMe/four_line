#!/bin/bash
app_name="four_line"
version="1.4"
description="Four line for terminal"
#first uninstall previous versions
./uninstall.sh
echo "previous versions uninstalled"
#then compile to get the binaries
./compile.sh
echo "executable file compiled"
#create desktop icon and alias for terminal 
# application name - version - description for icon
./create_desktop.sh $app_name $version "$description" 

mv $app_name.desktop ~/.local/share/applications/$app_name.desktop
echo "desktop icon created at ~/.local/share/applications/$app_name.desktop"
echo "alias created in ~/.bash_aliases"
echo "restart terminal or type 'bash' to enable the alias '$app_name'"