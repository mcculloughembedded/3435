I use [JLCPCB](https://jlcpcb.com/) for all my PCBs.

# JLCPCB Datapacks
Each half of the keyboard is its own PCB order.
There are datapacks on the [Releases](https://github.com/mcculloughembedded/3435/releases) page with the required output files to order the PCBs from JLCPCB.
These datapacks include a bill of materials and a pick and place file excluding all top side components and the hot-swap sockets on the bottom side.

> :warning: **Disclaimer**<br>
The datapacks are unverified.
I did not have JLCPCB assemble everything for me.
Some components may be out of stock or no longer available.
In these cases you will have to select an alternative part from the JLC component library.
Make sure to double check everything before ordering!

If you would like to generate the output files yourself, there is a short discussion about doing so in the [Do It Yourself](#Do It Yourself) section.

# Order from JLCPCB
## Gerbers
If using a pre-generated datapack, simply upload `gerbers.zip` for each half of the keyboard.
The following options must be selected when uploading the gerber files.
Use your discretion for any other listed options.

| Option              | Selection              |
| ------------------- | ---------------------- |
| Base Material       | FR4                       |
| Layers              | 2                         |
| PCB Thickness       | 1.6mm                     |
| PCB Color           | Any                       |
| Surface Finish      | Lead Free HASL / ENIG[^1] |

## Assembly
This section is only relevant if JLCPCB will assemble the PCBs for you.

On the order page there is an option to have JLCPCB assemble the PCBs.
One thing to note here is that the USB-C connector is not on the same side as the rest of the components.
JLCPCB charges more to assemble both sides of the PCB.

The most economic way to do this is to have JLCPCB assemble the bottom side only.
Be warned though, soldering a USB-C connector is not a trivial task!

If using the datapacks, simply upload `bom.csv` and `pick-and-place.csv` when prompted and edit according to your needs.

JLCPCB has an online interface to visually check the placement of components.
Make sure of the orientation of the diodes, crystal oscillator and microcontroller.
I always edit the pick and place file locally and re-upload.
That way I am left with a correct pick and place file on my computer once all the corrections have been made.

Also make sure that JLCPCB stocks the parts in the bill of materials.
Again, they have an online interface to help with this.

# Do It Yourself

The requirements for a different PCB manufacturer will be similar but different to what is outlined here.

## PCB Output Files

At a minimum, PCB manufacturers require gerber and drill files to make the PCBs.

Consult the requirements of your chosen PCB manufacturer to know what they require.
For example, JLCPCB's website states that they require the following layers
* Top Copper
* Bottom Copper
* Top Solder Mask
* Bottom Solder Mask
* Top Silkscreen
* Bottom Silkscreen
* Board Outline

Each half of the keyboard is it's own [KiCad](https://www.kicad.org/) project.
Install KiCad and open each project using the *.kicad_pro* files in the `/pcbs/left` and `/pcbs/right` folders.

PCB manufactures often specify how to export gerber files correctly for different PCB software.
I used KiCad 7 and followed [these instructions](https://jlcpcb.com/help/article/how-to-generate-gerber-and-drill-files-in-kicad-7).

If you would like JLCPCB to assemble the PCBs for you, you must provide them with a bill of materials and a pick and place file.
JLCPCB has very specific requirements for these files.
KiCad does not export these files in the correct format for JLCPCB.
You have to edit them manually.
Consult the [JLCPCB documentation](https://jlcpcb.com/help/article/How-to-generate-the-BOM-and-Centroid-file-from-KiCAD) for more details.

[^1]: In short, ENIG is better, HASL is cheaper. I managed fine with HASL.
