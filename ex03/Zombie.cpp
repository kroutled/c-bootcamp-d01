#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->_type = "Default";
    return;
}

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
    std::cout << "construted" << std::endl;
    return;
}

Zombie::~Zombie()
{
    return;
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." <<std::endl;
}

void    Zombie::setValues(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}