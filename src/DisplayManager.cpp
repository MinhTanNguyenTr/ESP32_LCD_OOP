#include "DisplayManager.hpp"

void DisplayManager::begin()
{
    Serial.println("[Display] | Ready");
}

void DisplayManager::display(const SensorData& data)
{
    Serial.printf("[Display] Temp: %0.02f, Hum: %0.02f", data.temperature, data.humidity);
}