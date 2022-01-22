#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];
	int i = 0;
    while (i < N)
    {
		Horde[i].rename(name);
		i++;
	}
    return (Horde);
}