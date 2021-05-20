#include "FragTrap.hpp"

int	main(void)
{
	FragTrap fragtrap("Monstr");

	fragtrap.beRepaired(40);
	fragtrap.takeDamage(40);
	fragtrap.beRepaired(10);
	fragtrap.meleeAttack("Bobby");
	fragtrap.rangedAttack("Tom");

	fragtrap.vaulthunter_dot_exe("Adolf");
	fragtrap.vaulthunter_dot_exe("Adolf");
	fragtrap.vaulthunter_dot_exe("Adolf");
	fragtrap.vaulthunter_dot_exe("Adolf");
	fragtrap.beRepaired(25);
	fragtrap.vaulthunter_dot_exe("Adolf");
	return (0);
}