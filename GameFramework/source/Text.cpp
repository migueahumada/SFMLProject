#include "Text.h"
#include <iostream>


Text::Text(){
    if(m_Font.loadFromFile(m_FontPath)){
        std::cout << "FONT LOADED!"<<std::endl;;
        m_Text.setFont(m_Font);
        m_Text.setCharacterSize(24);
        m_Text.setFillColor(sf::Color::Magenta);
        m_Text.setStyle(sf::Text::Bold);
        m_Text.setString("Este es el string");
    }  
}

void Text::update(sf::Time deltaTime){

}

void Text::render(sf::RenderWindow& window){
    window.draw(m_Text);
}