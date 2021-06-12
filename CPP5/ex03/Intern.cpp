#include "Intern.hpp"


Intern::Intern()
{
	_names[0] = "robotomy request";
	_names[1] = "shrubbery creation";
	_names[2] = "presidential pardon";
}

Intern::~Intern() {}

Intern::Intern(const Intern &src)
{
	_names[0] = src._names[0];
	_names[1] = src._names[1];
	_names[2] = src._names[2];
}

Intern& Intern::operator=(const Intern &src)
{
	if (this == &src)
		return (*this);
	_names[0] = src._names[0];
	_names[1] = src._names[1];
	_names[2] = src._names[2];
	return (*this);
}

Form *getRobotomy(std::string target)
{
	Form *form1 = new RobotomyRequestForm(target);
	return(form1);
}

Form *getShrubbery(std::string target)
{
	Form *form2 = new ShrubberyCreationForm(target);
	return(form2);
}

Form *getPardoned(std::string target)
{
	Form *form3 = new PresidentialPardonForm(target);
	return(form3);
}


Form* Intern::makeForm(std::string name, std::string target)
{
    Form *(*forms[3])(std::string target) = {&getRobotomy, &getShrubbery, &getPardoned};

    for (int i = 0; i < 3; ++i)
        if (_names[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return(forms[i](target));
        }
    std::cout << "Intern doesn't know " << name << " type of form" << std::endl;
    return(NULL);
}
