#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Scene.h"
#include "Player.h"
#include "Text.h"
#include "Play.h"
#include "MainMenu.h"

class Game{
public:
    Game();
    void run();
    
    void processInput(sf::RenderWindow& window, sf::Time deltaTime);
    void update(sf::Time deltaTime);
    void render();


    //Variables
    const int FRAMERATE_LIMIT = 60;
    int MAX_WIDTH = 1920;
    int MAX_HEIGHT = 1080;
    bool m_IsFinished = false; //0 ms
    const sf::Time m_TimePerFrame = sf::microseconds(16666);
    sf::Clock m_Clock;
    sf::Time m_LastTime;
    sf::Event m_Event;
    sf::RenderWindow m_Window;
    std::unique_ptr<Player> m_Player;
    //std::vector<std::unique_ptr<Entity>> m_Entities;
    std::unique_ptr<MainMenu> m_MainMenu;
    std::unique_ptr<Play> m_PlayScene;
    
};