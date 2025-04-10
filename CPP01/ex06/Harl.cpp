#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}	
void	Harl::error(void)
{
	std::cout << "[MESSAGE]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}	

void	Harl::complain(std::string level)
{
	int	x = -1;
	
	if (!level.compare("DEBUG"))
		x = 0;
	else if (!level.compare("INFO"))
		x = 1;
	else if (!level.compare("WARNING"))
		x = 2;
	else if (!level.compare("ERROR"))
		x = 3;
	switch (x)
	{
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:	
			Harl::warning();
		case 3:			
			Harl::error();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			return;
	}
}
