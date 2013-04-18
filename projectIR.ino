int pinIRLED = 12; // assign the Infrared emitter/ diode to pin 13

void setup() {
  pinMode(pinIRLED, OUTPUT);                            // set the pin as an output
}
// sets the pulse of the IR signal.
void pulseON(int pulseTime) {
  unsigned long endPulse = micros() + pulseTime;        // create the microseconds to pulse for
  while( micros() < endPulse) {
    digitalWrite(pinIRLED, HIGH);                       // turn IR on
    delayMicroseconds(13);                              // half the clock cycle for 38Khz (26.32Ã—10-6s) - e.g. the 'on' part of our wave
    digitalWrite(pinIRLED, LOW);                        // turn IR off
    delayMicroseconds(13);                              // delay for the other half of the cycle to generate wave/ oscillation
  }
}
void pulseOFF(unsigned long startDelay) {
  unsigned long endDelay = micros() + startDelay;       // create the microseconds to delay for
  while(micros() < endDelay);
  for (int i=0; i < 2; i++) {
pulseON(2336);
pulseOFF(646);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(646);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(572);
pulseOFF(646);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(11008);
pulseON(2336);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(646);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(572);
pulseOFF(646);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(11008);
pulseON(2336);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(646);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1168);
pulseOFF(621);
pulseON(1093);
pulseOFF(696);
pulseON(572);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(572);
pulseOFF(621);
pulseON(572);
pulseOFF(1218);
pulseON(497);
pulseOFF(1292);
pulseON(422);
pulseOFF(1367);
pulseON(373);
pulseOFF(11803);
pulseON(298);
pulseOFF(2659);
pulseON(199);
pulseOFF(1590);
pulseON(174);
pulseOFF(1019);
pulseON(174);
pulseOFF(1615);
pulseON(174);
pulseOFF(1615);
pulseON(149);
pulseOFF(1044);
pulseON(149);
pulseOFF(1640);
pulseON(124);
pulseOFF(1093);
pulseON(149);
pulseOFF(1044);
pulseON(124);
pulseOFF(1665);
pulseON(124);
pulseOFF(1068);
pulseON(124);
pulseOFF(1665);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1093);
pulseON(99);
pulseOFF(1118);
pulseON(99);
pulseOFF(1093);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1690);
pulseON(75);
pulseOFF(1715);
pulseON(75);
pulseOFF(12101);
pulseON(149);
pulseOFF(2833);
pulseON(75);
pulseOFF(1715);
pulseON(75);
pulseOFF(1118);
pulseON(75);
pulseOFF(1715);
pulseON(75);
pulseOFF(1715);
pulseON(75);
pulseOFF(1118);
pulseON(75);
pulseOFF(1715);
pulseON(75);
pulseOFF(1118);
pulseON(99);
pulseOFF(1093);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1093);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1093);
pulseON(99);
pulseOFF(1118);
pulseON(99);
pulseOFF(1093);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(1690);
pulseON(99);
pulseOFF(646);
  }                                                     // loop the signal twice.
}

void loop() {
 
  start();  // take the picture

}


