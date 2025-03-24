#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("DefaultTarget")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other): AForm("ShrubberyCreationForm", 145, 137), target(other.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& 		ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm copy operator called. Only is_it_signed and target will be copied!" << std::endl;
	if (this != &other)
		target = other.target;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted() const
{
	std::cout << "ShrubberyCreationForm beExecuted() called" << std::endl;
	std::string fname(target + "_shrubbery");
	std::ofstream outfile(fname.c_str());
	if (!outfile)
	{
		std::cerr << "Couldn't create outfile: " << fname << std::endl;
		return ;
	}
	else
	{
		outfile << "ASCII trees" << std::endl;
		outfile << std::endl;
		outfile << "   ccee88oo" << std::endl;
		outfile << " C8O8O8Q8PoOb o8oo" << std::endl;
		outfile << "dOB69QO8PdUOpugoO9bD" << std::endl;
		outfile << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
		outfile << "    6OuU  /p u gcoUodpP" << std::endl;
		outfile << "      \\\\//  /douUP" << std::endl;
		outfile << "        |||//" << std::endl;
		outfile << "        |||/" << std::endl;
		outfile << "        |||||" << std::endl;
		outfile << "  .....//||||\\...." << std::endl;
		outfile << "   ccee88oo" << std::endl;
		outfile << " C8O8O8Q8PoOb o8oo" << std::endl;
		outfile << "dOB69QO8PdUOpugoO9bD" << std::endl;
		outfile << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
		outfile << "    6OuU  /p u gcoUodpP" << std::endl;
		outfile << "      \\\\//  /douUP" << std::endl;
		outfile << "        |||//" << std::endl;
		outfile << "        |||/" << std::endl;
		outfile << "        |||||" << std::endl;
		outfile << "  .....//||||\\...." << std::endl;
	}
}
