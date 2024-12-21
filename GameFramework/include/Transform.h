#pragma once
#include "Vector2f.h"
#include "Component.h"

class Transform : public Component{
public:
    Transform(const Vector2f& position = Vector2f{0.0f,0.0f},
              const Vector2f& rotation = Vector2f{0.0f,0.0f},
              const Vector2f& scale = Vector2f{0.0f,0.0f});
    
    Transform& operator=(const Transform& other);
    Transform& operator=(const Vector2f& newPosition);
    
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;

    void setPosition(const Vector2f& newPosition);
    void setRotation(const Vector2f& newRotation);
    void setScale(const Vector2f& newScale);
    Vector2f getPosition() const;
    Vector2f getRotation() const;
    Vector2f getScale() const;

private:
    Vector2f m_Position;
    Vector2f m_Rotation;
    Vector2f m_Scale;
};



