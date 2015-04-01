/*
This code has been written by Rishi Gaurav Bhatanagar in an attempt to explore how could I shrinkfy the arduino Projects.
More details on how this can be done can be found in the tutorials.

P.S put an resistor in series before the LED, it doesn't smell good when it burns, trust me.
*/
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
