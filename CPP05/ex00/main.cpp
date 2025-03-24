#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		Bureaucrat john("John", 2);
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
