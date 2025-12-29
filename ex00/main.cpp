#include <ClapTrap.hpp>

int main() {
	ClapTrap	hamidCopy;
	ClapTrap	hamid("hamid");
	ClapTrap	missi("missi");
	ClapTrap	missiCopy(missi);

	hamidCopy = hamid;
	hamid.attack("missi");
	missi.takeDamage(hamid.getAttackDamage());
}
