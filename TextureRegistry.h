#pragma once
#include <SFML/Graphics.hpp>
#include <map>


class TextureRegistry {
public:

    static TextureRegistry* getInstance();

    enum textures {
        Aquatic0
    };
	sf::Texture getTexture(textures texture);

private:
	TextureRegistry();
    static TextureRegistry* m_instance;

	std::map<textures, sf::Texture> m_textureMap;
    std::map<textures, std::string> m_textureFiles;
	bool loadTexture(textures texture);
};