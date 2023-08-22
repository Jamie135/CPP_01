#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon):weapon(weapon)
{
	this->name = str;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << "." << std::endl;
}