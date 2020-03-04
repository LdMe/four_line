#!/bin/bash

./compile.sh
./create_desktop.sh four_line

cp four_line.desktop ~/.local/share/applications/
