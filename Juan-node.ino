#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>

/*
   -- app robot --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266WIFI_LIB_POINT
#include <ESP8266WiFi.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "Robot"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377


const char* ssid     = "Robot";
const char* password = "12345678";

// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 65 bytes
  { 255,7,0,0,0,58,0,16,16,0,5,32,2,21,30,30,204,26,31,5,
  32,51,20,30,30,217,26,31,4,0,89,3,10,52,204,26,2,0,22,52,
  22,11,175,26,31,31,68,82,73,86,69,0,79,70,70,0,1,0,67,53,
  8,8,203,31,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  int8_t principale_x; // from -100 to 100  
  int8_t principale_y; // from -100 to 100  
  int8_t rotire_x; // from -100 to 100  
  int8_t rotire_y; // from -100 to 100  
  int8_t lift; // =0..100 slider position 
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 
  uint8_t claxon; // =1 if button pressed, else =0 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

/*vectorizarea datelor

v1=pricnipale x
v2=principale y
v3=rotire x




*/

void setup() 
{
  Serial.begin(115200);
  Serial.swap();
  RemoteXY_Init (); 
  WiFi.softAP(ssid , password);
  
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  // Print ESP8266 Local IP Address
  Serial.println(WiFi.localIP());
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  if(RemoteXY.claxon==1){

  }

  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


} 