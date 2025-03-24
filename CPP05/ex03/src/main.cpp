#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern		littleTimy;

	Bureaucrat	bigTimy(std::string("Big Timy"), 1);
	std::cout << bigTimy << std::endl;
	AForm*		form1 = NULL;
	AForm*		form2 = NULL;
	AForm*		form3 = NULL;
	AForm*		form4 = NULL;

	std::string ask1("Bring me coffe! Now!");
	std::string pardon("I want to be pardoned!");
	std::string robotomize("I need to be robotomyzed");
	std::string shrubber("Shrubber this Shrubbery now!");
	std::string target("That guy over there");
	std::cout << std::endl;
	
	try
	{
		form1 = littleTimy.makeForm(ask1, target);
		std::cout << *form1 << std::endl;
		bigTimy.signForm(*form1);
		bigTimy.executeForm(*form1);
		std::cout << std::endl;
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
		std::cout << std::endl;
    }
	try
	{
		form2 = littleTimy.makeForm(pardon, target);
		std::cout << *form2 << std::endl;
		bigTimy.signForm(*form2);
		bigTimy.executeForm(*form2);
		std::cout << std::endl;
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
		std::cout << std::endl;
    }
	try
	{
		form3 = littleTimy.makeForm(robotomize, target);
		std::cout << *form3 << std::endl;
		bigTimy.signForm(*form3);
		bigTimy.executeForm(*form3);
		std::cout << std::endl;
	}
	catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}
	try
	{
		form4 = littleTimy.makeForm(shrubber, target);
		std::cout << *form4 << std::endl;
		bigTimy.signForm(*form4);
		bigTimy.executeForm(*form4);
		std::cout << std::endl;
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
		std::cout << std::endl;
    }
	if (form1 != NULL)
		delete form1;
	if (form2 != NULL)
		delete form2;
	if (form3 != NULL)
		delete form3;
	if (form4 != NULL)
		delete form4;
    return 0;
}