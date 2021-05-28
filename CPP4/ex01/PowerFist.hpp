#ifndef POWERFIST_HPP
#define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	private:
	public:
			PowerFist();
			PowerFist(std::string const & name, int apcost, int damage);
			virtual ~PowerFist();
			PowerFist(const PowerFist &src);
			PowerFist& operator= (const PowerFist &src);

			void attack() const;
};

#endif