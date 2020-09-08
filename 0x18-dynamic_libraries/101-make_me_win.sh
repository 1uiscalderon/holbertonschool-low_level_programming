#!/bin/bash
wget -P -O -q /tmp https://github.com/1uiscalderon/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=/tmp/make_me_win.so
