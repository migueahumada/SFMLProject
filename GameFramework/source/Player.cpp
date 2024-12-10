#include "Player.h"

Player::Player(){
    m_Shape.setRadius(m_Radius);
    m_Shape.setFillColor(m_Color);
    m_Shape.setPosition(m_Position);
}

void Player::update(){
    
}
void Player::render(sf::RenderWindow& window){
    window.draw(m_Shape);
}

void Player::move(MovementDirection movementDirection){
    switch (movementDirection){
        case UP:
            m_Position.y -= 10;
            m_Shape.setPosition(m_Position);
            break;
        case DOWN:
            m_Position.y += 10;
            m_Shape.setPosition(m_Position);
            break;
        case LEFT:
            m_Position.x -= 10;
            m_Shape.setPosition(m_Position);
            break;
        case RIGHT:
            m_Position.x += 10;
            m_Shape.setPosition(m_Position);
            break;
        default:
            break;
    }
}