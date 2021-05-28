#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>

class ClapTrap
{
	protected:
		unsigned int 	_HP;
		unsigned int	_maxHP;
		unsigned int	_energy;
		unsigned int	_maxenergy;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee;
		unsigned int	_range;
		unsigned int	_armor;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &claptrap);

		unsigned int &getHP();
		unsigned int &getMaxHP();
		unsigned int &getEnergy();
		unsigned int &getMaxEnergy();
		unsigned int &getLevel();
		std::string &getName();
		unsigned int &getMelee();
		unsigned int &getRange();
		unsigned int &getArmor();

		ClapTrap& operator= (const ClapTrap &claptrap);		
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
