#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	return 0;
}

/* int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	return 0;
} */

/* int	main()
{
	Animal* cat = new Cat();
	Animal* dog = new Dog();
	cat->makeSound();
	dog->makeSound();
	std::cout << "cat->getType() = " << cat->getType() << std::endl;
	std::cout << "dog->getType() = " << dog->getType() << std::endl;
	*cat = *dog;
	cat->makeSound();
	std::cout << "cat->getType() = " << cat->getType() << std::endl;
	delete cat;
	delete dog;

	const Animal* another = new Animal();
	another->makeSound();
	std::cout << "another->getType() = " << another->getType() << std::endl;
	delete another;
} */
