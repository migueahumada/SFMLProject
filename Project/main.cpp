#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <SFML/System/Clock.hpp>
#include "Entity.h"
#include "Player.h"
#include "Component.h"


//Variables
bool isFinished = false;
const int FRAMERATE_LIMIT = 60;
constexpr uint32_t MAX_WIDTH = 1920/2;
constexpr uint32_t MAX_HEIGHT = 1080/2;

/*
    while(true){
        processInput();
        update();
        render();
    }
*/

//Processes the input, if no input is detected, flow isn't blocked
void processInput(sf::RenderWindow& window, Player* player){
    sf::Event event;
    
    while (window.pollEvent(event))
    {
        //Exit
        if(event.type == sf::Event::Closed){
            window.close();
        }
        //Up
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            player->move(MovementDirection::UP);
        }
        //Down
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            player->move(MovementDirection::DOWN);
        }
        //Left
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            player->move(MovementDirection::LEFT);
        }
        //Right
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            player->move(MovementDirection::RIGHT);
        }
        
    }
}

//Updates the state of the components
void update(std::vector<std::unique_ptr<Entity>>& entities){
    for (auto &entity : entities)
    {
        entity->update();
    }
    
}

//Triggers the render method of the entities
void render(sf::RenderWindow& window, std::vector<std::unique_ptr<Entity>>& entities){
        window.clear();
        for (auto &entity : entities)
        {
            entity->render(window);
        }
        
        
        window.display();
}

int main(){
    
    //Initial Stuff
    sf::RenderWindow window = sf::RenderWindow({MAX_HEIGHT, MAX_WIDTH}, "PacMan");

    
    
    //Stuff that needs to be added before.
    std::vector<std::unique_ptr<Entity>> entities;
    std::unique_ptr<Player> player;

    entities.push_back(std::make_unique<Player>());

    const sf::Time timePerFrame = sf::microseconds(16666);
    
    //Iniciar el contador
    sf::Clock clock;

    //Timpo al iniciar
    sf::Time lastTime = clock.getElapsedTime(); //0 ms
    std::cout << "First last time is " << lastTime.asMicroseconds() << std::endl;

    //GAME LOOP
    while (window.isOpen())
    {      
        //Tiempo antes del proceso que se llamara el actual

        sf::Time current = clock.getElapsedTime(); 
        std::cout << "Current time: "<< current.asMicroseconds()<< std::endl;
        
        //Tiempo actual - Tiempo del frame pasado
        sf::Time deltaTime = current - lastTime;
        std::cout << "Delta time: "<< deltaTime.asMicroseconds()<< std::endl;

        processInput(window,dynamic_cast<Player*>(entities[0].get()));
        update(entities);
        render(window, entities);

        lastTime = current;
        std::cout << "Last time: " << lastTime.asMicroseconds()<< std::endl;
        
        sf::sleep(timePerFrame - deltaTime);
        
        std::cout << "-------------"<< std::endl; 
    }

    

    // delete player;

    return 0;
}