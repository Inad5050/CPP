#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern	littleTimy;
	AForm*	form1;
	AForm*	form2;
	AForm*	form3;
	AForm*	form4;

	std::string ask1("Bring me coffe! Now!");
	std::string ask2("I want to be pardoned!");
	std::string ask3("I need to be robotomyzed");
	std::string ask4("Bring me coffe! Now!");
	std::string target("That guy over there");
	try
	{
		form1 = littleTimy.makeForm(ask1, target);
		form2 = littleTimy.makeForm(ask2, target);
		form3 = littleTimy.makeForm(ask3, target);
		form4 = littleTimy.makeForm(ask4, target);
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
	if (form1)
		delete form1;
	if (form2)
		delete form2;
	if (form3)
		delete form3;
	if (form4)
		delete form4;
    return 0;
}