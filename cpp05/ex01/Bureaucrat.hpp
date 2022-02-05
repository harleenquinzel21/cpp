#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>
// #include "Form.hpp"

class Bureaucrat
{
private:
	std::string const name;
	int	grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &instance);
	Bureaucrat(std::string const &_name, int _grade);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string const &getName() const;
	int getGrade() const;

	void incGrade();
	void decGrade();

	// void signForm(Form::Form &form) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &initstate);

#endif