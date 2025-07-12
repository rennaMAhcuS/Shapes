#pragma once
#include <SFML/Graphics.hpp>
#include <utility>

class Canvas;

class Shape {
    friend Canvas;
    std::pair<float, float> coordinates;
    virtual void draw(sf::RenderWindow& window) const = 0;

   protected:
    int id;

   public:
    Shape(float x, float y);
    virtual ~Shape() = default;

    [[nodiscard]] std::pair<int, int> get_coordinates() const;
    [[nodiscard]] int get_id() const;
    [[nodiscard]] virtual int get_length() const = 0;
};
