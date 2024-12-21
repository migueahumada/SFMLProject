#include "Map.h"
#include <iostream>

Map::Map(){

    printf("\nMapa creado!!!\n");
    
}

void Map::update(sf::Time deltaTime){

}

void Map::render(sf::RenderWindow& window){
    
    for (size_t j = 0; j < map.size(); j++)
    {
        for (size_t i = 0; i < map[j].size(); i++)
        {
            sf::RectangleShape tile(sf::Vector2f{tileSize, tileSize});
            tile.setPosition(i * tileSize, j * tileSize);

            if(map[j][i] == 1){
                tile.setFillColor(sf::Color::Blue);
                window.draw(tile);
            }
        }
        
    }
}