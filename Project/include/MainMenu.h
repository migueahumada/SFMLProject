#pragma once
#include "Scene.h"
#include "Player.h"
#include "Text.h"

class MainMenu : public Scene{
public:
    MainMenu();
    ~MainMenu(); 
    void processInput(sf::Time deltaTime, sf::RenderWindow& window) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow& window) override;

    //Entities in Main Menu
    std::shared_ptr<Text> mainTitle;

};