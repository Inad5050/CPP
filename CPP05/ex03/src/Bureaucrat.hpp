#pragma once
#include <iostream>
#include "AForm.hpp"

class  AForm;

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
		void		signForm(AForm& AForm);
		void		executeForm(AForm const & form);
		

	class GradeTooHighException : public std::exception 
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception 
	{
		public:
			const char* what() const throw(); //throw() indicates this function won't throw an exception
	};
};

std::ostream&		operator<<(std::ostream& os, const Bureaucrat& other); //if you pass a class as a const object the called method "insertionOperatorAux" must also be const