#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat megajohn("megaJohn", 2);
	std::cout << megajohn << std::endl;
	Bureaucrat minijohn("miniJohn", 150);
	std::cout << minijohn << std::endl;

	std::string target("Paco");
	PresidentialPardonForm form1(target);
	std::cout << form1;
	RobotomyRequestForm form2(target);
	std::cout << form2;
	ShrubberyCreationForm form3(target);
	std::cout << form3;
	try 
	{
		megajohn.signForm()
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}