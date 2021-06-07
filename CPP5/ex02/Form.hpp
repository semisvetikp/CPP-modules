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
		std::string			_target;
		int					_exec;
		bool				_signed;
		Form();
	public:
		Form(std::string name, int grade, std::string target, int exec);
		~Form();
		Form(const Form &src);
		Form& operator=(const Form &src);

		int getGrade(void) const;
		int getExec(void) const;
		const std::string getName(void) const;
		bool getSigned(void) const;
		const std::string getTarget(void) const;

		void beSigned(const Bureaucrat &bb);
		void execute(Bureaucrat const & executor) const;
		virtual void executing(void) const = 0;

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