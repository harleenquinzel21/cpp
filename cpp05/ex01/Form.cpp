#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form(){}
Form::Form(std::string const &_name, int const _rGradeSign, int const _rGradeExe) : name(_name), rGradeSign(_rGradeSign), rGradeExe(_rGradeExe)
{
	if (this->getRGradeSign() < 1 || this->getRGradeExe() < 1)
		throw Form::GradeTooHighException();
	else if (this->getRGradeSign() > 150 || this->getRGradeExe() > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const &instance) : name(instance.getName()), rGradeSign(instance.getRGradeSign()), rGradeExe(instance.rGradeExe)
{
	*this = instance;
	return ;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->isSigned = rhs.isSigned;
	return *this;
}

std::string const &Form::getName() const {return this->name;}
int const &Form::getRGradeSign() const {return this->rGradeSign;}
int const &Form::getRGradeExe() const {return this->rGradeExe;}
bool Form::getState() const {return this->isSigned;}

void Form::beSigned(Bureaucrat &bureaucrat)
{

	if (bureaucrat.getGrade() > this->getRGradeSign())
	{
		bureaucrat.signForm(*this);
		throw Form::GradeTooLowException();
	}
	else
		this->isSigned = true;
	bureaucrat.signForm(*this);
	return ;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[1;36mException: \033[0;37mForm grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[1;36mException: \033[0;37mForm grade is too low!");
}

std::ostream&operator<<(std::ostream &ostream, Form const &instance)
{
	ostream << "Form " << instance.getName() << ", grade required to sign it: ";
	ostream << instance.getRGradeSign() << ", grade required to execute it: ";
	ostream << instance.getRGradeExe() << ".\nForm is signed: ";
	if (instance.getState())
		ostream << "true" << std::endl;
	else
		ostream << "false" << std::endl;
	return (ostream);
}
