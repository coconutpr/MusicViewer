#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "graphics.h"
#include "audio.h"
#include "algo.h"
#include <iostream>

int main() {
    // Configura la finestra
    sf::VideoMode mode({800u, 400u});
    sf::RenderWindow window(mode, "Visualitzador de Música - SFML 3.0.2");

    // Carrega un so (ajusta la ruta segons on tinguis el fitxer)
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("sample.wav")) {
        std::cerr << "No s'ha pogut carregar l'arxiu d'àudio!\n";
    }
    sf::Sound sound(buffer);
    sound.play();

    // Bucle principal
    while (window.isOpen()) {
        // Nou sistema d’esdeveniments amb optional
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Pinta
        window.clear(sf::Color::Black);
        Graphics::drawRectangle(window);
        window.display();
    }

    return 0;
}
