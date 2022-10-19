#include <ESP8266WiFi.h>


const char* SSID = "SSID";
const char* PASS = "senha";


void setup() {
  
  Serial.begin(9600);

  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(SSID,PASS);

  while (WiFi.status() != WL_CONNECTED) {
    delay(300);
    Serial.print(".");
  }
  Serial.print("Endereço IP obtido");
  Serial.println(WiFi.localIP());
}

void loop() {
}
