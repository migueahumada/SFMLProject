#pragma once
#include "Entity.h"
#include "Component.h"
#include "Transform.h"

class Vector2f;

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
    void move(MovementDirection movementDirection, sf::Time deltaTime);
    
    //Components
    Transform m_Transform;
    
    sf::CircleShape m_Shape;
    float m_Radius = 40.0f; 
    sf::Color m_Color = sf::Color::Cyan;
    sf::Vector2f m_Position = {200.0f, 300.0f};
    //TODO: Add velocity to the player
    sf::Vector2f m_Velocity = {420.0f,420.0f};
};