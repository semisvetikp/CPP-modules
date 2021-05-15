#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;

	public:
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump();
};


#endif