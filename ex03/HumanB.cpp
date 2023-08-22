#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->armed = false;
	std::cout << this->name <<" joined the battlefield." << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	this->armed = true;
	std::cout << this->name << " grabbed a " << this->weapon->getType() << " to fight with." << std::endl;
}

void HumanB::attack(void)
{
    if (this->armed)
    {
        std::cout << this->name << " attacks with his " << this->weapon->getType() << "." << std::endl;
    }
    else
    {
        std::cout << this->name << " attacks with his fists." << std::endl;
    }
}