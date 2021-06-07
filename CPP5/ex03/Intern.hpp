#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string _names[3];
	public:
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern& operator=(const Intern &src);		
		Form *makeForm(std::string name, std::string target);

};

Form *getRobotomy(std::string target);

Form *getShrubbery(std::string target);

Form *getPardoned(std::string target);

#endif
