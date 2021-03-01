#pragma once
#include <SFML/Graphics.hpp>
#include <map>


class TextureRegistry {
public:

    static std::shared_ptr<TextureRegistry> getInstance();

    enum textures {
        Aquatic0,
        DawnHack,
    };
    std::shared_ptr<sf::Texture> getTexture(textures texture);

private:
	TextureRegistry();
    static std::shared_ptr<TextureRegistry> p_instance;

    std::map<textures, std::shared_ptr<sf::Texture>> m_textureMap;
    std::map<textures, std::string> m_textureFiles;
	bool loadTexture(textures texture);
};