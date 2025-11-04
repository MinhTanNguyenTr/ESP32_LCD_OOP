#pragma once
#include <string>
class NetWorkManager {
    public:
    void begin();
    void connectWifi(const std::string& wifiID, const std::string& wifiPass);
    bool isConnect();
};