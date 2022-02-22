# Smart Railway Gate System

## Design Details

![GateSystem_controller drawio](https://user-images.githubusercontent.com/98875082/155110487-2cca408e-22ec-49da-9409-e4bbb564c514.png)


The Smart Railway Gate System is a simple embedded system which automatically opens and closes the gate at a railway level crossing.It includes IR Sensor, ARM Controller, stepper motor, LCD dispaly and buzzer/LED. 

- IR Sensor 
 An IR sensor is used to sense the arrival and departure of the train. An IR Sensor generally comprises of two components: an IR Transmitter and an IR Receiver. An IR Transmitter is a device that emits IR Rays.  Similarly, an IR Receiver is a device that detects the IR Rays. Photo Diodes are the most commonly used IR receivers.

- ADC (Analogy-to-Digital Converter)
The sensor value is read through the ADC. The 10-bit ADC values produces equivalent digital data with respect to the IR sensor’s output. With the help of digital data, the gate is being controlled.

- MicroController Unit
The Microconroller Unit is one of the best alternatives obtainable for embedded system designers. It helps opening and closing the gate when the train passes the junction. All the sensor and actuator are interfaced with the microcontroller.

- Stepper Motor
A stepper motor is an electric motor whose main feature is that its shaft rotates by performing steps, that is, by moving by a fixed number of degrees. This allows to know the exact angular   position of the shaft by simply counting how may steps have been performed, with no need for a sensor. To open the gate the motor rotates clock wise and rotates anti clock wise to close the gate.

- LCD Display and Buzzer
A liquid-crystal display (LCD) is a flat-panel display that shows the status of the railway gate open or close section and warning message for road users. A Buzzer is also used to warn the road user about the approach of train.

## V-Model of the Smart Railway Gate System

![Vmodel](https://user-images.githubusercontent.com/98875082/154837216-1fcaf1bf-ba2a-4b89-b5ff-0e55cde9e15f.png)


## Requirements
###	High Level Requirements

|  ID |    Description   |
|-----|-------------------|
|HLR1|Initialing all the peripherals with ARM controller|
|HLR2|It allows to sense the arrival and departure of the train|
|HLR3|It allows to open the gate|
|HLR4|It allows to close the gate|
|HLR5|It allows to displays status on LCD|
|HLR6|It allows to indicate through the Buzzer/LED|

### Low Level Requirements
|  ID |    Description   |
|-----|-------------------|
|LLR1|Power up the System|
|LLR2|IR Sensor detects the arrival and departure of the train|
|LLR3|The Steppers motors rotates clockwise to open the gate|
|LLR4|The Steppers motors rotates ani clock wise to close the gate|
|LLR5|Display information on LCD module|
|LLR6|Alter the people through the buzzer/LED|

## Application
- Railway gate controlling
- Parking gate controlling

## Test Cases
| Test ID| Test Case Objective | Input Data | Excepted Data |
|--------|---------------------|------------|---------------|
|TC_1|Power up the System      |Turning ON the system|Display “Welcome to Railway Gate System”|
|TC_2|Arrival of the Train     |Detecting IR Rays from the sensor|Closes the gate <br /> Displays “The train has arrived” <br /> Buzzer\LED ON|
|TC_3|Departure of the train|Detecting IR Rays from the sensor|Gate is opened <br /> Displays “The train has left the station” <br /> Buzzer\LED OFF|
