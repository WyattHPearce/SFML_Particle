#include <SFML/Graphics.hpp>
#include "Particle.h"

int main()
{
    // Setup basic window
    sf::RenderWindow window(sf::VideoMode(1024, 576), "SFML Pogram");
    window.setFramerateLimit(60);

    // Create particle
    Particle p(
        sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2),
        sf::Vector2f(10, 10)
    );

    // Main Loop
    while (window.isOpen()) {

        // Event processing
        sf::Event event;
        while (window.pollEvent(event)) {

            // Close window event
            if (event.type == sf::Event::Closed) window.close();

            // Close window with escape key
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }

        // Render
        window.clear();
        window.draw(p.getRect());
        window.display();
    }

    return 0;
}
