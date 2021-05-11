#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		std::string _type;
		int			_cnt_zombie;
		Zombie		*_zombs;

	public:
		ZombieHorde(int N);
		void	setZombieType(std::string type);
		void createZombies();
		void announce();
		~ZombieHorde();
};

#endif