#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() 
{
	std::cout << "Aaargh..." << std::cout;
}

SuperMutant::SuperMutant(const SuperMutant &src):  Enemy(src)
{

}

SuperMutant& SuperMutant::operator= (const SuperMutant &src)
{
	if (this == &src)
		return (*this);
	Enemy::operator=(src);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	if (getHP() <= 0)
		SuperMutant::~SuperMutant();
}