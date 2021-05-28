#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() 
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src):  Enemy(src)
{

}

RadScorpion& RadScorpion::operator= (const RadScorpion &src)
{
	if (this == &src)
		return (*this);
	Enemy::operator=(src);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
	if (getHP() <= 0)
		RadScorpion::~RadScorpion();
}