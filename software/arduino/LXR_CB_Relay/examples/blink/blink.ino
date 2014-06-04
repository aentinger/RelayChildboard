/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this sketch demonstrates how to use the LXRobotics Relay Childboard Library
 * @file blink.ino
 */

#include "LXR_CB_Relay.h"

void setup() {
  LXR_CB_Relay::begin();
}

void loop() {
  LXR_CB_Relay::turn_on();
  delay(1000);
  LXR_CB_Relay::turn_off();
  delay(1000);
}
