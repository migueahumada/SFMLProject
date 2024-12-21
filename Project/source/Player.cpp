#include "Player.h"

Player::Player(){
    
    //m_TransformComponent.setPosition(Vector2f{360.0f,450.0f});

    m_Shape.setRadius(m_Radius);
    m_Shape.setFillColor(m_Color);
    m_Shape.setPosition(m_Position);
    if(m_Texture.loadFromFile(texturePath)){
        std::cout << "Texture loaded!"<< std::endl;
        m_Shape.setTexture(&m_Texture);
        m_Shape.setTextureRect(rightTexture[2]);
        
    }else
        std::cout << "Texture NOT loaded!"<< std::endl;
    
}

Player::Player(float x, float y){
    if(m_Texture.loadFromFile(texturePath)){
        std::cout << "Texture loaded!"<< std::endl;
        m_Sprite.setTexture(m_Texture);
    }else
        std::cout << "Texture NOT loaded!"<< std::endl;
}

void Player::update(sf::Time deltaTime){
    //m_TransformComponent.setPosition(m_TransformComponent.getPosition() + Vector2f{3.0f,0.0f}); 
    
}
void Player::render(sf::RenderWindow& window){
    window.draw(m_Shape);
    window.draw(m_Sprite);
}

/*
    v= d/t
    d = v*t
*/
void Player::move(MovementDirection movementDirection, sf::Time deltaTime){
    switch (movementDirection){
        case UP:
            //Velocidad = Distancia/Tiempo
            //Distancia = Velocidad * Tiempo
            //m_Position.y = (m_Position.y - m_Speed) * deltaTime;
            //m_TransformComponent.getPosition() + Vector2f{m_Velocity};
            
            //m_TransformComponent.setPosition(Vector2f{m_TransformComponent.getPosition().getX() , m_TransformComponent.getPosition().getY() - (m_Velocity.y * deltaTime.asSeconds())});
            
            //setY(m_TransformComponent.getPosition().getY() - (m_Velocity.y * deltaTime.asSeconds()));
            m_Position.y -= m_Velocity.y * deltaTime.asSeconds();
            m_Shape.setPosition(m_Position);
            break;
        case DOWN:
            //TODO: multiplicar por delta time
            m_Position.y += m_Velocity.y * deltaTime.asSeconds();
            m_Shape.setPosition(m_Position);
            break;
        case LEFT:
            m_Position.x -= m_Velocity.x * deltaTime.asSeconds();
            m_Shape.setPosition(m_Position);
            break;
        case RIGHT:
            m_Position.x += m_Velocity.x * deltaTime.asSeconds();
            m_Shape.setPosition(m_Position);
            break;
        default:
            break;
    }
}