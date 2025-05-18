#include <Arduino.h>
int led[2]={0,0};//定义数组，用于记录LED的状态
void setup() {
    // 设定引脚为输出模式
   Serial.begin(9600);
   pinMode(18,OUTPUT);
   pinMode(19,OUTPUT);
}

void loop() {
 
    if(Serial.available() > 0){
    {
       char input = Serial.read();
       int digit=input-'0'+17;//将输入的数字转化为对应的引脚号
          if(led[digit-18]==0)
          {
            digitalWrite(digit,HIGH);
            led[digit-18]=1;
            printf("LED%d on\n",digit);
          }
          else
          {
            digitalWrite(digit,LOW);
            led[digit-18]=0;
            printf("LED%d off\n",digit);
          }

  }
}
 
}