#define pot A0
#define led 3


void setup() {
  Serial.begin(9600);
  Serial.println("Pot Değer Okuma");
}

void loop() {
  int deger = analogRead(pot); //değer geliyor
  float gerilim = (5.00/1024)*deger;
  Serial.println(gerilim);
  deger = map(deger, 0, 1023, 0, 255); // gelen 0-1023 değerini 0-255 ayarlama 2^8 olduğu için

  analogWrite(led,deger); //koddan gelen değeri lede yazacağız
}
