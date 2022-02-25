# Involuntary Railway Gate System

## Description
- The project Involuntary Railway Gate System attempts to automate the opening and closing of gates at a railway level crossing. With the help of this the human intervention can be avoided by automating the process and also many railway level crossing accidents can be prevented. It includes IR Sensor, Micro Controller, LCD, motor and buzzer/LED.
 
## Identifying Features
- An IR sensor is used to sense the arrival and departure of the train
- The gate automatically opens and close upon the arrival and departure of the train
- LCD displays the information about the arrival & departure of train
- When the train arrives buzzer sounds to alter the people/vehicle

## SWOT Analysis

![swot](https://user-images.githubusercontent.com/98875082/155743996-740b7288-6245-4d9d-8957-d42487d6d545.png)
![SWOT_new1](https://user-images.githubusercontent.com/98875082/155744002-13018437-acad-4416-8d41-d96b5e80dffc.png)
![SWOT_new2](https://user-images.githubusercontent.com/98875082/155744007-f8d024b5-e08e-4e6f-9491-e035f6f2a323.png)


## 5W's and 1H

![W H](https://user-images.githubusercontent.com/98875082/155744013-8a1db2f9-ca11-497a-91ba-f5c180b5a2b4.png)

## Requirements
### High Level Requirements
|  ID |    Description   |
|-----|-------------------|
|HLR1|It shall open the gate on the arrival of train|
|HLR2|It shall close the gate on the departure of train |
|HLR3|It shall display the information about arrival & departure of train|
|HLR4|It shall alter throght buzzer/LED when train comes|

### Low Level Requirements
|  ID |    Description   | HLR ID |
|-----|-------------------|--------|
|LLR1|IR sensor detects the arrival and departure of the train|HLR1 & HLR2|
|LLR2|The motors rotates clockwise to open the gate|HLR2|
|LLR3|The motors rotates ani clockwise to close the gate|HLR3|
|LLR4|The ADC convert the analog vlaue to dogital value to dosplay|HLR3|
|LLR5|The micro controller should activate buzzer/LED|HLR4|



