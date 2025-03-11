# Underwater Robotic Arm Control

This project is an implementation of a robotic arm control system using potentiometers to control servos underwater. The system utilizes the Adafruit PCA9685 PWM driver to control multiple servo motors based on the input from potentiometers.

## Hardware Requirements

1. Arduino board (e.g., Arduino Uno)
2. Adafruit PCA9685 16-Channel PWM Driver
3. Servo motors
4. Potentiometers
5. Jumper wires
6. Power supply for servos
7. Breadboard (optional, but recommended)
8. Waterproof measurements on the servos

## Software Requirements

1. Arduino IDE
2. Adafruit PWM Servo Driver Library
3. Wire Library (typically included with Arduino IDE)

## Circuit Diagram

Connect the components as follows (the detailed visual diagram will be uploaded later):
- Connect the PCA9685 board to the Arduino (SCL, SDA, V+, GND, VCC).
- Connect each servo motor to the respective PWM channels on the PCA9685.
- Connect each potentiometer to the analog input pins on the Arduino, with the middle pin of the potentiometers.

## Usage Instructions

### Using Arduino IDE

1. **Connect the Hardware**: Connect the hardware components as described in the circuit diagram.
2. **Install Required Libraries**: Open the Arduino IDE. Go to `Sketch -> Include Library -> Manage Libraries...`, search for "Adafruit PWM Servo Driver Library" and "Wire", then install them.
3. **Load the Code**: Copy the provided code into a new sketch in the Arduino IDE.
4. **Save the Code**: Save the sketch. The folder name must match the sketch name.
5. **Select the Board and Port**: Go to `Tools -> Board` and select your Arduino board (e.g., Arduino Uno). Then go to `Tools -> Port` and select the appropriate COM port.
6. **Upload the Code**: Click the upload button in the Arduino IDE to upload the code to your Arduino board.
7. **Open Serial Monitor**: Open the Serial Monitor (Ctrl+Shift+M) to view the potentiometer readings, angles, and pulse lengths reflected to the servos.
8. **Adjust Potentiometers**: Adjust the potentiometers to control the servo motors.

### Using Arduino CLI

Assuming you are in an ARM-based OS, you may also run the code in **Arduino CLI**, a command-line style version of the original IDE. To run the code using the Arduino CLI, follow these steps:

1. **Install Arduino CLI**: Follow the instructions on the [Arduino CLI GitHub page](https://github.com/arduino/arduino-cli) to install Arduino CLI on your OS.

2. **Install the Required Libraries**: After installing the CLI on your computer, use the Arduino CLI to install the necessary libraries for this code. Open your terminal and run the following commands:
   ```sh
   arduino-cli lib install "Adafruit PWM Servo Driver Library"
   arduino-cli lib install "Wire"
   ```

3. **Compile the Code**: Navigate to the directory containing your code and compile it using the Arduino CLI. Make sure that the name of the code **must** have the same name as the folder. Replace `your_sketch_folder` with the name of your sketch folder:
   ```sh
   cd path/to/your_sketch_folder
   arduino-cli compile --fqbn arduino:avr:uno
   ```

4. **Upload the Code**: Connect your Arduino board to your computer and upload the compiled code. Replace `YOUR_OWN_COM_PORT` with the appropriate serial port for your system (such as `/dev/ttyACM0` on Linux):
   ```sh
   arduino-cli upload -p YOUR_OWN_COM_PORT --fqbn arduino:avr:uno
   ```

5. **Open Serial Monitor**: The terminal will show the details (such as angles and pulselength) once you've started to run the code.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
