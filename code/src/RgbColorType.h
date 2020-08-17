#ifndef RGB_COLOR_TYPE_h
#define RGB_COLOR_TYPE_h

#include <Arduino.h>

class RgbColorType
{
public:
  RgbColorType(size_t r, size_t g, size_t b);
  size_t r;
  size_t g;
  size_t b;
  uint16_t toUint();
  static uint16_t rgbToUint(byte r, byte g, byte b)
  {
    return (r << 11) | (g << 5) | b;
  }

private:
};

#endif