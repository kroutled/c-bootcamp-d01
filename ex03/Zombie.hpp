#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
private:
    std::string     _type;
    std::string     _name;

public:
    Zombie( void );
    Zombie(std::string name, std::string type);
    ~Zombie(void);

    void    announce(void);
    void    setValues(std::string name, std::string type);
};

#endif