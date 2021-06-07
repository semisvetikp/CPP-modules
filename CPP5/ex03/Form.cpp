#include "Form.hpp"

Form::~Form() {}

Form::Form(std::string name, int grade, std::string target, int exec): _name(name), _grade(grade), _target(target), _exec(exec)
{
	_signed = false;
}

Form::Form(const Form &src):  _name(src.getName()), _grade(src.getGrade()),  _target(src.getTarget()), _exec(src.getExec())
{
	if (_grade > 150)
		throw Form::GradeTooLowException(_name + " error in constructor");
	else if (_grade < 1)
		throw Form::GradeTooHighException(_name + " error in constructor");
	else
		_signed = src.getSigned();
}

Form& Form::operator=(const Form &src)
{
	if (this == &src)
		return (*this);
	_signed = src.getSigned();
	return (*this);
}

int Form::getExec(void) const					{return(_exec);}

const std::string Form::getTarget(void) const {return(_target);}

int Form::getGrade(void) const			{return(_grade);}

const std::string Form::getName(void) const {return(_name);}

bool Form::getSigned(void) const {return(_signed);}

std::ostream& operator<< (std::ostream &out, const Form &ff)
{
	out << ff.getName();
	out << ", Form grade ";
	out << ff.getGrade();
	out << ", signed: ";
	out << ff.getSigned();
	return out;
}


void Form::beSigned(const Bureaucrat &bb) 
{
	if (bb.getGrade() > getGrade())
		throw Form::GradeTooLowException(_name + " error in Signed(Bureaucrat's grade too low)");
	else
		_signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		std::cerr << getName() << " not signed!" << std::endl;
	else if (getSigned() && executor.getGrade() > getExec())
		throw Form::GradeTooLowException(getName() + " Bureaucrat's grade too low");
	else 
		executing();
}

Form::GradeTooLowException::GradeTooLowException(std::string error)
{
	_error = error;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw() 
{
	return _error.c_str();
}


Form::GradeTooHighException::GradeTooHighException(std::string error)
{
	_error = error;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw() 
{
	return _error.c_str();
}
