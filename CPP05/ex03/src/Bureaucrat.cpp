#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default name"), grade(150)
{
	std::cout << "Bureaucrat defualt constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int new_grade): name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (new_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (new_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = new_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (other.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (other.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = other.grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (other.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (other.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this != &other)
		grade = other.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade); 
}

void Bureaucrat::decreaseGrade()
{
	std::cout << "Bureaucrat decreaseGrade() called" << std::endl;
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::incrementGrade()
{
	std::cout << "Bureaucrat incrementGrade() called" << std::endl;
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Grade is too low!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Grade is too high!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (os);
}

void Bureaucrat::signForm(AForm& form)
{
	std::cout << "Bureaucrat signForm() called" << std::endl;
	if (grade <= form.getGradeToSign())
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	else
		std::cout << name << " couldn't sign " << form.getName() << " because their grade was too low!" << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
	std::cout << "Bureaucrat executeForm() called" << std::endl;
	if (grade <= form.getGradeToExecute())
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	else
		std::cout << name << " couldn't execute " << form.getName() << " because their grade was too low!" << std::endl;
}
