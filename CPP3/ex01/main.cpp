#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap fragtrap("MONSTR");

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

	ScavTrap scavtrap("ROBO");
	scavtrap.beRepaired(20);
	scavtrap.takeDamage(30);
	scavtrap.meleeAttack("Sam");
	scavtrap.rangedAttack("Evgeniy");
	
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();

	return (0);
}