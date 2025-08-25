<h1 align="center">42 C++ Modules</h1>

Este repositorio contiene mis soluciones para los Módulos de C++ del cursus de 42. El objetivo de estos módulos es introducir los conceptos fundamentales de la programación orientada a objetos (POO) y las particularidades del lenguaje C++.


## Sobre los Módulos

El "C++ Piscine" o los "Módulos de C++" están diseñados para pasar de la programación procedural en C a la programación orientada a objetos en C++. A lo largo de 10 módulos (del 00 al 09), se cubren desde los conceptos más básicos hasta temas avanzados como plantillas (templates), contenedores de la STL y polimorfismo.

Cada módulo se centra en un conjunto específico de conceptos, construyendo progresivamente una base sólida en C++.

## Proyectos

A continuación se detallan los temas principales y los proyectos de cada módulo.

**CPP Module 00** - Nociones Básicas

Conceptos: Fundamentos de C++, std::cout, std::cin, clases, encapsulación, y visibilidad (público, privado).

Proyectos: megaphone, PhoneBook, MyAwesomePhonebook.

**CPP Module 01** - Memoria, Punteros y Referencias

Conceptos: new y delete, punteros, referencias, heap vs stack.

Proyectos: Zombie, Moar brainz!, Unnecessary violence.

**CPP Module 02** - Polimorfismo Ad-hoc

Conceptos: Sobrecarga de operadores, forma canónica de Coplien (constructor de copia, operador de asignación, destructor).

Proyectos: Fixed.

**CPP Module 03** - Herencia

Conceptos: Herencia, constructores y destructores en jerarquías de clases, herencia múltiple y el problema del diamante.

Proyectos: ClapTrap, ScavTrap, FragTrap, DiamondTrap.

**CPP Module 04** - Polimorfismo de Subtipo

Conceptos: Polimorfismo, clases base abstractas, funciones virtuales puras.

Proyectos: Animal, Brain, MateriaSource, Character.

**CPP Module 05** - Excepciones

onceptos: Manejo de errores mediante excepciones.
Proyectos: Bureaucrat, Form, ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm.

**CPP Module 06** - Conversiones de Tipo

Conceptos: Conversiones de tipo explícitas (*_cast).

Proyectos: Scalar Conversion, Serialization.

**CPP Module 07** - Plantillas (Templates)

Conceptos: Programación genérica con plantillas de funciones y clases.

Proyectos: iter, Array.

**CPP Module 08** - Contenedores STL

Conceptos: Contenedores de la STL, iteradores y algoritmos.

Proyectos: easyfind, span, MutantStack.

**CPP Module 09** - Contenedores y Algoritmos Avanzados

Conceptos: Implementación de contenedores y algoritmos complejos.

Proyectos: BitcoinExchange, PmergeMe.

## Compilación y Uso

Cada módulo y proyecto contiene su propio Makefile. Para compilar un proyecto, navega al directorio correspondiente y ejecuta make.

Ejemplo de compilación:

```
$ cd cpp00/ex01
$ make
$ ./my_awesome_phonebook
```

Para limpiar los archivos objeto y ejecutables, puedes usar:

```
$ make clean
$ make fclean
```
