#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energy;
	unsigned int _attackDamage;
public:
	ClapTrap(void);
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &instance);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string const &getName(void) const;
	void setName(std::string const &name);

	unsigned int const &getHitPoints(void) const;
	void setHitPoints(unsigned int const &amount);

	unsigned int const &getEnergy(void) const;
	void setEnergy(unsigned int const &amount);

	unsigned int const &getAttackDemage(void) const;
	void setAttackDemage(unsigned int const &amount);
};

#endif
