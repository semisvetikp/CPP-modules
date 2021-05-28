#include "TacticalMarine.hpp"



TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine* TacticalMarine::clone() const
{
	TacticalMarine *copyterminator = new TacticalMarine(*this);
	return (copyterminator);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) {(void)src;}
TacticalMarine& TacticalMarine::operator=(const TacticalMarine &src) {(void)src;return (*this);}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}