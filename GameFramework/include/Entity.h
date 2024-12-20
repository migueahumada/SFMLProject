#pragma once
#include <SFML/Graphics.hpp>

#include <vector>
#include "Component.h"


class Entity{
public:
    Entity();
    virtual ~Entity();
    virtual void update(sf::Time deltaTime);
    virtual void render(sf::RenderWindow& window);
    
protected:
    std::vector<std::shared_ptr<Component>> m_components;
    
};

