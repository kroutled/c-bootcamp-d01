#include "Pony.hpp"

void    ponyOnTheStack(std::string place, std::string name)
{    
    Pony pony = Pony(place, name);
}


void    ponyOnTheHeap(std::string place, std::string name)
{
    Pony *heapPony = new Pony(place, name);
    delete heapPony;
}

int     main(void)
{
    ponyOnTheStack("Stack", "Larry");
    ponyOnTheHeap("Heap", "Piet");

    return(0);
}