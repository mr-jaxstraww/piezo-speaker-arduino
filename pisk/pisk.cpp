#include <pisk.h>
#include <Arduino.h>
//download at https://github.com/mr-jaxstraww/piezo-speaker-arduino and copy to Arduino/libraries
void pisk(int pin,int count,int timer,int timer_pwm){
   // pin - dinamic pin ; count - number of repetitions ; time - length of sound ; timer_pwm - interval betweem sounds ; 
   // pin - пин Пьезо Динамика ; count - количество повторов ; time - длина звуковой волны ; timer_pwm - интервал между звуками ; 
   for(int v = 0 ; v < count; v++)
   { 
      for(int i =0 ; i < timer; i++)
      {
        digitalWrite(pin,HIGH);
        delay(1);
        digitalWrite(pin,LOW);
        delay(1);
      };
      delay(timer_pwm);
   };
}

void piskSOS(int pin){
    pisk(pin,1,100,80);
    pisk(pin,1,100,80);
    pisk(pin,1,100,80);
    pisk(pin,1,500,80);
    pisk(pin,1,500,80);
    pisk(pin,1,500,80);
    pisk(pin,1,100,80);
    pisk(pin,1,100,80);
    pisk(pin,1,100,80);
}