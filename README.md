# Blink ESP-IDF

This repo is made to easily do a simple blink test on a DOIT ESP32.

## How to execute:
1. `. $HOME/esp/esp-idf/export.sh` *change `$HOME/esp/esp-idf` with directory of esp-idf if different

2. `idf.py clean` *optional if you want a clean build

3. `idf.py -p /dev/ttyUSB3 build flash monitor` *change port in `idf.py -p [port] build flash monitor` to current port active if different