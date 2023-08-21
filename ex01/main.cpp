#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		n = 10;

	horde = zombieHorde(n, "Zom");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}