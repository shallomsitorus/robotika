const int pinpwm = 5;
int i;

void setup() 
{
 pinMode(pinpwm,OUTPUT);

}

void loop() 
{
 // putar Motor dari kecepatan rendah ke kecepatan tinggi
for (i=0; i <= 255; i += 1)  
  {
    digitalWrite(pinpwm, LOW);
    analogWrite(pinpwm, i);
    delay(15);
  }
  // putar Motor dari kecepatan rendah ke kecepatan tinggi dengan arah sebaliknya
for (i=255; i >= 0; i -= 1)
  {
    digitalWrite(pinpwm, HIGH);
    analogWrite(pinpwm, i);
    delay(15);
  }


}
