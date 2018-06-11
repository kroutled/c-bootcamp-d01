#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
    srand(time(NULL));
    
    ZombieEvent event;
    Zombie      *zombie;
    Zombie      *zombie2;

    event.setZombieType("Killer");
    zombie = event.randomChump();
    event.setZombieType("Scratcher");
    zombie2 = event.randomChump();

    delete zombie;
    delete zombie2;

    return(0);
}