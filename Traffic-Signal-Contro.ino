int NR = 2, NY = 3, NG = 4;
int SR = 5, SY = 6, SG = 7;
int ER = 8, EY = 9, EG = 10;
int WR = 11, WY = 12, WG = 13;

void setup() {
  for(int pin=2; pin<=13; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {

  // North-South Green
  digitalWrite(NG, HIGH);
  digitalWrite(SG, HIGH);
  digitalWrite(ER, HIGH);
  digitalWrite(WR, HIGH);
  delay(5000);

  // North-South Yellow
  digitalWrite(NG, LOW);
  digitalWrite(SG, LOW);
  digitalWrite(NY, HIGH);
  digitalWrite(SY, HIGH);
  delay(2000);

  // North-South Red
  digitalWrite(NY, LOW);
  digitalWrite(SY, LOW);
  digitalWrite(NR, HIGH);
  digitalWrite(SR, HIGH);
  digitalWrite(ER, LOW);
  digitalWrite(WR, LOW);

  // East-West Green
  digitalWrite(EG, HIGH);
  digitalWrite(WG, HIGH);
  delay(5000);

  // East-West Yellow
  digitalWrite(EG, LOW);
  digitalWrite(WG, LOW);
  digitalWrite(EY, HIGH);
  digitalWrite(WY, HIGH);
  delay(2000);

  // Reset
  digitalWrite(EY, LOW);
  digitalWrite(WY, LOW);
  digitalWrite(ER, HIGH);
  digitalWrite(WR, HIGH);
  digitalWrite(NR, LOW);
  digitalWrite(SR, LOW);
}
