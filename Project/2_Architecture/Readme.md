# Block Diagram

![block](https://user-images.githubusercontent.com/98875082/155725641-6779b137-7698-4539-9184-6f6275339f2b.png)

The Involuntary Railway Gate System is a simple embedded system which automatically opens and closes the gate at a railway level crossing.It includes IR Sensor, MicroController, stepper motor, LCD dispaly and buzzer/LED.

#### IR Sensor
- An IR sensor is used to sense the arrival and departure of the train. An IR Sensor generally comprises two components: an IR Transmitter and an IR Receiver. An IR Transmitter is a device that emits IR Rays. Similarly, an IR Receiver is a device that detects the IR Rays. Photo Diodes are the most commonly used IR receivers.

#### ADC (Analogy-to-Digital Converter)
- The sensor value is read through the ADC. The 10-bit ADC values produce equivalent digital data with respect to the IR sensor’s output. With the help of digital data, the gate is being controlled.

#### MicroController Unit
- The MicroController Unit is one of the best alternatives obtainable for embedded system design. The architecture has become very popular and these are available from different IC manufacturers. The controller helps in opening and closing the gate when the train passes at the junction. All the sensor and actuator are interfaced with the controller unit. When the IR sensor detects the arrival of the train, the microcontroller starts the motor with the help of the motor driver in order to close the gate. And similarly when the train departs, the microcontroller starts the motor to open the gate. It also sends information to LCD and BUZZER/LED for display purposes.


#### Stepper Motor
- A stepper motor is an electric motor whose main feature is that its shaft rotates by performing steps, that is, by moving by a fixed number of degrees. This allows us to know the exact angular position of the shaft by simply counting how many steps have been performed, with no need for a sensor. To open the gate the motor rotates clockwise and rotates anti clockwise to close the gate.

#### LCD Display
- The LCD display is a type of flat panel display which uses liquid crystals in its primary form of operation. With the help of digital data from the ADC the data will be displayed on the LCD that is when the train reaches the junction it displays as "The train had arrived" and similarly it displays "The train left the junction" when it departures.

#### Buzzer/LED
- The buzzer/LED is interfaced with the controller in order to alter the people and vehicle present at the junction on the arrival and departure of the train.

# Behaviour Diagram
## Flow Chart

![flow](https://user-images.githubusercontent.com/98875082/155775138-7965d5ee-7e8d-42f5-9cc7-54e0468b4c24.png)

# Structural Diagram
## Use Case

![usecasepng](https://user-images.githubusercontent.com/98875082/155789978-748a069e-f924-4493-9328-aeccf1f9dcaa.png)




