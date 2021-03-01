#pragma once
#include <SFML\Graphics.hpp>
#include "Commands.h"

class Entity {
protected:
    Commands* m_commands;
    sf::Sprite m_sprite;
    sf::Vector2f m_position;
    sf::Vector2i m_velocity;
public:
	Entity();
    virtual void giveCommands(Commands* commands);
	virtual void update(float delta);
	virtual void draw(sf::RenderTarget* target);
    sf::Vector2i getVelocity();
    sf::Vector2f getPosition();
    void setPostion(sf::Vector2f position);
};