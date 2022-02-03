#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
	return ;
}

Animal::Animal(const Animal &instance)
{
	*this = instance;
	std::cout << "Animal created by copy constructor"<< std::endl;
	return ;
}

Animal::Animal(const std::string &_type) : type(_type)
{
	std::cout << "Animal created, type: " << type << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Object of class Animal " << this->type << " deleted" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::string Animal::getType(void)const
{
	if (this->type.size() > 0)
		return (this->type);
	else
		return ("Object of class Animal, no type");
}

void Animal::makeSound(void)const
{
	std::cout << "\x1b[4;32mWho am I? dog or cat?\x1b[0m" << std::endl;
	return ;
}

