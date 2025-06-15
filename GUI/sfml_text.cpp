// Created by Isaac Kosloski on 15/06/2025.
// SFML (Simple and Fast Multimedia Library) for GUI

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400,200), "Hello, SFML");
    sf::Font font;
    font.loadFromFile("arial.ttf");

    sf::Text text("Hello, World!", font, 30);
    text.setFillColor(sf::Color::White);
    text.setPosition(50, 80);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();

        window.clear(sf::Color::Black);
        window.draw(text);
        window.display();
    }
}