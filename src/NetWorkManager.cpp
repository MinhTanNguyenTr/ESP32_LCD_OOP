#include "NetWorkManager.hpp"

void NetWorkManager::begin() {
    Serial.println("[Network] Init network subsystem");
}

bool NetWorkManager::connectWifi(const String& wifiID, const String& wifiPass) {
    Serial.print("[Network] Connecting to \n");
    Serial.print(wifiID);
    delay(2000);
    connected = true;
    Serial.println("[Network] Connected!");
    return connected;
}

bool NetWorkManager::isConnect(){
    return connected;
}
