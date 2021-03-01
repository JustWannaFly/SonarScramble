#include "stdafx.h"
#include "TextureRegistry.h"
#include <iostream>

using namespace sf;
using namespace std;

shared_ptr<TextureRegistry> TextureRegistry::p_instance = nullptr;

TextureRegistry::TextureRegistry() {
    string base = "resources/";

    m_textureFiles[Aquatic0] = base + "placeholders/Aquatic0.png";
    m_textureFiles[DawnHack] = base + "placeholders/Logo.png";
}

shared_ptr<TextureRegistry> TextureRegistry::getInstance() {
    if (p_instance == nullptr) {
        p_instance = make_shared<TextureRegistry>(TextureRegistry());
    }
    return p_instance;
}

shared_ptr<Texture> TextureRegistry::getTexture(textures texture) {
    if (m_textureMap.find(texture) == m_textureMap.end()) {
        loadTexture(texture);
    }
    return m_textureMap[texture];
}

bool TextureRegistry::loadTexture(textures texture) {
    Texture sfTexture = Texture();
    if (sfTexture.loadFromFile(m_textureFiles[texture])) {
        m_textureMap[texture] = make_shared<Texture>(sfTexture);
        return true;
    }
    // TODO setup some error handling/logging if a texture fails to load
    cout << "Failed to load texture from file: " + m_textureFiles[texture] << endl;
    return false;
}
