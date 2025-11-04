#include "DataLogger.hpp"

void DataLogger::begin()
{
    Serial.println("[Logger] | Ready");
}

void DataLogger::log(const SensorData& data)
{
    Serial.printf("[Logger] Temp: %0.02f, Hum: %0.02f", data.temperature, data.humidity);
}