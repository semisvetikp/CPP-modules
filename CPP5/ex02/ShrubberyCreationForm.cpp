#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreation", 145, target, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src) 
{
	*this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this == &src)
		return(*this);
	*this = src;
	return(*this);
}

void ShrubberyCreationForm::executing(void) const
{
	std::ofstream outf(getTarget() + "_shrubbery");

	outf << "               ,@@@@@@@, " << std::endl;
	outf << "               ,@@@@@@@," << std::endl;
	outf << "       ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
	outf << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
	outf << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
	outf << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl;
	outf << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
	outf << "   `&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
	outf << "       |o|        | |         | | " << std::endl;
	outf << "       |.|        | |         | | " << std::endl;
	outf << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;
}
