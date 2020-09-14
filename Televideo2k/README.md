# Televideo 2k - A Hand-Wired Keyboard
Some time ago, I was looking for a new keyboard for my home workstation. I have a strong fondness for mechanical keyboards, and while there are amazing options available on the market, none were exactly what I was looking for. Then it dawned on me, why not build something custom? I had access to the tools, I love to build and create, and love to solder. So began the journey to build a custom mechanical keyboard.

![Televideo 2K Hand-Wired Keyboard](https://www.crackedthecode.co/a-complete-guide-to-building-a-hand-wired-keyboard/full-keyboard-with-leds_feature.jpg)

These are the QMK configuration files for [my Teensy powered QMK build for a hand-wired keyboard](https://www.crackedthecode.co/a-complete-guide-to-building-a-hand-wired-keyboard/).

* Keyboard Maintainer: [Ben Chapman](https://github.com/Ben-Chapman)
* Hardware Supported: As documented, Teensy 2.0, most other microcontrollers are supported.

Make example for this keyboard (after setting up your build environment):

    make Televideo2k:default

Flashing example for this keyboard:

    make Televideo2k:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
