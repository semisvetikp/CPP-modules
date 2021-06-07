#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		const int			_grade;
		bool				_signed;
		Form();
	public:
		Form(std::string name, int grade);
		~Form();
		Form(const Form &src);
		Form& operator=(const Form &src);

		int getGrade(void) const;
		const std::string getName(void) const;
		bool getSigned(void) const;

		void beSigned(const Bureaucrat &bb);

		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(std::string error);
				virtual const char* what() const throw();
				virtual ~GradeTooHighException() throw();
			private:
				std::string _error;
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(std::string error);
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();

			private:
				std::string _error;
		};
};

std::ostream& operator<< (std::ostream &out, const Form &ff);

#endif