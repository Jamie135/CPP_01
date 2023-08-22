#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->armed = false;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	this->armed = true;
}

void HumanB::attack(void)
{
    if (this->armed)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << "." << std::endl;
    else
        std::cout << this->name << " attacks with their fists." << std::endl;
}