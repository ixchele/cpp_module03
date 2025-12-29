#include <FragTrap.hpp>
#include <iostream>

static void	log(void) {
	std::cout << "[LOG]: ";
}

FragTrap::FragTrap(void) : ClapTrap() {
	log(); std::cout << "default constructor of FragTrap called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	log(); std::cout << "parametriezed constructor of FragTrap called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	log(); std::cout << "copy constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void) {
	log(); std::cout << "destructor of FragTrap called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void	FragTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0) {
		std::cout << "FragTrap " << getName() << " has 0 energy" << std::endl;
		return;
	}
	_energy_points--;
	std::cout << "FragTrap " << getName() << " attacks ";
	std::cout << target << ", causing " << getAttackDamage() << " points of damage" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << getName() << ": *CLAP* high five" << std::endl;
}
