#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		int			_count;
		AMateria	*_materias[4];
		Character();
	public:
		Character(std::string name);
		Character(const Character &src);
		Character& operator= (const Character &src);
		virtual ~Character();

		virtual std::string const & getName() const;
		int getCount() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif