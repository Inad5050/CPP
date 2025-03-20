#pragma	once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
	Brain* cat_brain;
	
	public:
	Cat();
	Cat(const Cat& other);
	~Cat();
	Cat& operator=(const Cat& other);

	virtual void makeSound(void) const;
};
