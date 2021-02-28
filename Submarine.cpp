#include "stdafx.h"
#include "Submarine.h"
#include "Entity.h"

using namespace sf;

Submarine::Submarine(Vector2f* position) {
	m_position.x = position->x;
	m_position.y = position->y;
    m_speed = 40;

	m_texture.loadFromFile("resources/placeholders/Aquatic0.png" , IntRect(48, 17, 16, 16));
	
	m_sprite.setTexture(m_texture);
}

void Submarine::update(float delta) {
    int distance = m_speed * delta;
    m_position.x += distance;
}
