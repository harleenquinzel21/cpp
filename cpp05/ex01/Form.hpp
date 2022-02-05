#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	bool isSigned;
	int const rGradeSign;
	int const rGradeExe;

public:
	~Form();
	Form(std::string const &_name, int const _rGradeSign, int const _rGradeExe);
	Form(Form const &instance);

	Form &operator=(Form const &rhs);

	std::string const &getName() const;
	int const &getRGradeSign() const;
	int const &getRGradeExe() const;
	bool getState() const;

	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &ostream, const Form &initstate);

#endif