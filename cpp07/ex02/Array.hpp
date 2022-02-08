#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>

template <typename T>
class Array
{
private:
	T *_arrPtr;
	unsigned int _n;
public:
	Array(void) : _arrPtr(nullptr) {return;};
	Array(unsigned int const &n) : _n(n)
	{
		_arrPtr = new T[n]();
	};

	Array(Array<T> const &instance) : _arrPtr(new T[instance._n]()), _n(instance._n)
	{
		*this = instance;
	};

	Array<T> &operator=(Array<T> const &rhs)
	{
		for (unsigned int i = 0; i < rhs.size(); i++)
		{
			if (i < 0 || i > this->_n)
				throw OutOfLimitsException();
			this->_arrPtr[i] = rhs._arrPtr[i];
		}
		return (*this);
	};

	T &operator[](unsigned int i)
	{
		if (i < 0 || i >= this->_n)
			throw OutOfLimitsException();
		return(this->_arrPtr[i]);
	};

	~Array(void)
	{
		if (this->_arrPtr)
			delete [] this->_arrPtr;
	};

	unsigned int size(void) const {return this->_n;};

	class OutOfLimitsException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Out of array limits");
		}
	};
};

#endif
