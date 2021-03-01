#pragma once
#include <SFML/Graphics.hpp>

class Tile {
public:
    enum type {
        wall,
        empty
    };
    Tile(type type);
    type getType();
    sf::Sprite getSprite();
private:
    type m_type;
    sf::Sprite m_sprite;
};