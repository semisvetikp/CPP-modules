#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src): AWeapon(src) {}

PlasmaRifle& PlasmaRifle::operator= (const PlasmaRifle &src)
{
	if (this == &src)
		return (*this);
	AWeapon::operator=(src);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}