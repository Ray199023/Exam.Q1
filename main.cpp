#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    DigitalIn button1(p13);
    DigitalIn button2(p16);
     
     DigitalInOut Led1(p23);
     DigitalInOut led2(p25);

    while (1) {
      if (BUTTON1){
          LED1 = 1;
          led2 =  0;
      }else if (button2) {
      led1 = 0;
      led2 = 1;
      } else {
       led1 = 0
       led2 = 0
      }
    }
}

