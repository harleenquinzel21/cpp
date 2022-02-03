#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : arms(nullptr)
{
	name = _name;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with his " << arms->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &arms)
{
	this->arms = &arms;

};
