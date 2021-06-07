#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat Bob("Bobby", 110);
	try
	{
		Bob.gradeDecrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form mc("marriage contract", 120);
	Bob.signForm(mc);
	
	return 0;
}