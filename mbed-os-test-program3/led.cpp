#include "mbed.h"


void Led(DigitalOut &ledpin, int i)

{

   for (int j = 0; j < 2 * i; ++j)

   {                     //blink for 10 times

      ledpin = !ledpin; // toggle led

      ThisThread::sleep_for(100ms);

   }

}