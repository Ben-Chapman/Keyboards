#!/bin/bash

# Quick helper script to build QMK firmware
PWD=$(pwd)

QMK_DIR="/home/ben/src/qmk_firmware"

cd ${QMK_DIR}

if [[ $1 == 'clean' ]]; then
    make clean &&
    make televideo2k:default
elif [[ $1 == 'help' ]]; then
    echo -e "$0        : Compile firmware, reusing prior build artifacts."
    echo -e "$0 clean  : Remove all prior build artifacts before compiling anew."
    echo -e "$0 flash  : Compile firmware and proceed to flash to a Teensy"
    exit 5
elif [[ $1 == 'flash' ]]; then
    make televideo2k:default:teensy
else
    # Now compile
    make televideo2k:default
fi


