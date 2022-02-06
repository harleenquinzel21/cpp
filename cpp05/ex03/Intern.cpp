#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern&){}
Intern &Intern::operator=(Intern const &){return *this;}

Form *Intern::makeForm(std::string form_name, std::string target){
	Form *return_value = nullptr;

	std::string requests[3] = {
		"presidential request",
		"robotonomy request",
		"shrubbery request"
	};

	Form *forms[3] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};

	for (size_t i = 0; i < 3; ++i)
	{
		if (form_name == requests[i])
			return_value = forms[i];
		else
			delete forms[i];

	}
	if (!return_value)
		std::cerr << "Error : form not found!" << std::endl;
	return return_value;
}

