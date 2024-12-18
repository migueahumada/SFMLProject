#pragma once
#include <SFML/Graphics.hpp>

class Component{
public:
    Component();
    virtual ~Component();

    virtual void update(sf::Time deltaTime);
    virtual void render(sf::RenderWindow& window);
    //virtual void update() = 0;
};



