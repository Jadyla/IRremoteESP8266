#include "thmedia.h"
#include <Arduino.h>

void init_channel(int IR_PWMX) {
  if (IR_PWMX >= 0) {
    pinMode(IR_PWMX, OUTPUT);
    digitalWrite(IR_PWMX, HIGH);
  }
}

void thmedia_setup() {
  init_channel(THMEDIA_RF);
  init_channel(THMEDIA_IR_PWM1);
  init_channel(THMEDIA_IR_PWM2);
  init_channel(THMEDIA_IR_PWM3);
  init_channel(THMEDIA_IR_PWM4);
  init_channel(THMEDIA_IR_PWM5);
  init_channel(THMEDIA_IR_PWM6);
  init_channel(THMEDIA_IR_PWM7);
  init_channel(THMEDIA_IR_PWM8);
}
