#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::getInput() {
    m_commands.reset();

	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        m_commands.close = true;
	}

    if (Keyboard::isKeyPressed(Keyboard::W)) {
        m_commands.up = true;
    }
    if (Keyboard::isKeyPressed(Keyboard::A)) {
        m_commands.left = true;
    }
    if (Keyboard::isKeyPressed(Keyboard::S)) {
        m_commands.down = true;
    }
    if (Keyboard::isKeyPressed(Keyboard::D)) {
        m_commands.right = true;
    }

}