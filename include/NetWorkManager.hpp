#pragma once
#include <Arduino.h>
class NetWorkManager {
    public:
    void begin();
    bool connectWifi(const String& wifiID, const String& wifiPass);
    bool isConnect();
    private: 
    bool  connected = false;
};