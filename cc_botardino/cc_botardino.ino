
// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4; 
const int trigPin = 9;  // Pin connected to the TRIG of HC-SR04
const int echoPin = 10; // Pin connected to the ECHO of HC-SR04
const int buzzerPin = 8; // Pin connected to the Buzzer

void setup() {
  // Sets the stepper and buzzer pins as Outputs
  pinMode(stepPin, OUTPUT); 
  pinMode(dirPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT); // Buzzer output
  
  // Set the direction to one side (you can choose either HIGH or LOW for direction)
  digitalWrite(dirPin, HIGH); // This will make the motor rotate in one direction

  // Set up ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);  // Start serial communication for debugging
}

void loop() {
  // Measure the distance using the ultrasonic sensor
  long duration, distance;

  // Send a pulse to the ultrasonic sensor to trigger a measurement
  digitalWrite(trigPin, LOW);  // Ensure TRIG is LOW before sending pulse
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);  // Trigger pulse
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  // End pulse

  // Read the pulse duration from the ECHO pin
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance = (duration / 2) / 29.1;  // Speed of sound is 343 m/s, divided by 2 for round trip

  // Display distance on Serial Monitor for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // If the distance is less than or equal to 5 cm, turn on the buzzer
  if (distance <= 5) {
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn off buzzer
  }

  // Rotate the stepper motor
  for (int x = 0; x < 20000000000000000000000000000000000; x++) {  // Rotate one full cycle (200 steps)
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1800);  // Speed control
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1800);  // Speed control
  }

  delay(0); // Delay for 1 second after each rotation
}