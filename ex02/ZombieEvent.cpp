#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    return;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return new Zombie::Zombie(this->_type, name);
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return;
}

Zombie    *ZombieEvent::randomChump(void)
{
    std::string     names[11] = {"Albert",  "bill", "Ted", "Lane", "Jessica", "Barbara", "Peter", "Harry", "Ryan", "Zim", "Alyssa"};

    Zombie *newZom = this->newZombie(names[rand()%11]);
    newZom->announce();
    return(newZom);
}