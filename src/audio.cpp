#include "audio.h"
#include <SFML/Audio.hpp>
#include <iostream>

void Audio::playSound(const std::string& filename) {
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile(filename)) {
        std::cerr << "Error carregant el fitxer d'àudio: " << filename << "\n";
        return;
    }

    sf::Sound sound(buffer);
    sound.play();

    // En SFML 3, els estats són a l'enumeració sf::Sound::Status
    while (sound.getStatus() == sf::Sound::Status::Playing) {
        sf::sleep(sf::milliseconds(100));
    }
}
