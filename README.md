# qmk-lge47

It's a planck keyboard using an Adafruit Feather 32u4 Bluefruit LE (https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le/overview).

# Dependencies

sudo apt-get install avr-libc gcc-avr

# Installation

git clone https://github.com/qmk/qmk_firmware.git

cd qmk-firmware

git submodule add https://github.com/lgranie/qmk-lge47.git keyboards/handwired/lge47

make git-submodule

make handwired/lge47:default

