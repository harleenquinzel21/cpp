#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Karen(void);
	~Karen();

	void	complain(std::string level);
	void	(Karen::*f[4])(void);
};

#endif
