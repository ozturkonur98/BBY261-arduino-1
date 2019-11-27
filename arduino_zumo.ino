#include <Wire.h>
#include <ZumoShield.h>

#define LED_PIN 12

ZumoMotors motors;



void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(LED_PIN, HIGH);

   for (int speed = 0; speed <= 1000; speed++)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);

    delay(2);
  } 

  for (int speed = 1000; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);
    delay(2);
  }

  digitalWrite(LED_PIN, HIGH);
  
  for (int speed = 0; speed <= 400; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }

  for (int speed = 400; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  digitalWrite(LED_PIN, LOW);
  for (int speed = 0; speed >= -400; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }

  for (int speed = -400; speed <= 0; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }


  digitalWrite(LED_PIN, LOW);

  for (int speed = 0; speed >= -400; speed--)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);
    delay(2);
  }

  for (int speed = -400; speed <= 0; speed++)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);
    delay(2);
  }












}
