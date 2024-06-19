#include <Arduino.h>
#include <WiFi.h>

#include "secretfunction.h"

char ssid[] = "yourNetwork"; //  your network SSID (name)
char pass[] = "12345678"; // your network password
//char pass[] = "Super,Du hast es herausgefunden!";

int status = WL_IDLE_STATUS; // the Wifi radio's status

void setup()
{
  Serial.begin(9600);

  // PART 1: READ NETWORK SETTING 
  // attempt to connect using WPA2 encryption:
  Serial.println("Attempting to connect to WPA network...");
  status = WiFi.begin(ssid, pass);

  // if you're not connected, stop here:
  if (status != WL_CONNECTED)
  {
    Serial.println("Couldn't get a wifi connection");
      while (true);
  }

  // if you are connected, print out info about the connection:
  else
  {
    Serial.println("Connected to network");
  }

  // PART 2: BOUNDARY SCAN 


  // PART 3: SECRET FUNCTION
  int a = 5;
  int b = 10;
  int c = 15;
  Serial.println(secretfunction(a, b, c));
}

void loop()
{
}