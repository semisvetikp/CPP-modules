#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include <iomanip> 
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &ScavTrap);		
		ScavTrap& operator= (const ScavTrap &ScavTrap);	
	
		void challengeNewcomer();
};

#endif
