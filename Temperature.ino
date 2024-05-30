#include <SoftwareSerial.h> // Include the SoftwareSerial library

const int sensorPin = A0;   // Analog pin for LM35 temperature sensor
const int ledPin = 8;       // Digital pin for LED
const int ledPin2 = 9;      // Digital pin for LED
const int buzzerPin = 7;    // Digital pin for buzzer
const float threshold = 50.0; // Temperature threshold in degrees Celsius

SoftwareSerial bluetooth(0, 1); // RX, TX

void setup() {
  Serial.begin(9600);         // Initialize the serial communication for debugging
  pinMode(ledPin, OUTPUT);    // Set LED pin as output
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
  pinMode(ledPin2, OUTPUT);   // Set second LED pin as output
  pinMode(A0, INPUT);         // Set sensor pin as input
  bluetooth.begin(9600);      // Initialize the Bluetooth serial communication
}

void loop() {
  // Read temperature from sensor
  int sensorValue = analogRead(sensorPin);
  float temperature = sensorValue * 0.48828125; // Convert sensor value to temperature in degrees Celsius
  float fahrenheit = temperature * 1.8 + 32;    // Convert temperature to degrees Fahrenheit

  Serial.print("Temperature (Celsius): ");
  Serial.print(temperature);
  Serial.print(" °C ");
  Serial.print("Temperature (Fahrenheit): ");
  Serial.print(fahrenheit);
  Serial.println(" °F ");

  delay(1000);

  // Check if temperature exceeds threshold
  if (temperature > threshold) {
    digitalWrite(ledPin, HIGH);   // Turn on the LED
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    digitalWrite(ledPin2, LOW);    // Turn off the second LED
    delay(500);                    // Wait for 0.5 seconds
  }
  else {
    digitalWrite(ledPin2, HIGH);   // Turn on the second LED
    digitalWrite(ledPin, LOW);     // Turn off the first LED
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
    delay(100);
  }

  bluetooth.print(temperature);
  bluetooth.println(" °C"); 
  delay(1000);

  // Wait for 1 second before taking another temperature reading
}
