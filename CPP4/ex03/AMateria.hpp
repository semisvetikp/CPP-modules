#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria &src);
		AMateria& operator= (const AMateria &src);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		void setType(std::string type);
		void setXP(unsigned int xp);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif