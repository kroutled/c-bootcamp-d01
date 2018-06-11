#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

private:
    std::string _ponyName;
    std::string _ponyPlace;

public:
    Pony(std::string place, std::string name);
    ~Pony(void);
};

#endif