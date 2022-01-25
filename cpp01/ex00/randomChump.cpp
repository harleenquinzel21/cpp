#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name)
{
	Zombie newZombie(name);

	newZombie.announce();
}
