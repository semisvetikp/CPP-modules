#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int			_count;
		AMateria	*_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource& operator= (const MateriaSource &src);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* mat);
		virtual AMateria* createMateria(std::string const & type);
};

#endif