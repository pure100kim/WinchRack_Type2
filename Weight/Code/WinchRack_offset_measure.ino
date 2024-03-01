#include "HX711.h"
#include <Wire.h>
#include <SSD1306Ascii.h> // i2C OLED
#include <SSD1306AsciiWire.h> // i2C OLED

// HX711 회로 연결
#define LOADCELL_DOUT_PIN 2
#define LOADCELL_SCK_PIN  3

// loadcellValue 적용
float loadcellValue = 372.0; // 5kg loadcell에 대한 값을 사용

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
  oled.println("offset Measure");
  oled.println("");
  oled.println("Created by Mr.Goodman");

  // 부팅 후 잠시 대기 (2초)
  delay(2000);

  // 측정값 1회 읽어오기
  oled.print("read: \t");
  oled.println(scale.read());
  delay(3000);


  // 스케일 설정, 오프셋 설정(10회 측정 후 평균값 적용)
  scale.set_scale(loadcellValue); 
  scale.tare(10);   


  // 설정된 오프셋 및 스케일 값 확인
  oled.print("Offset value :\t");
  oled.println(scale.get_offset());
  oled.print("Scale value :\t");
  oled.println(scale.get_scale());
  delay(1000);



  // 자동 설정된 오프셋 값 OLED에 출력
  oled.clear();
  oled.print("Offset : ");
  oled.println(scale.get_offset());


  // 3초 대기 후 OLED 클리어
  delay(3000);
  oled.clear();

  // 무게 안내문자 표시
  oled.println("WinChRack Type2 ");
  oled.println("Filament remaining");

}

void loop() {
  float value;
  
  // 오프셋 및 스케일이 적용된 측정값 (5회 측정 평균값) 
  value = scale.get_units(7);

  oled.setCursor(0, 3);
  oled.print("Weight : ");
  oled.print(value);
  oled.println(" g");

  oled.setCursor(0, 6);
  oled.print("Offset value :\t");
  oled.println(scale.get_offset());
  oled.print("Scale value :\t");
  oled.println(scale.get_scale());

  delay(1000);
}
