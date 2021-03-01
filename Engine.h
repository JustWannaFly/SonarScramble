#pragma once
#include <SFML/Graphics.hpp>
#include "Commands.h"
#include "Entity.h"
#include <vector>
#include "TextureRegistry.h"

class Engine {
private:
	int m_fps;
    sf::Clock m_clock;

    sf::Vector2i m_resolution;
    sf::RenderWindow m_window;

    std::shared_ptr<TextureRegistry> pTextures = nullptr;
	sf::Sprite m_backgroundSprite;

    Commands m_commands;

	void getInput();
	void update(float deltaSeconds);
	void draw();

	std::vector<std::unique_ptr<Entity>> m_entities;

public:
	Engine();

	void start();
};
