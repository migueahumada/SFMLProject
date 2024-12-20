#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <map>
#include "Common.h"
#include "Scene.h"
#include "Player.h"
#include "Text.h"
#include "Play.h"
#include "MainMenu.h"
#include "SceneManager.h"

enum GameState{
    MAIN_MENU,
    PLAY_SCENE,
    GAME_OVER
};

class Game{
public:
    Game();
    void run();
    
    void processInput(sf::RenderWindow& window, sf::Time deltaTime);
    void update(sf::Time deltaTime);
    void render();


    //Variables
    const int FRAMERATE_LIMIT = 60;
    bool m_IsFinished = false; //0 ms
    const sf::Time m_TimePerFrame = sf::microseconds(16666);
    sf::Clock m_Clock;
    sf::Time m_LastTime;
    sf::Event m_Event;
    sf::RenderWindow m_Window;

    SceneManager m_SceneManager;

    std::shared_ptr<Player> m_Player;
    
    std::map<GameState, std::shared_ptr<Scene>> m_Scenes;

    
};