#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"


void mytest()
{
	ISpaceMarine* tm0 = new TacticalMarine;
	ISpaceMarine* at1 = new AssaultTerminator;
	ISpaceMarine* tm2 = new TacticalMarine;
	ISpaceMarine* at3 = new AssaultTerminator;
	Squad* sqvd = new Squad;
	sqvd->push(tm0);
	sqvd->push(at1);
	sqvd->push(tm2);
	sqvd->push(at3);
	std::cout << "COUNT = " << sqvd->getCount() << std::endl;
	ISpaceMarine* test = sqvd->getUnit(2);
	test->battleCry();
	test->rangedAttack();
	test->meleeAttack();
	Squad* sqvd2 = new Squad;
	*sqvd2 = *sqvd;
	test = sqvd2->getUnit(2);
	test->battleCry();
	delete sqvd2;
	delete sqvd;
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	// mytest();
	return 0;
}