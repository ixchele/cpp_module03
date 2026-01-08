#include <ScavTrap.hpp>
#include <iostream>

static void	log(void) {
	std::cout << "[LOG]: ";
}

ScavTrap::ScavTrap(void) : ClapTrap() {
	log(); std::cout << "default constructor of ScavTrap called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	log(); std::cout << "parametriezed constructor of ScavTrap called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	log(); std::cout << "copy constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	log(); std::cout << "destructor of ScavTrap called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << getName() << " has 0 energy" << std::endl;
		return;
	}
	else if (getHitPoints() == 0) {
		std::cout << "ScavTrap " << getName() << " is dead" << std::endl;
		return;
	}
	_energy_points--;
	std::cout << "ScavTrap " << getName() << " attacks ";
	std::cout << target << ", causing " << getAttackDamage() << " points of damage" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << getName() << " activate keeper mode" << std::endl;
}
