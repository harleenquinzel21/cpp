#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &instance);
		~ScavTrap(void);
		const ScavTrap &operator=(const ScavTrap &rhs);
		void attack(std::string const &target);
		void guardGate(void);
};
	std::ostream &operator<<(std::ostream &ostream, const ScavTrap &instance);

#endif
