#include "Transform.h"
#include "Component.h"

Transform::Transform(const Vector2f& position,
                     const Vector2f& rotation,
                     const Vector2f& scale ) : m_Position(position),m_Rotation(rotation), m_Scale(scale){

}

Transform& Transform::operator=(const Transform& other){
    m_Position = other.m_Position;
    m_Rotation = other.m_Rotation;
    m_Scale = other.m_Scale;
    return *this;
}

Transform& Transform::operator=(const Vector2f& newPosition){
    m_Position = newPosition;
    m_Rotation = Vector2f{0.0f,0.0f};
    m_Scale = Vector2f{0.0f,0.0f};

    return *this;
}

void Transform::update(sf::Time deltaTime){

}
void Transform::render(sf::RenderWindow& window){
    
}

void Transform::setPosition(const Vector2f& newPosition){
    m_Position = newPosition;
}
void Transform::setRotation(const Vector2f& newRotation){
    m_Rotation = newRotation;
}
void Transform::setScale(const Vector2f& newScale){
    m_Scale = newScale;
}

Vector2f Transform::getPosition() const{
    return m_Position;
}
Vector2f Transform::getRotation() const{
    return m_Rotation;
}
Vector2f Transform::getScale() const{
    return m_Scale;
}

