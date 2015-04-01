/* The code has been written and tested by Rishi Gaurav Bhatnagar on an Attiny85 board from daflabs,
HCRO4 ultrasonic sensor works like a charm with the setup. */
#include <Ultrasonic.h>

#define TRIGGER_PIN  2
#define ECHO_PIN     3
int LED1 = 0;  // LED1 Pin
int dist;
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
{
  pinMode(LED1, OUTPUT);
  dist = 10;
}

void loop()
{
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  if (inMsec < dist)
  {
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
}

