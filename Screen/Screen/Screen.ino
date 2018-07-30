#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// OLED display TWI address
#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(-1);

//#if (SSD1306_LCDHEIGHT != 64)
//#error("Height incorrect, please fix Adafruit_SSD1306.h!");
//#endif

 //128 x 64 screen

void setup() {
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.setTextColor(WHITE);
  //display.print("pressureMeasurement");
  //display.setCursor(X, Y);
  display.clearDisplay();
  display.display();
}


  int i = 63;
  int dir = 0;
  
void loop() {

  //display.drawPixel(X, Y, COLOR);
  display.drawPixel(i, 31, WHITE);
//  display.drawPixel(63, 32, WHITE);
//  display.drawPixel(63, 33, WHITE);
//  display.drawPixel(63, 34, WHITE);
//  display.drawPixel(63, 35, WHITE);
//  display.drawPixel(63, 36, WHITE);
//  display.drawPixel(63, 37, WHITE);
//  display.drawPixel(63, 38, WHITE);
  display.display();
  delay(1);
  display.drawPixel(i, 31, BLACK);
  display.display();

  if(i>=68)
  {
    dir = 0;
  }
  else if(i<=58)
  {
    dir = 1;
  }
  
  if(dir==1)
  {
    i++;
  }
  else
  {
    i--;
  }
  
}
