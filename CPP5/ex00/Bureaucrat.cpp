#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	_grade = src.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this == &src)
		return (*this);
	_grade = src.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(_name + " has error in constructor");
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException(_name + " has error in constructor");
	else
		_grade = grade;
}

int Bureaucrat::getGrade(void) const			{return(_grade);}

const std::string Bureaucrat::getName(void) const {return(_name);}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bb)
{
	out << bb.getName();
	out << ", bureaucrat grade ";
	out << bb.getGrade();
	return out;
}

void Bureaucrat::gradeIncrement()
{
	if (getGrade() - 1 > 0)
		--_grade;
	else
		throw Bureaucrat::GradeTooHighException(_name + " has error in Increment");
}

void Bureaucrat::gradeDecrement()
{
	if (getGrade() + 1 <= 150)
		++_grade;
	else
		throw Bureaucrat::GradeTooHighException(_name + " has error in Decrement");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	_error = error;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return _error.c_str();
}


Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	_error = error;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
	return _error.c_str();
}
