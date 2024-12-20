#include "Play.h"
#include "Player.h"
#include "Map.h"

Play::Play(sf::RenderWindow& window){
    
    m_Entities.push_back(std::make_unique<Map>());
    m_Entities.push_back(std::make_unique<Player>());
}

void Play::update(sf::Time deltaTime){
    
}

void Play::render(sf::RenderWindow& window){
    for (auto &entity : m_Entities)
    {
        entity->render(window);
    }
}