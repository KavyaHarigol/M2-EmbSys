void display2()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Train Arrived.");
  lcd.setCursor(2, 1);
  lcd.print("Please wait");
  digitalWrite(Buzzer, HIGH);
  digitalWrite(led, HIGH);
  delay(5000);
}

void display1()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Train Departured,");
  lcd.setCursor(2, 1);
  lcd.print("Gate is open");
  digitalWrite(Buzzer, LOW);
  digitalWrite(led, LOW);
  delay(5000);
}
