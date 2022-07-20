# Through-metal Communication Prototype

## Transmitter

## Receiver

- Objective: This project was using the basics of Arduino circuits and coding. We would have to Generate a sinewave and a square wave using 4 frequencies: 250Hz, 500Hz, 125Hz, and 1kHz, and a amplitude of 1vpp. We would have to record our readings and display our results in python and compare the results.
- System Overview:![alt text](https://github.com/CCCS-Team/Through-metal-Communication-Prototype/blob/main/imag/sys4.png)
- Materials and Equipment

  - Power Supply (a maximum of 5V)
  - Waveform Generator (1vpp)
  - Oscilloscope
  - Alligator clippers (for the power supply)
  - 2 Alligator clippers (wave form generator and oscilloscope)
  - Arduino Mega2560
  - Wires (minimum of 8)
  - USB A to USB B cables
  - Breadboard
  - Personnel computer 
  - Arduino software
  - Coolterm
  - Microsoft Excel
  - Python

- Setup Procedures

1.	Hook up the alligator clips on the power supply. Take two wires and attach one end with the alligator clips and the other end to the breadboard (red with positive and black with negative). The power supply must supply a maximum of 5 voltage. Anything over that would damage the Arduino board.
2.	Take another set of alligator clippers and hook it onto the waveform generator. Take two wires and have the wire attack to the red clippers go to one of the columns on the breadboard (Ex: Column 11) and take the wire that is attach to the black clippers and apply it to the ground, or the same row as the ground for power supply. Set the frequency to 250 Hz, and amplitude to 1vpp.
3.	Use the last alligator clip on the oscilloscope. Take another two wires and have the wire for the red clipper go in the same column as the wave generator. The wire with the black clipper goes to the ground.
4.	Take the Arduino board and take 3 wires. One wire must connect from the analog voltage reference to the same row where the power supply is and the ground to the ground row. Then take another wire and put it where it said analog pin 1 or A1 and attack the other end of the wire to the same column as the wave generator and the oscilloscope. A1 should be the analog input that would read the wave generator in Arduino.
5.	For the Arduino board to function, connect the USB type B plug onto Arduino and hook the other end, which is the USB type A onto a personnel computer. The personnel computer should have the Arduino software so you could write the code for Arduino, Coolterm for capturing and recording your data, and python to show your results you recorded.
6.	Setup the input read function by typing in the Arduino code. The code can be found in the Tinker cad simulation. For the Arduino Mega 2560, use baud rate of 115200.
7.	Test the circuit out. Try both Sinewave and Square wave. Record your data points on Coolterm by capture recording. Once that is done, repeat step 2 and 7, but only this time use different frequencies (500Hz, 125Hz, and 1kHz).
