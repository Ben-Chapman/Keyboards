#!/bin/bash

# Quick helper script to build QMK firmware
PWD=$(pwd)

QMK_DIR='/home/benchapman/src/qmk_firmware'

cd ${QMK_DIR}

if [[ $1 == 'clean' ]]; then
    make clean
elif [[ $1 == '--help' ]]; then
    echo -e "$0        : Compile firmware, reusing prior build artifacts."
    echo -e "$0 clean  : Remove all prior build artifacts before compiling anew."
    exit 5
fi

# Now compile
make televideo2k:default