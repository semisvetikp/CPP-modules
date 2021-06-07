#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bob("Bobby", 150);
		Bob.gradeDecrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}