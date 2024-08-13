# Project A.L.I.E.N. Motor Test Code

<!-- Harry Boyd - 29/07/2024 - github.com/hboyd255 -->

This repository contains code that allows me to test the GP2Y0E02B Infrared
sensor and the PCA9546 multiplexer of the Project A.L.I.E.N. robot.

The data sheet for the GP2Y0E02B IR sensor can be found
[here](https://global.sharp/products/device/lineup/data/pdf/datasheet/gp2y0e02_03_appl_e.pdf).

The data sheet for the PCA9546 Multiplexer can be found
[here](https://www.nxp.com/docs/en/data-sheet/PCA9546A.pdf).

## Notes

The original A.L.I.E.N. hardware used an PCA9846 Multiplexer. This has been
swapped for a PCA9546, provided as an adafruit breakout board, found
[here](https://www.adafruit.com/product/5664).

It was while testing the GP2Y0E02B sensor that I realised that the GP2Y0E02B
does not follow the standard Qwiic I2C pinout. Instead of using Ground, Power,
SDA, SCL, it uses SCL, SDA, Ground, Power.

This meant that I had to repin the Qwiic cables as shown below:
![Repinned Qwiic Cable](/photos/RepinnedQwiicCable.jpg)
