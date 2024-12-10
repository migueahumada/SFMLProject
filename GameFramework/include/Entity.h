#pragma once
#include <SFML/Graphics.hpp>
#include <string>

struct Transform{
    sf::Vector2f fPosition;
};

/*
    Entity -> Actor or Game Object
    - Transform

        - PacMan -> Player
        - Ghost -> NPC with AI
        - Walls -> Geometry
        - Berries -> Items

*/


class Entity{
public:
    Entity();
    virtual void update() = 0;
    virtual void render(sf::RenderWindow& window) = 0;
    virtual ~Entity();
private: 
    
};

