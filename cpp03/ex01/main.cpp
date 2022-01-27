#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap *a = new ClapTrap("a");
	ClapTrap b("b");

	a->attack("bbb");
	a->takeDamage(13);
	a->beRepaired(20);

	b.takeDamage(10);
	b.beRepaired(10);

	delete a;
}
