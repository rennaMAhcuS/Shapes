#pragma once
#include <vector>

#include "Shapes/Shape.hpp"

class Canvas {
    std::vector<Shape*> shapes;

   public:
    void add_shape(Shape* s);
    void display_canvas() const;
};
