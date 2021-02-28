#pragma once
#include "SFML/Graphics.hpp"
#include "Entity.h"

class Submarine : public Entity {

private:
    int m_speed;
public:
	Submarine(sf::Vector2f* position);

	void update(float delta);
};