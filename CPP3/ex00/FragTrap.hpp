#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>

class FragTrap
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
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &fragtrap);
		FragTrap& operator= (const FragTrap &fragtrap);		
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
