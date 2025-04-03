The 3435 uses [QMK](https://qmk.fm/).
You are welcome to use whatever firmware is compatible with an ATMega32u4 microcontroller.

The microcontroller has two pieces of firmware on it.
1. The Bootloader
2. QMK

The bootloader runs when the microcontroller is powered on and handles the startup procedure.
Once the startup is complete, the bootloader starts the QMK part of the code.
The bootloader also provides a way of reprogramming the QMK part of the firmware via USB.
This is how the firmware and keymap are updated.

The QMK part of the firmware is what makes the keyboard a keyboard.
It checks for switch presses and reports them to the computer through USB.

# Bootloader
By default, the 3435 is configured to use the default Microchip bootloader.
This comes pre-programmed on the device in most cases.

If you purchased your ATMega32u4 from an Arduino outlet, it may have the *Caterina* bootloader on it.
In this case, you can modify `info.json` in the `qmk` folder or you can flash the default Microchip bootloader over ISP.

The [QMK documentation](https://docs.qmk.fm/isp_flashing_guide) describes the process of flashing a new bootloader very well.

# QMK
The [QMK documentation](https://docs.qmk.fm/newbs) is extremely thorough.
I highly recommend going through the tutorial from start to finish once before continuing.

To get the 3435 going

1. Use the QMK CLI tool to create a new keyboard called '3435' using the [new-keyboard](https://docs.qmk.fm/cli_commands#qmk-new-keyboard) command.
   The `--help` switch is useful here!
2. Copy over the files from the `qmk` folder into the newly created `keyboard/3435` directory in the QMK root.
3. Build and flash the firmware by following the QMK documentation.

To program the 3435 via USB, flip the switch next to the USB-C connector, then power on the board over USB.
Each side must be programmed separately.
Remember to flip the switch back to boot 'normally' once you are done with the programming.

From here on you can edit `keymap.c`, `rules.mk` and `config.h` to edit the keymap.
The QMK documentation is your friend!

# Via
[Via](https://www.caniusevia.com/) is a graphical interface for configuring QMK based keyboards.
Unfortunately, I choose not to use it and so I have not made a Via configuration for the 3435.
If the 3435 ever becomes popular enough to be added to the QMK master branch, I may consider making it Via compatible.
