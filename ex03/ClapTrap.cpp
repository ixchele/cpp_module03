#include <ClapTrap.hpp>
#include <iostream>
#include <string>

static void	log(void) {
	std::cout << "[LOG]: ";
}

ClapTrap::ClapTrap() :
	_name("steve"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	log(); std::cout << "default constructor of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	log(); std::cout << "parametrized constructor of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
	_name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points),
	_attack_damage(other._attack_damage) {
	log(); std::cout << "copy constructor of ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap() {
	log(); std::cout << "destructor of ClapTrap called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

std::string	ClapTrap::getName(void) const {
	return _name;
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return _attack_damage;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return _hit_points;
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return _energy_points;
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setAttackDamage(unsigned int amount) {
	_attack_damage = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount) {
	_energy_points = amount;
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	_hit_points = amount;
}

void	ClapTrap::attack(const std::string &target) {
	if (getEnergyPoints() == 0) {
		std::cout << "ClapTrap " << getName() << " has 0 energy" << std::endl;
		return;
	}
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
