#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat john("John", 2);
	std::cout << john << std::endl;
	try 
	{
        john.decreaseGrade();
        std::cout << john;
        john.incrementGrade();
		std::cout << john;
        john.incrementGrade();
		std::cout << john;
		john.incrementGrade();
		std::cout << john;
		john.incrementGrade();
		std::cout << john;
		john.incrementGrade();
		std::cout << john;
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
