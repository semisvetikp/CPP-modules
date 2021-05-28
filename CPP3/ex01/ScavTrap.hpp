#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include <iomanip> 

class ScavTrap
{
	private:
		unsigned int 	_HP;
		unsigned int	_maxHP;
		unsigned int	_energy;
		unsigned int	_maxenergy;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee;
		unsigned int	_rahge;
		unsigned int	_armor;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scvtrap);
		ScavTrap& operator= (const ScavTrap &scvtrap);		
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer();
};

#endif
