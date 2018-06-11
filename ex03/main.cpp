#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int     main(void)
{
    srand(time(NULL));

    ZombieHorde horde(10);
    horde.announced();
    return(0);
}