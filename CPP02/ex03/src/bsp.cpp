#include "Fixed.hpp"
#include "Point.hpp"

int	check_line(Point const A, Point const B, Point const point)
{
	return ((point.get_x() - A.get_x()) * (B.get_y() - A.get_y()) - \
	(point.get_y() - A.get_y()) * (B.get_x() - A.get_x()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	int result1;
	int result2;
	int result3;
	
	result1 = check_line(a, b, point);
	result2 = check_line(b, c, point);
	result3 = check_line(c, a, point);

/* 	std::cout << "result1 = " << result1 << "; result2 = " << result2 << "; result3 = " << result3 << std::endl; */

	if (!result1 || !result2 || !result3)
		return (0);
	if (result1 > 0 && result2 > 0 && result3 > 0)
		return (1);
	if (result1 < 0 && result2 < 0 && result3 < 0)
		return (1);
	else
		return (0);
}
