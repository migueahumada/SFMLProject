#pragma once
#include <string>

class Entity{

public:
    Entity(const std::string& name);

    std::string getName() const;
private:
    std::string m_name;
    
};