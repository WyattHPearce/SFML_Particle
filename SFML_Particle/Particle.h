#pragma once

#include <SFML/Graphics.hpp>

class Particle
{

public:
    // Member variables
    sf::Vector2f position;
    sf::Vector2f size;
    sf::RectangleShape rect;

    Particle(sf::Vector2f position, sf::Vector2f size);
    sf::RectangleShape getRect();
};

