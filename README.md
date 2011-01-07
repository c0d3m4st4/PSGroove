PSGroove - ATMega16A
====================

This is modification of PSGroove for the ATMea16A chip which can be found in several not upgradeable dongles.

This version includes all necessary files to compile Hermes and PL3 versions. The code might be a bit messy and with dirty tricks and fixes here and there, sorry for that :)

**This software is not intended to enable piracy, and such features
have been disabled.  This software is intended to allow the execution
of unsigned third-party apps and games on the PS3.**

Cloning
-------
    git clone git://github.com/c0d3m4st4/PSGroove.git
    cd PSgroove
    git submodule init
    git submodule update

If you get errors while cloning PL3 submodule, try this:

    cd PL3
    git clone https://github.com/kakaroto/PL3.git


Configuring
-----------

This version of PSGroove support Hermes and PL3. For PL3 you must edit the Makefile to reflect your firmware version (3_41, 3_01, 3_10 and 3_15 are currently supported).

By default when compiling PL3, PSGroove is configured to use the dev PL3 payload which matches the peek/poke payload that PSGroove used to have. You can select another PL3 payload by changing the PAYLOAD define in descriptor.h

Building
--------
On Linux, use the AVR GCC toolchain (Debian/Ubuntu package: gcc-avr).
On Windows, WinAVR should do the trick.

    make clean
    make VERSION=XXXXX

Where XXXXX can be any of these:

 	HERMES_V3 			- Hermes v3
 	HERMES_V4 			- Hermes v4 
 	HERMES_V4_SPOOF			- Hermes v4 with 3.55 spoof
 	PL3				- Kararoto's PL3


Programming
-----------

Use the LPT programmer to flash the dongle thru ISP, or the recently created bootloader for it.

Using
-----
Ask Google to find out how to use this.


