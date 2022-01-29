#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap initialized" << std::endl;
	this->setHitPoints(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "ScavTrap with name " << this->_name << " initialized" << std::endl;
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &instance) : ClapTrap(instance)
{
	std::cout << "ScavTrap copy constructor called"<< std::endl;
		*this = instance;
		return ;
}

ScavTrap::~ScavTrap(void)
{
		std::cout << "ScavTrap with name " << this->_name<< " destroyed" << std::endl;
		return ;
}

const ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
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

void ScavTrap::attack(std::string const &target)
{
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
	return;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

std::ostream	&operator<<(std::ostream &ostream, ScavTrap const &instance)
{
	ostream << instance.getName();
	return (ostream);
}
