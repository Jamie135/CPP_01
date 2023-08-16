#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Zom1");
	randomChump("Zom2");
	delete zombie;
	return (0);
}
