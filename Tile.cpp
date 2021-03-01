#include "stdafx.h"
#include "Tile.h"

using namespace sf;

Tile::Tile(Tile::type type) {
    m_type = type;
    // TODO load texture from 
}

Tile::type Tile::getType() {
    return m_type;
}

Sprite Tile::getSprite() {
    return m_sprite;
}
