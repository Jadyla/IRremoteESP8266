#include "thmedia.h"
#include <Arduino.h>

void init_channel(int IR_PWMX, int uC_IR_CTRLX) {
  if (IR_PWMX >= 0) {
    pinMode(IR_PWMX, OUTPUT);
    digitalWrite(IR_PWMX, HIGH);
  }
  if (uC_IR_CTRLX >= 0) {
    pinMode(uC_IR_CTRLX, OUTPUT);
    digitalWrite(uC_IR_CTRLX, HIGH);
  }
}

void thmedia_setup() {
  init_channel(THMEDIA_IR_PWM2, THMEDIA_uC_IR_CTRL2);
  init_channel(THMEDIA_IR_PWM3, THMEDIA_uC_IR_CTRL3);
  init_channel(THMEDIA_IR_PWM4, THMEDIA_uC_IR_CTRL4);
  init_channel(THMEDIA_IR_PWM5, THMEDIA_uC_IR_CTRL5);
  init_channel(THMEDIA_IR_PWM6, THMEDIA_uC_IR_CTRL6);
  init_channel(THMEDIA_IR_PWM7, THMEDIA_uC_IR_CTRL7);
  init_channel(THMEDIA_IR_PWM8, THMEDIA_uC_IR_CTRL8);
}
