#!/bin/bash
app_name=$(grep "app_name=" install.sh | sed -e 's/app_name=//' | sed  -e 's/\"//g' )

rm -f ~/.local/share/applications/$app_name.desktop
sed -i '/app_name/d' ~/.bash_aliases