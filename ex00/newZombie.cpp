#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*zom = new Zombie();
	zom->announce();
	return (zom);
}