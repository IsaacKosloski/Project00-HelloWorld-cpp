// Created by Isaac Kosloski on 15/06/2025.
// SFML (Simple and Fast Multimedia Library) for Audio

#include <SFML/Audio.hpp>

int main() {
    sf::SoundBuffer buffer;
    buffer.loadFromFile("hello_world_voice.wav"); // arquivo de áudio com "Hello, World!"

    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

    sf::sleep(sf::seconds(2));
}