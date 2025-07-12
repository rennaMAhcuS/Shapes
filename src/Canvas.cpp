#include <SFML/Window/Event.hpp>
#include <Shapes/Canvas.hpp>

void Canvas::add_shape(Shape* s) { shapes.push_back(s); }

void Canvas::display_canvas() const {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "MiniNetSim Canvas");

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
            else if (const auto* keyPressed =
                         event->getIf<sf::Event::KeyPressed>()) {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    window.close();
            }
        }

        window.clear(sf::Color::Black);
        for (const auto* s : shapes) {
            s->draw(window);
        }
        window.display();
    }
}
