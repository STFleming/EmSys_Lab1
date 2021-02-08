#include <ArduinoWebsockets.h>
#include <WiFi.h>

const char* ssid = "NETGEAR35"; 
const char* password = "magicalfinch482"; 

using namespace websockets;

WebsocketsClient client;
void setup() {
      
    Serial.begin(115200);
    // Connect to wifi
    WiFi.begin(ssid, password);

    // Wait some time to connect to wifi
    for(int i = 0; i < 10 && WiFi.status() != WL_CONNECTED; i++) {
        Serial.print(".");
        delay(1000);
    }

    Serial.print("\nConnected to Wifi sucessfully\n");

    // Connect to server
    client.connect("ws://192.168.1.2:1234");

    // Send a message
    client.send("Hello World!");
    
}

void loop() {
        // spin
}
