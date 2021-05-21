#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	// this->setName(name);
	// this->setHP(FragTrap::getHP());
	// this->setMaxHP(FragTrap::getMaxHP());
	// this->setEnergy(NinjaTrap::getEnergy());
	// this->setMaxEnergy(NinjaTrap::getMaxEnergy());
	// this->setMelee(FragTrap::getEnergy());
	// this->setRange(NinjaTrap::getRange());
	// this->setArmor(FragTrap::getArmor());
	this->setName(name);
	this->setHP(100);
	this->setMaxHP(100);
	this->setEnergy(120);
	this->setMaxEnergy(120);
	this->setMelee(60);
	this->setRange(20);
	this->setArmor(5);
	std::cout << "\033[1;42mSUPER-TP " << getName() <<" I love my mommy - FragTrap and mu daddy - Ninjatrap <3 \033[0m" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\033[1;42mSUPER-TP " << getName() << " By mommy, by daddy!!\033[0m" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	NinjaTrap::rangedAttack(target);
	std::cout << "\033[1;42mSUPER-TP " << getName() << " I inherited this technique from my father - NinjaTrap\033[0m" << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
	std::cout << "\033[1;42mSUPER-TP " << getName() << " I inherited this technique from my mather - FragTrap\033[0m" << std::endl;
}

// void SuperTrap::print()
// {
// 	std::cout << "HP" << getHP() << std::endl;
// 	std::cout << "Energy" << getEnergy() << std::endl;
// 	std::cout << "Range" << getRange() << std::endl;
// 	std::cout << "Mele" << getMelee() << std::endl;
// }