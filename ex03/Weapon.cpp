#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}

std::string Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &weapon)
{
	type = weapon;
}