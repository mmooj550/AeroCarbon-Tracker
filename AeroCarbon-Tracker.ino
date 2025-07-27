void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  //Print a message to the LCD.
  lcd.print("CO2 detecting..."); delay(1000);
  Serial.begin(9600);          //  setup serial
    lcd.display();
}

void loop(){
  // Turn off the display:
  //lcd.noDisplay();
  // Turn on the display:
  lcd.setCursor(0,1);
  delay(100);
  val = analogRead(analogPin);     // read the input pin
  Serial.println(val);             // debug value
      	lcd.clear();
  if (val >000 && val <= 100){
		lcd.print("-----");
	}else if (val > 100 &&  val <= 320){
		lcd.print("normal");
	}else if (val > 320 && val <= 420){
		lcd.print("gas detected");
    }else if (val > 420 && val <= 530){
		lcd.print("dangerous");
    }else if (val > 530 && val <= 724){
		lcd.print("EMERGENCY!");
    }
}