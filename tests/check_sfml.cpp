#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "SFML version: "
              << SFML_VERSION_MAJOR << "."
              << SFML_VERSION_MINOR << "."
              << SFML_VERSION_PATCH << std::endl;

    std::cout << "\nPrem una tecla per sortir...";
    std::cin.get();
}
