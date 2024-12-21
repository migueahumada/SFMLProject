#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <SFML/System/Clock.hpp>
#include "Entity.h"
#include "Player.h"
#include "Game.h"
#include <dlfcn.h>

typedef void (*myMod)();

int main(){
    
    void* handle = dlopen("/Users/miko/Documents/Coding/SFML_Project/build/Mods/libMods.dylib",RTLD_NOW);
    if(handle == nullptr){
        std::cout << "Error opening the library" << std::endl;
        return 1;
    }
    //myFunction modFunction = (myFunction)dlsym(handle, "printSomething");
    myMod modFunction = reinterpret_cast<myMod>(dlsym(handle, "printSomething"));
    if(modFunction == nullptr){
        std::cout << "Error finding the library" << std::endl;
        return 1;
    }
    
    modFunction();

    Game game;

    game.run();  

    dlclose(handle);  

    return 0;
}