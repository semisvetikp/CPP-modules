#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>

class ClapTrap
{
	private:
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
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &claptrap);

		void setHP(unsigned int hp);
		unsigned int getHP();
		void setMaxHP(unsigned int mhp);
		unsigned int getMaxHP();
		void setEnergy(unsigned int energy);
		unsigned int getEnergy();
		void setMaxEnergy(unsigned int menergy);
		unsigned int getMaxEnergy();
		void setLevel(unsigned int lvl);
		unsigned int getLevel();
		void setName(std::string name);
		std::string getName();
		void setMelee(unsigned int melee);
		unsigned int getMelee();
		void setRange(unsigned int rahge);
		unsigned int getRange();
		void setArmor(unsigned int armor);
		unsigned int getArmor();

		ClapTrap& operator= (const ClapTrap &claptrap);		
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
