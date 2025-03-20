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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	return 0;
} */

/* int main()
{
	int	animal_number = 2;
	Animal** animals = new Animal*[animal_number];
	for (int i = 0; i < animal_number; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << "I am a " << animals[0]->getType() << std::endl;
	animals[0]->makeSound();
	std::cout << "I am a " << animals[1]->getType() << std::endl;
	animals[1]->makeSound();
	std::cout << std::endl;

	*animals[0] = *animals[1];
	std::cout << "I am a " << animals[0]->getType() << std::endl;
	animals[0]->makeSound();
	std::cout << "I am a " << animals[1]->getType() << std::endl;
	animals[1]->makeSound();
	std::cout << std::endl;

	delete animals[1];
	animals[0]->makeSound();
	delete animals[0];
	delete[] animals;
	return (0);
} */