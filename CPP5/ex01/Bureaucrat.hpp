#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);

		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &src);

		int getGrade(void) const;
		const std::string getName(void) const;

		void gradeIncrement();
		void gradeDecrement();
		void signForm(Form &ff);
	
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

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bb);

#endif