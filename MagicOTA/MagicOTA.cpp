#include "Arduino.h"
#include "MagicOTA.h"

void MagicOTA::setup()
{
	WiFiManager wifiManager;
	wifiManager.autoConnect("AutoConnectAP");
	
	while (WiFi.waitForConnectResult() != WL_CONNECTED) {
		delay(5000);
		ESP.restart();
	}
  
	ArduinoOTA.onStart([]() {
	String type;
	if (ArduinoOTA.getCommand() == U_FLASH)
		type = "sketch";
	else
		type = "filesystem";
	});
	ArduinoOTA.begin();
}
void MagicOTA::loop()
{
	ArduinoOTA.handle();
}