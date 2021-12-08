// Create variables for the pins
int redLED = 11;
int greenLED = 10;
int blueLED = 9;

void setup(){
  // Initialize pins as output devices
  pinMode (redLED, OUTPUT);
  pinMode (greenLED, OUTPUT);
  pinMode (blueLED, OUTPUT);
}

void loop(){
  // Red LED cycle
  analogWrite (redLED, 255);     // full power
  analogWrite (redLED, 100);  // 40% power
  analogWrite (redLED, 0);     // no power

  // Green LED cycle
  analogWrite (greenLED, 255);     // full power
  analogWrite (greenLED, 100);  // 40% power
  analogWrite (greenLED, 0);     // no power

  // Blue LED cycle
  analogWrite (blueLED, 255);     // full power
  analogWrite (blueLED, 100);  // 40% power
  analogWrite (blueLED, 0);     // no power

}
