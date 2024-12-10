#pragma once
#include <iostream>
#include "Entity.h"

class Scene{
public:
    Scene();

    std::vector<std::unique_ptr<Entity>> m_Entities;
    
};