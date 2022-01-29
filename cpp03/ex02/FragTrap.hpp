#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : public ScavTrap
{
	private:
	public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &instance);
		~FragTrap(void);
		const FragTrap &operator=(const FragTrap &rhs);
		void attack(std::string const &target);
		void highFivesGuys(void);
};
	std::ostream &operator<<(std::ostream &ostream, const FragTrap &instance);

#endif
