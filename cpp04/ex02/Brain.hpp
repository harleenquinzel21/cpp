#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const &instance);
		~Brain(void);

		Brain &operator=(Brain const &rhs);

		void print_ideas() const;
};

#endif
