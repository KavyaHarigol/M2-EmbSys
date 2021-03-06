# Involuntary Railway Gate System

## Description
- The project Involuntary Railway Gate System attempts to automate the opening and closing of gates at a railway level crossing. With the help of this the human intervention can be avoided by automating the process and also many railway level crossing accidents can be prevented. It includes IR Sensor, Micro Controller, LCD, motor and buzzer/LED.
 
## Identifying Features
- An IR sensor is used to sense the arrival and departure of the train
- The gate automatically opens and close upon the arrival and departure of the train
- LCD displays the information about the arrival & departure of train
- When the train arrives buzzer sounds to alter the people/vehicle

## SWOT Analysis

![swotanac](https://user-images.githubusercontent.com/98875082/155748356-33680df4-168e-46d8-824b-deb9ec6d1820.png)

## 5W's and 1H

![WHc](https://user-images.githubusercontent.com/98875082/155748367-ac560f96-fde8-4672-a971-20d8012d03e2.png)

## Requirements
### High Level Requirements
|  ID |    Description   | Status |
|-----|-------------------|--------|
|HLR1|It shall open the gate on the arrival of train| Implemented |
|HLR2|It shall close the gate on the departure of train | Implemented |
|HLR3|It shall display the information about arrival & departure of train| Implemented |
|HLR4|It shall alter through buzzer/LED when train comes| Implemented |

### Low Level Requirements
|  ID |    Description   | HLR ID | Status |
|-----|-------------------|--------|-------|
|LLR1|IR sensor detects the arrival and departure of the train|HLR1 & HLR2| Implemented |
|LLR2|The motors rotates clockwise to open the gate|HLR1| Implemented |
|LLR3|The motors rotates ani clockwise to close the gate|HLR2| Implemented |
|LLR4|The ADC convert the analog vlaue to dogital value to dosplay|HLR3| Implemented |
|LLR5|The micro controller should activate buzzer/LED|HLR4| Implemented |




