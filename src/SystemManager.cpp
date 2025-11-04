#include "SystemController.hpp"

void SystemController::begin()
{
    Serial.begin(115200);
    Serial.println("==Smart Monitor start");

    sensor = std::make_shared<SensorManager>();
    network = std::make_shared<NetWorkManager>();
    display = std::make_shared<DisplayManager>();
    logger = std::make_shared<DataLogger>();
    sensor->begin();
    network->begin();
    network->connectWifi(String("Ca Map"),String("camap7979"));
    display->begin();
    logger->begin();

}

void SystemController::loop()
{
        if (millis() - lastUpdate >= 1000) {
        lastUpdate = millis();

        auto data = sensor->readData();
        display->display(data);
        logger->log(data);

        if (network->isConnect()) {
            Serial.println("[Network] Sent data to server (mock)");
        }
        Serial.println();
    }
}