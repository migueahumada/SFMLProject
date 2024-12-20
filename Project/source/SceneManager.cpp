#include "SceneManager.h"

SceneManager::SceneManager(){
    m_Scenes.insert({SceneStates::MAIN_MENU,m_MainMenuScene});
    m_Scenes.insert({SceneStates::PLAY_SCENE,m_PlayScene});

    m_CurrentScene = SceneStates::MAIN_MENU;
}

void SceneManager::update(sf::Time deltaTime){
    m_Scenes.at(m_CurrentScene)->update(deltaTime);
}
void SceneManager::render(sf::RenderWindow& window){
    m_Scenes.at(m_CurrentScene)->render(window);
}

SceneStates SceneManager::getCurrentScene() const{
    return m_CurrentScene;
}

void SceneManager::changeScene(SceneStates nextState){
    m_CurrentScene = nextState;
}

std::shared_ptr<Scene> SceneManager::getScene(SceneStates state) const{
    return m_Scenes.at(m_CurrentScene);
}