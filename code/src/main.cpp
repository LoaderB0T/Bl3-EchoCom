#include <Arduino.h>
#include <FastLED.h>
#include <SPI.h>
#include "Adafruit_GFX.h"
#include <Waveshare_ILI9486.h>
#include "RgbColorType.h"
#include <Adafruit_ImageReader.h>

#define NUM_LEDS 2
#define DATA_PIN 3
CRGB leds[NUM_LEDS];

Waveshare_ILI9486 tft;

void setup()
{
  // FastLED.addLeds<WS2812, DATA_PIN>(leds, NUM_LEDS).init();

  SPI.begin();
  Serial.begin(9600);
  Serial.println("starting");

  // leds[0].setRGB(0, 0, 255);
  // leds[1].setRGB(0, 0, 255);
  // FastLED.show();

  tft.begin();
  tft.setRotation(1);
  tft.setTextSize(5);
  tft.setCursor(20, 110);
  tft.fillScreen(RgbColorType::rgbToUint(0, 0, 0));
  tft.setTextColor((RgbColorType::rgbToUint(255, 200, 0)));
  tft.print("/r/borderlands3");
}

void loop()
{
  FastLED.addLeds<WS2812, DATA_PIN, EOrder::GRB>(leds, NUM_LEDS);

  auto rndm1 = random(100, 255);
  auto rndm2 = random(100, 255);
  auto rndm3 = random(100, 255);
  auto rndm4 = random(100, 255);
  auto rndm5 = random(30, 255);
  leds[0].setRGB(min(rndm1, rndm2) - 20, rndm1, rndm2);
  leds[1].setRGB(min(rndm3, rndm4) - 20, rndm3, rndm4);
  FastLED.show();

  delay(rndm5);
}
