#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH      128   
#define SCREEN_HEIGHT     64   
#define OLED_RESET        -1    
#define SCREEN_ADDRESS    0x3C  

Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // OLED初始化
  OLED.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  // OLED清除显示
  OLED.clearDisplay();
  // OLED设置光标位置
  OLED.setCursor(1, 1);
  // 设置字体颜色
  OLED.setTextColor(SSD1306_WHITE);
  // 显示字符串内容
  OLED.println("hello xlab!");

  OLED.display();
}

void loop() {
  
}