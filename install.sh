#!/bin/bash
app_name="four_line"
version="1.4"
description="Four line for terminal"
#first uninstall previous versions
./uninstall.sh 0
echo -e "previous versions uninstalled\n"
#then compile to get the binaries
./compile.sh
echo -e "executable file compiled\n"
#create desktop icon and alias for terminal 
# application name - version - description for icon
./create_desktop.sh $app_name $version "$description" 

mv $app_name.desktop ~/.local/share/applications/$app_name.desktop
echo -e "desktop icon created at ~/.local/share/applications/$app_name.desktop\n"
echo -e "alias created in ~/.bash_aliases\n"
echo -e "restart terminal or type 'bash' to enable the alias '$app_name'\n"
echo -e "to uninstall it, type '"$app_name"_uninstall' or run uninstall.sh "