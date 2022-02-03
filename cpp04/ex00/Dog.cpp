#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
	return ;
}

Dog::Dog(Dog const &instance) : Animal(instance)
{
	std::cout << "Dog created by copy constructor" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog deleted" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << "\x1b[4;32mWOOF!\x1b[0m" << std::endl;
	return ;
}
