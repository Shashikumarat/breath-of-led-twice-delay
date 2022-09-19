#include <Arduino.h>
#define red_led 4
#define pwm_frequncy 5000
#define pwm_channel 0
#define pwm_resolution 8

uint8_t a;
void setup() 
{
 ledcSetup(pwm_channel,pwm_frequncy,pwm_resolution);
 ledcAttachPin(red_led,pwm_channel);
}

void loop()
{
  for(a=0;a<255;a++)
  {
    ledcWrite(pwm_channel,a);
    delay(10);
  }
   for(a=255;a>0;a--)
  {
    ledcWrite(pwm_channel,a);
    delay(10);
  }
}