# Through-metal Communication Prototype

## Transmitter (Javionn Ramsey and Chevel Samuels)

- Objective: Create an RLC through-metal transmitter circuit with a voltage switch amplifier and a resonant frequency of 500 Hz.
- List of Documents:

  - Sequence of 11111 at 500 Hz code

  - Sequence of 11111 at 250 Hz code

  - Sequence of 11111 at 1000 Hz code

  - Sequence of 101010 at 250 Hz code

  - Sequence of 101010 at 500 Hz code

  - Sequence of 101010 at 1000 Hz code

  - Voltage Switch Amplifier data sheet

  - Voltage Switch Amplifier Quick Start Guide

  - Inverter chip Data Sheet

  - Random 1 and 0 bit code

- System Overview ![alt text](https://github.com/CCCS-Team/Through-metal-Communication-Prototype/blob/main/imag/sys11.png)
- Materials and equipment:

  - Computer/laptop
  - Arduino Mega 2560
  - Breadboard
  - Wires (male – male)
  - Wires (male – female)
  - SN7404N Inverter Chip
  - LEDs (optional)
  - Voltage Switch Amplifier
  - Alligator Clip Wires
  - Alligator to Banana Wires
  - Oscilloscope
  - 2 Power supplies
  - two 3.3 μF Capacitors
  - 2.2k Ω Resistor
  - Inductor Wire Coil



- Set Up Procedure: First, upload the code for either a sequence of 101010 or 11111. The frequency used will depend on the delay time in the code. In the code, pin 11 is used as the output on the Arduino microcontroller. The next step is to invert the signal. On the breadboard, connect pin 11 to channel 1 on an oscilloscope. Then connect pin 11 to an inverter chip and channel 2 on the oscilloscope to the output of the inverter. Make sure that 5V and Ground are properly connected to the inverter and circuit. Verify that the signals are inverted and perfectly synchronized. Next, connect the voltage switch amplifier to the Arduino through the breadboard connections.  On the Amplifier, INA connects to pin 11, INB connects to inverter output of pin 11, VCCI is connected to 5V, Ground is connected to Ground, and Disable is connected to Ground.  The connection of the LEDs are completely optional, they are only used as visual indicators that circuit is properly connected. The first LED is connected to pin 11 and the second is connected to inverter output. After the Arduino is properly connected, start connecting the power supplies. It is recommended that you have 2 separate power supplies. On the Amplifier, connect the VCCB to power supply 1. Then connect the Ground of the amplifier (Ground B) to power supply 2. If you are viewing the result on an oscilloscope, connect the ground of the oscilloscope directly to Ground B as well. Next, connect the input drain source to the same power supply (power supply 2)  as Ground B. After this create another circuit with a 2.2k Ω Resistor and two 3.3 μF Capacitors in parallel all to each other. Then connect the Output drain source and Output Ground A to the same input of the resistor and capacitors. The two outputs must be connected to the same input or else you will not receive the correct result. Connect oscilloscope input to the last capacitor. You should see an amplified square wave. The frequency of the signal is dependent on the delay time used in the code. The peak to peak voltage is dependent on the input voltage. The greater the input voltage, the greater the Vpp. Next, connect the wire coil in series to the capacitor. The wire coil will act as an inductor and turn the square wave into an amplified sine wave. The circuit is now complete and the signal is being transmitted by the inductor wire coil. 
![image](https://user-images.githubusercontent.com/109627536/179872736-6657a340-f1ff-4827-ad2b-c07c5ae490c2.png)


## Receiver (Jarvis Turner and Marcus Allen)

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
