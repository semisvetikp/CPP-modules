#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequest", 72, target, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src) 
{
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return(*this);
	*this = src;
	return(*this);
}

void  RobotomyRequestForm::executing(void) const
{
	std::srand(time(0));
	std::cout << "Vzhh-vzhhhhhh-vzhh" << std::endl;
	int k = std::rand() % 2;
	if (k == 1)
		std::cout << getTarget() << " as been robotomized successfully" << std::endl;
	else 
		std::cout << "Ooops, fail" << std::endl;
}