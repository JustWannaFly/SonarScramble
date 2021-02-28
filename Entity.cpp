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

void Entity::giveCommands(Commands * commands) {
    m_commands = commands;
}

Vector2f Entity::getPosition() {
    return m_position;
}

Vector2i Entity::getVelocity() {
    return m_velocity;
}

void Entity::setPostion(Vector2f position) {
    m_position = position;
}