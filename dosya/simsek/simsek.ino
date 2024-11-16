int ledler[] = {2,3,4,5,6};
#define pot A0


void setup() {
  for (int i = 0; i < 5; i++) { // Noktalı virgül kaldırıldı
    pinMode(ledler[i], OUTPUT);
  }
  Serial.begin(9600);
  Serial.println("Pot Değer Okuma");
}
void loop() {
  int deger = analogRead(pot); //değer geliyor
  int deger2;
  float gerilim = (5.0/1024)*deger;
  Serial.println(gerilim); 
  deger2 = map(deger, 0, 1023, 0, 255);
  deger = map(deger, 0, 1023, 129, 255); // gelen 0-1023 değerini 0-255 ayarlama 2^8 olduğu için
  Serial.println(deger);
  if (deger2 >= 120){
    for (int i = 0; i<5; i++){
      analogWrite(ledler[i], deger);
      delay(50);
      digitalWrite(ledler[i], 0);
    }
    for (int j = 4; j>=0; j--){
      analogWrite(ledler[j], deger);
      delay(50);
      digitalWrite(ledler[j], 0);
    }
  }
  

}
