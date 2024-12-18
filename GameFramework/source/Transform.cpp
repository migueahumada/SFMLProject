#include "Transform.h"
#include "Component.h"

Transform::Transform(): m_Position(0.0f,0.0f), m_Rotation(0.0f,0.0f), m_Scale(0.0f,0.0f){
}

Transform::Transform(Vector2f&& position, Vector2f&& rotation, Vector2f&& scale) {
    
}

void Transform::update(sf::Time deltaTime){

}
void Transform::render(sf::RenderWindow& window){
    
}

void Transform::setPosition(Vector2f&& newPosition){
    m_Position = newPosition;
}
void Transform::setRotation(Vector2f&& newRotation){
    m_Rotation = newRotation;
}
void Transform::setScale(Vector2f&& newScale){
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

