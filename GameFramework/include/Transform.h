#pragma once
#include "Vector2f.h"
#include "Component.h"

class Transform : public Component{
public:
    Transform();
    Transform(Vector2f&& position, Vector2f&& rotation, Vector2f&& scale);

    //void update() override;

    void setPosition(Vector2f&& newPosition);
    void setRotation(Vector2f&& newRotation);
    void setScale(Vector2f&& newScale);
    Vector2f getPosition() const;
    Vector2f getRotation() const;
    Vector2f getScale() const;

private:
    Vector2f m_Position;
    Vector2f m_Rotation;
    Vector2f m_Scale;
};



