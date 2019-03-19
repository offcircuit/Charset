#include "Charset.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


  uint8_t items = 0;
  for (int8_t character = 32; character < 0x7F; character++) {
    for (int8_t row = 0; row < 8; row++) {
      int8_t bitset = sift(character, row);
      if (!row) {
        Serial.println("  01234567  ");
        Serial.print(" ");
        Serial.print(character, HEX);
        Serial.println("  =  (" + String(char(character)) + ")");
        Serial.println("  01234567  ");
        items++;
      }
      Serial.print(String(row) +  " ");
      for (int bit = 8; bit > 0; bit--) Serial.print(bitRead(bitset, bit - 1) ? "®" : " ");
      Serial.print(" " +  String(row));
      Serial.println();
    }
  }
  Serial.println("items # = " + String(items));
}

void loop() {
  // put your main code here, to run repeatedly:
}
