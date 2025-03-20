#include "Bureaucrat.hpp"
#include "Form.hpp"

/* int main()
{
	Bureaucrat john("John", 20);
	std::cout << john << std::endl;
	Form form1("form1", 5, 4);
	std::cout << form1 << std::endl;
	try 
	{
		form1.beSigned(john);
		form1.getIsItSigned();
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
		Form form1("form1", 5, 4);
		std::cout << form1 << std::endl;
		while (john.getGrade() > form1.getGradeToSign())
			john.incrementGrade();
		std::cout << john << std::endl;
		form1.beSigned(john);
		std::cout << form1.getIsItSigned() << std::endl;
	}
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}