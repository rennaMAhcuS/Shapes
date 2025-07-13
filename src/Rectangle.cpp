#include "Shapes/Rectangle.hpp"

Rectangle::Rectangle(const float x, const float y, const int len, const int br)
    : Shape(x, y) {
    this->length = len;
    this->breadth = br;
    this->id = 0;
}

int Rectangle::get_length() const { return this->length; }

int Rectangle::get_breadth() const { return this->breadth; }

int Rectangle::get_area() const { return this->length * this->breadth; }

int Rectangle::get_perimeter() const {
    return 2 * (this->length + this->breadth);
}

bool Rectangle::is_square() const { return (this->length == this->breadth); }

void Rectangle::draw(sf::RenderWindow& window) const {
    sf::RectangleShape rectShape(
        {static_cast<float>(length), static_cast<float>(breadth)});
    auto [x, y] = this->get_coordinates();
    rectShape.setPosition({static_cast<float>(x), static_cast<float>(y)});
    rectShape.setFillColor(sf::Color::White);
    window.draw(rectShape);
}
