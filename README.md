# Borderlands 3 - Echo Communicator

This repo contains all needed files to create your own 3D printed Echo Com from Borderlands 3.




## Components for the electronics version:

 - [4" TFT Display](https://www.waveshare.com/4inch-tft-touch-shield.htm)
	 - I really recommend buying exactly this one as the 3D model is designed for exactly this product.
	 - It was the only display I found that had the correct size for the EchoCom.
	 - You have to remove the pin headers from the backside for it to fit into the model. The required wired then can be re-soldered with a thinner footprint.
 - Custom PCB
	 - You can find the KiCad project and a finished plot of the PCB in the `pcb` folder.
	 - Use a service like [JLCPCB](jlcpcb.com) to have it manufactured or you can of course do it yourself :)
 - Electronic Components:
	 - 1x Atmega328P-PU
	 - 8x Push Button
	 - 2x 22pF ceramic capacitors
	 - 1x 16MHz Crystal
	 - 3x 100nF foil capacitor
	 - 1x 10K Ohm resistor
	 - 2x Screw Terminals (options, you can also solder the power wires)
	 - Pin Header (optional, you can also solder the wires, but I recommend the headers!)
		 - 2x 3-pin
		 - 2x 5-pin
		 - 1x 6-pin
 - Some sort of power source (I have not yet figured this out)
 - Wires (with correct heads depending on your pin headers)
