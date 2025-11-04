#pragma once
#include <Arduino.h>
#include "SensorManager.hpp"

class DataLogger {
    public:
        void begin();
        void log (const SensorData& data);
};