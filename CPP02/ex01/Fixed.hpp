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
	//In the context of a C++ class, an operator is a special function that allows you to define how operators (such as +, -, =, ==, etc.) work for instances of your class. This is known as operator overloading. By overloading operators, you can provide custom behavior for operations involving objects of your class.
	//copy assignment operator overload. Copy assignment operator: This operator first checks that the object is not being assigned to itself (this is called! "self-assignment"). If it is not self-assignment, it copies the value of number from the other object and returns a reference to the current Fixed object.
	//this will execute when we execute Fixed a = Fixed b;
	Fixed&	operator=(const Fixed& other);

	int		getRawBits(void) const; //when method functions are declared as constant the wont change the values of private or public variables in their class
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;	
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); //en C++, los operadores que se definen como miembros de una clase tienen la restricción de que el operando izquierdo siempre debe ser una instancia de esa clase. Esto ocurre porque cuando defines un operador como miembro, implícitamente estás diciendo que el objeto sobre el cual se invoca el operador (this) será el operando izquierdo.