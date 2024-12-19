#include "Play.h"
#include "Player.h"

void Play::update(sf::Time deltaTime){
    m_Entities.push_back(std::make_unique<Player>());
}
void Play::render(sf::RenderWindow& window){
    for (auto &entity : m_Entities)
    {
        entity->render(window);
    }
    
}