# MacroPad

A custom built 3x4 key macropad with encoders.

More Info on this ![Reddit Thread](https://www.reddit.com/r/MechanicalKeyboards/comments/dow3nm/macropad_v1_my_first_build_custom_pcb_case_and/)

## Circuit Board

![Populated Circit Board - Bottom Side](https://i.imgur.com/Po4ug0O.jpg)

The circuit board is designed in Eagle.
For easy manufacturing, the gerber-files and SMT production files are included.

The BOM and SMT placement file (CPL) are formatted for use with JLCPCB.

Apart from the keys, encoders, the USB-connector and the LED matrix driver all parts can be populated by JLCPCB.
The schematic contains the LCSC partnumbers in the attributes of each part.

### Keys

All keys compatible with Cherry MX 2 or 3 pin should fit the board.

### Encoders

The encoders a standard rotary encoders, just search ebay/aliexpress/amazon or your local electronics dealer.

## QMK Configuration

The folder qmk_config contains the configuration and code to build QMK for the NumPad.
Just put this folder in qmk/keyboards and run

```
make macropad/v1:default
```	
	
## Case

![MacroPad with 3D printed case](https://i.imgur.com/0kBFomG.jpg)

The case can be 3D printed in two parts.
There are holes for heat-set M3 threaded inserts to hold the PCB and M2 threaded inserts to hold the plate.
