#include <FragTrap.hpp>
#include <iostream>

int main() {
    std::cout << "----- Construction -----" << std::endl;
    FragTrap f("Zakaria");

    std::cout << "\n----- Stats check -----" << std::endl;
    std::cout << "Hit points: " << f.getHitPoints() << std::endl;
    std::cout << "Energy points: " << f.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << f.getAttackDamage() << std::endl;

    std::cout << "\n----- Attack -----" << std::endl;
    f.attack("enemy");

    std::cout << "\n----- Special ability -----" << std::endl;
    f.highFivesGuys();

    std::cout << "\n----- Copy constructor -----" << std::endl;
    FragTrap copy(f);

    std::cout << "\n----- Assignment operator -----" << std::endl;
    FragTrap assign("Other");
    assign = f;

    std::cout << "\n----- End of scope -----" << std::endl;
    return 0;
}

