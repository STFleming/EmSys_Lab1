# EmSys Lab1

| Acronym | Meaning        |
|---------|----------------|
| LA      | Logic Analyser |

This lab aims to familiarise you with:
* The Arduino IDE
* Capturing Waveforms from the logic analyser in PulseView
* Expose you to some of the timing issues in embedded systems
* Introduce you to WebSockets and communicating between embedded devices

### Submission guide
* logbook format

### How your LA and ESP32 are connected
__TODO:__ _Include a diagram showing the wiring between the LA and ESP32_

-----------------------------
### What is your secret word
All the ESP32 devices in the lab have been preloaded with a program that is sending a unique word for each group over some UART pins. Your task here is to find out what your groups unique word is using your LA and PulseView.

1. Open PulseView ```pulseview``` and capture a trace. [[guide: capturing a trace with pulseview](https://github.com/STFleming/EmSys_Lab1/tree/main/pulseview_capture)]
2. Examine the signals on your waveform, try and identify which signals you think might be a UART Rx signal 
3. Using the PulseView low-level protocol decoder decode the signal that you think is trasmitting your secret word. [[guide: using the pulseview low-level protocol decoder](https://github.com/STFleming/EmSys_Lab1/tree/main/pulseview_capture)].
4. Write your secret word in your logbook.

_Tips_: 
* _The length of the wires connecting your ESP32 and your LA are quite long, this means that there may be lots of noise and you may get a few incorrect characters in your word. Look at a few of them until you see a word that makes sense_
* _You do not know the baud rate of the signal you are trying to intercept, this may require trial and error to find the correct parameter_
* _However, you have 8 data bits, and no parity bits._

--------------------
### Square Wave Generator
1. Write code to generate a square wave with the highest frequency you possible can. 
2. Using your LA measure this maximum frequency and report it in your logbook. 
3. Now generate two, three, four, and five square waves with the highest frequency you can and report it in your logbook.
4. Discuss in your logbook what happens as you increase the number of signals, why is this the case? Plot a graph of the how the maximum frequency scales as the number of generated signals increases.

------------------------
### Pyramid generation


