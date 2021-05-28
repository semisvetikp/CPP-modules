#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

void mytest()
{
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("BOBBY");

	AMateria* tmp0;
	AMateria* tmp1;
	tmp0 = src->createMateria("ice");
	me->equip(tmp0);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);



	MateriaSource* src2 = new MateriaSource();
	*src2 = *src;
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("cure"));
	
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout <<"____________" << std::endl;
	bob->use(0, *me);
	bob->use(1, *me);


	delete bob;
	delete me;
	delete src;
	delete src2;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// mytest();

	return 0;
}

