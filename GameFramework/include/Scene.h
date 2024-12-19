#pragma once
#include <iostream>
#include <SFML/System/Clock.hpp>
#include <vector>
#include <memory>

class Entity;

namespace sf{
    class RenderWindow;
}


class Scene{
public:
    Scene();
    virtual ~Scene();
    
    virtual void update(sf::Time deltaTime){}
    virtual void render(sf::RenderWindow& window){}
//This should be protected
protected:
    std::vector<std::unique_ptr<Entity>> m_Entities;
};



