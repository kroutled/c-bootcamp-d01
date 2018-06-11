#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
    std::cout << "construted" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "destroyed" << std::endl;
    return;
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." <<std::endl;
}