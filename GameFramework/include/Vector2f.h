#pragma once
#include <iostream>

class Vector2f{
public:
    Vector2f();
    Vector2f(float x, float y);
    float getX() const;
    float getY() const;
    void setX(float x);
    void setY(float y);
    Vector2f operator+(Vector2f& other);
    Vector2f operator-(Vector2f& other);
    friend std::ostream& operator<<(std::ostream& os, const Vector2f& vector);
private:
    float m_X;
    float m_Y;
};