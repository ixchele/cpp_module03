#include <ClapTrap.hpp>

int main() {
	ClapTrap	hamid("hamid");
	ClapTrap	missi("missi");

	hamid.attack("missi");
	missi.takeDamage(hamid.getAttackDamage());
}
