#include <iostream>
#include "Form.hpp"

Form::Form(): name("default name"), is_it_signed(false), grade_to_sign(150), grade_to_execute(150) 
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int g_to_sign, int g_to_execute): name("default name"), is_it_signed(false), grade_to_sign(g_to_sign), grade_to_execute(g_to_execute) 
{
	std::cout << "Form constructor called" << std::endl;
	if (g_to_sign < 1)
		throw GradeTooHighException();
	else if (g_to_sign > 150)
		throw GradeTooLowException();
	if (g_to_execute < 1)
		throw GradeTooHighException();
	else if (g_to_execute > 150)
		throw GradeTooLowException();
}

Form::Form(Form& other): name(other.name), is_it_signed(other.is_it_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute) 
{
	std::cout << "Form copy constructor called" << std::endl;
	if (other.grade_to_sign < 1)
		throw GradeTooHighException();
	else if (other.grade_to_sign > 150)
		throw GradeTooLowException();
	if (other.grade_to_execute < 1)
		throw GradeTooHighException();
	else if (other.grade_to_execute > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Form copy destructor called" << std::endl;
}

Form& 		Form::operator=(Form& other)
{
	std::cout << "Form copy operator called. Only is_it_signed will change" << std::endl;
	if (this != &other)
		is_it_signed = other.is_it_signed;
	return (*this);
}

std::string Form::getName() const
{
	return (name);
}

int 		Form::getGradeToSign() const
{
	return (grade_to_sign);
}

int 		Form::getGradeToExecute() const
{
	return (grade_to_execute);
}

bool		Form::getIsItSigned() const
{
	return (is_it_signed);
}

const char* Form::GradeTooHighException::what() const
{
	std::cout << "Your grade is too high! What were you thinking!" << std::endl;
}

const char* Form::GradeTooLowException::what() const
{
	std::cout << "Your grade is too low! What were you thinking!" << std::endl;
}

void		Form::beSigned(Bureaucrat& bure)
{
	if (bure.getGrade() < 1)
		throw GradeTooHighException();
	else if (grade_to_sign < bure.getGrade())
		throw GradeTooLowException();
	else
		is_it_signed = true;
}

std::ostream operator<<(std::ostream os, const Form& other)
{
	os << "Form: name = " << other.getName() << " signed = " << other.getIsItSigned() << " to_sign = " << other.getGradeToSign() << " to_execute = " << other.getGradeToExecute() << std::endl;
}