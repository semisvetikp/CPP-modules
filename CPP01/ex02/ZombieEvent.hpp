#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
    private:
    
    public:
        void setZombieType();
        Zombie* newZombie(std::string name);
};


#endif