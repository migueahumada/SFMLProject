#pragma once
#include "Entity.h"
#include "Transform.h"

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
    const char* m_FontPath = "/Users/miko/Documents/Coding/SFML_Project/assets/fonts/Orange Kid.otf";
    unsigned int m_FontSize = 24;
    sf::Color m_FontColor = sf::Color::Magenta;
    sf::Text::Style m_FontStyle = sf::Text::Bold;
    sf::String m_String = "Default";
    Transform m_TransformComponent;

};