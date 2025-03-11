#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
 
// Create the PWM driver object for the PCA9685 board.
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
 
// Define the minimum and maximum pulse lengths for your servos.
// Adjust these values as needed for your specific servo model.
#define SERVOMIN 150  // Minimum pulse length count
#define SERVOMAX 600  // Maximum pulse length count
 
// Define the analog input pins for the potentiometers.
#define POT_PIN0 A0  // Existing potentiometer
#define POT_PIN1 A1  // New potentiometer 1
#define POT_PIN2 A2  // New potentiometer 2
#define POT_PIN3 A3  // New potentiometer 3
#define POT_PIN4 A4  // New potentiometer 4
 
// Define the PWM channels for the servo motors.
#define SERVO_CHANNEL0 0  // Existing servo channel
#define SERVO_CHANNEL1 1  // New servo channel 1
#define SERVO_CHANNEL2 2  // New servo channel 2
#define SERVO_CHANNEL3 3  // New servo channel 3
#define SERVO_CHANNEL4 4  // New servo channel 4
 
// Define the minimum and maximum angles for each servo.
// 0 is the bottom rotator and the position of the respective motor increase as the number increase
#define MIN_ANGLE0 70
#define MAX_ANGLE0 160
#define MIN_ANGLE1 70
#define MAX_ANGLE1 160
#define MIN_ANGLE2 15
#define MAX_ANGLE2 110
#define MIN_ANGLE3 25
#define MAX_ANGLE3 205
#define MIN_ANGLE4 45
#define MAX_ANGLE4 135
 
void setup() {
  Serial.begin(9600);
  Serial.println("Initializing Servo Controller");
 
  // Initialize the PCA9685 board and set PWM frequency to 50Hz for standard servo motors.
  pwm.begin();
  pwm.setPWMFreq(50);
 
  // Brief delay to allow the PWM controller to initialize.
  delay(10);
}
 
void loop() {
  // Read the value from each potentiometer (range: 0 to 1023).
  int potValue0 = analogRead(POT_PIN0);
  int potValue1 = analogRead(POT_PIN1);
  int potValue2 = analogRead(POT_PIN2);
  int potValue3 = analogRead(POT_PIN3);
  int potValue4 = analogRead(POT_PIN4);
 
  // Map the potentiometer readings to the servo angles.
  int angle0 = map(potValue0, 0, 1023, MIN_ANGLE0, MAX_ANGLE0);
  int angle1 = map(potValue1, 0, 1023, MIN_ANGLE1, MAX_ANGLE1);
  int angle2 = map(potValue2, 0, 1023, MIN_ANGLE2, MAX_ANGLE2);
  int angle3 = map(potValue3, 0, 1023, MIN_ANGLE3, MAX_ANGLE3);
  int angle4 = map(potValue4, 0, 1023, MIN_ANGLE4, MAX_ANGLE4);
 
  // Map the angles to the servos' pulse length range.
  int pulseLength0 = map(angle0, 0, 180, SERVOMIN, SERVOMAX);
  int pulseLength1 = map(angle1, 0, 180, SERVOMIN, SERVOMAX);
  int pulseLength2 = map(angle2, 0, 180, SERVOMIN, SERVOMAX);
  int pulseLength3 = map(angle3, 0, 180, SERVOMIN, SERVOMAX);
  int pulseLength4 = map(angle4, 0, 180, SERVOMIN, SERVOMAX);
 
  // Set the PWM signal for each servo channel.
  pwm.setPWM(SERVO_CHANNEL0, 0, pulseLength0);
  pwm.setPWM(SERVO_CHANNEL1, 0, pulseLength1);
  pwm.setPWM(SERVO_CHANNEL2, 0, pulseLength2);
  pwm.setPWM(SERVO_CHANNEL3, 0, pulseLength3);
  pwm.setPWM(SERVO_CHANNEL4, 0, pulseLength4);
 
  // Output the potentiometer readings, angles, and corresponding pulse lengths to the Serial Monitor.
  Serial.print("Pot0: ");
  Serial.print(potValue0);
  Serial.print(" -> Angle0: ");
  Serial.print(angle0);
  Serial.print(" -> Pulse0: ");
  Serial.println(pulseLength0);
 
  Serial.print("Pot1: ");
  Serial.print(potValue1);
  Serial.print(" -> Angle1: ");
  Serial.print(angle1);
  Serial.print(" -> Pulse1: ");
  Serial.println(pulseLength1);
 
  Serial.print("Pot2: ");
  Serial.print(potValue2);
  Serial.print(" -> Angle2: ");
  Serial.print(angle2);
  Serial.print(" -> Pulse2: ");
  Serial.println(pulseLength2);
 
  Serial.print("Pot3: ");
  Serial.print(potValue3);
  Serial.print(" -> Angle3: ");
  Serial.print(angle3);
  Serial.print(" -> Pulse3: ");
  Serial.println(pulseLength3);
 
  Serial.print("Pot4: ");
  Serial.print(potValue4);
  Serial.print(" -> Angle4: ");
  Serial.print(angle4);
  Serial.print(" -> Pulse4: ");
  Serial.println(pulseLength4);
 
  // Short delay for smooth servo movement.
  delay(10);
}
