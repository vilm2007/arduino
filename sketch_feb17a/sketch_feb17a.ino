#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH);


void setup() {
  Serial.begin(9600);
  Serial.println("Bihari Vilmos");
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  while (Serial.available() > 0) {
    byte adat = Serial.read();
    if (adat == 'r') {
      Serial.println("BE");
      digitalWrite(9, HIGH);
    }
    if (adat == '0') {
      Serial.println("KI");
      digitalWrite(9, LOW);
    }
    if (adat == 'g') {
      Serial.println("BE");
      digitalWrite(10, HIGH);
    }
    if (adat == '0') {
      Serial.println("KI");
      digitalWrite(10, LOW);
    }
    if (adat == 'b') {
      Serial.println("BE");
      digitalWrite(11, HIGH);
    }
    if (adat == '0') {
      Serial.println("KI");
      digitalWrite(11, LOW);
    }
    if (adat == '1') {
      Serial.println("BE");
      digitalWrite(12, HIGH);
    }
    if (adat == '0') {
      Serial.println("KI");
      digitalWrite(12, LOW);
    }
    if (adat == 's') {
      lcd.begin(16, 2);
      lcd.clear();
      lcd.print("anyuci");
      lcd.setCursor (4, 1);
      lcd.print("kicsi fia");
    }
    if (adat == 'c') {
      lcd.clear();
    }
  }
}
