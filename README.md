

# Borderlands 3 - Echo Communicator

This repo contains all needed files to create your own 3D printed Echo Com from Borderlands 3.
I put lots of images in the repo so the size got quite big, sorry for that 🤷‍♂️.

If you need additional information or have any questions please just open an issue and I will try to answer it 😀.
And please, if you decide to give it a shot and you use my model, please please send me pictures of the result! :) Just open an issue here to show of your amazing work.

## Printing
- I printed all opaque parts with PLA filament with 0.15mm layer height.
- For the electronics version, the inner projector part was printed with "transparent" PETG filament to let the light of the LEDs pass through.
- I Recommend to print more or less everything with full support to make sure all the complex parts get printed properly.
- Removing the supports is quite easy with this model.

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
	 - 2x Digital RGB LEDs (eg WS2812B) (one or maybe more than two might also work for you)
	 - 2x Screw Terminals (optional, you can also solder the power wires)
	 - Pin Header (optional, you can also solder the wires, but I recommend the headers!)
		 - 2x 3-pin
		 - 2x 5-pin
		 - 1x 6-pin
 - Some sort of power source (I have not yet figured this out)
 - Wires (with correct heads depending on your pin headers)

## Code
The code is very, very unfinished!
I recomment [Visual Studio Code](https://code.visualstudio.com/) to edit the code. The code is a [PlatformIO](https://platformio.org/) project, so I recommend the [PlatformIO extension](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) for VSCode.

## Images
| | | |
|:-------------------------:|:-------------------------:|:-------------------------:|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(1).jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(2).jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(3).jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(4).jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(5).jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(7).jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(8).jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(10).jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/img%20(11).jpg">|

## Progress images

| | | |
|:-------------------------:|:-------------------------:|:-------------------------:|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_06%2016-51-47.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_06%2017-00-43.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_12%2021-46-20.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_13%2021-17-10.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_14%2007-25-33.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_14%2007-25-42.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_16%2021-11-04.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_16%2021-11-08.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_16%2021-11-13.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_16%2021-17-24.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_16%2022-42-25.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_16%2022-42-31.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_19%2000-03-24.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_19%2000-03-40.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_19%2000-03-43.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_19%2000-05-26.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_19%2000-05-38.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_19%2018-10-20.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_20%2014-52-55.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_20%2014-53-00.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_20%2015-01-01.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_20%2015-03-23.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_23%2018-52-44.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_25%2022-19-35.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_25%2022-23-09.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_25%2022-45-29.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_25%2022-54-47.jpg">|
|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_25%2022-55-45.jpg">|<img width="1604" alt="" src="https://raw.githubusercontent.com/LoaderB0T/Bl3-EchoCom/master/img/progress/2019_10_27%2022-29-02.jpg">|
