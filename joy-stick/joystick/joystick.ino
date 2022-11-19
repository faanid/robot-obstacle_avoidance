const int sv_pin = 11;
const int X_pin = 3;
const int Y_pin = 2;
void setup() {
  pinMode(sv_pin,INPUT);
   digitalWrite(sv_pin,HIGH);
   Serial.begin(115200);
}

void loop() {

 Serial.print("switch:");
   Serial.print(digitalRead(sv_pin));
   Serial.print("\n");
   Serial.print("X-axis:");
   Serial.print(analogRead(X_pin));
   Serial.print("\n");
   Serial.print("Y_axis:");
   Serial.print(analogRead(Y_pin));
   Serial.print("\n\n");
   delay(500);


}
