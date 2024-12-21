#pragma once 
#include <map>
#include <iostream>
#include "Common.h"
#include "Scene.h"
#include "MainMenu.h"
#include "Play.h"

class MainMenu;


class SceneManager{
public:
    SceneManager();
    
    void processInput(sf::Time deltaTime, sf::RenderWindow& window);
    void update(sf::Time deltaTime);
    void render(sf::RenderWindow& window);

    SceneStates getCurrentScene() const;
    std::shared_ptr<Scene> getScenePointer() const;
    void changeScene(SceneStates nextState);
    std::shared_ptr<Scene> getScene(SceneStates state) const;
    
private:
    std::map<SceneStates, std::shared_ptr<Scene>> m_Scenes;
    std::shared_ptr<MainMenu> m_MainMenuScene = std::make_shared<MainMenu>();
    std::shared_ptr<Play> m_PlayScene = std::make_shared<Play>();
    SceneStates m_CurrentScene;
    
};