void setup() {
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<=255;i++){
    analogWrite(10,i);
    Serial.println(i);
    }
}
