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

- Receiver Amplifier: The receiving team must work with the transmitting team to build a RLC circuit that would amplify the circuit 20 times. The transmitting team generates a sequence of 1s and 0s as well as a frequency of 500Hz to the transmitting coil, while the receiving coil receives the transmitted signal and amplifies the circuit 20 times which will be displayed in the oscilloscope. This will focus more on the receiving side of the whole circuit, which is amplifying the circuit 20 times.

- Amplifier Setup Procedures

1.	Use the two alligator clips to hook up the two power supplies. Each power supply is wired up to the power rails on the breadboard.
2.	Place the LM741 amplifier in the middle of the breadboard.
3.	Take a wire and hook that wire onto the power rail that is giving off the power supply to the column where it has pin number 7 on the amplifier.
4.	Hook the bottom power rail ground onto the pin number 3 of the amplifier and the negative power supply onto pin number 4.
5.	Place the 100-ohm resistor where one end is in the same column as pin number 2 on the Amplifier and the other end of the resistor in an empty column where it will not affect the amplifier. Connect the 10-ohm resistor making it a series circuit. 
6.	Along the same column where the other end of the 10-ohm resistor is, take one wire for the waveform generator and place that wire in the same column as the 10-ohm resistor. Take another wire for the first channel of the oscilloscope, and place that wire in the same column as well. 
7.	Place the second channel of the oscilloscope in the same column as pin number 6 on the amplifier. Take a short wire and make a connection from the output to one of the empty columns away from the amplifier. 
8.	Take the 2.2k- ohm resistor and connect one end of the resistor to the short wire in the empty column and the other end to the other side of the breadboard. Take another short wire and place one end to the same column as the 2.2k resistor, and the other end to pin number 2 of the amplifier, making the circuit being amplified 20 times.
9.	With the receiving coil place one end of the coil to the same column as the first channel of the oscilloscope, and the other end to the ground on the power rail.
