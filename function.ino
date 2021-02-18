void setup() {
  Serial.begin(9600);
}

void loop() {
  int i =2;
  int j =3;
  int k;

  k = MultiplyFunction(i,j);
  Serial.println(k);
  delay(500);
}
int MultiplyFunction(int x, int y){
  int result;
  result = x*y;
  return result;
}
