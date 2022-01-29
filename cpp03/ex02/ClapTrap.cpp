#include <iostream>
#include "ClapTrap.hpp"


	ClapTrap::ClapTrap(void) : _hitPoints(10), _energy(10), _attackDamage(10)
	{
		std::cout << "ClapTrap initialized" << std::endl;
		return ;
	}

	ClapTrap::ClapTrap(std::string const &name) : _name(name), _hitPoints(10), _energy(10), _attackDamage(10)
	{
		std::cout << "ClapTrap with name " << name << " initialized" << std::endl;

		return ;
	}

	ClapTrap::ClapTrap(ClapTrap const &instance)
	{
		std::cout << "Copy constructor called"<< std::endl;
		*this = instance;
		return ;
	}

	ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
	{
		std::cout << "Copy assigment operator called" << std::endl;
		if (this != &rhs)
		{
			this->_name = rhs.getName();
			this->_hitPoints = rhs.getHitPoints();
			this->_energy = rhs.getEnergy();
			this->_attackDamage = rhs.getAttackDamage();
		}
		return (*this);
	}

	ClapTrap::~ClapTrap(void)
	{
		std::cout << "ClapTrap with name " << this->_name<< " destroyed" << std::endl;
		return ;
	}

	std::string const &ClapTrap::getName(void) const
	{
		return (this->_name);
	}

	void ClapTrap::setName(std::string const &name)
	{
		this->_name = name;
		return ;
	}

	unsigned int const &ClapTrap::getHitPoints(void) const
	{
		return (this->_hitPoints);
	}

	void ClapTrap::setHitPoints(unsigned int const &amount)
	{
		this->_hitPoints = amount;
		return ;
	}

	unsigned int const &ClapTrap::getEnergy(void) const
	{
		return (this->_energy);
	}

	void ClapTrap::setEnergy(unsigned int const &amount)
	{
		this->_energy = amount;
	}

	unsigned int const &ClapTrap::getAttackDamage(void) const
	{
		return (this->_attackDamage);
	}

	void ClapTrap::setAttackDamage(unsigned int const &amount)
	{
		this->_attackDamage = amount;
		return ;
	}

	void ClapTrap::attack(const std::string &target)
	{
		std::cout << this->_name << " attack " << target;
		std::cout << " causing 0 points of damage!" << std::endl;
	}
	void ClapTrap::takeDamage(unsigned int amount)
	{
		std::cout << this->_name << " takes " << amount;
		std::cout << " points of damage!" << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		std::cout << this->_name << " be repaired for ";
		std::cout << amount << " points!" << std::endl;
	}

	std::ostream	&operator<<(std::ostream &ostream, ClapTrap const &instance)
{
	ostream << instance.getName();
	return (ostream);
}
