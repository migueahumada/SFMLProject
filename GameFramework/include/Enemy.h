#pragma once
#include "Entity.h"

class Enemy : public Entity{
public:
    Enemy();
    void update() override;
    void render(sf::RenderWindow& window) override;
private:
    
};