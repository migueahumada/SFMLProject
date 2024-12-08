#include "Entity.h"

Entity::Entity(const std::string& name) : m_name(name){

}

std::string Entity::getName() const{
    return m_name;
}