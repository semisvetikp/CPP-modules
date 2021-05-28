#ifndef AWEAPON_HPP
#define AWEAPON_HPP
# include <iostream>
# include <string>

class AWeapon
{
	private:
			std::string _name;
			int _apcost;
			int _damage;
	public:
			AWeapon();
			AWeapon(std::string const & name, int apcost, int damage);
			virtual ~AWeapon();
			AWeapon(const AWeapon &src); 
			AWeapon& operator= (const AWeapon &src);

			std::string const &getName() const;
			int getAPCost() const;
			int getDamage() const;

			virtual void attack() const = 0;
};

#endif