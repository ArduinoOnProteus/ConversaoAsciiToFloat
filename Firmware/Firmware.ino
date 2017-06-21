void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(5000);
  Serial.println("Digite um numero: ");
  PORTH = 255;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String buf = Serial.readStringUntil('\r');
    float num = buf.toFloat();
    Serial.print("Dado eh: ");
    Serial.println(num);
  }

}
