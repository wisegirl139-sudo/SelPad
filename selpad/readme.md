# selpad

![selpad](imgur.com image replace me!)

*Welcome to SelPad! SelPad is one of my first ever hack club projects. SelPad short for selection pad is used to select text, numbers and whatever else you desire. Although it may seem pointless to many for example, Josh once said "why not just double click and drag the mouse, why do you need a whole macropad for that??". To that my response and reasoning is " I have a horrible keyboard and a bluetooth mouse that has a mind on its own Josh , we dont judge". So I suppose thats my reason for creating this. Sel pad consists of 5 buttons 4 direction keys and a beautifully placed click key (probably not the actual name but I'm unaware of the actual name , button 1?) which plays the part of the left button on a mouse. Selpad also has a gorgeous black and white floral and lunar theme which odes its existence to pinterest.*
 *Now I know I do seem rather informal in this and do pardon me for that I'm new to making repositories. Also Josh is a charachter of my imagination and any similarities to another Josh are coincidences*

* Keyboard Maintainer: [Aanya Anand](https://github.com/wisegirl139-sudo)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make selpad:default

Flashing example for this keyboard:

    make selpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
