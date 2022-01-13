# QMK Configurations for an IBM Model M Teensy-based Keyboard Controller

![IBM_ModelM_2k](https://www.crackedthecode.co/how-to-supercharge-your-ibm-model-m-with-qmk/ibm-model-m-keyboard_cover.jpg)

The IBM Model M is unarguably one of the best keyboards ever manufactured. IBM's buckling spring mechanism provides an audible and tactile typing experience that is seen as the benchmark for many keyboard enthusiasts. As a testament to their design, many original Model M's are still in perfectly working order, and many are still in use as a day-to-day keyboard. You're able to connect a vintage Model M to a modern computer through a [simple PS/2 -> USB converter](https://www.monoprice.com/product?p_id=10934), and you're off and typing.

What if you wanted to supercharge your Model M; provide capabilities that never originally existed. When is the last time you used the Scroll Lock key, how about Pause? Want to remap Caps Lock to something more useful, change the layout from QWERTY to COLMAK or DVORAK? Connect your Model M using a native USB connection? It turns out there's a straightforward and non-destructive way to do this with a few hardware components and using [Quantum Mechanical Keyboard](https://docs.qmk.fm/#/).

These are the QMK configuration files for [my Teensy powered QMK build for an IBM Model M Keyboard](https://www.crackedthecode.co/how-to-supercharge-your-ibm-model-m-with-qmk/).

* Keyboard Maintainer: [Ben Chapman](https://github.com/Ben-Chapman)
* Hardware Supported: As documented, Teensy 2.0++, most other microcontrollers are supported.

## How to build the firmware for the IBM Model M 2k
- First ensure your QMK environment is [setup and configured properly](https://docs.qmk.fm/#/getting_started_build_tools)
- Clone this repo to your workstation
- Symlink the IBM_ModelM_2k directory into `qmk_firmware/keyboards`:
```bash
cd qmk_firmware/keyboards
ln -s /dir/path/to/IBM_ModelM_2k
```
- Now, compile the firmware for this keyboard:
```bash
qmk compile -kb IBM_ModelM_2k -km default
```
- Finally, flash keyboard microcontroller with this newly compiled firmware:
```bash
qmk flash -kb IBM_ModelM_2k -km default
```

For for more detail see the official QMK [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide).
