#pragma once
#include <SFML/Graphics.hpp>
#include <Shapes/Shape.hpp>

class Circle final : public Shape {
    int radius;
    void draw(sf::RenderWindow& window) const override;

   public:
    Circle(float x, float y, int r);

    [[nodiscard]] int get_radii() const;
    [[nodiscard]] int get_length() const override;  // Returns diameter
};
