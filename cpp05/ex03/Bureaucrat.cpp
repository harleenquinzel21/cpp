#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "\033[1;36mException: \033[0;37mGrade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "\033[1;36mException: \033[0;37mGrade too low!";
}

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &instance)
	: name(instance.name), grade(instance.grade) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
	checkGrade(grade);
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	grade = rhs.grade;
	return *this;
}

std::string Bureaucrat::getName() const {return name;}

int Bureaucrat::getGrade() const {return grade;}

void Bureaucrat::increaseGrade()
{
	checkGrade(grade - 1);
	grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
	checkGrade(grade + 1);
	grade += 1;
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << getName() << " cannot sign " << form.getName() << " because " << e.what();
		std::cout << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		std::cout << getName() << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << getName() << " cannot execute " << form.getName() << " because " << e.what();
		std::cout << std::endl;
	}
}

void Bureaucrat::checkGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

std::ostream&operator<<(std::ostream &ostream, Bureaucrat const &initstate)
{
	ostream << initstate.getName() << " bureaucrat grade: " << initstate.getGrade() << std::endl;
	return (ostream);
}
