#include "MainMenu.h"


MainMenu::MainMenu(){
    m_Entities.push_back(std::make_shared<Text>("PacMan",sf::Color::White,120,sf::Text::Bold,Vector2f{385.0f,150.0f}));
    m_Entities.push_back(std::make_shared<Text>("Start",sf::Color::White,70,sf::Text::Bold,Vector2f{475.0f,470.0f}));
    m_Entities.push_back(std::make_shared<Text>("Exit",sf::Color::White,70,sf::Text::Bold,Vector2f{495.0f,650.0f}));
    m_Entities.push_back(m_StartButton);
}

MainMenu::~MainMenu(){   
}

void MainMenu::processInput(sf::Time deltaTime, sf::RenderWindow& window){
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
            std::cout << "Enter key pressed in MainMenu!" << std::endl;
        }
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){   
            if(m_StartButton->onClick(window)){
                m_NextScene = true;
            }
        }           
    }
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