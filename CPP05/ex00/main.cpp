#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat john("John", 3);
        std::cout << john << std::endl;

        john.incrementGrade();
        std::cout << john << std::endl;

        john.decreaseGrade();
        john.decreaseGrade();
        std::cout << john << std::endl;

        // Uncomment to test exceptions
        // Bureaucrat error("Error", 0); // Should throw GradeTooHighException
        // Bureaucrat tooLow("TooLow", 151); // Should throw GradeTooLowException
    }
    catch (const std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }

    return 0;
}