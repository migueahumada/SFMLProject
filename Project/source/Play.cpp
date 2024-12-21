#include "Play.h"

Play::Play(){
    m_Entities.push_back(m_Map);
    m_Entities.push_back(m_Player);
    
}

void Play::processInput(sf::Time deltaTime, sf::RenderWindow& window){
    sf::Event event;
    while (window.pollEvent(event))
    {
        //Exit
        if(event.type == sf::Event::Closed){
            window.close();
        }
        //Left
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            m_Player->move(MovementDirection::LEFT,deltaTime);
        }
        //Right
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            m_Player->move(MovementDirection::RIGHT,deltaTime);
        }
        //Up
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            m_Player->move(MovementDirection::UP,deltaTime);
        }
        //Down
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            m_Player->move(MovementDirection::DOWN,deltaTime);
        }
        
    }
}

void Play::update(sf::Time deltaTime){
    for (auto &entity : m_Entities)
    {
        entity->update(deltaTime);
    }
}

void Play::render(sf::RenderWindow& window){
    for (auto &entity : m_Entities)
    {
        entity->render(window);
    }
}

std::shared_ptr<Player> Play::getPlayer() const{
    return m_Player;
}