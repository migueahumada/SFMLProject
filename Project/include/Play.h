#pragma once
#include "Scene.h"

class Play : public Scene{
public:
    Play(sf::RenderWindow& window);

    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;
};