#include "Shapes/Shape.hpp"

Shape::Shape(const float x, const float y) {
    this->coordinates.first = x;
    this->coordinates.second = y;
    this->id = -1;
}

std::pair<int, int> Shape::get_coordinates() const { return this->coordinates; }

int Shape::get_id() const { return this->id; }
