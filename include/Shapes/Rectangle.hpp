#pragma once
#include <SFML/Graphics.hpp>
#include <Shapes/Shape.hpp>

class Rectangle : public Shape {
    int length;
    int breadth;
    void draw(sf::RenderWindow& window) const override;

   public:
    Rectangle(float x, float y, int len, int br);

    [[nodiscard]] int get_length() const override;  // Returns length
    [[nodiscard]] int get_breadth() const;
    [[nodiscard]] int get_area() const;
    [[nodiscard]] int get_perimeter() const;
    [[nodiscard]] bool is_square() const;
};
