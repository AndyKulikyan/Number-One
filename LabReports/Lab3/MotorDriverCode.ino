int x;
int y;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
analogReference(DEFAULT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    AnalogOutput = analogRead(2);
   x = analogRead(2); // ...send it out the radio.
   
   y = map(x, 290, 1023, 0, 255);
    Serial.println(x);
    Serial.println(y);
   analogWrite(A2,y); 
  
}
