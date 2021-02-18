void setup() {
  Serial.begin(9600);
}

void loop() {

  int inputPin = analogRead(A0);
  float volt = inputPin * (5.0 / 1023.0);
  Serial.print("Analog = ");
  Serial.println(inputPin);
  Serial.print("Voltage = ");
  Serial.print(volt);
  Serial.println(" Volt");
  delay(1000);

  // Casting 12 bit
  int inputPin2 = analogRead(A1);
  float volt2 = inputPin2 * (5.0 / 4095.0); 
  Serial.print("Analog = ");
  Serial.println(inputPin2);
  Serial.print("Voltage = ");
  Serial.print(volt2);
  Serial.println(" Volt");
  delay(1000);
}
