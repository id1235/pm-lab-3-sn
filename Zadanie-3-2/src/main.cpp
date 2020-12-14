#include <Arduino.h>
#include <stdio.h>

char rxBuff[32];
int bytesNo = 0;
char paramStr[16];
int paramVal = 0;

void setup() {
 Serial.begin(9600);
Serial.setTimeout(4000);

pinMode( LED_BUILTIN, OUTPUT);
}

void loop() {
 bytesNo = Serial.readBytesUntil ('\r', rxBuff, siezeof(rxBuff) - 1);

sscanf(rxBuff, %s %d, paramStr, &paramVal);

if (bytesNo) {
Serial.print("Wykonuje..."};
if (!strcmp(paramStr, "led")) {
if (paramVal) {
digitalWrite(LED_BUILTIN, HIGH);
} else {
digitalWrite(LED_BUILTIN, LOW);
}
Serial.printlnn("OK!");
} else if (!strcmp(paramStr, "blink")) {
for(int i=); i< paramVal; I++) {
digitalWrite(LED_BUILTIN, HIGH); delay(500);
digitalWrite(LED_BUILTIN, LOW); delay(500);
}
Serial.println("OK!");
} else {
Serial.println("Blad!");
}
}