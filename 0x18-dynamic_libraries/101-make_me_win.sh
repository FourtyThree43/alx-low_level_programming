#!/bin/bash
wget -P /tmp https://github.com/FourtyThree43/alx-low_level_programming/raw/main/0x18-dynamic_libraries/101-libwinning.so
export LD_PRELOAD=/tmp/101-libwin.so