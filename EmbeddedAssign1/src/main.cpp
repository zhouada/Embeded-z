#include <Arduino.h>
// 设置 LED 引脚
 int led_pins[6]={2,4,5,18,19,21};
void setup() {
    // 设定引脚为输出模式
    for(int i = 0; i <= 5; i++)
    pinMode(led_pins[i], OUTPUT);
   Serial.begin(9600);
}

void loop() {
    for(int i = 0; i <= 5; i++ )
    {
      digitalWrite(led_pins[i] , HIGH);
      delay(500);
      digitalWrite(led_pins[i] , LOW);
    }
    delay(500);
    for(int i = 4;i > 0;i--)
    {
      digitalWrite(led_pins[i] , HIGH);
      delay(500);
      digitalWrite(led_pins[i], LOW);
      }
      delay(500);
 
}