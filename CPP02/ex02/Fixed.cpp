#include "Fixed.hpp"

Fixed::Fixed(): number(0)
{
	std::cout << "Default constructor called!" << std::endl;
}

Fixed::Fixed(const int input): number(input << fractional_bits) //new constructor 1
{
	std::cout << "Int constructor called!" << std::endl;
}

Fixed::Fixed(const float input): number(roundf(input * (1 << fractional_bits))) //new constructor 2
{
	std::cout << "Float constructor called!" << std::endl;
}

Fixed::Fixed(const Fixed& other): number(other.number) //copy constructor
{
	std::cout << "Copy constructor called!" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called!" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{										
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &other)
		this->number = other.number;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called!" << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called!" << std::endl;
	this->number = raw;
}

float	Fixed::toFloat(void) const
{
	std::cout << "toFloat member function called!" << std::endl;
	return (static_cast<float>(number) / (1 << fractional_bits)); //On CPP there isnt an inplicit cast if the function output is a float we have to cast it manually with static_cast<data_type>(to_cast_value)
}

int		Fixed::toInt(void) const
{
	std::cout << "toInt member function called!" << std::endl;
	return (this->number >> this->fractional_bits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed) //converts our output to float on the ostream so that we can print it
{
    os << fixed.toFloat();
    return (os);
}

bool	Fixed::operator>(const Fixed& other) const
{
	std::cout << "> operator called!" << std::endl;
	return (number > other.number);
}

bool	Fixed::operator<(const Fixed& other) const
{
	std::cout << "< operator called!" << std::endl;
	return (number < other.number);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	std::cout << ">= operator called!" << std::endl;
	return (number >= other.number);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	std::cout << "<= operator called!" << std::endl;
	return (number <= other.number);
}

bool	Fixed::operator==(const Fixed& other) const
{
	std::cout << "== operator called!" << std::endl;
	return (number == other.number);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	std::cout << "!= operator called!" << std::endl;
	return (number != other.number);
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	std::cout << "+ operator called!" << std::endl;
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	std::cout << "- operator called!" << std::endl;
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	std::cout << "* operator called!" << std::endl;
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	std::cout << "/ operator called!" << std::endl;
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator++()
{
	std::cout << "++ operator called!" << std::endl;
	number += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) //int doesnt change the value, its a convention to differentiate the post increment operator (this) from the pre incremente operator "Fixed&	Fixed::operator++()"
{
	std::cout << "++ operator called!" << std::endl;
	Fixed	temp(*this);
	number += 1;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	std::cout << "-- operator called!" << std::endl;
	number -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	std::cout << "-- operator called!" << std::endl;
	Fixed	temp(*this);
	number -= 1;
	return (temp);
}

Fixed&	Fixed::min(Fixed& other1, Fixed& other2)
{
	std::cout << "min member function called!" << std::endl;
	if (other1.toFloat() < other2.toFloat())
		return (other1);
	else
		return (other2);
}

const Fixed&	Fixed::min(const Fixed& other1, const Fixed& other2)
{
	std::cout << "min member function called!" << std::endl;
	if (other1.toFloat() < other2.toFloat())
		return (other1);
	else
		return (other2);
}

Fixed&	Fixed::max(Fixed& other1, Fixed& other2)
{
	std::cout << "max member function called!" << std::endl;
	if (other1.toFloat() < other2.toFloat())
		return (other2);
	else
		return (other1);
}

const Fixed&	Fixed::max(const Fixed& other1, const Fixed& other2)
{
	std::cout << "max member function called!" << std::endl;
	if (other1.toFloat() < other2.toFloat())
		return (other2);
	else
		return (other1);
}
