#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_arms) : arms(_arms)
{
	name = _name;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << arms.getType() << std::endl;
};
