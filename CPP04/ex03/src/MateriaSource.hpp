#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* inventory[4];
	
	public:
		MateriaSource();
		MateriaSource(std::string );
		MateriaSource(MateriaSource&);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource& other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
