#include "MainMenu.h"
#include "Scene.h"

MainMenu::MainMenu(){
    m_Entities.push_back(std::make_shared<Text>("PacMan",sf::Color::White,120,sf::Text::Bold,Vector2f{385.0f,150.0f}));
    m_Entities.push_back(std::make_shared<Text>("Start",sf::Color::White,70,sf::Text::Bold,Vector2f{475.0f,470.0f}));
    m_Entities.push_back(std::make_shared<Text>("Exit",sf::Color::White,70,sf::Text::Bold,Vector2f{495.0f,650.0f}));
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