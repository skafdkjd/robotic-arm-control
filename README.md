# Underwater Robotic Arm Control

This project is an implementation of a robotic arm control system using potentiometers to control servos underwater. The system utilizes the Adafruit PCA9685 PWM driver to control multiple servo motors based on the input from potentiometers.

## Hardware Requirements

1. Arduino board (e.g., Arduino Uno)
2. Adafruit PCA9685 16-Channel PWM Driver
3. Servo motors
4. Potentiometers
5. Jumper wires
6. Power supply for servos
7. Breadboard (optional)
8. Underwater housing for electronics (if needed)

## Software Requirements

1. Arduino IDE
2. Adafruit PWM Servo Driver Library
3. Wire Library (typically included with Arduino IDE)

## Circuit Diagram

Connect the components as follows:
- Connect the PCA9685 board to the Arduino using the I2C pins (SCL and SDA).
- Connect each servo motor to the respective PWM channels on the PCA9685.
- Connect each potentiometer to the analog input pins on the Arduino.

## Code Explanation

The provided code reads the values from five potentiometers and maps these values to corresponding angles for the servo motors. It then generates PWM signals to control the servos based on the mapped angles.

### Servo and Potentiometer Configuration

- `SERVOMIN` and `SERVOMAX` define the minimum and maximum pulse lengths for the servos.
- Potentiometer pins are defined as `POT_PIN0`, `POT_PIN1`, `POT_PIN2`, `POT_PIN3`, and `POT_PIN4`.
- Servo channels are defined as `SERVO_CHANNEL0`, `SERVO_CHANNEL1`, `SERVO_CHANNEL2`, `SERVO_CHANNEL3`, and `SERVO_CHANNEL4`.
- The minimum and maximum angles for each servo are defined as `MIN_ANGLE` and `MAX_ANGLE` for each channel.

### Setup Function

The `setup()` function initializes the serial communication and the PCA9685 board. It also sets the PWM frequency to 50Hz, which is standard for servo motors.

### Loop Function

The `loop()` function performs the following steps:
1. Reads the values from each potentiometer.
2. Maps the potentiometer readings to servo angles.
3. Maps the angles to the pulse length range.
4. Sets the PWM signal for each servo channel.
5. Outputs the potentiometer readings, angles, and pulse lengths to the Serial Monitor.
6. Delays for 10ms to ensure smooth servo movement.

## Usage Instructions

1. Connect the hardware components as described in the circuit diagram.
2. Install the Adafruit PWM Servo Driver library in the Arduino IDE.
3. Upload the provided code to the Arduino board.
4. Open the Serial Monitor to view the potentiometer readings, angles, and pulse lengths.
5. Adjust the potentiometers to control the servo motors.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Adafruit Industries for the PCA9685 PWM driver and the associated library.
- Arduino community for the support and resources.
# Underwater Robotic Arm Control

This project is an implementation of a robotic arm control system using potentiometers to control servos underwater. The system utilizes the Adafruit PCA9685 PWM driver to control multiple servo motors based on the input from potentiometers.

## Hardware Requirements

1. Arduino board (e.g., Arduino Uno)
2. Adafruit PCA9685 16-Channel PWM Driver
3. Servo motors
4. Potentiometers
5. Jumper wires
6. Power supply for servos
7. Breadboard (optional)
8. Underwater housing for electronics (if needed)

## Software Requirements

1. Arduino IDE
2. Adafruit PWM Servo Driver Library
3. Wire Library (typically included with Arduino IDE)

## Circuit Diagram

Connect the components as follows:
- Connect the PCA9685 board to the Arduino using the I2C pins (SCL and SDA).
- Connect each servo motor to the respective PWM channels on the PCA9685.
- Connect each potentiometer to the analog input pins on the Arduino.

## Code Explanation

The provided code reads the values from five potentiometers and maps these values to corresponding angles for the servo motors. It then generates PWM signals to control the servos based on the mapped angles.

### Servo and Potentiometer Configuration

- `SERVOMIN` and `SERVOMAX` define the minimum and maximum pulse lengths for the servos.
- Potentiometer pins are defined as `POT_PIN0`, `POT_PIN1`, `POT_PIN2`, `POT_PIN3`, and `POT_PIN4`.
- Servo channels are defined as `SERVO_CHANNEL0`, `SERVO_CHANNEL1`, `SERVO_CHANNEL2`, `SERVO_CHANNEL3`, and `SERVO_CHANNEL4`.
- The minimum and maximum angles for each servo are defined as `MIN_ANGLE` and `MAX_ANGLE` for each channel.

### Setup Function

The `setup()` function initializes the serial communication and the PCA9685 board. It also sets the PWM frequency to 50Hz, which is standard for servo motors.

### Loop Function

The `loop()` function performs the following steps:
1. Reads the values from each potentiometer.
2. Maps the potentiometer readings to servo angles.
3. Maps the angles to the pulse length range.
4. Sets the PWM signal for each servo channel.
5. Outputs the potentiometer readings, angles, and pulse lengths to the Serial Monitor.
6. Delays for 10ms to ensure smooth servo movement.

## Usage Instructions

1. Connect the hardware components as described in the circuit diagram.
2. Install the Adafruit PWM Servo Driver library in the Arduino IDE.
3. Upload the provided code to the Arduino board.
4. Open the Serial Monitor to view the potentiometer readings, angles, and pulse lengths.
5. Adjust the potentiometers to control the servo motors.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Adafruit Industries for the PCA9685 PWM driver and the associated library.
- Arduino community for the support and resources.
