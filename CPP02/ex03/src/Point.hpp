#pragma once

#include <iostream>
#include "Fixed.hpp"

class	Point
{
	private:
	Fixed const	x;
	Fixed const	y;

	public:
	Point();
	Point(const float x, const float y);
	Point(const Point& other); //Si no marcas el argumento como const, el compilador no permitirá que pases un objeto const al constructor de copia, ya que podría implicar modificar dicho objeto, lo que no es permitido para objetos constantes.
	~Point();

	float get_x() const;
	float get_y() const;
};
