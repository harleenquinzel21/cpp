#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat created" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const& instance) : WrongAnimal(instance)
{
	std::cout << "WrongCat created by copy constructor" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat deleted" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

void WrongCat::makeSound(void)const
{
	std::cout << "MEEEOW!" << std::endl;
	return ;
}
