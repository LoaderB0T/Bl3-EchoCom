#include "RgbColorType.h"

RgbColorType::RgbColorType(size_t r, size_t g, size_t b)
{
  this->r = r;
  this->g = g;
  this->b = b;
}

uint16_t RgbColorType::toUint()
{
  return (this->r << 11) | (this->g << 5) | this->b;
}

RgbColorType colorWhite(255, 255, 255);
RgbColorType colorBlack(0, 0, 0);
RgbColorType colorOrange(255, 233, 0);
RgbColorType colorRed(255, 0, 0);
RgbColorType colorGreen(0, 255, 0);