#include "Text.h"
#include <iostream>

Text::Text(const std::string& stringText, 
           const sf::Color& fontColor, 
           unsigned int fontSize,
           const sf::Text::Style& fontStyle,
           const Vector2f position,
           const Vector2f rotation,
           const Vector2f scale) : 
            m_String(stringText), 
            m_FontColor(fontColor), 
            m_FontSize(fontSize), 
            m_FontStyle(fontStyle)
            {
    
    m_TransformComponent.setPosition(position);
    m_TransformComponent.setRotation(rotation);
    m_TransformComponent.setScale(scale);
    
    if(m_Font.loadFromFile(m_FontPath)){
        std::cout << "FONT LOADED!"<<std::endl;;
        m_Text.setPosition(position.getX(),position.getY());
        m_Text.setFont(m_Font);
        m_Text.setCharacterSize(m_FontSize);
        m_Text.setFillColor(m_FontColor);
        m_Text.setStyle(m_FontStyle);
        m_Text.setString(m_String);
        
        
    }else{
        printf("\n-------Error------\n");
    }
}

void Text::update(sf::Time deltaTime){

}

void Text::render(sf::RenderWindow& window){
    window.draw(m_Text);
}