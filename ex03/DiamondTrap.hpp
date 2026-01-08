#pragma once
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string	_name;

public:
	DiamondTrap(void);
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap(void);

	DiamondTrap	&operator=(const DiamondTrap &other);

	void	whoAmI(void);
};
