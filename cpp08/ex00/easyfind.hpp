#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>

class NotFoundException : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Element not found");
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int const targrtValue)
{
	typename T::iterator i = std::find(container.begin(), container.end(), targrtValue);
	if (i == container.end())
		throw NotFoundException();
	return (i);
}

#endif
