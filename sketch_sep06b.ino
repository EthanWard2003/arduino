#include <Arduino.h>
#include <TM1637Display.h>
#define CLK 2
#define DIO 3
#define TEST_DELAY   2000

TM1637Display display(CLK, DIO);

void setup()
{
}

void loop()
{
uint8_t data[] = { 0xff, 0xff, 0xff, 0xff };
uint8_t blank[] = { 0x00, 0x00, 0x00, 0x00 };
display.setBrightness(0x0f);

display.clear();
display. showNumberDec(10,false);
delay(1000);
display.clear();
display. showNumberDec(9,false);
delay(1000);
display.clear();
display. showNumberDec(8,false);
delay(1000);
display.clear();
display. showNumberDec(7,false);
delay(1000);
display.clear();
display. showNumberDec(6,false);
delay(1000);
display.clear();
display. showNumberDec(5,false);
delay(1000);
display.clear();
display. showNumberDec(4,false);
delay(1000);
display.clear();
display. showNumberDec(3,false);
delay(1000);
display.clear();
display. showNumberDec(2,false);
delay(1000);
display.clear();
display. showNumberDec(1,false);
delay(1000);
display.clear();
}
