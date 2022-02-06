#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern&);
	Intern &operator=(const Intern &);
	Form *makeForm(std::string form_name, std::string target);
};

#endif
