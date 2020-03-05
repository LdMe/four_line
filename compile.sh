#!/bin/bash
#create directory for binary files if does not exist
mkdir -p bin
#compile the source files
gcc ./source/*.c -o ./bin/four_line