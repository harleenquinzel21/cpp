#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("Zombie_one");
	Zombie *zombie2;
	zombie2 = newZombie("Zombie_two");

	zombie1.announce();
	zombie2->announce();
	randomChump("Zombie_three");
	delete zombie2;
}
