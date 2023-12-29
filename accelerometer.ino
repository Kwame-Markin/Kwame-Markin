#include <Adafruit_CircuitPlayground.h>
//Read the X,Y, and Z data and display on the serial terminal
//Do this twice per second

int zData;
int yData = 0;
int zData = 0;
void setup() {
  // put your setup code here, to run once:
CircuitPlayground.begin(); // initialize board
CircuitPlayground.clearPixels(); // clear all pixels
//Serial.begin(9600);         // Create a Serial connection
 //while(!Serial);             // Wait for serial port to open
 zData = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
//xData = CircuitPlayground.motionX();
//yData = CircuitPlayground.motionY();
zData = CircuitPlayground.motionZ();
Serial.print("X Data: ");
Serial.print(xData);
Serial.print("m/s^2 Y Data: ");
Serial.print(yData);
Serial.print("m/s^2 Z Data: ");
Serial.print(zData);
Serial.println("m/s^2 ");
delay(1000);
}
