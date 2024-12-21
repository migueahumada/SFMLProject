#pragma once

#include "SFML/Graphics.hpp"
#include "Entity.h"
#include "Transform.h"
#include <string>

class Button : public Entity{
public:
    Button();

    bool onClick(sf::RenderWindow& window);
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;
    sf::RectangleShape getButton() const;

private:
    bool m_OnClicked;
    bool m_OnHover;
    sf::RectangleShape m_Rectangle;
    sf::Color m_Color = {68,123,34,0};

    //Components
    std::shared_ptr<Transform> m_TransformComponent = std::make_shared<Transform>();
    
};