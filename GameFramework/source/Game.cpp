#include "Game.h"
#include "Common.h"

Game::Game(){
    m_Window.create({SCREEN_WIDTH,SCREEN_HEIGHT},"PacMan");
    m_LastTime = m_Clock.getElapsedTime();
    m_MainMenu = std::make_unique<MainMenu>();
    m_PlayScene = std::make_unique<Play>(m_Window);
    
}

void Game::run(){

    //Timpo al iniciar
    sf::Time lastTime = m_Clock.getElapsedTime(); //0 ms
    std::cout << "First last time is " << lastTime.asMicroseconds() << std::endl;

    //GAME LOOP
    while (m_Window.isOpen())
    {      

        //Tiempo antes del proceso que se llamara el actual

        sf::Time current = m_Clock.getElapsedTime(); 
        //std::cout << "Current time: "<< current.asMicroseconds()<< std::endl;
        
        //Tiempo actual - Tiempo del frame pasado
        sf::Time deltaTime = current - lastTime;
        //std::cout << "Delta time: "<< deltaTime.asMicroseconds()<< std::endl;

        


        processInput(m_Window, deltaTime);
        update(deltaTime);
        render();

        lastTime = current;
        //std::cout << "Last time: " << lastTime.asMicroseconds()<< std::endl;
        
        //sf::sleep(deltaTime - timePerFrame);
        //std::cout << "-------------"<< std::endl; 
        //std::cout << "The delta time is: " << deltaTime.asMilliseconds() << std::endl;
        
        sf::Time elapsed = m_Clock.getElapsedTime() - current;
        if (elapsed < m_TimePerFrame) {
            sf::sleep(m_TimePerFrame - elapsed);
        } 
    }

}

void Game::processInput(sf::RenderWindow& window, sf::Time deltaTime){
    sf::Event event;
    while (window.pollEvent(event))
    {
        //Exit
        if(event.type == sf::Event::Closed){
            window.close();
        }
        
        
        //Up
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            
            if(m_Player){
                m_Player->move(MovementDirection::UP, deltaTime);
            }
        }
        
        // //Down
        // if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        //     m_Player->move(MovementDirection::DOWN, deltaTime);
        // }
        // //Left
        // if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        //     m_Player->move(MovementDirection::LEFT, deltaTime);
        // }
        // //Right
        // if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        //     m_Player->move(MovementDirection::RIGHT, deltaTime);
        // }
        
    }
}

//Cambiar
void Game::update(sf::Time deltaTime){
    m_PlayScene->update(deltaTime);
}

void Game::render(){
    m_Window.clear();
    m_PlayScene->render(m_Window);
    m_Window.display();
}