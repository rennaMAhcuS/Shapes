#pragma once
#include <SFML/Graphics.hpp>

#include "Shapes/Shape.hpp"

class Ellipse final : public Shape {
    int semi_major;
    int semi_minor;
    void draw(sf::RenderWindow& window) const override;

   public:
    Ellipse(float x, float y, int semi_maj, int semi_min);

    [[nodiscard]] int get_x_length() const;
    [[nodiscard]] int get_y_length() const;
    [[nodiscard]] int get_length() const override;  // Returns Major axis length
};
