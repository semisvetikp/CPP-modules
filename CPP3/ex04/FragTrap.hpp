#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

	public:
		FragTrap(std::string name);
		~FragTrap();	
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
