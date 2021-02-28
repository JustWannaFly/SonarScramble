#include "stdafx.h"
#include "Engine.h"

using namespace sf;

Commands Engine::getInput() {
	Commands commands;

	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		commands.close = true;
	}


	return commands;
}