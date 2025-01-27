#include <Arduino.h>

#define FLAME_SENSOR_ANALOG_PIN 32
#define FLAME_SENSOR_DIGITAL_PIN 34

void setup()
{
  Serial.begin(115200);
  pinMode(FLAME_SENSOR_DIGITAL_PIN, INPUT);
  pinMode(FLAME_SENSOR_ANALOG_PIN, INPUT);
}

void loop()
{
  Serial.print("Digital: ");
  Serial.print(digitalRead(FLAME_SENSOR_DIGITAL_PIN));
  Serial.print("\t Analog: ");
  Serial.print(analogReadMilliVolts(FLAME_SENSOR_ANALOG_PIN));
  Serial.println();
}
