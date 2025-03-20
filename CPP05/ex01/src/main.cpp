#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat john("John", 2);
	try 
	{
        std::cout << john << std::endl;

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