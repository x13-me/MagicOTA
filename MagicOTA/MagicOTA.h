#ifndef MagicOTA_h
#define MagicOTA_h

#include "ESP8266WiFi.h"
#include "ESP8266mDNS.h"
#include "WiFiUdp.h"
#include "ArduinoOTA.h"

#include "DNSServer.h"
#include "ESP8266WebServer.h"
#include "WiFiManager.h"         //https://github.com/tzapu/WiFiManager
#include "Arduino.h"

class MagicOTA
{
	public:
		void setup();
		void loop();
};
#endif