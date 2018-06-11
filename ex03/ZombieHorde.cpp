
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
    std::string     names[11] = {"Albert",  "bill", "Ted", "Lane", "Jessica", "Barbara", "Peter", "Harry", "Ryan", "Zim", "Alyssa"};
    int             i = 0;

    this->_Zombies = new Zombie[this->_N];
    while (i < this->_N)
    {
        this->_Zombies[i].setValues(names[ rand()% 11], "scratcher");
        i++;
    }
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    if (this->_N > 0)
        delete [] this->_Zombies;
    return;
}

void ZombieHorde::announced(void)
{
    int i = 0;
    while (i < this->_N)
    {
        this->_Zombies[i].announce();
        i++;
    }
    return;
}

