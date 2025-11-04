#pragma once
#include <Arduino.h>
struct SensorData {
    float temperature;
    float humidity;
};

class SensorManager {
    private:
    float randomFloat(float min, float max);
    public:
    SensorData readData();
    void begin();
};