void display2()
{
  lcd.clear();
  lcd.setCursor(0, 0);                        // setting  cursor position to top left of LCD
  lcd.print("Train Arrived.");
  lcd.setCursor(2, 1);                        // setting cursor position to 2nd col of 1st row
  lcd.print("Please wait");
  digitalWrite(Buzzer, HIGH);                 // Turn ON buzzer
  digitalWrite(led, HIGH);                    // Turn On LED
  delay(5000);
}

void display1()
{
  lcd.clear();
  lcd.setCursor(0, 0);                        // setting  cursor position to top left of LCD
  lcd.print("Train Departured,");
  lcd.setCursor(2, 1);                        // setting cursor position to 2nd col of 1st row
  lcd.print("Gate is open");
  digitalWrite(Buzzer, LOW);                  // Turn OFF buzzer
  digitalWrite(led, LOW);                     // Turn OFF LED
  delay(5000);
}
