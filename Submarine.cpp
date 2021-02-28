#include "stdafx.h"
#include "Submarine.h"
#include "Entity.h"

using namespace sf;

Submarine::Submarine(Vector2f* position) {
	m_position.x = position->x;
	m_position.y = position->y;
    m_speed = 75;

	m_texture.loadFromFile("resources/placeholders/Aquatic0.png" , IntRect(48, 17, 16, 16));
	
	m_sprite.setTexture(m_texture);
}

void Submarine::update(float delta) {
    m_velocity.x = 0;
    m_velocity.y = 0;

    int distance = m_speed * delta;

    if (m_commands != nullptr) {
        if (m_commands->right) {
            m_velocity.x += distance;
        }
        if (m_commands->left) {
            m_velocity.x -= distance;
        }
        if (m_commands->up) {
            m_velocity.y -= distance;
        }
        if (m_commands->down) {
            m_velocity.y += distance;
        }
    }
}
