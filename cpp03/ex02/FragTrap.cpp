#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ScavTrap()
{
	std::cout << "FragTrap initialized" << std::endl;
	this->setHitPoints(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string const &name) : ScavTrap(name)
{
	std::cout << "FragTrap with name " << this->_name << " initialized" << std::endl;
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &instance) : ScavTrap(instance)
{
	std::cout << "FragTrap copy constructor called"<< std::endl;
		*this = instance;
		return ;
}

FragTrap::~FragTrap(void)
{
		std::cout << "FragTrap with name " << this->_name<< " destroyed" << std::endl;
		return ;
}

const FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energy = rhs.getEnergy();
	}
	return (*this);
}

void FragTrap::attack(std::string const &target)
{
	this->_energy--;
	std::cout << this->_name << " attack " << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
	return;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hi five, guys!!" << std::endl;
}

std::ostream	&operator<<(std::ostream &ostream, FragTrap const &instance)
{
	ostream << instance.getName();
	return (ostream);
}
