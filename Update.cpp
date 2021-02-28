#include "stdafx.h"
#include "Engine.h"

using namespace std;
using namespace sf;

void Engine::update(float deltaSeconds) {
    int size = m_entities.size();
    for (vector<unique_ptr<Entity>>::iterator iter = m_entities.begin(); iter != m_entities.end(); ++iter) {
        Entity* rEntity = iter->get();
        rEntity->giveCommands(&m_commands);
        rEntity->update(deltaSeconds);
        Vector2f position = rEntity->getPosition();
        Vector2i velocity = rEntity->getVelocity();
        // TODO refactor this to add collision detection at some point
        position.x += velocity.x;
        position.y += velocity.y;
        rEntity->setPostion(position);

    }
}