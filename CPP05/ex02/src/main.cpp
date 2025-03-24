#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try 
	{
		Bureaucrat megajohn("megaJohn", 2);
		std::cout << megajohn << std::endl;
		Bureaucrat minijohn("miniJohn", 150);
		std::cout << minijohn << std::endl;
	
		std::string target("Pedro");
		PresidentialPardonForm pardon(target);
		std::cout << pardon << std::endl;
		RobotomyRequestForm robotomy(target);
		std::cout << robotomy << std::endl;
		ShrubberyCreationForm shrubbery(target);
		std::cout << shrubbery << std::endl;
		std::cout << std::endl;
		
		minijohn.signForm(pardon);
		minijohn.signForm(robotomy);
		minijohn.signForm(shrubbery);

		std::cout << std::endl;

		minijohn = megajohn;
		std::cout << minijohn << std::endl;

		std::cout << std::endl;

		minijohn.signForm(pardon);
		minijohn.signForm(robotomy);
		minijohn.signForm(shrubbery);

		std::cout << std::endl;

		minijohn.executeForm(pardon);
		std::cout << std::endl;
		minijohn.executeForm(robotomy);
		std::cout << std::endl;
		minijohn.executeForm(shrubbery);
		std::cout << std::endl;
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}