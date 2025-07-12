#pragma once
#include <Shapes/Shape.hpp>
#include <vector>

class Canvas {
    std::vector<Shape*> shapes;

   public:
    void add_shape(Shape* s);
    void display_canvas() const;
};
