void setup() {
  // put your setup code here, to run once:
  
  pinMode(3, INPUT); //Analog Input  
  pinMode(0, OUTPUT); //Digital/PWM Output for LED

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (analogRead(3) > 700) {
    digitalWrite(0, HIGH);
  }
  else {
    digitalWrite(0, LOW);
  }
}
