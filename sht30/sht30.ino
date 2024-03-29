/*
 * The simplest operation using SHT3x
 * # SHT3x library
 * ## Arduino library for Sensirion temperature and humidity sensors SHT30, SHT31 & SHT35.
 */


#include "SHT3x.h"
SHT3x Sensor;
void setup() {
  
  Serial.begin(9600);
  Sensor.Begin();
}

void loop() {

  Sensor.UpdateData();
  Serial.print("Temperature: ");
  Serial.print(Sensor.GetTemperature());
  Serial.write("\xC2\xB0"); //The Degree symbol
  Serial.println("C");
  Serial.print("Humidity: ");
  Serial.print(Sensor.GetRelHumidity());
  Serial.println("%");

  delay(333);
}
