#pragma once
#include "Scene.h"

class Play : public Scene{
public:
    Play() = default;

    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;
};