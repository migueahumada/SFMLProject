#pragma once
#include "Scene.h"
#include "Map.h"
#include "Player.h"

class Play : public Scene{
public:
    Play();
    void processInput(sf::Time deltaTime, sf::RenderWindow& window) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;
    
    std::shared_ptr<Player> getPlayer() const;
private:
    std::shared_ptr<Player> m_Player = std::make_shared<Player>();
    std::shared_ptr<Map> m_Map = std::make_shared<Map>();
};