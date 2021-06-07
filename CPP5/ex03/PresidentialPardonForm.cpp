#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardon", 25, target, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src) 
{
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this == &src)
		return(*this);
	*this = src;
	return(*this);
}

void PresidentialPardonForm::executing(void) const
{
	std::cout << getTarget() << "has been pardoned by Zafod Beeblebrox" << std::endl;
}
