#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("CLAPIK");
	claptrap.rangedAttack("Robo");
	claptrap.takeDamage(30);
	claptrap.beRepaired(20);
	std::cout << std :: endl;

	FragTrap fragtrap("FRAGCHIK");
	fragtrap.beRepaired(40);
	fragtrap.takeDamage(60);
	fragtrap.beRepaired(10);
	fragtrap.meleeAttack("Bobby");
	fragtrap.rangedAttack("Tom");
	fragtrap.vaulthunter_dot_exe("Adolf");
	fragtrap.vaulthunter_dot_exe("Adolf");
	fragtrap.beRepaired(25);
	fragtrap.vaulthunter_dot_exe("Adolf");
	std::cout << std :: endl;

	ScavTrap scavtrap("SCAVIK");
	scavtrap.beRepaired(20);
	scavtrap.takeDamage(30);
	scavtrap.meleeAttack("Sam");
	scavtrap.rangedAttack("Evgeniy");
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	std::cout << std :: endl;

	NinjaTrap nintrap1("NARUTO");
	NinjaTrap nintrap2("SASUKE");
	nintrap1.ninjaShoebox(fragtrap);
	nintrap1.ninjaShoebox(scavtrap);
	nintrap1.ninjaShoebox( nintrap2);

	return (0);
}