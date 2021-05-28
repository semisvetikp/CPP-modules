#include "AlienBluster.hpp"

AlienBluster::AlienBluster(): AWeapon("Alien Bluster", 20, 50) {}

AlienBluster::AlienBluster(const AlienBluster &src): AWeapon(src) {}

AlienBluster& AlienBluster::operator= (const AlienBluster &src)
{
	if (this == &src)
		return (*this);
	AWeapon::operator=(src);
	return (*this);
}

void AlienBluster::attack() const
{
	std::cout << "* tra - ta - ta *" << std::endl;
}

AlienBluster::~AlienBluster() {}