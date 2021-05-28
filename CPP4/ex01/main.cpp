#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "AlienBluster.hpp"
#include "SuperMutant.hpp"

int alien(Character *me)
{
	Enemy* mutant = new SuperMutant();

	AWeapon* bluster = new AlienBluster();

	me->equip(bluster);
	me->attack(mutant);
	std::cout << *me;
	me->recoverAP();
	me->attack(mutant);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	return 0;
}

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me << std::endl;

	// alien(me);

	return 0;
}