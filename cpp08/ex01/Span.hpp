#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iterator>
#include <vector>

class Span
{
private:
	std::vector<int>	vct;
	unsigned int		N;
public:
	Span();
	Span(const Span &instance);
	Span(unsigned int N);
	~Span();

	const Span &operator=(const Span &rhs);
	void addNumber(int nbr);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

	class impossibleToAddException : public std::exception
	{
		const char *what() const throw();
	};

	class noSpanException : public std::exception
	{
		const char *what() const throw();
	};

};



#endif
