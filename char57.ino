#include "char57.h"
chars q;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  
  int8_t t, j = 0, c = 0, h = 1;
  for (int8_t i = 32; i < 0x7F; i++) {
    h = 0;
    for (j = 0; j < 7; j++) {
      t = q.encode(i, j);
      if (!h && t > -1) {
        Serial.println("------01234567---------------------------");
        Serial.print(i, HEX);
        Serial.print("  ==  ");
        Serial.println(char(i));
        Serial.println("");
        c++;
        h++;
      }
      if (t != -1) {
        Serial.print(j);
        Serial.print(" == ");
        Serial.println(space(t));
      }
    }
  }
  Serial.print("items # = ");
  Serial.println(c);
}

String space(uint8_t c) {
  String s = "";
  for (int i = 0; i < 8; i++) {
    s = String(bitRead(c, i) ? "®" : " ") + s;
  }

  return s;
}

void loop() {
  // put your main code here, to run repeatedly:

}
