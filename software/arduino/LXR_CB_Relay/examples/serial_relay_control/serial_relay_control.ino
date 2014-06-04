/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this sketch demonstrates how to turn the LXRobotics Chilboard Relay on/off using a simple serial command
 * @file blink.ino
 */

#include "LXR_CB_Relay.h"

void setup() {
  LXR_CB_Relay::begin();
  Serial.begin(115200);
}

static char const ON = '1';
static char const OFF = '0';

void loop() {
  while(Serial.available() > 0) {
    char const received_byte = Serial.read();
      if(received_byte == ON) {
        LXR_CB_Relay::turn_on();
        Serial.println("ACK");
      } else if(received_byte == OFF) {
        LXR_CB_Relay::turn_off();
        Serial.println("ACK");
      } else {
        Serial.println("NOT ACK");
      }
  }
}
