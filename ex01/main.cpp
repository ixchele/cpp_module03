#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "===== BASIC CONSTRUCTION =====" << std::endl;
	{
		ScavTrap a("Bob");
		a.attack("enemy");
		a.guardGate();
	}

	std::cout << "\n===== COPY CONSTRUCTION =====" << std::endl;
	{
		ScavTrap a("Alice");
		ScavTrap b(a);
		b.attack("target");
		b.guardGate();
	}

	std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;
	{
		ScavTrap a("Charlie");
		ScavTrap b("Dummy");

		b = a;
		b.attack("boss");
		b.guardGate();
	}

	std::cout << "\n===== ENERGY DEPLETION =====" << std::endl;
	{
		ScavTrap a("EnergyTest");
		for (int i = 0; i < 55; ++i)
			a.attack("wall");
	}

	std::cout << "\n===== DESTRUCTION ORDER =====" << std::endl;
	{
		ScavTrap a("DestructorTest");
	}

	return 0;
}
