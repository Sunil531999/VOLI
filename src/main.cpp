#include <Arduino.h>
#include "Eyes.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  delay(2000);  // Pause for 2 seconds
  display.clearDisplay();
  display.display();
}

void loop() {
  
  // for (int i = 0; i < confusedallArray_LEN; i++) {
  //   display.clearDisplay();  // Clear the previous display

  //   // Draw the bitmap on the OLED display
  //   display.drawBitmap(0, 0, confusedallArray[i], SCREEN_WIDTH, SCREEN_HEIGHT, 1);

  //   display.display();  // Display the updated content
  //   delay(90);  // Adjust delay as needed
  // }
  // for (int i = 0; i < angryallArray_LEN; i++) {
  //   display.clearDisplay();  // Clear the previous display

  //   // Draw the bitmap on the OLED display
  //   display.drawBitmap(0, 0, angryallArray[i], SCREEN_WIDTH, SCREEN_HEIGHT, 1);

  //   display.display();  // Display the updated content
  //   delay(90);  // Adjust delay as needed
  // }
  // for (int i = 0; i < disappointedallArray_LEN; i++) {
  //   display.clearDisplay();  // Clear the previous display

  //   // Draw the bitmap on the OLED display
  //   display.drawBitmap(0, 0, disappointedallArray[i], SCREEN_WIDTH, SCREEN_HEIGHT, 1);

  //   display.display();  // Display the updated content
  //   delay(90);  // Adjust delay as needed
  // }
  // for (int i = 0; i < happyallArray_LEN; i++) {
  //   display.clearDisplay();  // Clear the previous display

  //   // Draw the bitmap on the OLED display
  //   display.drawBitmap(0, 0, happyallArray[i], SCREEN_WIDTH, SCREEN_HEIGHT, 1);

  //   display.display();  // Display the updated content
  //   delay(90);  // Adjust delay as needed
  // }
  // for (int i = 0; i < hmmhmmallArray_LEN; i++) {
  //   display.clearDisplay();  // Clear the previous display

  //   // Draw the bitmap on the OLED display
  //   display.drawBitmap(0, 0, hmmhmmallArray[i], SCREEN_WIDTH, SCREEN_HEIGHT, 1);

  //   display.display();  // Display the updated content
  //   delay(90);  // Adjust delay as needed
  // }
  for (int i = 0; i < normalallArray_LEN; i++) {
    display.clearDisplay();  // Clear the previous display

    // Draw the bitmap on the OLED display
    display.drawBitmap(0, 0, normalallArray[i], SCREEN_WIDTH, SCREEN_HEIGHT, 1);

    display.display();  // Display the updated content
    delay(90);  // Adjust delay as needed
  }
}
