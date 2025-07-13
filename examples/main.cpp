#include <iostream>
#include <vector>

#include "Shapes/Canvas.hpp"
#include "Shapes/Circle.hpp"
#include "Shapes/Ellipse.hpp"
#include "Shapes/Rectangle.hpp"
#include "Shapes/Shape.hpp"
#include "Shapes/Square.hpp"

int main() {
    Rectangle rec(100, 200, 46, 53);
    Square sq(300, 400, 60);
    Circle ci(250, 60, 33);
    Ellipse el(70, 80, 58, 29);

    for (const std::vector<Shape*> shapes = {&rec, &sq, &ci, &el};
         Shape * s : shapes) {
        auto [x, y] = s->get_coordinates();
        std::cout << "Shape ID: " << s->get_id() << ", Pos: (" << x << ", " << y
                  << ")"
                  << ", Length: " << s->get_length();

        switch (s->get_id()) {
            case 0: {  // Rectangle
                const auto* r = dynamic_cast<Rectangle*>(s);
                std::cout << ", Breadth: " << r->get_breadth()
                          << ", Area: " << r->get_area()
                          << ", Perimeter: " << r->get_perimeter()
                          << ", isSquare: " << std::boolalpha << r->is_square();
                break;
            }
            case 1: {  // Square
                const auto* sqp = dynamic_cast<Square*>(s);
                std::cout << ", isSquare: " << std::boolalpha
                          << sqp->is_square();
                break;
            }
            case 2: {  // Circle
                const auto* c = dynamic_cast<Circle*>(s);
                std::cout << ", Radius: " << c->get_radii();
                break;
            }
            case 3: {  // Ellipse
                const auto* e = dynamic_cast<Ellipse*>(s);
                std::cout << ", XLength: " << e->get_x_length()
                          << ", YLength: " << e->get_y_length();
                break;
            }
            default:;
        }
        std::cout << std::endl;
    }

    Canvas window;
    window.add_shape(&rec);
    window.add_shape(&sq);
    window.add_shape(&ci);
    window.add_shape(&el);
    window.display_canvas();

    return 0;
}
