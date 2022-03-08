#include <LiquidCrystal.h>                               //LCD library
#include <Servo.h>                                      //Servo motor library
#define Buzzer 13                                      //buzzer
#define led 12                                        //led

Servo servoMain;                                     // Defining Servo motor
int trigpin = 10;
int echopin = 11;
int distance;
float duration;
float cm;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);             //lcd(RS,EN,D4,D5,D6,D7)

void setup()
{
    servoMain.attach(9);                        // servo on digital pin 10
    pinMode(trigpin, OUTPUT);                   // pin 10 as output
    pinMode(echopin, INPUT);                    // pin 11 as input
    pinMode(Buzzer,OUTPUT);                     // pin 13 as output
    pinMode(led,OUTPUT);                        // pin 12 as putput
    Serial.begin(9600);
    lcd.begin(16, 2);                           // set up the lcd 16x2
}

void loop()
{ 
  digitalWrite(trigpin, LOW);
  delay(2);  
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);  
  digitalWrite(trigpin, LOW);  
  duration = pulseIn(echopin, HIGH);  
  cm = (duration/58.82);
  distance = cm;
  
  if(distance<60)                           // check distance is then than 60cm
  {
    servoMain.write(0);                     // Turn Servo back to center position (clockwise Rotate)
    display1();                             // go to lcd function
    delay(3000); 
  }
   else
   {
     servoMain.write(90);                   // Turn Servo back to center position (Anticlockwise Rotate)
     display2();                            // go to lcd function
     delay(3000);
   }   
}
