#pragma once
#include "SensorManager.hpp"
class DisplayManager {    
    public:
    void begin();
    void display(const SensorData& data);
};