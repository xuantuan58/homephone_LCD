// Chương trình giao tiếp hiển thị LCD Gphone/Homephone/ST7565
//------------------------------------------
// So thu tu GLCD và kết nối với TIVA
// Pin  |   Chuc nang       |   TIVA C
//------------------------------------------
// 1    |    GND            |   GND
// 2    |    RST            |   PE1
// 3    |    SCK            |   PD2
// 4    |    A0(C/D)        |   PD3
// 5    |    LED K+ (3.3V)  |   3.3V
// 6    |    LED A (GND)    |   GND
// 7    |    SDA            |   PD1
// 8    |    CS             |   PE2
// 9    |    VCC            |   3.3V
// 10   |    GND            |   GND

#include "homephone.h"

#define SDA (12)
#define RST (9)
#define SCK (13)
#define CS (11)
#define A0 (10)
homephone lcd (SDA, SCK, A0, RST, CS);

void setup () {
  lcd.begin();
  
  lcd.setContrast(0x11);
  lcd.clearDisplay();
  lcd.drawPixel(60, 32, black);
  lcd.drawLine(100, 5, 110, 10, black);
  lcd.drawRect(60, 1, 15, 5, black);
  lcd.fillRect(80, 1, 15, 5, black);
  lcd.drawCircle(10, 55, 8, black);
  lcd.fillCircle(40, 55, 8, black);
  lcd.drawTriangle(1, 2, 17, 9, 8, 15, black);
  lcd.fillTriangle(15, 20, 37, 39, 28, 15, black);
  lcd.setTextColor(black, white);
  lcd.setCursor(0, 15);
  lcd.print("Test LCD");
  
  // call display after all
  lcd.display();
}
void loop() {

}