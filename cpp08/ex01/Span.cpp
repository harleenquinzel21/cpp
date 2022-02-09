#include "Span.hpp"

Span::Span() {this->N = 0;}
Span::Span(const Span &instance) {*this = instance;}
Span::Span(unsigned int _N) {this->N = _N;}
Span::~Span(){}

const Span &Span::operator=(const Span &rhs)
{
	this->vct = rhs.vct;
	this->N = rhs.N;
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (this->vct.size() == N)
		throw impossibleToAddException();
	this->vct.push_back(nbr);
}

unsigned int Span::shortestSpan() const
{
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;
	int							min;

	if (this->vct.size() < 2)
		throw noSpanException();

	tmp = vct;
	std::sort(tmp.begin(), tmp.end());
	min = *(tmp.begin() + 1) - *tmp.begin();
	for (it = tmp.begin(); (it + 1) != tmp.end(); it++)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return min;
}

unsigned int Span::longestSpan() const
{
	int max, min;

	if (this->vct.size() < 2)
		throw noSpanException();
	max = *std::max_element(vct.begin(), vct.end());
	min = *std::min_element(vct.begin(), vct.end());
	return (max - min);
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) + vct.size() > this->N)
		throw impossibleToAddException();
	vct.insert(vct.end(), start, end);
}

const char *Span::impossibleToAddException::what() const throw()
	{return ("Impossible to add element/range. Container is full!");}

const char *Span::noSpanException::what() const throw()
	{return ("Span not found");}
