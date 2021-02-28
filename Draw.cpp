#include "stdafx.h"
#include "Engine.h"

using namespace std;

void Engine::draw() {
	m_window.clear();

	m_window.draw(m_backgroundSprite);
    int size = m_entities.size();
    for (int i = 0; i < size; i++) {
		m_entities[i]->draw(&m_window);
	}

	m_window.display();
}
