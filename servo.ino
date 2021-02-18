#include <Servo.h>

Servo motorservo;

void setup() 
{
  motorservo.attach(6); //Pin PWM 6
}

void loop()
{
  motorservo.write(45); //ke kiri 45 deg
  delay(1000);
  motorservo.write(0); //ke kiri 0 deg
  delay(1000);
  motorservo.write(90); //ke posisi center 90 deg
  delay(1000);
  motorservo.write(135); //ke kanan 135 deg
  delay(1000);
  motorservo.write(180); //ke kanan 180 deg
  delay(1000);
  motorservo.write(90); //ke posisi center 90 deg
  delay(1000);
}
