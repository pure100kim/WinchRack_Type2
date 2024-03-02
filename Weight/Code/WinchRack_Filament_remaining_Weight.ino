#include "HX711.h"
#include <Wire.h>
#include <SSD1306Ascii.h> // i2C OLED
#include <SSD1306AsciiWire.h> // i2C OLED

// I2C pins:
// Arduino: SDA: A4 SCL: A5

// HX711 회로 연결
#define LOADCELL_DOUT_PIN 2 //DT
#define LOADCELL_SCK_PIN  3 //SCK

// loadcellvalue 설정
float loadcellValue = 372.0; // 5kg loadcell에 대한 값을 사용

// 측정한 offset값 및 빈 스풀의 무게 적용
float offsetValue = 297264; // 측정한 offset 적용시 무게 -0.81g
float emptySpoolWeight = 250.0; // 빈 스풀 측정한 무게 250g 기입


HX711 scale;
SSD1306AsciiWire oled;

void setup() {
  Serial.begin(115200);

  // 로드셀 HX711 보드 핀 설정
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);

  // OLED 초기화 및 "WinchRack Type2 scale" 표시
  Wire.begin();
  oled.begin(&Adafruit128x64, 0x3C);

  oled.setFont(Adafruit5x7);
  oled.clear();
  oled.println("WinchRack Type2");
  oled.println("Filament remaining");
  oled.println("");
  oled.println("Created by Mr.Goodman");

  // 부팅 후 잠시 대기 (2초)
  delay(2000);

  // offset, scale 셋팅
  scale.set_offset(offsetValue);
  scale.set_scale(loadcellValue); 

  // 설정된 오프셋 및 스케일 값 확인
  oled.print("Offset value :\t");
  oled.println(scale.get_offset());
  oled.print("Scale value :\t");
  oled.println(scale.get_scale());


  // 3초 대기 후 OLED 클리어
  delay(3000);
  oled.clear();

  // 무게 안내문자 표시
  oled.println("WinchRack Type2");
  oled.println("Filament remaining");
  
}

void loop() {
  float value;
  float Weight;

  // 무게 측정값 (7회 측정 평균값) 
  value = scale.get_units(7);
  
 // 필라멘트 잔량  계산 및 표기
  Weight = value - emptySpoolWeight;
  oled.setCursor(0, 3);
  oled.print("Weight : ");
  oled.print(Weight);
  oled.println(" g");

 //현재 적용된 스케일값 표기
  oled.setCursor(0, 6);
  oled.print("Offset value :\t");
  oled.println(scale.get_offset());

  delay(1000);

}
