#pragma once
#include "Entity.h"

enum MovementDirection{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Player : public Entity{    
public:
    Player();
    void update() override;
    void render(sf::RenderWindow& window) override;
    void move(MovementDirection movementDirection);

    sf::CircleShape m_Shape;
    float m_Radius = 40.0f; 
    sf::Color m_Color = sf::Color::Cyan;
    sf::Vector2f m_Position = {200.0f, 300.0f};
};