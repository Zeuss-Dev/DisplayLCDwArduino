// include the library code:
#include <LiquidCrystal.h>

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte Song[8] = {
0b00001,
0b00011,
0b00101,
0b01001,
0b01001,
0b01011,
0b11011,
0b11000
};

void setup() 
{
	// set up the LCD's number of columns and rows:
	lcd.begin(16, 2);

	// Clears the LCD screen
	lcd.clear();
  	// Print a message to the LCD.
	lcd.print("Dalas Review");
  
  	lcd.createChar(0, Song);

	// set the cursor to column 0, line 1
	// (note: line 1 is the second row, since counting begins with 0):
	lcd.setCursor(0, 1);
	// Print a message to the LCD.
	lcd.print("Mini..!!");
	lcd.setCursor(10, 1);
  	lcd.write(byte(8));
}

void loop() 
{

}
