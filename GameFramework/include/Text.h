#pragma once
#include "Entity.h"

namespace sf{
    class Text;
    class Font;
}

class Text : public Entity{
public:
    Text();
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;
private:
    sf::Text m_Text;
    sf::Font m_Font;
    const char* m_FontPath = "/Users/miko/Documents/Coding/SFML_Project/assets/Orange Kid.otf";
};