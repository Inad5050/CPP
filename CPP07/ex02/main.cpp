#include "Array.hpp"

int	main()
{
	try
	{		
		Array<int> template1(5);
		std::cout << "size = " << template1.get_size() << std::endl;

		Array<int> template2(0);
		std::cout << "size = " << template2.get_size() << std::endl;

		for (int i = 0; i < 5; i++)
			std::cout << template1[0] << std::endl;

/* 		for (int i = 0; i < 5; i++)
			std::cout << template2[0] << std::endl;
 */
		template1[0] = 21323;	
		std::cout << template1[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
