#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance)
{
	*this = instance;
	std::cout << "WrongAnimal created by copy constructor"<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string &_type) : type(_type)
{
	std::cout << "WrongAnimal created, type: " << type << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Object of class WrongAnimal " << this->type << " deleted" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::string WrongAnimal::getType(void)const
{
	return (this->type);
}


void WrongAnimal::makeSound(void)const
{
	std::cout << "Who am I? dog or cat?" << std::endl;
	return ;
}

