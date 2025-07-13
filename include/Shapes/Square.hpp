#pragma once

#include "Shapes/Rectangle.hpp"

class Square final : public Rectangle {
   public:
    Square(float x, float y, int len);
};
