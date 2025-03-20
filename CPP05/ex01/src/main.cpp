#include "Bureaucrat.hpp"
#include "Form.hpp"

/* int main()
{
	Bureaucrat john("John", 20);
	std::cout << john << std::endl;
	Form Form1("Form1", 5, 4);
	std::cout << Form1 << std::endl;
	try 
	{
		Form1.beSigned(john);
		Form1.getIsItSigned();
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
 */
int main()
{
	try 
	{
		Bureaucrat john("John", 20);
		std::cout << john << std::endl;
		Form Form1("Form1", 5, 4);
		std::cout << Form1 << std::endl;
		while (john.getGrade() > Form1.getGradeToSign())
			john.incrementGrade();
		std::cout << john << std::endl;
		john.signForm(Form1);
		std::cout << Form1.getIsItSigned() << std::endl;
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}