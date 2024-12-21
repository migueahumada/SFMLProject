#pragma once
#include "Entity.h"
#include "Transform.h"
#include <string>

namespace sf{
    class Text;
    class Font;
}

class Text : public Entity{
public:
    Text(const std::string& stringText = "Default",
         const sf::Color& fontColor = sf::Color::Magenta,
         unsigned int fontSize = 24,
         const sf::Text::Style& fontStyle = sf::Text::Bold, 
         const Vector2f position = Vector2f{0.0f,0.0f},
         const Vector2f rotation = Vector2f{0.0f,0.0f},
         const Vector2f scale = Vector2f{0.0f,0.0f}
         );
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;

private:
    sf::Text m_Text;
    sf::Font m_Font;
    const char* m_FontPath = "/Users/miko/Documents/Coding/SFML_Project/assets/fonts/Orange Kid.otf";
    unsigned int m_FontSize = 24;
    sf::Color m_FontColor = sf::Color::Magenta;
    sf::Text::Style m_FontStyle = sf::Text::Bold;
    std::string m_String = "Default";
    Transform m_TransformComponent;
    

};