int gomb =3;
void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(3)==0)
  {
  Serial.println("Megnyomtak Üdv, a gomb!");
  }
}
