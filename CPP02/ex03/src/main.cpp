#include "Point.hpp"
#include "bsp.hpp"

int	main(int argc, char **argv)
{
	std::string	input;
	float	ax;
	float	ay;
	float	bx;
	float	by;
	float	cx;
	float	cy;
	float	pointx;
	float	pointy;
	char	*endptr;

	if (argc != 1 && argc != 9)
		return (std::cerr << "Incorrect arguments. Give me <<Point a[], a[], b[], b[], c[], c[], point[], point[]>>" << std::endl, 1);
	else if (argc == 9)
	{
		ax = strtof(argv[1], &endptr);
		ay = strtof(argv[2], &endptr);
		bx = strtof(argv[3], &endptr);
		by = strtof(argv[4], &endptr);
		cx = strtof(argv[5], &endptr);
		cy = strtof(argv[6], &endptr);
		pointx = strtof(argv[7], &endptr);
		pointy = strtof(argv[8], &endptr);
	}
	else
	{		
		std::cout << "Give me a[x]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		ax = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me a[y]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		ay = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me b[x]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		bx = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me b[y]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		by = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me c[x]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		cx = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me c[y]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		cy = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me point[x]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		pointx = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
		std::cout << "Give me point[y]" << std::endl;
		if (!std::getline(std::cin, input))
			return (std::cerr << "Incorrect input. Closing" << std::endl, 1);
		pointy = strtof(input.c_str(), &endptr);
		if (input.c_str() == endptr)
        	return (std::cerr << "Not a number. Closing" << std::endl, 1);
	}

/* 	std::cout << "ax = " << ax << std::endl;
	std::cout << "ay = " << ay << std::endl;
	std::cout << "bx = " << bx << std::endl;
	std::cout << "by = " << by << std::endl;
	std::cout << "cx = " << cx << std::endl;
	std::cout << "cy = " << cy << std::endl;
	std::cout << "pointx = " << pointx << std::endl;
	std::cout << "pointy = " << pointy << std::endl; */

	Point const a(ax, ay);
	Point const b(bx, by);
	Point const c(cx, cy);
	Point const point(pointx, pointy);
	if (bsp(a, b, c, point))
		return (std::cout << "RESULT: Is inside the triangle" << std::endl, 0);
	else
		return (std::cout << "RESULT: Is not inside the triangle" << std::endl, 0);
	return (0);
}
