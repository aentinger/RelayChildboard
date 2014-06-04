/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this module implements the library for controlling the LXRobotics Relay Childboard
 * @file LXR_CB_Relay.cpp
 * @license Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0) ( http://creativecommons.org/licenses/by-nc-sa/3.0/ )
 */
 
#include "LXR_CB_Relay.h"

// D9
static int const RELAY_PIN = 9;

/**
 * @brief this function initializes the childboard
 */
void LXR_CB_Relay::begin() {
  pinMode(RELAY_PIN, OUTPUT);
  LXR_CB_Relay::turn_off();
}

/**
 * @brief turns the relay on
 */
void LXR_CB_Relay::turn_on() {
  digitalWrite(RELAY_PIN, LOW);
}
  
/**
 * @brief turns the relay off
 */
void LXR_CB_Relay::turn_off() {
  digitalWrite(RELAY_PIN, HIGH);    
}
