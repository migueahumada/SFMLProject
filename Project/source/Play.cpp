#include "Play.h"

Play::Play(){
    m_Entities.push_back(m_Map);
    m_Entities.push_back(m_Player);
    
}

void Play::update(sf::Time deltaTime){
    
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