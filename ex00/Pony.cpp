#include "Pony.hpp"

Pony::Pony(std::string place, std::string name) : _ponyName(name), _ponyPlace(place)
{
    std::cout << "A pony on the "<< place << ", named " << name << " has been created "<< std::endl;
    return;
}

Pony::~Pony(void)
{
    std::cout << "the pony, " << this->_ponyName <<", on the " <<this->_ponyPlace << " has been destroyed" << std::endl;
    return;
}