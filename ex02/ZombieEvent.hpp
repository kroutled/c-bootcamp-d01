#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

private:
    std::string     _type;

public:
    ZombieEvent(void);
    ~ZombieEvent(void);

    Zombie  *newZombie(std::string name);
    void    setZombieType(std::string type);
    Zombie  *randomChump(void);
};

#endif