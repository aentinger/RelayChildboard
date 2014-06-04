/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this module implements the library for controlling the LXRobotics Relay Childboard
 * @file LXR_CB_Relay.h
 * @license Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0) ( http://creativecommons.org/licenses/by-nc-sa/3.0/ )
 */
 
#ifndef LXR_CB_RELAY_H_
#define LXR_CB_RELAY_H_

#include "Arduino.h"

class LXR_CB_Relay {
public:
  /**
   * @brief this function initializes the childboard
   */
  static void begin();
  
  /**
   * @brief turns the relay on
   */
  static void turn_on();
  
  /**
   * @brief turns the relay off
   */
  static void turn_off();
};

#endif
