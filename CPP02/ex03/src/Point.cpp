#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(Fixed(0)), y(Fixed(0))
{
	/* std::cout << "Point default constructor called" << std::endl; */
}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y))
{
	/* std::cout << "Point constructor called" << std::endl; */
}

Point::Point(const Point& other): x(other.x), y(other.y)
{
	/* std::cout << "Point copy constructor called" << std::endl; */
}

Point::~Point()
{
	/* std::cout << "Point destructor called" << std::endl; */
}

float Point::get_x() const
{
	float w = x.toFloat();
	return (w);
}

float Point::get_y() const
{
	float w = y.toFloat();
	return (w);
}
