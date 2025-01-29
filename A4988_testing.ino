// Define pin connections & motor's steps per revolution
const int dirPin = 8;
const int stepPin = 7;
const int stepsPerRevolution = 200;

void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}
void loop()
{
  // Set motor direction clockwise
  digitalWrite(dirPin, HIGH);

  // Spin motor slowly
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
  delay(500);

// Step 200 times on the motor connected to StepPin, 
// clockwise, with a delay of 400 microseconds between steps
  spin(200, 1, 400); 
}

void spin(int count, int dir, int del){
  digitalWrite(dirPin, dir);
  for (int i=0; i<count; i++){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(del);
  }
}
