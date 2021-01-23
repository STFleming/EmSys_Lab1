# EmSys Lab1

| Acronym | Meaning        |
|---------|----------------|
| LA      | Logic Analyser |
| GPIO    | General Purpose Input Output |

This lab consists of a number of exercises:
* _"What is your secret word?"_ -- where you will use pulseview to determine the secret word your ESP32 is transmitting. 
* _"Hello World!"_  -- where you will program your ESP32 to send a UART message of your own.
* _"Square Wave Generator"_ -- where you will generate square waves as fast as you can and calculate the arduino library overheads.
* _"dotDevice"_ -- where you will interact with your virtual dotDevice on the centralised emSys webserver via WebSockets.
 
This lab aims to familiarise you with:
* The Arduino IDE and it's overheads
* Capturing waveforms from the logic analyser in PulseView
* timing issues in embedded systems
* WebSockets and communications between embedded devices

### Submission guide
__TODO:__ _logbook format_

### How your LA and ESP32 are connected
__TODO:__ _Include a diagram showing the wiring between the LA and ESP32_

-----------------------------
### What is your secret word?
All the ESP32 devices in the lab have been preloaded with a program that is sending a unique word for each group over some UART pins. Your task here is to find out what your groups unique word is using your LA and PulseView.

1. Open PulseView ```pulseview``` and capture a trace. [[guide: capturing a trace with pulseview](https://github.com/STFleming/EmSys_Lab1/tree/main/pulseview_capture)]
2. Examine the signals on your waveform, try and identify which signals you think might be a UART Rx signal 
3. Using the PulseView low-level protocol decoder decode the signal that you think is trasmitting your secret word. [[guide: using the pulseview low-level protocol decoder](https://github.com/STFleming/EmSys_Lab1/tree/main/pulseview_capture)].
4. Write your secret word in your logbook.

_Tips_: 
* _The length of the wires connecting your ESP32 and your LA are quite long, this means that there may be lots of noise and you may get a few incorrect characters in your word. Look at a few of them until you see a word that makes sense_
* _You do not know the baud rate of the signal you are trying to intercept, this may require trial and error to find the correct parameter_
* _However, you have 8 data bits, and no parity bits._

### Hello World!
This exercise 

--------------------
### Square Wave Generator
1. Using ```digitalWrite(pin, HIGH|LOW)``` write code to generate a square wave with the highest frequency you possible can. 
2. Using your LA measure this maximum frequency and report it in your logbook. 
3. Do you notice anything unusual about the output? Run a resonable length capture to maybe see something strange (1M samples at 24MHz). Comment on what you think might be causing this?
4. Modify your code above to generate two square waves with as fast a frequency as possible? What is the new maximum frequency? If it has changed comment on why?
5. Using the captured trace from 4. (the item above), estimate the time a ```digitalWrite()``` function call takes, and estimate the ```loop()``` overheads.
6. Use your estimates to calculate what you expect the maximum frequency can be when generating three square waves.
7. Modify your code to generate three square waves and measure the maximum possible frequency, how close was your estimation in 6.?

The Arduino IDE abstracts the underlying hardware a little with functions such as ```digitalWrite()``` to make it easier for the developer. However, this comes at a cost in terms of performance. 
If we dive a little bit deeper, then we can improve the maximum frequency of our generator.

To interact with the GPIO  

In the [ESP32 Technical Reference Manual](https://www.espressif.com/sites/default/files/documentation/esp32_technical_reference_manual_en.pdf) you will find the description of three registers that can be used to control the GPIO pins. 

```
        REG_WRITE( <register address>, <BITS>);

```
TODO:
* get the maximum freq using register manipulation
* calculate the arduino overheads 

----------------------
### dotDevice -- Communicating with other embedded systems
