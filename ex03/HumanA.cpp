#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon):weapon(weapon)
{
	this->name = str;
	std::cout << this->name << " joined the battlefield and grabbed a " << this->weapon.getType() << " to fight." << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->name << " died." << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << "." << std::endl;
}