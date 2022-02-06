#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	const std::string target;
	int const rGradeSign;
	int const rGradeExe;
	bool isSigned;
public:
	Form();
	Form(std::string const &_name, int const _rGradeSign, int const _rGradeExe, const std::string &_target);
	Form(const Form &instance);
	virtual ~Form();

	Form &operator=(const Form &rhs);

	std::string const &getName() const;
	std::string const &getTarget() const;
	bool getState() const;
	int const &getRGradeSign() const;
	int const &getRGradeExe() const;

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	void isFormSigned() const;
	void isGradeValid(int grade) const;
	void isGradeRight(int grade_to_check, int grade) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class FormIsNotSigned : public std::exception
	{
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
