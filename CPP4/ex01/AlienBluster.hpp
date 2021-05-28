#ifndef ALIENBLUSTER_HPP
#define ALIENBLUSTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class AlienBluster: public AWeapon
{
	private:
	public:
			AlienBluster();
			AlienBluster(std::string const & name, int apcost, int damage);
			virtual ~AlienBluster();
			AlienBluster(const AlienBluster &src);
			AlienBluster& operator= (const AlienBluster &src);

			void attack() const;
};

#endif