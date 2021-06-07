#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat Bob("Bobby", 110);
	Bureaucrat Kevin("Kevin", 1);
	try
	{
		Bob.gradeDecrement();
		Kevin.gradeIncrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	ShrubberyCreationForm ab("Aboba");
	RobotomyRequestForm kk("Kekeke");

	Bob.signForm(ab);
	Bob.executeForm(ab);

	Kevin.signForm(kk);
	Kevin.executeForm(kk);

	Intern  someRandomIntern;
	Form*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	

	return 0;
}