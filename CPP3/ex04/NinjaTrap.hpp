#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{

	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap &ninjatrap);		
		NinjaTrap& operator= (const NinjaTrap &ninjatrap);		
		void ninjaShoebox(FragTrap &trap);
		void ninjaShoebox(ScavTrap &trap);
		void ninjaShoebox(NinjaTrap &trap);
		void ninjaShoebox(ClapTrap &trap);
};

#endif