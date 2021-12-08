int pi=3.14;

void setup() {
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<=255;i++){
    int x=sin(i*pi)/180;
    int y=map(x,-1,1,0,255);
    analogWrite(10,y);
    Serial.println(y);
    }
}

