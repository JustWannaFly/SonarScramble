#include "stdafx.h"
#include "Engine.h"
#include <chrono>
#include <thread>
#include "Submarine.h"
#include "Entity.h"

using namespace sf;
using namespace std;

Engine::Engine() {
	m_fps = 30;
	m_resolution = Vector2i(1280, 720);

	bool success = m_backgroundTexture.loadFromFile("resources/placeholders/Logo.png");
	m_backgroundSprite.setTexture(m_backgroundTexture);

	m_window.create(VideoMode(m_resolution.x, m_resolution.y), "Sonar Scramble");

    m_entities.push_back(unique_ptr<Entity>(new Submarine(&Vector2f(100, 100))));

}

void Engine::start() {

	Time delta = m_clock.restart();
	int minFrameTime = 1000 / m_fps;
	
	while (m_window.isOpen()) {
		
		Event event;
		while (m_window.pollEvent(event)) {
			if (event.type == Event::Closed)
				m_window.close();
		}
		Commands commands = getInput();
		if (commands.close) {
			m_window.close();
		}

		update(delta.asSeconds());
		draw();

		delta = m_clock.restart();
		if (delta.asMilliseconds() < minFrameTime) {
			int wait = minFrameTime - delta.asMilliseconds();
			std::this_thread::sleep_for(std::chrono::milliseconds(wait));
		}

	}

}
