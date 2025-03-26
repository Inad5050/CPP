#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main()
{
	Base creator;
	Base* created;
	
	created = creator.generate();
	creator.identify(created);
	creator.identify(*created);

	delete created;
	return (0);
}
