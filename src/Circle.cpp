#include "Shapes/Circle.hpp"

Circle::Circle(const float x, const float y, const int r) : Shape(x, y) {
    this->radius = r;
    this->id = 2;
}

int Circle::get_radii() const { return this->radius; }

int Circle::get_length() const { return 2 * this->radius; }

void Circle::draw(sf::RenderWindow& window) const {
    sf::CircleShape circleShape(static_cast<float>(this->radius));
    auto [x, y] = this->get_coordinates();
    circleShape.setPosition({static_cast<float>(x), static_cast<float>(y)});
    circleShape.setFillColor(sf::Color::White);
    window.draw(circleShape);
}
