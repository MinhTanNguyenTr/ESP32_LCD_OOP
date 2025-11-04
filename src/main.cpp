#include <Arduino.h>
#include "SystemController.hpp"
// put function declarations here:
SystemController controller;
void setup() {
  controller.begin();
}

void loop() {

  controller.loop();
}
