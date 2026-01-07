#include <DiamondTrap.hpp>
#include <iostream>

int main()
{
    std::cout << "----- Construction -----" << std::endl;
    DiamondTrap dt("Zakaria");

    std::cout << "\n----- whoAmI() -----" << std::endl;
    dt.whoAmI();

    std::cout << "\n----- Stats test -----" << std::endl;
    std::cout << "Hit points: " << dt.getHitPoints() << std::endl;
    std::cout << "Energy points: " << dt.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << dt.getAttackDamage() << std::endl;

    std::cout << "\n----- Attack test -----" << std::endl;
    dt.attack("enemy");

    std::cout << "\n----- Copy test -----" << std::endl;
    DiamondTrap copy(dt);
    copy.whoAmI();

    std::cout << "\n----- Assignment test -----" << std::endl;
    DiamondTrap assign("Other");
    assign = dt;
    assign.whoAmI();

    std::cout << "\n----- Destruction -----" << std::endl;
    return 0;
}
