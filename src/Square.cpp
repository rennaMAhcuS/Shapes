#include "Shapes/Square.hpp"

Square::Square(const float x, const float y, const int len)
    : Rectangle(x, y, len, len) {
    this->id = 1;
}
