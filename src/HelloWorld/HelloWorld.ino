// HelloWorld!
// Uses HardwareSerial to send a UART message on pin 23, which is connected to channel 0 of your LA
//
// author: stf

#define TX 23

HardwareSerial uart(1);

void setup() {
  uart.begin(9600, SERIAL_8N1, 15, TX);
}


void loop() {
   uart.write("HelloWorld");
   uart.flush();
   delayMicroseconds(50);
}
