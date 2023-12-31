#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "A Horde must contain 1 or more Zombies." << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << "Allocation failed." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}