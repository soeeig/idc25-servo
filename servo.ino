// Include the library that allows us to control servo motors on the ESP32
#include <ESP32Servo.h>

// Define the GPIO pin number where the servo signal wire is connected
#define SERVO_PIN 10  

// Create a Servo object called myServo to control the motor
Servo myServo;

void setup() {
  // Start the Serial Monitor at a baud rate of 115200
  Serial.begin(115200);

  // Attach the servo motor to the specified pin
  // This tells the library which pin will control the servo
  myServo.attach(SERVO_PIN);

  // Set the initial angle of the servo to 0 degrees
  myServo.write(0);
}

void loop() {
  // Rotate the servo to 90 degrees
  myServo.write(90);
  Serial.println("Servo angle: 90 deg");
  delay(1000); // Wait 1 second (1000 milliseconds)

  // Rotate the servo to 180 degrees (maximum range for many servos)
  myServo.write(180);
  Serial.println("Servo angle: 180 deg");
  delay(1000); // Wait 1 second

  // Rotate the servo back to 0 degrees
  myServo.write(0);
  Serial.println("Servo angle: 0 deg");
  delay(1000); // Wait 1 second
}
