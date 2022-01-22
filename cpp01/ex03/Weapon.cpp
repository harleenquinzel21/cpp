#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::Weapon()
{
	return;
}

Weapon::~Weapon()
{
	return;
}
const	std::string &Weapon::getType(void)
{
	return(type);
}

void Weapon::setType(std::string _type)
{
	type = _type;
}
