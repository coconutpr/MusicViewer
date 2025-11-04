#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RectangleShape rect({100.f, 50.f});
    rect.setPosition({200.f, 150.f});
    std::cout << "SFML version: "
              << SFML_VERSION_MAJOR << "."
              << SFML_VERSION_MINOR << "."
              << SFML_VERSION_PATCH << std::endl;
    std::cout << "\nPrem una tecla per sortir...";
    std::cin.get();
}
