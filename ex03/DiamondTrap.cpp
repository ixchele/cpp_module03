#include <DiamondTrap.hpp>
#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default") {
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << _name << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap:: _name << std::endl;
}
