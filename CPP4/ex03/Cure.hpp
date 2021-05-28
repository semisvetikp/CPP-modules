#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(std::string const & type);
		Cure();
		Cure(const Cure &src);
		Cure& operator= (const Cure &src);
		virtual ~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif