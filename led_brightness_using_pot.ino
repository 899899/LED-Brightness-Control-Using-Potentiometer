int potPin=A0;
int ledPin=9;
int potValue=0;
int brightness=0;
void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
 potValue=analogRead(potPin);
brightness=potValue/4;
analogWrite(ledPin,brightness);
Serial.print("potValue");
Serial.print(potValue);
Serial.print("brightness");
Serial.println(brightness);
delay(300);
}
