void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int d=analogRead(A0);
Serial.println(d);
delay(100);
if(d>500)
digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);
}
