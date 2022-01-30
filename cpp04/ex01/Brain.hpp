#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain(void);
		Brain(Brain const &instance);
		Brain &operator=(Brain const &rhs);
		~Brain();
		std::string *Brain::getIdeas(void) const;
		void setIdeas(std::string *_ideas);
};

#endif
