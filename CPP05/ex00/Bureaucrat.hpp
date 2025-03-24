#pragma once
#include <iostream>

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& other);

		std::string getName() const;
		int 		getGrade() const;
		
		void 		incrementGrade();
		void 		decreaseGrade();

	class GradeTooHighException : public std::exception 
	{
		public:
			const char* what() const throw(); //override indicates that this function is overriding another function in the base class, if thats not the case it emits an error
	};

	class GradeTooLowException : public std::exception 
	{
		public:
			const char* what() const throw(); //throw() indicates this function won't throw an exception
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other); //if you pass a class as a const object the called method "insertionOperatorAux" must also be const