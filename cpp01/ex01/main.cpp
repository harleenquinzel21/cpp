#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie *arr;
	arr = zombieHorde(10, "Evil zombie");
	for (int i = 0; i < 10; i++)
		arr[i].announce();
	delete [] arr;
}
