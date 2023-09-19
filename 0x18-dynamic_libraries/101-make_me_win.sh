#!/bin/bash
wget -p https://github.com/Valed7x/alx-low_level_programming/raw/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
