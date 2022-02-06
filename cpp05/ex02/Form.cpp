#include "Form.hpp"

Form::Form(std::string const &_name, int const _rGradeSign, int const _rGradeExe, const std::string &_target)
	: name(_name), target(_target), rGradeSign(_rGradeSign), rGradeExe(_rGradeExe),
		isSigned(false){}

Form::Form(const Form &instance)
	: name(instance.name), target(instance.getTarget()),
		rGradeSign(instance.getRGradeSign()),
		rGradeExe(instance.getRGradeExe()),
		isSigned(instance.isSigned) {}

Form::~Form(){}

Form &Form::operator=(const Form &rhs)
{
	isSigned = rhs.isSigned;
	return *this;
}

std::string const &Form::getName() const {return this->name;}
int const &Form::getRGradeSign() const {return this->rGradeSign;}
int const &Form::getRGradeExe() const {return this->rGradeExe;}
bool Form::getState() const {return this->isSigned;}
std::string const &Form::getTarget() const {return this->target;}


void Form::beSigned(const Bureaucrat &bureaucrat)
{
	isGradeRight(bureaucrat.getGrade(), rGradeSign);
	isSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	isGradeRight(executor.getGrade(), getRGradeExe());
}

void Form::isFormSigned() const
{
	if (!isSigned)
		throw FormIsNotSigned();
}

void Form::isGradeValid(int grade) const
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

void Form::isGradeRight(int grade_to_check, int grade) const
{
	if (grade_to_check > grade)
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("\033[1;36mException: \033[0;37mForm grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("\033[1;36mException: \033[0;37mForm grade is too low!");
}

const char *Form::FormIsNotSigned::what() const throw()
{
	return "\033[1;36mException: \033[0;37mForm is not signed!";
}

std::ostream&operator<<(std::ostream &ostream, Form const &instance)
{
	ostream << "Form " << instance.getName() << ", grade required to sign it: ";
	ostream << instance.getRGradeSign() << ", grade required to execute it: ";
	ostream << instance.getRGradeExe() << ".\nForm is signed: ";
	if (instance.getState())
		ostream << "true. ";
	else
		ostream << "false. ";
	std::cout << "target: " << instance.getTarget() << std::endl;
	return (ostream);
}
