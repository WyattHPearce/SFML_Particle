#include "Particle.h"

Particle::Particle(sf::Vector2f position, sf::Vector2f size) : position(position), size(size) {
    rect.setPosition(position);
    rect.setSize(size);
    rect.setOrigin(rect.getSize() / 2.0f); // rectMode(CENTER) equivalent
}

sf::RectangleShape Particle::getRect() {
    return rect;
}