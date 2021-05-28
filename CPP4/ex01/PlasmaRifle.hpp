#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	private:
	public:
			PlasmaRifle();
			PlasmaRifle(std::string const & name, int apcost, int damage);
			virtual ~PlasmaRifle();
			PlasmaRifle(const PlasmaRifle &src);
			PlasmaRifle& operator= (const PlasmaRifle &src);

			void attack() const;
};

#endif