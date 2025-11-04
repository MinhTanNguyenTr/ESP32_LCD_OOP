#pragma

#include "SensorManager.hpp"
#include "DisplayManager.hpp"
#include "DataLogger.hpp"
#include "NetWorkManager.hpp"
#include <memory>
class SystemController {
    public:
    void begin();
    void loop();
    private:
    std::shared_ptr<SensorManager> sensor;
    std::shared_ptr<DisplayManager> display;
    std::shared_ptr<NetWorkManager> network;
    std::shared_ptr<DataLogger> logger;
    unsigned long lastUpdate = 0;
};