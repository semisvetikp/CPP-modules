#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP
#include <iostream>
#include <string>
#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm: public Form
{
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &src);

		virtual void executing(void) const;

};

#endif