//libraries to be used
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

const byte ROWS = 4 //Four 
const byte COLS =3 //Three columns
char keys[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},\azAz|\A
  {'7','8','9'},
  {'','2','3'},
}


int Relay = 2;

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:

}
