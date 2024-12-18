#include "Scene.h"
#include "Player.h"


Scene::Scene(){
    
}

Scene::~Scene(){
    
}




MainMenu::MainMenu(){
    m_Entities.push_back(std::make_unique<Player>());
}

MainMenu::~MainMenu(){
    
}

void MainMenu::update(sf::Time deltaTime){
    for (auto &entity : m_Entities)
    {
        entity->update(deltaTime);
    } 
}

void MainMenu::render(sf::RenderWindow& window){
    for (auto &entity : m_Entities)
    {
        entity->render(window);
    } 
}