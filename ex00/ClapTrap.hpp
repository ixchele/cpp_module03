#pragma once
#include <string>

class ClapTrap {
private:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

public:
	
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap &other);

	std::string		getName(void);
	unsigned int	getHitPoints(void);
	unsigned int	getEnergyPoints(void);
	unsigned int	getAttackDamage(void);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
