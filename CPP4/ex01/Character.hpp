#ifndef CHARACTER_HPP
#define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
			std::string _name;
			int			_ap;
			AWeapon		*_weapon;
	public:
			Character();
			Character(std::string const & name);
			~Character();
			Character(const Character &src); 
			Character& operator= (const Character &src);

			void recoverAP();
			void equip(AWeapon* weapon);
			void attack(Enemy* enemy);

			std::string const &getName() const;
			int getAP() const;
			AWeapon *getWeapon() const;
};

std::ostream& operator<<(std::ostream& out, const Character &src);

#endif