#include "stdafx.h"
#include "Entity.h"

using namespace sf;

Entity::Entity() {
}

void Entity::update(float delta) {

}

void Entity::draw(RenderTarget* target) {
	m_sprite.setPosition(m_position);
	target->draw(m_sprite);
}