#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << name << " died " << std::endl; 
}

void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::rename(std::string new_name)
{
	name = new_name;
}
