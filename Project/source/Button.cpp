#include "Button.h"

class Vector2f;

Button::Button(){
    // m_Rectangle.setPosition(100.0f,100.0f);
    // m_Rectangle.setSize({50.0f,50.0f});
    // m_Rectangle.setFillColor(sf::Color::Red);

    m_TransformComponent->setPosition(Vector2f{475.0f,470.0f});
    m_TransformComponent->setScale(Vector2f{120.0f,60.0f});
    m_Rectangle.setPosition(m_TransformComponent->getPosition().getX(), m_TransformComponent->getPosition().getY());
    m_Rectangle.setSize(sf::Vector2f{m_TransformComponent->getScale().getX(),m_TransformComponent->getScale().getY()});
    m_Rectangle.setFillColor(m_Color);
}

bool Button::onClick(sf::RenderWindow& window){
    if(m_Rectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)){
       return true;
    }else
        return false;
    
}

void Button::update(sf::Time deltaTime){
    //std::cout << "The position of the rectangle is: " << m_Rectangle.getGlobalBounds().getPosition().x << ", " << m_Rectangle.getLocalBounds().getPosition().y << std::endl;
    //std::cout << sf::Mouse::getPosition().x << ", " << sf::Mouse::getPosition().y << std::endl;
}
void Button::render(sf::RenderWindow& window){
    window.draw(m_Rectangle);
}

sf::RectangleShape Button::getButton() const{
    return m_Rectangle;
}
