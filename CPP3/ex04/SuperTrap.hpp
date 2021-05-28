#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{

	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(const SuperTrap &supertrap);		
		SuperTrap& operator= (const SuperTrap &supertrap);	
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);

		void print();
};

#endif
