#include <Shapes/Ellipse.hpp>

Ellipse::Ellipse(const float x, const float y, const int semi_maj,
                 const int semi_min)
    : Shape(x, y) {
    this->semi_major = semi_maj;
    this->semi_minor = semi_min;
    this->id = 3;
}

int Ellipse::get_x_length() const { return this->semi_major; }

int Ellipse::get_y_length() const { return this->semi_minor; }

int Ellipse::get_length() const { return 2 * this->semi_major; }

void Ellipse::draw(sf::RenderWindow& window) const {
    sf::CircleShape ellipseShape(1.f);
    ellipseShape.setScale(
        {static_cast<float>(semi_major), static_cast<float>(semi_minor)});
    auto [x, y] = this->get_coordinates();
    ellipseShape.setPosition({static_cast<float>(x), static_cast<float>(y)});
    ellipseShape.setFillColor(sf::Color::White);
    window.draw(ellipseShape);
}
