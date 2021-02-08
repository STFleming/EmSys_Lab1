TINYPICO=/dev/ttyUSB0
EMSYS_COMPILE=~/EmSys/arduino-cli compile --fqbn esp32:esp32:tinypico
EMSYS_UPLOAD=~/EmSys/arduino-cli upload --fqbn esp32:esp32:tinypico

HelloWorld: src/HelloWorld/HelloWorld.ino
		$(EMSYS_COMPILE) src/HelloWorld 
		$(EMSYS_UPLOAD) -p $(TINYPICO) src/HelloWorld 

WSHelloWorld: src/WSHelloWorld/WSHelloWorld.ino
		$(EMSYS_COMPILE) src/WSHelloWorld 
		$(EMSYS_UPLOAD) -p $(TINYPICO) src/WSHelloWorld 
