#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int	animal_number = 2;
	const Animal** animals = new const Animal*[animal_number];
	for (int i = 0; i < animal_number; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < animal_number; i++)
		delete animals[i];
	delete[] animals;
	return (0);
}

/* int main()
{
const Animal* meta = new Animal();	
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
} */
