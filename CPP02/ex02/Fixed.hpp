#pragma	once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int	number;
	static const int	fractional_bits = 8; //const: value cant change after being initialized. static: the variable belongs to the class and not to this particular instance of the class

	public:

	Fixed();
	Fixed(const int input); //new constructor 1
	Fixed(const float input); //new constructor 2
	Fixed(const Fixed& other); //copy constructor
	~Fixed();
	Fixed&	operator=(const Fixed& other);

	int		getRawBits(void) const; //when method functions are declared as constant the wont change the values of private or public variables in their class
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	
	static Fixed&		min(Fixed& other1, Fixed& other2);
	static const Fixed&	min(const Fixed& other1, const Fixed& other2);
	static Fixed&		max(Fixed& other1, Fixed& other2);
	static const Fixed&	max(const Fixed& other1, const Fixed& other2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); //a friend function is not a member, bus has acces to the private variables of a class. They are often used to overcharge operators