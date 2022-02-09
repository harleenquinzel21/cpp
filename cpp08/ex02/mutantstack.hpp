#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &instance)
	{
		std::stack<T>::operator=(instance);
	}
	~MutantStack(){}

	MutantStack &operator=(const MutantStack &rhs)
	{
		std::stack<T>::operator=(rhs);
		return *this;
	}

	iterator begin()
	{
		return this->std::stack<T>::c.begin();
	}


	iterator end()
	{
		return this->std::stack<T>::c.end();
	}


	reverse_iterator rbegin() //from start to end
	{
		return this->std::stack<T>::c.rbegin();
	}


	reverse_iterator rend()    //from end to start
	{
		return this->std::stack<T>::c.rend();
	}

};

#endif
