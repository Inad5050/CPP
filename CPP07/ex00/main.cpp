#include "templates.hpp"

int	main()
{
	std::string str1("ola");
	std::string str2("adios");
	char c1= 'A';
	char c2= 'B';
	int int1 = 5;
	int int2 = 6;
	float float1 = 56.99f;
	float float2 = 60.99f;
	double double1 = 45.45;
	double double2 = 88.45;

	std::cout << "swap BEFORE" << std::endl;

	std::cout << "str1 = " << str1 << "; str2 = " << str2 << std::endl;
	std::cout << "c1 = " << c1 << "; c2 = " << c2 << std::endl;
	std::cout << "int1 = " << int1 << "; int2 = " << int2 << std::endl;
	std::cout << "float1 = " << float1 << "; float2 = " << float2 << std::endl;
	std::cout << "double1 = " << double1 << "; double2 = " << double2 << std::endl;

	swap(str1, str2);
	swap(c1, c2);
	swap(int1, int2);
	swap(float1, float2);
	swap(double1, double2);

	std::cout << "swap AFTER" << std::endl;

	std::cout << "str1 = " << str1 << "; str2 = " << str2 << std::endl;
	std::cout << "c1 = " << c1 << "; c2 = " << c2 << std::endl;
	std::cout << "int1 = " << int1 << "; int2 = " << int2 << std::endl;
	std::cout << "float1 = " << float1 << "; float2 = " << float2 << std::endl;
	std::cout << "double1 = " << double1 << "; double2 = " << double2 << std::endl;

	std::cout << "min" << std::endl;

	std::cout << "str1 = " << str1 << "; str2 = " << str2 << "; min() = " << ::min(str1, str2) << std::endl; //::min: Usar el operador de resolución de ámbito global le dice al compilador que busque la función min en el espacio de nombres global (donde está definida tu template) en lugar de buscar en std.
	std::cout << "c1 = " << c1 << "; c2 = " << c2 << "; min() = " << min(c1, c2) << std::endl;
	std::cout << "int1 = " << int1 << "; int2 = " << int2 << "; min() = " << min(int1, int2) << std::endl;
	std::cout << "float1 = " << float1 << "; float2 = " << float2 << "; min() = " << min(float1, float2) << std::endl;
	std::cout << "double1 = " << double1 << "; double2 = " << double2 << "; min() = " << min(double1, double2) << std::endl;

	std::cout << "max" << std::endl;

	std::cout << "str1 = " << str1 << "; str2 = " << str2 << "; max() = " << ::max(str1, str2) << std::endl;
	std::cout << "c1 = " << c1 << "; c2 = " << c2 << "; max() = " << max(c1, c2) << std::endl;
	std::cout << "int1 = " << int1 << "; int2 = " << int2 << "; max() = " << max(int1, int2) << std::endl;
	std::cout << "float1 = " << float1 << "; float2 = " << float2 << "; max() = " << max(float1, float2) << std::endl;
	std::cout << "double1 = " << double1 << "; double2 = " << double2 << "; max() = " << max(double1, double2) << std::endl;

	return (0);
}

/* int main( void ) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
} */