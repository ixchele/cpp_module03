#include <ClapTrap.hpp>
#include <iostream>

int main()
{
    std::cout << "----- Construction -----" << std::endl;
    ClapTrap a("Zakaria");

    std::cout << "\n----- Attack without damage -----" << std::endl;
    a.attack("enemy");

    std::cout << "\n----- Repair -----" << std::endl;
    a.beRepaired(5);

    std::cout << "\n----- Take damage -----" << std::endl;
    a.takeDamage(3);

    std::cout << "\n----- Energy drain -----" << std::endl;
    for (int i = 0; i < 15; i++)
        a.attack("enemy");

    std::cout << "\n----- Try actions with no energy -----" << std::endl;
    a.beRepaired(10);

    std::cout << "\n----- Kill ClapTrap -----" << std::endl;
    a.takeDamage(100);

    std::cout << "\n----- Try actions when dead -----" << std::endl;
    a.attack("enemy");
    a.beRepaired(5);

    std::cout << "\n----- End of scope -----" << std::endl;
    return 0;
}
