#include "Text.h"
#include <iostream>


Text::Text() {
    if(m_Font.loadFromFile(m_FontPath)){
        std::cout << "FONT LOADED!"<<std::endl;;
        m_Text.setFont(m_Font);
        m_Text.setCharacterSize(m_FontSize);
        m_Text.setFillColor(m_FontColor);
        m_Text.setStyle(m_FontStyle);
        m_Text.setString(m_String);
        //update position in this
        //update position in the textclass
        //m_TransformComponent.getPosition() = Vector2f{120.0f,230.0f} + m_TransformComponent.getPosition();
        //m_Text.setPosition(m_TransformComponent.getPosition()+Vector2f{0.0f,120.0f});
        
    }  
}

void Text::update(sf::Time deltaTime){

}

void Text::render(sf::RenderWindow& window){
    window.draw(m_Text);
}