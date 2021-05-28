#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &fragtrap);		
		FragTrap& operator= (const FragTrap &fragtrap);		
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
