#define Buton 3
#define Led 8

int button_durum = 0;
int geneldurum = 0;
void setup() {
  pinMode(Buton, INPUT);
  pinMode(Led, OUTPUT);


}

void loop() {
  button_durum = digitalRead(Buton);
  if (button_durum == 1 && geneldurum == 0){
    digitalWrite(Led,HIGH);
    geneldurum = geneldurum + 1;
  }
  else if(button_durum == 1 && geneldurum == 1){
    digitalWrite(Led,LOW);
    geneldurum = geneldurum - 1;
  }

}
