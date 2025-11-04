#include "graphics.h"
#include <SFML/Graphics.hpp>

void Graphics::drawRectangle(sf::RenderWindow& window) {
    sf::RectangleShape rect({100.f, 50.f});
    rect.setPosition(sf::Vector2f(200.f, 150.f));
    rect.setFillColor(sf::Color::Cyan);
    window.draw(rect);
}
