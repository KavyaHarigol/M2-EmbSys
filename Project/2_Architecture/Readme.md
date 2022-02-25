# Block Diagram

![block](https://user-images.githubusercontent.com/98875082/155725641-6779b137-7698-4539-9184-6f6275339f2b.png)


The Smart Railway Gate System is a simple embedded system which automatically opens and closes the gate at a railway level crossing.It includes IR Sensor, ARM Controller, stepper motor, LCD dispaly and buzzer/LED.

#### IR Sensor
- An IR sensor is used to sense the arrival and departure of the train. An IR Sensor generally comprises of two components: an IR Transmitter and an IR Receiver. An IR Transmitter is a device that emits IR Rays. Similarly, an IR Receiver is a device that detects the IR Rays. Photo Diodes are the most commonly used IR receivers.

#### ADC (Analogy-to-Digital Converter)
- The sensor value is read through the ADC. The 10-bit ADC values produces equivalent digital data with respect to the IR sensor’s output. With the help of digital data, the gate is being controlled.

#### ARM Controller Unit
- An ARM processor is one of the best alternatives obtainable for embedded system design. The ARM architecture has become very popular and these are available from different IC manufacturers. It helps in opening and closing the gate when the train passes at the junction. All the sensor and actuator are interfaced with the controller unit.

#### Stepper Motor
- A stepper motor is an electric motor whose main feature is that its shaft rotates by performing steps, that is, by moving by a fixed number of degrees. This allows to know the exact angular position of the shaft by simply counting how may steps have been performed, with no need for a sensor. To open the gate the motor rotates clock wise and rotates anti clock wise to close the gate.

#### Buzzer/LED
- The buzzer/LED is interfaced with the controller in order to alter the people present at the junction on the arrival and departure of the train.
