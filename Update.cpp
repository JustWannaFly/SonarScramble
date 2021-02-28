#include "stdafx.h"
#include "Engine.h"

void Engine::update(float deltaSeconds) {
    int size = m_entities.size();
    for (int i = 0; i < size; i++) {
        m_entities[i]->update(deltaSeconds);
    }
}