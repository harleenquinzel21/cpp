#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap *a = new ScavTrap("a");
	ScavTrap b("b");
	ScavTrap c;

	c = b;
	a->attack("bbb");
	a->takeDamage(13);
	a->beRepaired(20);

	b.takeDamage(10);
	b.beRepaired(10);

	std::cout << "Name: " << c.getName() << std::endl;
	std::cout << "Hit Points: " << c.getHitPoints() << std::endl;
	std::cout << "Energy: " << c.getEnergy() << std::endl;
	c.attack("a");
	c.guardGate();
	std::cout << *a << std::endl << b << std::endl;

	delete a;
}
