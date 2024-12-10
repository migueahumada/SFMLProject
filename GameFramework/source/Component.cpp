#include "Component.h"

Vector2f::Vector2f(float x, float y) : m_X(x), m_Y(y){

}

float Vector2f::getX() const{
    return m_X;
}

float Vector2f::getY() const{
    return m_Y;
}

void Vector2f::setX(float x){
    m_X = x;
}
void Vector2f::setY(float y){
    m_Y = y;
}

Vector2f Vector2f::operator+(Vector2f& other){
    return Vector2f(this->m_X+other.getX(),this->m_Y+other.getY());
}

Vector2f Vector2f::operator-(Vector2f& other){
    return Vector2f(this->m_X-other.getX(),this->m_Y-other.getY());
}

std::ostream& operator<<(std::ostream& os, const Vector2f& vector){
    return os <<  "{"<< vector.getX() << "," <<vector.getY()<< "}";
}

Component::Component(){

}

// template<typename T>
// Transform::Transform(){

// }
