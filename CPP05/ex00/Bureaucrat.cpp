#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default name"), grade(150)
{
	std::cout << "Bureaucrat defualt constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
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

std::string Bureaucrat::getName()
{
	return (name);
}

int Bureaucrat::getGrade()
{
	return (grade); 
}

void Bureaucrat::incrementGrade()
{
	if (grade + 1 > 150)
		Bureaucrat::GradeTooHighException();
	else
		grade++;
}

void Bureaucrat::decreaseGrade()
{
	if (grade - 1 < 1)
		Bureaucrat::GradeTooLowException();
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

std::ostringstream Bureaucrat::insertionOperatorAux() const
{
	std::ostringstream str;
	str << name << ", bureaucrat grade " << grade << ".";
	return (str);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other) //if you pass a class as a const object the called method "insertionOperatorAux" must also be const
{
    return (other.insertionOperatorAux());
}
