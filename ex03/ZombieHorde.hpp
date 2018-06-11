#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
    private:
        int _N;
        Zombie  *_Zombies;
        

    public:
        ZombieHorde(int N);
        void announced( void );
        ~ZombieHorde();
        
};

#endif