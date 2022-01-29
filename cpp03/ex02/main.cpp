#include <iostream>
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap *a = new FragTrap("a");
	FragTrap b("b");
	FragTrap c;

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
	c.highFivesGuys();
	std::cout << *a << std::endl << b << std::endl;

	delete a;
}
