#pragma once
#include <SFML\Graphics.hpp>

class Entity {
protected:
	sf::Texture m_texture;
    sf::Sprite m_sprite;
    sf::Vector2f m_position;
public:
	Entity();
	virtual void update(float delta);
	virtual void draw(sf::RenderTarget* target);
};