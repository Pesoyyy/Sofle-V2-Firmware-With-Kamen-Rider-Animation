# Sofle-V2-Firmware-With-Kamen-Rider-Animation

# Background

Im doing this because I'm curious for editing my sofle V2 Keyboard lol.
Have no experience on editing firmware but Im glad I can do this shitshow and its work.


https://github.com/user-attachments/assets/3091627a-22a2-4397-a151-6567e62f20f0



I just made a custom firmware for Sofle V2 that works with VIA editor ([https://usevia.app](https://usevia.app))

# Simple Workflow

1. Find your gif, and convert it to byte array with image. Im using canvas 128x32, drawmode using vertical and im using adruino code for my animation.
2. I recommend you to use a simple gif, approx 4 layer of animation, cause I try more than that, its so complicated for me, but if you dare to take some challenge or leap of faith, you can try that.
3. simple flow for me is first, convert the animation, and then make the default keymap (its up to you to change the file as you will, just use it and customize it), change the config.h, and then the last rules.mk
4. compile all the file using QMK MSYS, and flash it using QMK Toolbox.
5. Voila your new firmware is installed.
