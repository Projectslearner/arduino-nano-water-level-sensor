/*
    Project name : Water Level Sensor
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-water-level-sensor
*/

const int waterLevelPin = A0; // Analog pin connected to the water level sensor
const int threshold = 500;    // Threshold value for determining water level

void setup() {
  Serial.begin(9600);         // Initialize serial communication
  pinMode(waterLevelPin, INPUT); // Set water level sensor pin as INPUT
}

void loop() {
  int waterLevel = analogRead(waterLevelPin); // Read water level sensor value
  
  // Check if the water level is above the threshold
  if (waterLevel > threshold) {
    Serial.println("Water level is HIGH");
  } else {
    Serial.println("Water level is LOW");
  }
  
  delay(1000); // Delay before taking the next reading
}
