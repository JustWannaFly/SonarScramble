#include "stdafx.h"
#include "TextureRegistry.h"
#include <iostream>

using namespace sf;
using namespace std;

TextureRegistry* TextureRegistry::m_instance = 0;

TextureRegistry::TextureRegistry() {

    m_textureFiles[Aquatic0] = "resources/placeholders/Aquatic0.png";
}

TextureRegistry* TextureRegistry::getInstance() {
    if (m_instance == 0) {
        m_instance = new TextureRegistry();
    }
    return m_instance;
}

Texture TextureRegistry::getTexture(textures texture) {
    if (m_textureMap.find(texture) == m_textureMap.end()) {
        loadTexture(texture);
    }
    return m_textureMap[texture];
}

bool TextureRegistry::loadTexture(textures texture) {
    Texture sfTexture = Texture();
    if (sfTexture.loadFromFile(m_textureFiles[texture])) {
        m_textureMap[texture] = sfTexture;
        return true;
    }
    // TODO setup some error handling/logging if a texture fails to load
    cout << "Failed to load texture from file: " + m_textureFiles[texture] << endl;
    return false;
}
