#pragma	once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* dog_brain;

	public:
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog&	operator=(const Dog& other);

		virtual void	makeSound(void) const;
};
