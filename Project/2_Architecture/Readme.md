# Block Diagram

![railwayblock_f](https://user-images.githubusercontent.com/98875082/157015165-2590e622-2bc6-45f3-8456-419daaaa85c0.png)

The Involuntary Railway Gate System is a simple embedded system which automatically opens and closes the gate at a railway level crossing.It includes Ultrasonic Sensor, Arduino, stepper motor, LCD dispaly and buzzer and LED.

#### Ultrasonic Sensor
- The ultrasonic sensor is used to sense the arrival and departure of the train. It works on the "echolocation" principle. The device generates a wave or pulse from the sensor trig pin, and the pulses return to the sensor after hitting an obstacle to the echo pin of the sensor. Thich transmits the digital (0,1) signal, if the object is detected.


#### Arduino UNO 
- The Arduino Uno is a microcontroller board based on the ATmega coupled with an integrated development environment (IDE) for creating logic on the chip. The controller helps in opening and closing the gate when the train passes at the junction. All the sensor and actuator are interfaced with the controller unit. When the ultrasonic sensor detects the arrival of the train, the controller starts the motor in order to close the gate. And similarly when the train departs, the controller starts the motor to open the gate. It also sends information to LCD BUZZER and LED for display purposes.


#### Servo Motor
- The servo motor is an electromechanical device. It have three wires out of which two will be used for supply(i.e, positive and negative) and one will be used for the signal that is to be sent from the MCU. PWM (Pulse with Modulation) is used to control the servo motor, which is provided by the control wires. There is a minimum pulse, a maximum pulse and a repetition rate. From its neutral position, the servo motor can turn 90 degrees in either direction. Servo motor can be rotated from 0 to 180 degrees depending on the manufacturing.


#### LCD Display
- The LCD display is a type of flat panel display which uses liquid crystals in its primary form of operation. With the help of digital data from the ADC the data will be displayed on the LCD that is when the train reaches the junction it displays as "The train had arrived" and similarly it displays "The train left the junction" when it departures.

#### Buzzer/LED
- The buzzer and LED is interfaced with the controller in order to alter the people and vehicle present at the junction on the arrival and departure of the train.

# Behavioral Diagram
## Flow Chart

![flow](https://user-images.githubusercontent.com/98875082/155775138-7965d5ee-7e8d-42f5-9cc7-54e0468b4c24.png)

# Structural Diagram
## Use Case

![usecasepng](https://user-images.githubusercontent.com/98875082/155789978-748a069e-f924-4493-9328-aeccf1f9dcaa.png)




