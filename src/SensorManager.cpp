#include "SensorManager.hpp"

void SensorManager::begin() {
    randomSeed(analogRead(0));
}

SensorData SensorManager::readData()
{
    SensorData data;
    data.temperature = randomFloat(20.0, 60.0);
    data.humidity = randomFloat(30.0, 90.0);
    return data;
}

float SensorManager::randomFloat(float min, float max)
{
    return min + (max-min) + (float)random(0,1000)/1000.0;
}