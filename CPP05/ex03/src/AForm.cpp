#include <iostream>
#include "AForm.hpp"

AForm::AForm(): name("default name"), is_it_signed(false), grade_to_sign(150), grade_to_execute(150) 
{
	std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int g_to_sign, int g_to_execute): name(name), is_it_signed(false), grade_to_sign(g_to_sign), grade_to_execute(g_to_execute) 
{
	std::cout << "AForm constructor called" << std::endl;
	if (g_to_sign < 1)
		throw AForm::GradeTooHighException();
	else if (g_to_sign > 150)
		throw AForm::GradeTooLowException();
	if (g_to_execute < 1)
		throw AForm::GradeTooHighException();
	else if (g_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm& other): name(other.name), is_it_signed(other.is_it_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute) 
{
	std::cout << "AForm copy constructor called" << std::endl;
	if (other.grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	else if (other.grade_to_sign > 150)
		throw AForm::GradeTooLowException();
	if (other.grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	else if (other.grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << "AForm copy destructor called" << std::endl;
}

AForm& 		AForm::operator=(AForm& other)
{
	std::cout << "AForm copy operator called. Only is_it_signed will change" << std::endl;
	if (this != &other)
		is_it_signed = other.is_it_signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (name);
}

int 		AForm::getGradeToSign() const
{
	return (grade_to_sign);
}

int 		AForm::getGradeToExecute() const
{
	return (grade_to_execute);
}

bool		AForm::getIsItSigned() const
{
	return (is_it_signed);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Your grade is too high! What were you thinking!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Your grade is too low! What were you thinking!");
}

const char* AForm::AFormNotSigned::what() const throw()
{
	return ("What are you doing?! This AForm is not signed yet!");
}

std::ostream&	operator<<(std::ostream& os, const AForm& other) //Passing by value requires the object to be copied, and std::ostream cannot be copied or moved. To fix this, you should pass the std::ostream by reference instead of by value.
{
	os << "AForm: name = " << other.getName() << "; signed = " << other.getIsItSigned() << "; to_sign = " << other.getGradeToSign() << "; to_execute = " << other.getGradeToExecute();
	return (os);
}

void		AForm::beSigned(Bureaucrat const & bure)
{
	std::cout << "AForm beSigned() called" << std::endl;
	if (bure.getGrade() < 1)
		throw AForm::GradeTooHighException();
	else if (grade_to_sign < bure.getGrade())
		throw AForm::GradeTooLowException();
	else
		is_it_signed = true;
}

void	AForm::execute(Bureaucrat const & executor)  const
{
	std::cout << "AForm execute() called by " << executor.getName() << std::endl;
	if (!is_it_signed)
		throw (AForm::AFormNotSigned());
	else if (executor.getGrade() < 1)
		throw AForm::GradeTooHighException();
	else if (grade_to_execute < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
		beExecuted();
}
