#pragma once
#include "Entity.h"
#include "Component.h"
#include "Transform.h"
#include <map>

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
    Player(float x, float y);
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;
    void move(MovementDirection movementDirection, sf::Time deltaTime);
    
    //Components
    Transform m_TransformComponent;
    
    //TODO: Mover esto al constructor initializer list
    sf::CircleShape m_Shape;
    float m_Radius = 15.0f; 
    sf::Color m_Color = sf::Color::White;
    
    sf::Vector2f m_Position = {200.0f, 300.0f};
    //TODO: Add velocity to the player
    sf::Vector2f m_Velocity = {420.0f,420.0f};

    sf::Texture m_Texture;
    const char* texturePath = "/Users/miko/Documents/Coding/SFML_Project/assets/textures/Pacman16.png";
    sf::Sprite m_Sprite;
    
    std::vector<sf::IntRect> rightTexture = {
        {0,0,16,16}, 
        {16,16,16,16},
        {32,32,16,16},
        {48,48,16,16},
        {64,64,16,16}
    };
    int numberOfFrames = rightTexture.size();
    float framesPerSecond = 1000/16.66;

};

