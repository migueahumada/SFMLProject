#pragma once
#include <iostream>
#include "Entity.h"

class Scene{
public:
    Scene();
    
    void update(sf::Time deltaTime);
    void render(sf::RenderWindow& window);

    std::vector<std::unique_ptr<Entity>> entities;
};