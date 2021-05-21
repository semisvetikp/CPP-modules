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
		SuperTrap(std::string name);
		~SuperTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);

		// void print();

};

#endif
