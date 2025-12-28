#include <ClapTrap.hpp>
#include <iostream>
#include <ostream>
#include <string>

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name) {
    _hit_points = 10;
    _energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other) : _name(other._name) {
    _hit_points = other.getHitPoints();
    _energy_points = other.getEnergyPoints();
	_attack_damage = other.getAttackDamage();
	_attack_damage = other.getAttackDamage();
}

ClapTrap::~ClapTrap() {}

ClapTrap	&ClapTrap::operator=(ClapTrap &other) {
    _hit_points = other.getHitPoints();
    _energy_points = other.getEnergyPoints();
	_attack_damage = other.getAttackDamage();
	return *this;
}

std::string	ClapTrap::getName(void) {
	return _name;
}

unsigned int	ClapTrap::getAttackDamage(void) {
	return _attack_damage;
}

unsigned int	ClapTrap::getHitPoints(void) {
	return _hit_points;
}

unsigned int	ClapTrap::getEnergyPoints(void) {
	return _energy_points;
}

void	ClapTrap::attack(const std::string &target) {
	if (getEnergyPoints() != 0)
		_energy_points--;
	std::cout << "ClapTrap " << getName() << " attacks ";
	std::cout << target << ", causing " << getAttackDamage() << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << getName();
	std::cout << " took " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << getName();
	std::cout << " has been repaired by " << amount << " points" << std::endl;
}
