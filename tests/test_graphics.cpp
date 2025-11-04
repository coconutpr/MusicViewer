#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({800u, 600u}), "Test SFML 3.0.2");

    sf::RectangleShape rect(sf::Vector2f(100.f, 50.f));
    rect.setPosition(sf::Vector2f(200.f, 150.f));
    rect.setFillColor(sf::Color::Cyan);

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(rect);
        window.display();
    }

    return 0;
}
